/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@svendor@snim-libp2p@slibp2p@scrypto@shkdf.nim.c.o nimcache/release/chat2/@m..@s..@svendor@snim-libp2p@slibp2p@scrypto@shkdf.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include "bearssl_kdf.h"
#include <string.h>
#include "bearssl_hash.h"
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
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);

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

#line 26 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
N_LIB_PRIVATE N_NIMCALL(void, hkdf__8kL4D1rPlBOjUmnHNh872A)(NU8* salt, NI saltLen_0, NU8* ikm, NI ikmLen_0, NU8* info, NI infoLen_0, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg* outputs, NI outputsLen_0) {	br_hkdf_context ctx;	NU8* T1_;	NU8* T7_;	nimZeroMem((void*)(&ctx), sizeof(br_hkdf_context));
#line 29 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
	T1_ = (NU8*)0;
#line 31 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
	{
#line 31 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"

#line 31 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
		if (!(((NI) 0) < saltLen_0)) goto LA4_;
		if ((NU)(((NI) 0)) >= (NU)(saltLen_0)){ raiseIndexError2(((NI) 0),saltLen_0-1); }		T1_ = (&salt[((NI) 0)]);	}
	goto LA2_;
	LA4_: ;
	{		T1_ = NIM_NIL;	}
	LA2_: ;

#line 31 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"

#line 29 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
	br_hkdf_init((&ctx), (&br_sha256_vtable), ((void*) (T1_)), ((size_t) (saltLen_0)));

#line 32 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
	T7_ = (NU8*)0;
#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
	{
#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"

#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
		if (!(((NI) 0) < ikmLen_0)) goto LA10_;
		if ((NU)(((NI) 0)) >= (NU)(ikmLen_0)){ raiseIndexError2(((NI) 0),ikmLen_0-1); }		T7_ = (&ikm[((NI) 0)]);	}
	goto LA8_;
	LA10_: ;
	{		T7_ = NIM_NIL;	}
	LA8_: ;

#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"

#line 32 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
	br_hkdf_inject((&ctx), ((void*) (T7_)), ((size_t) (ikmLen_0)));

#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"

#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
	br_hkdf_flip((&ctx));
	{		NI i;		NI colontmp_;		NI res;		i = (NI)0;		colontmp_ = (NI)0;
#line 35 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"

#line 35 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
		colontmp_ = (outputsLen_0-1);
#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
		res = ((NI) 0);		{
#line 78 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
			while (1) {				NU8* T16_;				NI TM__tbc6vsRyfd6q0pIalc1s4w_2;
#line 78 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (!(res <= colontmp_)) goto LA15;

#line 35 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
				i = res;
#line 36 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
				T16_ = (NU8*)0;
#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
				{
#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"

#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
					if (!(((NI) 0) < infoLen_0)) goto LA19_;
					if ((NU)(((NI) 0)) >= (NU)(infoLen_0)){ raiseIndexError2(((NI) 0),infoLen_0-1); }					T16_ = (&info[((NI) 0)]);				}
				goto LA17_;
				LA19_: ;
				{					T16_ = NIM_NIL;				}
				LA17_: ;

#line 39 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
				if ((NU)(i) >= (NU)(outputsLen_0)){ raiseIndexError2(i,outputsLen_0-1); }
#line 36 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/hkdf.nim"
				br_hkdf_produce((&ctx), ((void*) (T16_)), ((size_t) (infoLen_0)), ((void*) ((&outputs[i][(((NI) 0))- 0]))), ((size_t) 32));

#line 80 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (nimAddInt(res, ((NI) 1), &TM__tbc6vsRyfd6q0pIalc1s4w_2)) { raiseOverflow(); };				res = (NI)(TM__tbc6vsRyfd6q0pIalc1s4w_2);			} LA15: ;
		}
	}
}