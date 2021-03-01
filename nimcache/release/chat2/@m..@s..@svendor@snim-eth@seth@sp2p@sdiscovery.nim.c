/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@svendor@snim-eth@seth@sp2p@sdiscovery.nim.c.o nimcache/release/chat2/@m..@s..@svendor@snim-eth@seth@sp2p@sdiscovery.nim.c */
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
typedef struct tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg;
typedef struct tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w;
typedef struct tyObject_Address__x5U8qnsjGWstAJoOadUZ9aA tyObject_Address__x5U8qnsjGWstAJoOadUZ9aA;
typedef struct tyObject_IpAddress__t0yd6ha54oWXm7nwZ4QqfA tyObject_IpAddress__t0yd6ha54oWXm7nwZ4QqfA;
typedef struct tySequence__Wq0ZcI6MO5RSp6EwbCW5fA tySequence__Wq0ZcI6MO5RSp6EwbCW5fA;
typedef struct tyObject_NodecolonObjectType___qHnzRdH4zCCluGzY2Ao49cg tyObject_NodecolonObjectType___qHnzRdH4zCCluGzY2Ao49cg;
typedef struct tyObject_KademliaProtocolcolonObjectType___oABmn9coQwe3jYAuBTgenUw tyObject_KademliaProtocolcolonObjectType___oABmn9coQwe3jYAuBTgenUw;
typedef struct tyObject_DatagramTransportcolonObjectType___BiotS4Q0H9bWosr4mx8VXjQ tyObject_DatagramTransportcolonObjectType___BiotS4Q0H9bWosr4mx8VXjQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
struct tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w {tyArray__vEOa9c5qaE9ajWxR5R4zwfQg data;
};
typedef NU8 tyEnum_IpAddressFamily__iqqacz9cr9bcNjYY74E10wPA;
typedef NU8 tyArray__qtqsWM5aXmcpMIVmvq3kAA[16];
typedef NU8 tyArray__H8qf9bpC2ziYA2earmO8m7w[4];
struct tyObject_IpAddress__t0yd6ha54oWXm7nwZ4QqfA {tyEnum_IpAddressFamily__iqqacz9cr9bcNjYY74E10wPA family;
union{
struct {tyArray__qtqsWM5aXmcpMIVmvq3kAA address_v6;
} _family_1;
struct {tyArray__H8qf9bpC2ziYA2earmO8m7w address_v4;
} _family_2;
};
};
struct tyObject_Address__x5U8qnsjGWstAJoOadUZ9aA {tyObject_IpAddress__t0yd6ha54oWXm7nwZ4QqfA ip;
NU16 udpPort;
NU16 tcpPort;
};
struct tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg {tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w privKey;
tyObject_Address__x5U8qnsjGWstAJoOadUZ9aA address;
tySequence__Wq0ZcI6MO5RSp6EwbCW5fA* bootstrapNodes;
tyObject_NodecolonObjectType___qHnzRdH4zCCluGzY2Ao49cg* thisNode;
tyObject_KademliaProtocolcolonObjectType___oABmn9coQwe3jYAuBTgenUw* kademlia;
tyObject_DatagramTransportcolonObjectType___BiotS4Q0H9bWosr4mx8VXjQ* transp;
};
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TGenericSeq {NI len;
NI reserved;
};
struct tySequence__Wq0ZcI6MO5RSp6EwbCW5fA {  TGenericSeq Sup;  tyObject_NodecolonObjectType___qHnzRdH4zCCluGzY2Ao49cg* data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__Wq0ZcI6MO5RSp6EwbCW5fA)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__y9bIPDAY22JKpDx249caf7iw)(void* p, NI op);
N_LIB_PRIVATE TNimType NTI__waQyUBIS0phbKWz5xVV9bTg_;
extern TNimType NTI__aKiBFtqo69b60sWLnM5A9c3w_;
extern TNimType NTI__x5U8qnsjGWstAJoOadUZ9aA_;
extern TNimType NTI__dXv1y2c2nNbnKs59aRY70QA_;
N_LIB_PRIVATE TNimType NTI__Wq0ZcI6MO5RSp6EwbCW5fA_;
extern TNimType NTI__r47tWgnBw9c0VOULJ9bQeLYg_;
extern TNimType NTI__ojq7ORv9bnBeF4l6iOsa39cw_;
N_LIB_PRIVATE TNimType NTI__y9bIPDAY22JKpDx249caf7iw_;
extern TNimType* nimTypeRoot;
static N_NIMCALL(void, Marker_tySequence__Wq0ZcI6MO5RSp6EwbCW5fA)(void* p, NI op) {
	tySequence__Wq0ZcI6MO5RSp6EwbCW5fA* a;
	NI T1_;	a = (tySequence__Wq0ZcI6MO5RSp6EwbCW5fA*)p;
	T1_ = (NI)0;	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);	}
}
static N_NIMCALL(void, Marker_tyRef__y9bIPDAY22JKpDx249caf7iw)(void* p, NI op) {
	tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg* a;
	NI T1_;	NI T2_;	NI T3_;	a = (tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg*)p;
	T1_ = (NI)0;	switch ((*a).address.ip.family) {
	case ((tyEnum_IpAddressFamily__iqqacz9cr9bcNjYY74E10wPA) 0):
	T2_ = (NI)0;	break;
	case ((tyEnum_IpAddressFamily__iqqacz9cr9bcNjYY74E10wPA) 1):
	T3_ = (NI)0;	break;
	} 
	nimGCvisit((void*)(*a).bootstrapNodes, op);	nimGCvisit((void*)(*a).thisNode, op);	nimGCvisit((void*)(*a).kademlia, op);	nimGCvisit((void*)(*a).transp, op);}
N_LIB_PRIVATE N_NIMCALL(void, eth_discoveryDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__RlWAeaewn59cCEhYQjWkWAg_2_6[6];
static TNimNode TM__RlWAeaewn59cCEhYQjWkWAg_0[7];NTI__waQyUBIS0phbKWz5xVV9bTg_.size = sizeof(tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg);
NTI__waQyUBIS0phbKWz5xVV9bTg_.kind = 18;
NTI__waQyUBIS0phbKWz5xVV9bTg_.base = 0;
NTI__waQyUBIS0phbKWz5xVV9bTg_.name = "DiscoveryProtocol:ObjectType";
NTI__waQyUBIS0phbKWz5xVV9bTg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__waQyUBIS0phbKWz5xVV9bTg_;
TM__RlWAeaewn59cCEhYQjWkWAg_2_6[0] = &TM__RlWAeaewn59cCEhYQjWkWAg_0[1];
TM__RlWAeaewn59cCEhYQjWkWAg_0[1].kind = 1;
TM__RlWAeaewn59cCEhYQjWkWAg_0[1].offset = offsetof(tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg, privKey);
TM__RlWAeaewn59cCEhYQjWkWAg_0[1].typ = (&NTI__aKiBFtqo69b60sWLnM5A9c3w_);
TM__RlWAeaewn59cCEhYQjWkWAg_0[1].name = "privKey";
TM__RlWAeaewn59cCEhYQjWkWAg_2_6[1] = &TM__RlWAeaewn59cCEhYQjWkWAg_0[2];
TM__RlWAeaewn59cCEhYQjWkWAg_0[2].kind = 1;
TM__RlWAeaewn59cCEhYQjWkWAg_0[2].offset = offsetof(tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg, address);
TM__RlWAeaewn59cCEhYQjWkWAg_0[2].typ = (&NTI__x5U8qnsjGWstAJoOadUZ9aA_);
TM__RlWAeaewn59cCEhYQjWkWAg_0[2].name = "address";
TM__RlWAeaewn59cCEhYQjWkWAg_2_6[2] = &TM__RlWAeaewn59cCEhYQjWkWAg_0[3];
NTI__Wq0ZcI6MO5RSp6EwbCW5fA_.size = sizeof(tySequence__Wq0ZcI6MO5RSp6EwbCW5fA*);
NTI__Wq0ZcI6MO5RSp6EwbCW5fA_.kind = 24;
NTI__Wq0ZcI6MO5RSp6EwbCW5fA_.base = (&NTI__dXv1y2c2nNbnKs59aRY70QA_);
NTI__Wq0ZcI6MO5RSp6EwbCW5fA_.flags = 2;
NTI__Wq0ZcI6MO5RSp6EwbCW5fA_.name = "seq[Node]";
NTI__Wq0ZcI6MO5RSp6EwbCW5fA_.nextType = nimTypeRoot; nimTypeRoot=&NTI__Wq0ZcI6MO5RSp6EwbCW5fA_;
NTI__Wq0ZcI6MO5RSp6EwbCW5fA_.marker = Marker_tySequence__Wq0ZcI6MO5RSp6EwbCW5fA;
TM__RlWAeaewn59cCEhYQjWkWAg_0[3].kind = 1;
TM__RlWAeaewn59cCEhYQjWkWAg_0[3].offset = offsetof(tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg, bootstrapNodes);
TM__RlWAeaewn59cCEhYQjWkWAg_0[3].typ = (&NTI__Wq0ZcI6MO5RSp6EwbCW5fA_);
TM__RlWAeaewn59cCEhYQjWkWAg_0[3].name = "bootstrapNodes";
TM__RlWAeaewn59cCEhYQjWkWAg_2_6[3] = &TM__RlWAeaewn59cCEhYQjWkWAg_0[4];
TM__RlWAeaewn59cCEhYQjWkWAg_0[4].kind = 1;
TM__RlWAeaewn59cCEhYQjWkWAg_0[4].offset = offsetof(tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg, thisNode);
TM__RlWAeaewn59cCEhYQjWkWAg_0[4].typ = (&NTI__dXv1y2c2nNbnKs59aRY70QA_);
TM__RlWAeaewn59cCEhYQjWkWAg_0[4].name = "thisNode";
TM__RlWAeaewn59cCEhYQjWkWAg_2_6[4] = &TM__RlWAeaewn59cCEhYQjWkWAg_0[5];
TM__RlWAeaewn59cCEhYQjWkWAg_0[5].kind = 1;
TM__RlWAeaewn59cCEhYQjWkWAg_0[5].offset = offsetof(tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg, kademlia);
TM__RlWAeaewn59cCEhYQjWkWAg_0[5].typ = (&NTI__r47tWgnBw9c0VOULJ9bQeLYg_);
TM__RlWAeaewn59cCEhYQjWkWAg_0[5].name = "kademlia";
TM__RlWAeaewn59cCEhYQjWkWAg_2_6[5] = &TM__RlWAeaewn59cCEhYQjWkWAg_0[6];
TM__RlWAeaewn59cCEhYQjWkWAg_0[6].kind = 1;
TM__RlWAeaewn59cCEhYQjWkWAg_0[6].offset = offsetof(tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg, transp);
TM__RlWAeaewn59cCEhYQjWkWAg_0[6].typ = (&NTI__ojq7ORv9bnBeF4l6iOsa39cw_);
TM__RlWAeaewn59cCEhYQjWkWAg_0[6].name = "transp";
TM__RlWAeaewn59cCEhYQjWkWAg_0[0].len = 6; TM__RlWAeaewn59cCEhYQjWkWAg_0[0].kind = 2; TM__RlWAeaewn59cCEhYQjWkWAg_0[0].sons = &TM__RlWAeaewn59cCEhYQjWkWAg_2_6[0];
NTI__waQyUBIS0phbKWz5xVV9bTg_.node = &TM__RlWAeaewn59cCEhYQjWkWAg_0[0];
NTI__y9bIPDAY22JKpDx249caf7iw_.size = sizeof(tyObject_DiscoveryProtocolcolonObjectType___waQyUBIS0phbKWz5xVV9bTg*);
NTI__y9bIPDAY22JKpDx249caf7iw_.kind = 22;
NTI__y9bIPDAY22JKpDx249caf7iw_.base = (&NTI__waQyUBIS0phbKWz5xVV9bTg_);
NTI__y9bIPDAY22JKpDx249caf7iw_.name = "DiscoveryProtocol";
NTI__y9bIPDAY22JKpDx249caf7iw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__y9bIPDAY22JKpDx249caf7iw_;
NTI__y9bIPDAY22JKpDx249caf7iw_.marker = Marker_tyRef__y9bIPDAY22JKpDx249caf7iw;
}
