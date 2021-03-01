/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v1/node -o nimcache/release/quicksim/@m..@s..@s..@svendor@snim-chronos@schronos@shandles.nim.c.o nimcache/release/quicksim/@m..@s..@s..@svendor@snim-chronos@schronos@shandles.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <fcntl.h>
#include <sys/socket.h>
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
typedef NU8 tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg;
typedef NU8 tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg;
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__JC9abIjAA731bWpDMsti9a5Q)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg)(int s, NIM_BOOL blocking);
N_LIB_PRIVATE N_NIMCALL(void, close__8c1w8B7fpSuB4Dgr5LHVJA)(int socket);
N_LIB_PRIVATE N_NIMCALL(void, register__BiX6jwQlPw04owns5cHAfw_3)(int fd);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, getSockOpt__bxMZV3ngojtrsh3q9ahNQyg)(int socket, NI level, NI optname, NI* value);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
extern int osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w;

#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg)(int s, NIM_BOOL blocking) {	NIM_BOOL result;	NI x;	int T1_;	result = (NIM_BOOL)0;
#line 46 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	result = NIM_TRUE;
#line 47 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 47 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 47 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	T1_ = (int)0;	T1_ = fcntl(s, ((int) 3), ((NI) 0));	x = ((NI) (T1_));
#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{
#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		if (!(x == ((NI) -1))) goto LA4_;

#line 49 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = NIM_FALSE;	}
	goto LA2_;
	LA4_: ;
	{		NI mode;
#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		{			if (!blocking) goto LA9_;

#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
			mode = (NI)(x & ((NI) -2049));		}
		goto LA7_;
		LA9_: ;
		{
#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
			mode = (NI)(x | ((NI) 2048));		}
		LA7_: ;

#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		{			int T14_;
#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
			T14_ = (int)0;			T14_ = fcntl(s, ((int) 4), mode);			if (!(T14_ == ((NI32) -1))) goto LA15_;

#line 53 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
			result = NIM_FALSE;		}
		LA15_: ;
	}
	LA2_: ;
	return result;}

#line 90 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(int, createAsyncSocket__aqO64MBGdn1VFUxJJhwCjw)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {	int result;	int handle;{	result = (int)0;
#line 94 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 94 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	handle = createNativeSocket__JC9abIjAA731bWpDMsti9a5Q(domain, sockType, protocol);
#line 95 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{
#line 95 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		if (!(handle == osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w)) goto LA3_;

#line 96 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 96 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = ((int) -1);		goto BeforeRet_;
	}
	LA3_: ;

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{		NIM_BOOL T7_;
#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T7_ = (NIM_BOOL)0;		T7_ = setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg(handle, NIM_FALSE);		if (!!(T7_)) goto LA8_;

#line 98 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 98 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		close__8c1w8B7fpSuB4Dgr5LHVJA(handle);

#line 99 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 99 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = ((int) -1);		goto BeforeRet_;
	}
	LA8_: ;

#line 104 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	result = handle;
#line 105 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 105 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	register__BiX6jwQlPw04owns5cHAfw_3(result);
	}BeforeRet_: ;
	return result;}

#line 69 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, getSockOpt__bxMZV3ngojtrsh3q9ahNQyg)(int socket, NI level, NI optname, NI* value) {	NIM_BOOL result;	int res;	socklen_t size;	result = (NIM_BOOL)0;	res = (int)0;
#line 73 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	size = ((socklen_t) 4);
#line 74 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{		int T3_;
#line 75 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 74 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		if ((level) < ((int) (-2147483647 -1)) || (level) > ((int) 2147483647)){ raiseRangeErrorI(level, ((int) (-2147483647 -1)), ((int) 2147483647)); }		if ((optname) < ((int) (-2147483647 -1)) || (optname) > ((int) 2147483647)){ raiseRangeErrorI(optname, ((int) (-2147483647 -1)), ((int) 2147483647)); }
#line 74 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T3_ = (int)0;		T3_ = getsockopt(socket, ((int) (level)), ((int) (optname)), ((void*) ((&res))), (&size));		if (!(((int) 0) <= T3_)) goto LA4_;

#line 76 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		(*value) = ((NI) (res));
#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = NIM_TRUE;	}
	LA4_: ;
	return result;}

#line 86 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, getSocketError__ETrsq9aycvx2E9bNw0j9b3zGA)(int socket, NI* err) {	NIM_BOOL result;	result = (NIM_BOOL)0;
#line 88 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 88 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	result = getSockOpt__bxMZV3ngojtrsh3q9ahNQyg(socket, ((NI) 1), ((NI) 4), err);	return result;}