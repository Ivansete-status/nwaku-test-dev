/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/common -o nimcache/release/wakubridge/@m..@s..@svendor@snim-eth@seth@sp2p@sp2p_protocol_dsl.nim.c.o nimcache/release/wakubridge/@m..@s..@svendor@snim-eth@seth@sp2p@sp2p_protocol_dsl.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct RootObj RootObj;
typedef struct tyObject_PeercolonObjectType___c4Sh9b59ah4iBo8P3EU5lRFQ tyObject_PeercolonObjectType___c4Sh9b59ah4iBo8P3EU5lRFQ;
typedef struct tyObject_WakuPeercolonObjectType___WxUh5kiwnbJ6VgpVJOvR2g tyObject_WakuPeercolonObjectType___WxUh5kiwnbJ6VgpVJOvR2g;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_EthereumNodecolonObjectType___mgPxske6V9a9c4U2B9b7otGNQ tyObject_EthereumNodecolonObjectType___mgPxske6V9a9c4U2B9b7otGNQ;
typedef struct tyObject_WakuNetworkcolonObjectType___rZBuohbQMRcqYSpbNhpJ0Q tyObject_WakuNetworkcolonObjectType___rZBuohbQMRcqYSpbNhpJ0Q;
typedef struct tyObject_FuturecolonObjectType___6B47wb2pTPtSmAkQXKd9axA tyObject_FuturecolonObjectType___6B47wb2pTPtSmAkQXKd9axA;
typedef struct tyObject_FutureBasecolonObjectType___V9aHQccB2Pyjfqk9bdE5ZRnw tyObject_FutureBasecolonObjectType___V9aHQccB2Pyjfqk9bdE5ZRnw;
typedef struct tyObject_SrcLoc__9cugm8iqHlSb5d0xCTLlcbg tyObject_SrcLoc__9cugm8iqHlSb5d0xCTLlcbg;
typedef struct tySequence__qkV9cggxceO9cpfUWIbCnvJg tySequence__qkV9cggxceO9cpfUWIbCnvJg;
typedef struct Exception Exception;
typedef struct tyObject_statusObj__SXCVP2vZ9bQfFqHWkpBUlhQ tyObject_statusObj__SXCVP2vZ9bQfFqHWkpBUlhQ;
typedef struct tyObject_StatusOptions__x9awuFWGzTVnTkllQUQZeyw tyObject_StatusOptions__x9awuFWGzTVnTkllQUQZeyw;
typedef struct tyObject_Option__MBAh7IvpI0zpyfBz2BbYLA tyObject_Option__MBAh7IvpI0zpyfBz2BbYLA;
typedef struct tyObject_Option__74cK9bjQyfn1PprsUXq7aeQ tyObject_Option__74cK9bjQyfn1PprsUXq7aeQ;
typedef struct tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A;
typedef struct tyObject_Option__b6B59aeUQwCKIUINi0UtvLw tyObject_Option__b6B59aeUQwCKIUINi0UtvLw;
typedef struct tyObject_RateLimits__OjRLL6WUdkpMc2LsZCemYQ tyObject_RateLimits__OjRLL6WUdkpMc2LsZCemYQ;
typedef struct tyObject_Option__E2DJ9bGHMCoz3vfZ9b53k4Kw tyObject_Option__E2DJ9bGHMCoz3vfZ9b53k4Kw;
typedef struct tySequence__atzPT9bqVZh26epu1UBlGdg tySequence__atzPT9bqVZh26epu1UBlGdg;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_AsyncCallback__Swoy2e9aGWZSpT0Jm9aqp3Zw tyObject_AsyncCallback__Swoy2e9aGWZSpT0Jm9aqp3Zw;
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
NCSTRING name;
TNimType* nextType;
NI instances;
NI sizes;
};
struct RootObj {TNimType* m_type;};
typedef tyObject_SrcLoc__9cugm8iqHlSb5d0xCTLlcbg* tyArray__06L8jjfbunFPxVliYUVjmQ[2];
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* arg, void* ClE_0);
void* ClE_0;
} tyProc__9bqx36VxQxXejdrF09bFARDQ;
typedef NU8 tyEnum_FutureState__WzRzKRS6S9aqphI4AiMjRNA;
struct tyObject_FutureBasecolonObjectType___V9aHQccB2Pyjfqk9bdE5ZRnw {  RootObj Sup;tyArray__06L8jjfbunFPxVliYUVjmQ location;
tySequence__qkV9cggxceO9cpfUWIbCnvJg* callbacks;
tyProc__9bqx36VxQxXejdrF09bFARDQ cancelcb;
tyObject_FutureBasecolonObjectType___V9aHQccB2Pyjfqk9bdE5ZRnw* child;
tyEnum_FutureState__WzRzKRS6S9aqphI4AiMjRNA state;
Exception* error;
NIM_BOOL mustCancel;
NI id;
};
struct tyObject_Option__MBAh7IvpI0zpyfBz2BbYLA {NF val;
NIM_BOOL has;
};
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_Option__74cK9bjQyfn1PprsUXq7aeQ {tyArray__w5VB8h5K8DB3oWrO5U2wqg val;
NIM_BOOL has;
};
struct tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A {NIM_BOOL val;
NIM_BOOL has;
};
struct tyObject_RateLimits__OjRLL6WUdkpMc2LsZCemYQ {NU limitIp;
NU limitPeerId;
NU limitTopic;
};
struct tyObject_Option__b6B59aeUQwCKIUINi0UtvLw {tyObject_RateLimits__OjRLL6WUdkpMc2LsZCemYQ val;
NIM_BOOL has;
};
struct tyObject_Option__E2DJ9bGHMCoz3vfZ9b53k4Kw {tySequence__atzPT9bqVZh26epu1UBlGdg* val;
NIM_BOOL has;
};
struct tyObject_StatusOptions__x9awuFWGzTVnTkllQUQZeyw {tyObject_Option__MBAh7IvpI0zpyfBz2BbYLA powRequirement;
tyObject_Option__74cK9bjQyfn1PprsUXq7aeQ bloomFilter;
tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A lightNode;
tyObject_Option__mNQrG9by9bIvS2rBRypY8a8A confirmationsEnabled;
tyObject_Option__b6B59aeUQwCKIUINi0UtvLw rateLimits;
tyObject_Option__E2DJ9bGHMCoz3vfZ9b53k4Kw topicInterest;
};
struct tyObject_statusObj__SXCVP2vZ9bQfFqHWkpBUlhQ {tyObject_StatusOptions__x9awuFWGzTVnTkllQUQZeyw options;
};
struct tyObject_FuturecolonObjectType___6B47wb2pTPtSmAkQXKd9axA {  tyObject_FutureBasecolonObjectType___V9aHQccB2Pyjfqk9bdE5ZRnw Sup;tyObject_statusObj__SXCVP2vZ9bQfFqHWkpBUlhQ value;
};
struct TGenericSeq {NI len;
NI reserved;
};
struct tyObject_AsyncCallback__Swoy2e9aGWZSpT0Jm9aqp3Zw {tyProc__9bqx36VxQxXejdrF09bFARDQ function;
void* udata;
};
typedef NU8 tyArray__H8qf9bpC2ziYA2earmO8m7w[4];
struct tySequence__qkV9cggxceO9cpfUWIbCnvJg {  TGenericSeq Sup;  tyObject_AsyncCallback__Swoy2e9aGWZSpT0Jm9aqp3Zw data[SEQ_DECL_SIZE];};struct tySequence__atzPT9bqVZh26epu1UBlGdg {  TGenericSeq Sup;  tyArray__H8qf9bpC2ziYA2earmO8m7w data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NIMCALL(tyObject_WakuPeercolonObjectType___WxUh5kiwnbJ6VgpVJOvR2g*, new__HJ8NvzO4MMazR9b1mhju1Qw)(void);
N_LIB_PRIVATE N_NIMCALL(void, initProtocolState__1RpsQX7FcVoUZlt2lSDbuQ)(tyObject_WakuPeercolonObjectType___WxUh5kiwnbJ6VgpVJOvR2g* state_0, tyObject_PeercolonObjectType___c4Sh9b59ah4iBo8P3EU5lRFQ* x_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_WakuNetworkcolonObjectType___rZBuohbQMRcqYSpbNhpJ0Q*, new__mSB62Mw3c9aQ21Nk9cbY8g3A)(void);
N_LIB_PRIVATE N_NIMCALL(void, initProtocolState__g4biaNPDQJeM8LEsYBKS2w)(tyObject_WakuNetworkcolonObjectType___rZBuohbQMRcqYSpbNhpJ0Q* network, tyObject_EthereumNodecolonObjectType___mgPxske6V9a9c4U2B9b7otGNQ* node);
N_LIB_PRIVATE N_NIMCALL(tyObject_FuturecolonObjectType___6B47wb2pTPtSmAkQXKd9axA*, newFutureImpl__hD7l3v2Bmc2cAz8WCWKEhg)(tyObject_SrcLoc__9cugm8iqHlSb5d0xCTLlcbg* loc);
N_LIB_PRIVATE N_NIMCALL(tyObject_SrcLoc__9cugm8iqHlSb5d0xCTLlcbg*, srcLocImpl__DWSIBDNlkSXgI7AsEngYZA)(void);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);

#line 186 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
N_LIB_PRIVATE N_NIMCALL(RootObj*, createPeerState__j7muQZFKUCQXPnbQGxyIOA)(tyObject_PeercolonObjectType___c4Sh9b59ah4iBo8P3EU5lRFQ* peer) {	RootObj* result;	tyObject_WakuPeercolonObjectType___WxUh5kiwnbJ6VgpVJOvR2g* res;{	result = (RootObj*)0;
#line 187 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"

#line 187 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
	res = new__HJ8NvzO4MMazR9b1mhju1Qw();
#line 189 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"

#line 189 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
	initProtocolState__1RpsQX7FcVoUZlt2lSDbuQ(res, peer);

#line 190 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"

#line 190 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
	result = ((RootObj*) (res));	goto BeforeRet_;
	}BeforeRet_: ;
	return result;}

#line 192 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
N_LIB_PRIVATE N_NIMCALL(RootObj*, createNetworkState__r9bwYu1eLH1QSNfFwHF2xzg)(tyObject_EthereumNodecolonObjectType___mgPxske6V9a9c4U2B9b7otGNQ* network) {	RootObj* result;	tyObject_WakuNetworkcolonObjectType___rZBuohbQMRcqYSpbNhpJ0Q* res;{	result = (RootObj*)0;
#line 193 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"

#line 193 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
	res = new__mSB62Mw3c9aQ21Nk9cbY8g3A();
#line 195 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"

#line 195 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
	initProtocolState__g4biaNPDQJeM8LEsYBKS2w(res, network);

#line 196 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"

#line 196 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
	result = ((RootObj*) (res));	goto BeforeRet_;
	}BeforeRet_: ;
	return result;}

#line 150 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
N_LIB_PRIVATE N_NIMCALL(void, initFuture__CZXFpUpRESDGTJ0BIymL1A)(tyObject_FuturecolonObjectType___6B47wb2pTPtSmAkQXKd9axA** loc) {	tyObject_SrcLoc__9cugm8iqHlSb5d0xCTLlcbg* T1_;
#line 151 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"

#line 151 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"

#line 116 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/asyncfutures2.nim"

#line 116 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/asyncfutures2.nim"
	T1_ = (tyObject_SrcLoc__9cugm8iqHlSb5d0xCTLlcbg*)0;	T1_ = srcLocImpl__DWSIBDNlkSXgI7AsEngYZA();
#line 151 "/home/runner/work/nim-waku/nim-waku/vendor/nim-eth/eth/p2p/p2p_protocol_dsl.nim"
	unsureAsgnRef((void**) (&(*loc)), newFutureImpl__hD7l3v2Bmc2cAz8WCWKEhg(T1_));}