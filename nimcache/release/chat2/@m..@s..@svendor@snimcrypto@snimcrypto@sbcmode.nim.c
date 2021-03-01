/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@svendor@snimcrypto@snimcrypto@sbcmode.nim.c.o nimcache/release/chat2/@m..@s..@svendor@snimcrypto@snimcrypto@sbcmode.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg;
typedef struct tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_CTR__nMdVHfl563dLRfhNhOqtmw tyObject_CTR__nMdVHfl563dLRfhNhOqtmw;
typedef struct tyObject_TwofishContext__iigPIJ6JY8ooY2CiyAZvrg tyObject_TwofishContext__iigPIJ6JY8ooY2CiyAZvrg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_ECB__38lQnqP7w5SFHX6DC3Yf9cg tyObject_ECB__38lQnqP7w5SFHX6DC3Yf9cg;
typedef NU64 tyArray__wa4ExhM0I5D0wQQmyrXAHA[120];
struct tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg {tyArray__wa4ExhM0I5D0wQQmyrXAHA skey;
NI nr;
};
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
struct tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg {tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg cipher;
tyArray__vEOa9c5qaE9ajWxR5R4zwfQg iv;
tyArray__vEOa9c5qaE9ajWxR5R4zwfQg ecount;
NU num;
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
typedef NU32 tyArray__gEFnRB9aCNYsXpRJmdSsCKw[256];
typedef tyArray__gEFnRB9aCNYsXpRJmdSsCKw tyArray__HwM2Ph10ewA49cc9ac05WIUQ[4];
typedef NU32 tyArray__0BuyudyzcsRvAXSF9alfatw[40];
struct tyObject_TwofishContext__iigPIJ6JY8ooY2CiyAZvrg {tyArray__HwM2Ph10ewA49cc9ac05WIUQ S;
tyArray__0BuyudyzcsRvAXSF9alfatw K;
};
struct tyObject_CTR__nMdVHfl563dLRfhNhOqtmw {tyObject_TwofishContext__iigPIJ6JY8ooY2CiyAZvrg cipher;
tyArray__vEOa9c5qaE9ajWxR5R4zwfQg iv;
tyArray__vEOa9c5qaE9ajWxR5R4zwfQg ecount;
NU num;
};
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {NI a;
NI b;
};
struct tyObject_ECB__38lQnqP7w5SFHX6DC3Yf9cg {tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg cipher;
};
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_INLINE(void, init__ncLAiTh9c5OPbFjYtm7E9bRgrijndael)(tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg* ctx, NU8* key_0, NI key_0Len_0);
N_LIB_PRIVATE N_NIMCALL(void, keySchedule__qU9ajSZATA3cjXxH4Ok65pw)(tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg* ctx, NU8* key_0, NI key_0Len_0);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq___wCxLFNoF2DOiuJpFEiBO9cQ)(NU8* a, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x_0, NU8* b, NI bLen_0);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(void, init__ncLAiTh9c5OPbFjYtm7E9bRg_2rijndael)(tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg* ctx, NU8* key_0, NI key_0Len_0);
N_LIB_PRIVATE N_NIMCALL(void, keySchedule__qU9ajSZATA3cjXxH4Ok65pw_2)(tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg* ctx, NU8* key_0, NI key_0Len_0);
static N_INLINE(void, init__OGv8y6XNTusCv5BXtjJW9bgtwofish)(tyObject_TwofishContext__iigPIJ6JY8ooY2CiyAZvrg* ctx, NU8* key_0, NI key_0Len_0);
N_LIB_PRIVATE N_NIMCALL(void, initTwofishContext__GdOcVkGSJxVIvDm4ZRdwVA)(tyObject_TwofishContext__iigPIJ6JY8ooY2CiyAZvrg* ctx, NI N, NU8* key_0, NI key_0Len_0);
N_LIB_PRIVATE TNimType NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_;
extern TNimType NTI__P9ctyX6u5ZjparlFDMKF09bg_;
extern TNimType NTI__vEOa9c5qaE9ajWxR5R4zwfQg_;
extern TNimType NTI__hMQEc0FMry7Up7EoPki79aA_;
N_LIB_PRIVATE TNimType NTI__nMdVHfl563dLRfhNhOqtmw_;
extern TNimType NTI__iigPIJ6JY8ooY2CiyAZvrg_;
STRING_LITERAL(TM__40YfnbOcmramUFyaunCxCg_4, "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/"
"bcmode.nim(455, 9) `\012ctx.sizeBlock() <= len(iv)` ", 112);
STRING_LITERAL(TM__40YfnbOcmramUFyaunCxCg_5, "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/"
"bcmode.nim(456, 9) `\012ctx.sizeKey() <= len(key)` ", 111);
STRING_LITERAL(TM__40YfnbOcmramUFyaunCxCg_6, "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/"
"bcmode.nim(457, 9) `ctx.sizeBlock <= MaxBlockSize` ", 114);
N_LIB_PRIVATE TNimType NTI__38lQnqP7w5SFHX6DC3Yf9cg_;
extern TNimType* nimTypeRoot;

#line 421 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
N_LIB_PRIVATE N_NIMCALL(void, inc128__vRz5m42fv3XKwSYgATX55Q)(NU8* counter, NI counterLen_0) {	NU32 n_1;	NU32 c;
#line 422 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	n_1 = ((NU32) 16);
#line 423 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	c = ((NU32) 1);	{
#line 424 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		while (1) {
#line 425 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			n_1 -= ((NI) 1);
#line 426 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 426 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			if ((NU)(n_1) >= (NU)(counterLen_0)){ raiseIndexError2(n_1,counterLen_0-1); }			c = (NU32)((NU32)(c) + (NU32)(((NU32) (counter[n_1]))));			if ((NU)(n_1) >= (NU)(counterLen_0)){ raiseIndexError2(n_1,counterLen_0-1); }
#line 427 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			counter[n_1] = ((NU8) (c));
#line 428 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 428 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			c = (NU32)((NU32)(c) >> (NU64)(((NI) 8)));
#line 429 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			{
#line 429 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
				if (!(n_1 == ((NU32) 0))) goto LA5_;

#line 430 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
				goto LA1;
			}
			LA5_: ;
		}
	} LA1: ;
}

#line 432 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
N_LIB_PRIVATE N_NIMCALL(void, inc256__vRz5m42fv3XKwSYgATX55Q_2)(NU8* counter, NI counterLen_0) {	NU32 n_1;	NU32 c;
#line 433 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	n_1 = ((NU32) 32);
#line 434 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	c = ((NU32) 1);	{
#line 435 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		while (1) {
#line 436 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			n_1 -= ((NI) 1);
#line 437 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 437 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			if ((NU)(n_1) >= (NU)(counterLen_0)){ raiseIndexError2(n_1,counterLen_0-1); }			c = (NU32)((NU32)(c) + (NU32)(((NU32) (counter[n_1]))));			if ((NU)(n_1) >= (NU)(counterLen_0)){ raiseIndexError2(n_1,counterLen_0-1); }
#line 438 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			counter[n_1] = ((NU8) (c));
#line 439 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 439 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			c = (NU32)((NU32)(c) >> (NU64)(((NI) 8)));
#line 440 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
			{
#line 440 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
				if (!(n_1 == ((NU32) 0))) goto LA5_;

#line 441 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
				goto LA1;
			}
			LA5_: ;
		}
	} LA1: ;
}

#line 1091 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/rijndael.nim"
static N_INLINE(void, init__ncLAiTh9c5OPbFjYtm7E9bRgrijndael)(tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg* ctx, NU8* key_0, NI key_0Len_0) {
#line 1092 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/rijndael.nim"

#line 1092 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/rijndael.nim"
	keySchedule__qU9ajSZATA3cjXxH4Ok65pw(ctx, key_0, key_0Len_0);
}

#line 22 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memset(a, v, ((size_t) (size)));}

#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b) {	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
#line 469 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
	chckNil((void*)(&result));	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));	result.a = a;	result.b = b;	return result;}

#line 443 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
N_LIB_PRIVATE N_NIMCALL(void, init__A1epXaa8QSPgtdyVzI9aWSw)(tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg* ctx, NU8* key_0, NI key_0Len_0, NU8* iv_0, NI iv_0Len_0) {	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T13_;
#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{
#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		if (!!((((NI) 16) <= iv_0Len_0))) goto LA3_;

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_4));
	}
	LA3_: ;

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{
#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		if (!!((((NI) 16) <= key_0Len_0))) goto LA7_;

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_5));
	}
	LA7_: ;

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{		if (!NIM_FALSE) goto LA11_;

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_6));
	}
	LA11_: ;

#line 458 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 458 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	init__ncLAiTh9c5OPbFjYtm7E9bRgrijndael((&(*ctx).cipher), key_0, key_0Len_0);

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	T13_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(((NI) 0), ((NI) 15));	if (((NI) 15)-((NI) 0) != -1 && ((NU)(((NI) 0)) >= (NU)(iv_0Len_0) || (NU)(((NI) 15)) >= (NU)(iv_0Len_0))){ raiseIndexError(); }
#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	X5BX5Deq___wCxLFNoF2DOiuJpFEiBO9cQ((*ctx).iv, T13_, (NU8*)(iv_0)+(((NI) 0)), (((NI) 15))-(((NI) 0))+1);
}

#line 1091 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/rijndael.nim"
static N_INLINE(void, init__ncLAiTh9c5OPbFjYtm7E9bRg_2rijndael)(tyObject_RijndaelContext__P9ctyX6u5ZjparlFDMKF09bg* ctx, NU8* key_0, NI key_0Len_0) {
#line 1092 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/rijndael.nim"

#line 1092 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/rijndael.nim"
	keySchedule__qU9ajSZATA3cjXxH4Ok65pw_2(ctx, key_0, key_0Len_0);
}

#line 443 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
N_LIB_PRIVATE N_NIMCALL(void, init__A1epXaa8QSPgtdyVzI9aWSw_2)(tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg* ctx, NU8* key_0, NI key_0Len_0, NU8* iv_0, NI iv_0Len_0) {	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T13_;
#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{
#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		if (!!((((NI) 16) <= iv_0Len_0))) goto LA3_;

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_4));
	}
	LA3_: ;

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{
#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		if (!!((((NI) 32) <= key_0Len_0))) goto LA7_;

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_5));
	}
	LA7_: ;

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{		if (!NIM_FALSE) goto LA11_;

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_6));
	}
	LA11_: ;

#line 458 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 458 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	init__ncLAiTh9c5OPbFjYtm7E9bRg_2rijndael((&(*ctx).cipher), key_0, key_0Len_0);

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	T13_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(((NI) 0), ((NI) 15));	if (((NI) 15)-((NI) 0) != -1 && ((NU)(((NI) 0)) >= (NU)(iv_0Len_0) || (NU)(((NI) 15)) >= (NU)(iv_0Len_0))){ raiseIndexError(); }
#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	X5BX5Deq___wCxLFNoF2DOiuJpFEiBO9cQ((*ctx).iv, T13_, (NU8*)(iv_0)+(((NI) 0)), (((NI) 15))-(((NI) 0))+1);
}

#line 424 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/twofish.nim"
static N_INLINE(void, init__OGv8y6XNTusCv5BXtjJW9bgtwofish)(tyObject_TwofishContext__iigPIJ6JY8ooY2CiyAZvrg* ctx, NU8* key_0, NI key_0Len_0) {
#line 425 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/twofish.nim"

#line 425 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/twofish.nim"
	initTwofishContext__GdOcVkGSJxVIvDm4ZRdwVA(ctx, ((NI) 256), key_0, key_0Len_0);
}

#line 443 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
N_LIB_PRIVATE N_NIMCALL(void, init__XSFRHHJpa7P5leX4RhHhzg)(tyObject_CTR__nMdVHfl563dLRfhNhOqtmw* ctx, NU8* key_0, NI key_0Len_0, NU8* iv_0, NI iv_0Len_0) {	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T13_;
#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{
#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		if (!!((((NI) 16) <= iv_0Len_0))) goto LA3_;

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 455 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_4));
	}
	LA3_: ;

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{
#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		if (!!((((NI) 32) <= key_0Len_0))) goto LA7_;

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 456 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_5));
	}
	LA7_: ;

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	{		if (!NIM_FALSE) goto LA11_;

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 457 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__40YfnbOcmramUFyaunCxCg_6));
	}
	LA11_: ;

#line 458 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 458 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	init__OGv8y6XNTusCv5BXtjJW9bgtwofish((&(*ctx).cipher), key_0, key_0Len_0);

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	T13_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(((NI) 0), ((NI) 15));	if (((NI) 15)-((NI) 0) != -1 && ((NU)(((NI) 0)) >= (NU)(iv_0Len_0) || (NU)(((NI) 15)) >= (NU)(iv_0Len_0))){ raiseIndexError(); }
#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimcrypto/nimcrypto/bcmode.nim"
	X5BX5Deq___wCxLFNoF2DOiuJpFEiBO9cQ((*ctx).iv, T13_, (NU8*)(iv_0)+(((NI) 0)), (((NI) 15))-(((NI) 0))+1);
}
N_LIB_PRIVATE N_NIMCALL(void, nimcrypto_bcmodeDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__40YfnbOcmramUFyaunCxCg_2_4[4];
static TNimNode* TM__40YfnbOcmramUFyaunCxCg_3_4[4];
static TNimNode TM__40YfnbOcmramUFyaunCxCg_0[11];NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_.size = sizeof(tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg);
NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_.kind = 18;
NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_.base = 0;
NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_.flags = 3;
NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_.name = "CTR[rijndael.aes128]";
NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_;
TM__40YfnbOcmramUFyaunCxCg_2_4[0] = &TM__40YfnbOcmramUFyaunCxCg_0[1];
TM__40YfnbOcmramUFyaunCxCg_0[1].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[1].offset = offsetof(tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg, cipher);
TM__40YfnbOcmramUFyaunCxCg_0[1].typ = (&NTI__P9ctyX6u5ZjparlFDMKF09bg_);
TM__40YfnbOcmramUFyaunCxCg_0[1].name = "cipher";
TM__40YfnbOcmramUFyaunCxCg_2_4[1] = &TM__40YfnbOcmramUFyaunCxCg_0[2];
TM__40YfnbOcmramUFyaunCxCg_0[2].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[2].offset = offsetof(tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg, iv);
TM__40YfnbOcmramUFyaunCxCg_0[2].typ = (&NTI__vEOa9c5qaE9ajWxR5R4zwfQg_);
TM__40YfnbOcmramUFyaunCxCg_0[2].name = "iv";
TM__40YfnbOcmramUFyaunCxCg_2_4[2] = &TM__40YfnbOcmramUFyaunCxCg_0[3];
TM__40YfnbOcmramUFyaunCxCg_0[3].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[3].offset = offsetof(tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg, ecount);
TM__40YfnbOcmramUFyaunCxCg_0[3].typ = (&NTI__vEOa9c5qaE9ajWxR5R4zwfQg_);
TM__40YfnbOcmramUFyaunCxCg_0[3].name = "ecount";
TM__40YfnbOcmramUFyaunCxCg_2_4[3] = &TM__40YfnbOcmramUFyaunCxCg_0[4];
TM__40YfnbOcmramUFyaunCxCg_0[4].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[4].offset = offsetof(tyObject_CTR__CSv7tJ1uWHDvWQ9cM87Zmdg, num);
TM__40YfnbOcmramUFyaunCxCg_0[4].typ = (&NTI__hMQEc0FMry7Up7EoPki79aA_);
TM__40YfnbOcmramUFyaunCxCg_0[4].name = "num";
TM__40YfnbOcmramUFyaunCxCg_0[0].len = 4; TM__40YfnbOcmramUFyaunCxCg_0[0].kind = 2; TM__40YfnbOcmramUFyaunCxCg_0[0].sons = &TM__40YfnbOcmramUFyaunCxCg_2_4[0];
NTI__CSv7tJ1uWHDvWQ9cM87Zmdg_.node = &TM__40YfnbOcmramUFyaunCxCg_0[0];
NTI__nMdVHfl563dLRfhNhOqtmw_.size = sizeof(tyObject_CTR__nMdVHfl563dLRfhNhOqtmw);
NTI__nMdVHfl563dLRfhNhOqtmw_.kind = 18;
NTI__nMdVHfl563dLRfhNhOqtmw_.base = 0;
NTI__nMdVHfl563dLRfhNhOqtmw_.flags = 3;
NTI__nMdVHfl563dLRfhNhOqtmw_.name = "CTR[twofish.twofish256]";
NTI__nMdVHfl563dLRfhNhOqtmw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__nMdVHfl563dLRfhNhOqtmw_;
TM__40YfnbOcmramUFyaunCxCg_3_4[0] = &TM__40YfnbOcmramUFyaunCxCg_0[6];
TM__40YfnbOcmramUFyaunCxCg_0[6].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[6].offset = offsetof(tyObject_CTR__nMdVHfl563dLRfhNhOqtmw, cipher);
TM__40YfnbOcmramUFyaunCxCg_0[6].typ = (&NTI__iigPIJ6JY8ooY2CiyAZvrg_);
TM__40YfnbOcmramUFyaunCxCg_0[6].name = "cipher";
TM__40YfnbOcmramUFyaunCxCg_3_4[1] = &TM__40YfnbOcmramUFyaunCxCg_0[7];
TM__40YfnbOcmramUFyaunCxCg_0[7].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[7].offset = offsetof(tyObject_CTR__nMdVHfl563dLRfhNhOqtmw, iv);
TM__40YfnbOcmramUFyaunCxCg_0[7].typ = (&NTI__vEOa9c5qaE9ajWxR5R4zwfQg_);
TM__40YfnbOcmramUFyaunCxCg_0[7].name = "iv";
TM__40YfnbOcmramUFyaunCxCg_3_4[2] = &TM__40YfnbOcmramUFyaunCxCg_0[8];
TM__40YfnbOcmramUFyaunCxCg_0[8].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[8].offset = offsetof(tyObject_CTR__nMdVHfl563dLRfhNhOqtmw, ecount);
TM__40YfnbOcmramUFyaunCxCg_0[8].typ = (&NTI__vEOa9c5qaE9ajWxR5R4zwfQg_);
TM__40YfnbOcmramUFyaunCxCg_0[8].name = "ecount";
TM__40YfnbOcmramUFyaunCxCg_3_4[3] = &TM__40YfnbOcmramUFyaunCxCg_0[9];
TM__40YfnbOcmramUFyaunCxCg_0[9].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[9].offset = offsetof(tyObject_CTR__nMdVHfl563dLRfhNhOqtmw, num);
TM__40YfnbOcmramUFyaunCxCg_0[9].typ = (&NTI__hMQEc0FMry7Up7EoPki79aA_);
TM__40YfnbOcmramUFyaunCxCg_0[9].name = "num";
TM__40YfnbOcmramUFyaunCxCg_0[5].len = 4; TM__40YfnbOcmramUFyaunCxCg_0[5].kind = 2; TM__40YfnbOcmramUFyaunCxCg_0[5].sons = &TM__40YfnbOcmramUFyaunCxCg_3_4[0];
NTI__nMdVHfl563dLRfhNhOqtmw_.node = &TM__40YfnbOcmramUFyaunCxCg_0[5];
NTI__38lQnqP7w5SFHX6DC3Yf9cg_.size = sizeof(tyObject_ECB__38lQnqP7w5SFHX6DC3Yf9cg);
NTI__38lQnqP7w5SFHX6DC3Yf9cg_.kind = 18;
NTI__38lQnqP7w5SFHX6DC3Yf9cg_.base = 0;
NTI__38lQnqP7w5SFHX6DC3Yf9cg_.flags = 3;
NTI__38lQnqP7w5SFHX6DC3Yf9cg_.name = "ECB[rijndael.aes256]";
NTI__38lQnqP7w5SFHX6DC3Yf9cg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__38lQnqP7w5SFHX6DC3Yf9cg_;
TM__40YfnbOcmramUFyaunCxCg_0[10].kind = 1;
TM__40YfnbOcmramUFyaunCxCg_0[10].offset = offsetof(tyObject_ECB__38lQnqP7w5SFHX6DC3Yf9cg, cipher);
TM__40YfnbOcmramUFyaunCxCg_0[10].typ = (&NTI__P9ctyX6u5ZjparlFDMKF09bg_);
TM__40YfnbOcmramUFyaunCxCg_0[10].name = "cipher";
NTI__38lQnqP7w5SFHX6DC3Yf9cg_.node = &TM__40YfnbOcmramUFyaunCxCg_0[10];
}
