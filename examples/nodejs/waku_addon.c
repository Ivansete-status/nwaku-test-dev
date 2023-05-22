#include <assert.h>
#include <node_api.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "libwaku.h"

struct ConfigNode {
    NCSTRING host;
    NU       port;
    NCSTRING key;
    NIM_BOOL relay;
    NCSTRING peers;
};

static ConfigNode configNode;

// Reference to the NodeJs function to be called when a waku event occurs.
static napi_ref ref_callback = NULL;
static napi_ref ref_poll_obj = NULL;
static napi_handle_scope scope;

// As a convenience, wrap N-API calls such that they cause Node.js to abort
// when they are unsuccessful.
#define NAPI_CALL(call)                                                    \
do {                                                                       \
  napi_status status = call;                                               \
  if (status != napi_ok) {                                                 \
    napi_fatal_error(#call, NAPI_AUTO_LENGTH, "failed", NAPI_AUTO_LENGTH); \
  }                                                                        \
} while (0)

static napi_env my_env;

// This function is directly passed as a callback to the libwaku and it
// calls a NodeJs function if it has been set, when a new waku event arises.
void event_handler(char* msg) {
  if (ref_callback == NULL) {
    napi_throw_type_error(my_env, NULL, "ERROR in event_handler. ref_callback == NULL");
  }

  napi_value callback;
  NAPI_CALL(napi_get_reference_value(my_env, ref_callback, &callback));

  size_t argc = 1;
  napi_value napi_msg;
  NAPI_CALL(napi_create_string_utf8(my_env,
                                    msg,
                                    NAPI_AUTO_LENGTH,
                                    &napi_msg));
  napi_value global;
  NAPI_CALL(napi_get_global(my_env, &global));
  NAPI_CALL(napi_call_function(my_env, global, callback, argc, &napi_msg, NULL));
}

// Base64 encoding
// source: https://nachtimwald.com/2017/11/18/base64-encode-and-decode-in-c/
// TODO: encapsulate the whole b64 section in libwaku
size_t b64_encoded_size(size_t inlen)
{
	size_t ret;

	ret = inlen;
	if (inlen % 3 != 0)
		ret += 3 - (inlen % 3);
	ret /= 3;
	ret *= 4;

	return ret;
}

const char b64chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

char *b64_encode(const char *in, size_t len)
{
	char   *out;
	size_t  elen;
	size_t  i;
	size_t  j;
	size_t  v;

	if (in == NULL || len == 0)
		return NULL;

	elen = b64_encoded_size(len);
	out  = malloc(elen+1);
	out[elen] = '\0';

	for (i=0, j=0; i<len; i+=3, j+=4) {
		v = in[i];
		v = i+1 < len ? v << 8 | in[i+1] : v << 8;
		v = i+2 < len ? v << 8 | in[i+2] : v << 8;

		out[j]   = b64chars[(v >> 18) & 0x3F];
		out[j+1] = b64chars[(v >> 12) & 0x3F];
		if (i+1 < len) {
			out[j+2] = b64chars[(v >> 6) & 0x3F];
		} else {
			out[j+2] = '=';
		}
		if (i+2 < len) {
			out[j+3] = b64chars[v & 0x3F];
		} else {
			out[j+3] = '=';
		}
	}

	return out;
}

// End of Base64 encoding

// The next should be called always, at the beginning
static napi_value WakuNew(napi_env env, napi_callback_info info) {
  NimMain(); // initialize the Nim runtime

  napi_value world;

  size_t argc = 1;
  napi_value args[1];
  NAPI_CALL(napi_get_cb_info(env, info, &argc, args, NULL, NULL));

  if (argc < 1) {
    napi_throw_type_error(env, NULL, "Wrong number of arguments");
    return NULL;
  }

  napi_value napiConfigNode = args[0];
  napi_valuetype valueType;

  // host
  napi_value napi_host;

  NAPI_CALL(napi_get_named_property(env, napiConfigNode, "host", &napi_host));
  NAPI_CALL(napi_typeof(env, napi_host, &valueType));

  if (valueType != napi_string) {
    napi_throw_type_error(env, NULL, "The host attribute should be a string");
    return NULL;
  }

  char host[32];
  size_t lengthHost;
  NAPI_CALL(napi_get_value_string_utf8(env,
                                       napi_host,
                                       host,
                                       32,
                                       &lengthHost));
  // port
  napi_value napi_port;
  NAPI_CALL(napi_get_named_property(env, napiConfigNode, "port", &napi_port));
  NAPI_CALL(napi_typeof(env, napi_port, &valueType));

  if (valueType != napi_number) {
    napi_throw_type_error(env, NULL, "The port attribute should be a number");
    return NULL;
  }

  int32_t port;
  NAPI_CALL(napi_get_value_int32(env, napi_port, &port));

  // key
  napi_value napi_key;
  NAPI_CALL(napi_get_named_property(env, napiConfigNode, "key", &napi_key));
  NAPI_CALL(napi_typeof(env, napi_key, &valueType));

  if (valueType != napi_string) {
    napi_throw_type_error(env, NULL, "The key attribute should be a string");
    return NULL;
  }

  char key[128];
  size_t lengthKey;
  NAPI_CALL(napi_get_value_string_utf8(env,
                                       napi_key,
                                       key,
                                       128,
                                       &lengthKey));
  // relay
  napi_value napi_relay;
  NAPI_CALL(napi_get_named_property(env, napiConfigNode, "relay", &napi_relay));
  NAPI_CALL(napi_typeof(env, napi_relay, &valueType));

  if (valueType != napi_boolean) {
    napi_throw_type_error(env, NULL, "The relay attribute should be a boolean");
    return NULL;
  }

  bool relay;
  NAPI_CALL(napi_get_value_bool(env, napi_relay, &relay));

  configNode.host = malloc(lengthHost + 1);
  strncpy(configNode.host, host, lengthHost + 1);

  configNode.port = port;

  configNode.key = malloc(lengthKey + 1);
  strncpy(configNode.key, key, lengthKey + 1);

  configNode.relay = relay;

  NimStringDesc* resp = malloc(sizeof(NimStringDesc));
  if (!waku_new(&configNode, &resp)) {
    char msg[512];
    snprintf(msg, 512, "Error creating WakuNode: %s", resp->data);
    napi_throw_type_error(env, NULL, msg);
  }

  // Not necessary to free as it gets freed by the JS gc.
  return NULL;
}

static napi_value WakuVersion(napi_env env, napi_callback_info info) {
  napi_value version;
  NAPI_CALL(napi_create_string_utf8(env, waku_version(), NAPI_AUTO_LENGTH, &version));
  return version;
}

static napi_value WakuSetEventCallback(napi_env env, napi_callback_info info) {

  size_t argc = 1;
  napi_value args[1];
  NAPI_CALL(napi_get_cb_info(env, info, &argc, args, NULL, NULL));

  if (argc < 1) {
    napi_throw_type_error(env, NULL, "Wrong number of arguments");
    return NULL;
  }

  napi_value cb = args[0];

  napi_valuetype valueType;
  NAPI_CALL(napi_typeof(env, cb, &valueType));

  if (valueType != napi_function) {
    napi_throw_type_error(env, NULL, "The argument should be a napi_function");
    return NULL;
  }

  my_env = env;
  NAPI_CALL(napi_create_reference(env, cb, 1, &ref_callback));

  // Inside 'event_handler', the event will be dispatched to the NodeJs
  // if there is a proper napi_function (ref_callback) being set.
  waku_set_event_callback(event_handler);

  return NULL;
}

static napi_value WakuStart(napi_env env, napi_callback_info info) {
  NimMain(); // needed to call this again
  waku_start();
  return NULL;
}

static napi_value WakuConnect(napi_env env, napi_callback_info info) {
  size_t argc = 2;
  napi_value args[2];
  NAPI_CALL(napi_get_cb_info(env, info, &argc, args, NULL, NULL));

  if (argc < 2) {
    napi_throw_type_error(env, NULL, "Wrong number of arguments");
    return NULL;
  }

  napi_value napiPeers = args[0];
  napi_valuetype valueType;
  NAPI_CALL(napi_typeof(env, napiPeers, &valueType));

  if (valueType != napi_string) {
    napi_throw_type_error(env, NULL, "The peers attribute should be a string");
    return NULL;
  }

  char peers[1024];
  // TODO: handle an array of peers instead of a
  //       comma-separated string. That can be truncated.
  size_t lengthPeers;
  NAPI_CALL(napi_get_value_string_utf8(env,
                                       napiPeers,
                                       peers,
                                       1024,
                                       &lengthPeers));
  napi_value napiTimeout = args[1];
  NAPI_CALL(napi_typeof(env, napiTimeout, &valueType));

  if (valueType != napi_number) {
    napi_throw_type_error(env, NULL, "The timeout attribute should be a number");
    return NULL;
  }

  int32_t timeoutMs;
  NAPI_CALL(napi_get_value_int32(env, napiTimeout, &timeoutMs));

  NimStringDesc* resp = malloc(sizeof(NimStringDesc));
  waku_connect(peers, timeoutMs, &resp);
  napi_value ret;
  NAPI_CALL(napi_create_string_utf8(env, resp->data, NAPI_AUTO_LENGTH, &ret));
  // not necessary to free the memory. It will get freed by the JS gc.
  return ret;
}

static napi_value WakuPoll(napi_env env, napi_callback_info info) {

  // TODO: keep a strong reference of the nim's heap region so that
  //       it is not freed by the nodejs GC. A good candidate might
  //       be to use 'napi_create_external_buffer' (https://nodejs.org/api/n-api.html#napi_create_external_buffer)

  //       The Nim's GC and NodeJs GC don't interoperate seamless.

  // if (ref_poll_obj == NULL) {
  //   // Create the object within the N-API C API
  //   napi_value nativeObject;
  //   NAPI_CALL(napi_create_object(env, &nativeObject));

  waku_poll();
  return NULL;
}

static napi_value WakuRelayPublish(napi_env env, napi_callback_info info) {
  size_t argc = 4;
  napi_value args[4];
  NAPI_CALL(napi_get_cb_info(env, info, &argc, args, NULL, NULL));

  if (argc < 4) {
    napi_throw_type_error(env, NULL, "Wrong number of arguments");
    return NULL;
  }

  // pubsubtopic
  napi_value napiPubsubTopic = args[0];
  napi_valuetype valueType;
  NAPI_CALL(napi_typeof(env, napiPubsubTopic, &valueType));

  if (valueType != napi_string) {
    napi_throw_type_error(env, NULL, "The pubsubtopic attribute should be a string");
    return NULL;
  }

  char pubsubTopic[128];
  size_t lengthPubsubTopic;
  NAPI_CALL(napi_get_value_string_utf8(env,
                                       napiPubsubTopic,
                                       pubsubTopic,
                                       128,
                                       &lengthPubsubTopic));
  // app name
  napi_value napiAppName = args[1];
  NAPI_CALL(napi_typeof(env, napiAppName, &valueType));

  if (valueType != napi_string) {
    napi_throw_type_error(env, NULL, "The app name attribute should be a string");
    return NULL;
  }

  char appName[128];
  size_t lengthAppName;
  NAPI_CALL(napi_get_value_string_utf8(env,
                                       napiAppName,
                                       appName,
                                       128,
                                       &lengthAppName));
  // content topic
  napi_value napiContentTopic = args[2];
  NAPI_CALL(napi_typeof(env, napiContentTopic, &valueType));

  if (valueType != napi_string) {
    napi_throw_type_error(env, NULL, "The content topic attribute should be a string");
    return NULL;
  }

  char contentTopic[128];
  size_t lengthContentTopic;
  NAPI_CALL(napi_get_value_string_utf8(env,
                                       napiContentTopic,
                                       contentTopic,
                                       128,
                                       &lengthContentTopic));

  // message
  napi_value napiMessage = args[3];
  NAPI_CALL(napi_typeof(env, napiMessage, &valueType));

  if (valueType != napi_string) {
    napi_throw_type_error(env, NULL, "The message attribute should be a string");
    return NULL;
  }

  char msg[2048];
  // TODO: check the correct message size limit
  size_t lengthMsg;
  NAPI_CALL(napi_get_value_string_utf8(env,
                                       napiMessage,
                                       msg,
                                       2048,
                                       &lengthMsg));
  char jsonWakuMsg[1024];
  char *msgPayload = b64_encode(msg, strlen(msg));

  NimStringDesc* resp = malloc(sizeof(NimStringDesc));
  waku_content_topic(appName, 1, contentTopic, "encoding", &resp);
  snprintf(jsonWakuMsg,
           1024,
           "{\"payload\":\"%s\",\"content_topic\":\"%s\"}",
           msgPayload, resp->data);
  free(msgPayload);

  waku_relay_publish(pubsubTopic, jsonWakuMsg, 10000 /*timeout ms*/, &resp);

  return NULL;
}

static napi_value WakuDefaultPubsubTopic(napi_env env, napi_callback_info info) {
  NimStringDesc* resp = malloc(sizeof(NimStringDesc));
  waku_default_pubsub_topic(&resp);
  napi_value ret;
  NAPI_CALL(napi_create_string_utf8(env, resp->data, NAPI_AUTO_LENGTH, &ret));
  // not necessary to free the memory. It will get freed by the JS gc.
  return ret;
}

static napi_value WakuRelaySubscribe(napi_env env, napi_callback_info info) {
  size_t argc = 1;
  napi_value args[1];
  NAPI_CALL(napi_get_cb_info(env, info, &argc, args, NULL, NULL));

  if (argc < 1) {
    napi_throw_type_error(env, NULL, "Wrong number of arguments");
    return NULL;
  }

  napi_value napiPubsubTopic = args[0];

  napi_valuetype valueType;
  NAPI_CALL(napi_typeof(env, napiPubsubTopic, &valueType));

  if (valueType != napi_string) {
    napi_throw_type_error(env, NULL, "The argument should be a napi_string");
    return NULL;
  }

  char pubsubTopic[128];
  // TODO: handle an array of peers instead of a
  //       comma-separated string. That can be truncated.
  size_t lengthPubsubTopic;
  NAPI_CALL(napi_get_value_string_utf8(env,
                                       napiPubsubTopic,
                                       pubsubTopic,
                                       128,
                                       &lengthPubsubTopic));

  NimStringDesc* resp = malloc(sizeof(NimStringDesc));
  waku_relay_subscribe(pubsubTopic, &resp);
  napi_value ret;
  NAPI_CALL(napi_create_string_utf8(env, resp->data, NAPI_AUTO_LENGTH, &ret));
  // not necessary to free the memory. It will get freed by the JS gc.
  return ret;
}

#define DECLARE_NAPI_METHOD(name, func)                                        \
  { name, 0, func, 0, 0, 0, napi_default, 0 }

static napi_value Init(napi_env env, napi_value exports) {
  // DECLARE_NAPI_METHOD("<function_name_in_NodeJs>", <function_name_in_waku_wrapper.c>);

  napi_property_descriptor wakuVersion = DECLARE_NAPI_METHOD("wakuVersion", WakuVersion);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuVersion));

  napi_property_descriptor wakuNew = DECLARE_NAPI_METHOD("wakuNew", WakuNew);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuNew));

  napi_property_descriptor wakuPoll = DECLARE_NAPI_METHOD("wakuPoll", WakuPoll);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuPoll));

  napi_property_descriptor wakuStart = DECLARE_NAPI_METHOD("wakuStart", WakuStart);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuStart));

  napi_property_descriptor wakuSetEventCallback = DECLARE_NAPI_METHOD("wakuSetEventCallback", WakuSetEventCallback);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuSetEventCallback));

  napi_property_descriptor wakuDefaultPubsubTopic = DECLARE_NAPI_METHOD("wakuDefaultPubsubTopic", WakuDefaultPubsubTopic);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuDefaultPubsubTopic));

  napi_property_descriptor wakuRelaySubscribe = DECLARE_NAPI_METHOD("wakuRelaySubscribe", WakuRelaySubscribe);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuRelaySubscribe));

  napi_property_descriptor wakuConnect = DECLARE_NAPI_METHOD("wakuConnect", WakuConnect);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuConnect));

  napi_property_descriptor wakuRelayPublish = DECLARE_NAPI_METHOD("wakuRelayPublish", WakuRelayPublish);
  NAPI_CALL(napi_define_properties(env, exports, 1, &wakuRelayPublish));

  return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
