/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* tyArray_o8KQyTFgNQGvsJZYtdEsgA[8192];
struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw {
tyArray_o8KQyTFgNQGvsJZYtdEsgA buckets;
NI wordCounter;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* idAnon;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* idDelegator;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* emptyIdent;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NU16 tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw;
typedef NU16 tyEnum_TSpecialWord_IP9arFQwMEHR4ReqvcPpxcw;
typedef NimStringDesc* tyArray_iVw6y3Yu1zCasn9bcSX1I5g[268];
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_B0xRsLi0eK4raPu9bd2tkcA)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef_eH2Hxsu3PVPvJHXo2xTrZw)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef_lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*, getIdent_F9bx0Ytx9cft0EbGcAUpUsBw)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* ic, NCSTRING identifier, NI length, NI h);
N_LIB_PRIVATE N_NIMCALL(NI, cmpExact_119akYztO9b7SG3fyF8j9bFgQ)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle_119akYztO9b7SG3fyF8j9bFgQ_2)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_3)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*, getIdent_uDz5mcDPddYz1vXwkXTNiQ)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*, getIdent_ta9b7WS25hw4aTDzBeyvsIw)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier, NI h);
extern TNimType NTI_ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI_iIXPrEsiKHiioLj0HSkQhA_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_GufRQq9c0miSybX3zBD4tyA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_B0xRsLi0eK4raPu9bd2tkcA_;
TNimType NTI_eH2Hxsu3PVPvJHXo2xTrZw_;
TNimType NTI_TzLHS09bRH9a0TYLs39cqcNaw_;
TNimType NTI_o8KQyTFgNQGvsJZYtdEsgA_;
TNimType NTI_lnkYNZP9asc88UfiEGjLrbA_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_L3r6bVdeFMiI9cwmLpWIeKw_4, ":anonymous", 10);
STRING_LITERAL(TM_L3r6bVdeFMiI9cwmLpWIeKw_5, ":delegator", 10);
extern NIM_CONST tyArray_iVw6y3Yu1zCasn9bcSX1I5g specialWords_jS3I1dUcvbZAEuApBSUHng;
static N_NIMCALL(void, Marker_tyRef_B0xRsLi0eK4raPu9bd2tkcA)(void* p, NI op) {
	tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* a;
	a = (tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}
static N_NIMCALL(void, Marker_tyRef_eH2Hxsu3PVPvJHXo2xTrZw)(void* p, NI op) {
	tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA* a;
	a = (tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA*)p;
}
static N_NIMCALL(void, Marker_tyRef_lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op) {
	tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* a;
	NI T1_;
	a = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 8192; T1_++) {
	nimGCvisit((void*)(*a).buckets[T1_], op);
	}
	nimGCvisit((void*)(*a).idAnon, op);
	nimGCvisit((void*)(*a).idDelegator, op);
	nimGCvisit((void*)(*a).emptyIdent, op);
}

N_LIB_PRIVATE N_NIMCALL(NI, cmpExact_119akYztO9b7SG3fyF8j9bFgQ)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	result = (NI)0;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA2;
			aa = a[i];
			bb = b[j];
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = !((result == ((NI) 0)));
				if (T5_) goto LA6_;
				T5_ = ((NU8)(aa) == (NU8)(0));
				LA6_: ;
				if (!T5_) goto LA7_;
				goto LA1;
			}
			LA7_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result == ((NI) 0))) goto LA11_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA15_;
			result = ((NI) 1);
		}
		LA15_: ;
	}
	LA11_: ;
	return result;
}

static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle_119akYztO9b7SG3fyF8j9bFgQ_2)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
{	result = (NI)0;
	{
		if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA3_;
		result = ((NI) 1);
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA6;
			{
				while (1) {
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA8;
					i += ((NI) 1);
				} LA8: ;
			}
			{
				while (1) {
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA10;
					j += ((NI) 1);
				} LA10: ;
			}
			aa = a[i];
			bb = b[j];
			{
				NIM_BOOL T13_;
				T13_ = (NIM_BOOL)0;
				T13_ = ((NU8)(65) <= (NU8)(aa));
				if (!(T13_)) goto LA14_;
				T13_ = ((NU8)(aa) <= (NU8)(90));
				LA14_: ;
				if (!T13_) goto LA15_;
				aa = ((NIM_CHAR) (((NI) ((NI)(((NU8)(aa)) + ((NI) 32))))));
			}
			LA15_: ;
			{
				NIM_BOOL T19_;
				T19_ = (NIM_BOOL)0;
				T19_ = ((NU8)(65) <= (NU8)(bb));
				if (!(T19_)) goto LA20_;
				T19_ = ((NU8)(bb) <= (NU8)(90));
				LA20_: ;
				if (!T19_) goto LA21_;
				bb = ((NIM_CHAR) (((NI) ((NI)(((NU8)(bb)) + ((NI) 32))))));
			}
			LA21_: ;
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				NIM_BOOL T25_;
				T25_ = (NIM_BOOL)0;
				T25_ = !((result == ((NI) 0)));
				if (T25_) goto LA26_;
				T25_ = ((NU8)(aa) == (NU8)(0));
				LA26_: ;
				if (!T25_) goto LA27_;
				goto LA5;
			}
			LA27_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA6: ;
	} LA5: ;
	{
		if (!(result == ((NI) 0))) goto LA31_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA35_;
			result = ((NI) 1);
		}
		LA35_: ;
	}
	LA31_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*, getIdent_F9bx0Ytx9cft0EbGcAUpUsBw)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* ic, NCSTRING identifier, NI length, NI h) {
	tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* result;
	NI idx;
	tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* last;
	NI id;
{	result = (tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*)0;
	idx = (NI)(h & ((NI) 8191));
	result = (*ic).buckets[(idx)- 0];
	last = NIM_NIL;
	id = ((NI) 0);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NI T5_;
				T5_ = (NI)0;
				T5_ = cmpExact_119akYztO9b7SG3fyF8j9bFgQ(nimToCStringConv((*result).s), identifier, length);
				if (!(T5_ == ((NI) 0))) goto LA6_;
				{
					if (!!((last == NIM_NIL))) goto LA10_;
					asgnRefNoCycle((void**) (&(*last).next), (*result).next);
					asgnRefNoCycle((void**) (&(*result).next), (*ic).buckets[(idx)- 0]);
					asgnRefNoCycle((void**) (&(*ic).buckets[(idx)- 0]), result);
				}
				LA10_: ;
				goto BeforeRet_;
			}
			goto LA3_;
			LA6_: ;
			{
				NI T13_;
				T13_ = (NI)0;
				T13_ = cmpIgnoreStyle_119akYztO9b7SG3fyF8j9bFgQ_2(nimToCStringConv((*result).s), identifier, length);
				if (!(T13_ == ((NI) 0))) goto LA14_;
				id = (*result).Sup.id;
			}
			goto LA3_;
			LA14_: ;
			LA3_: ;
			last = result;
			result = (*result).next;
		} LA2: ;
	}
	result = (tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*) newObj((&NTI_B0xRsLi0eK4raPu9bd2tkcA_), sizeof(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA));
	(*result).Sup.Sup.m_type = (&NTI_GufRQq9c0miSybX3zBD4tyA_);
	(*result).h = h;
	asgnRefNoCycle((void**) (&(*result).s), mnewString(((NI) (length))));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(length - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA18;
				i = res;
				(*result).s->data[i] = identifier[i];
				res += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result).next), (*ic).buckets[(idx)- 0]);
	asgnRefNoCycle((void**) (&(*ic).buckets[(idx)- 0]), result);
	{
		if (!(id == ((NI) 0))) goto LA21_;
		(*ic).wordCounter += ((NI) 1);
		(*result).Sup.id = ((NI64)-((*ic).wordCounter));
	}
	goto LA19_;
	LA21_: ;
	{
		(*result).Sup.id = id;
	}
	LA19_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*, getIdent_uDz5mcDPddYz1vXwkXTNiQ)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier) {
	tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* result;
	NI T1_;
	result = (tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*)0;
	T1_ = (NI)0;
	T1_ = hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_3(identifier);
	result = getIdent_F9bx0Ytx9cft0EbGcAUpUsBw(ic, nimToCStringConv(identifier), (identifier ? identifier->Sup.len : 0), T1_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichKeyword_6Crk8YhMgh1FqDtsVJsurA)(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* id) {
	tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw result;
	result = (tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw)0;
	{
		if (!((*id).Sup.id < ((NI) 0))) goto LA3_;
		result = ((tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw) ((*id).Sup.id));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*, getIdent_ta9b7WS25hw4aTDzBeyvsIw)(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier, NI h) {
	tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* result;
	result = (tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*)0;
	result = getIdent_F9bx0Ytx9cft0EbGcAUpUsBw(ic, nimToCStringConv(identifier), (identifier ? identifier->Sup.len : 0), h);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*, newIdentCache_Y5daJTSUd79cza09cht1EK9cQ)(void) {
	tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* result;
	tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* T1_;
	result = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*)0;
	T1_ = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*)0;
	T1_ = (tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*) newObj((&NTI_lnkYNZP9asc88UfiEGjLrbA_), sizeof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw));
	result = T1_;
	asgnRefNoCycle((void**) (&(*result).idAnon), getIdent_uDz5mcDPddYz1vXwkXTNiQ(result, ((NimStringDesc*) &TM_L3r6bVdeFMiI9cwmLpWIeKw_4)));
	(*result).wordCounter = ((NI) 1);
	asgnRefNoCycle((void**) (&(*result).idDelegator), getIdent_uDz5mcDPddYz1vXwkXTNiQ(result, ((NimStringDesc*) &TM_L3r6bVdeFMiI9cwmLpWIeKw_5)));
	asgnRefNoCycle((void**) (&(*result).emptyIdent), getIdent_uDz5mcDPddYz1vXwkXTNiQ(result, ((NimStringDesc*) NIM_NIL)));
	{
		tyEnum_TSpecialWord_IP9arFQwMEHR4ReqvcPpxcw s;
		NI res;
		s = (tyEnum_TSpecialWord_IP9arFQwMEHR4ReqvcPpxcw)0;
		res = ((NI) 1);
		{
			while (1) {
				NI T5_;
				tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* T6_;
				if (!(res <= ((NI) 267))) goto LA4;
				s = ((tyEnum_TSpecialWord_IP9arFQwMEHR4ReqvcPpxcw) (res));
				T5_ = (NI)0;
				T5_ = hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_3(specialWords_jS3I1dUcvbZAEuApBSUHng[(s)- 0]);
				T6_ = (tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*)0;
				T6_ = getIdent_ta9b7WS25hw4aTDzBeyvsIw(result, specialWords_jS3I1dUcvbZAEuApBSUHng[(s)- 0], T5_);
				(*T6_).Sup.id = s;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_identsInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_identsDatInit000)(void) {
static TNimNode* TM_L3r6bVdeFMiI9cwmLpWIeKw_2[3];
static TNimNode* TM_L3r6bVdeFMiI9cwmLpWIeKw_3[5];
static TNimNode TM_L3r6bVdeFMiI9cwmLpWIeKw_0[11];
NTI_iIXPrEsiKHiioLj0HSkQhA_.size = sizeof(tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA);
NTI_iIXPrEsiKHiioLj0HSkQhA_.kind = 17;
NTI_iIXPrEsiKHiioLj0HSkQhA_.base = (&NTI_ytyiCJqK439aF9cIibuRVpAg_);
NTI_iIXPrEsiKHiioLj0HSkQhA_.flags = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0].offset = offsetof(tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA, id);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0].name = "id";
NTI_iIXPrEsiKHiioLj0HSkQhA_.node = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[0];
NTI_GufRQq9c0miSybX3zBD4tyA_.size = sizeof(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA);
NTI_GufRQq9c0miSybX3zBD4tyA_.kind = 17;
NTI_GufRQq9c0miSybX3zBD4tyA_.base = (&NTI_iIXPrEsiKHiioLj0HSkQhA_);
NTI_GufRQq9c0miSybX3zBD4tyA_.flags = 2;
TM_L3r6bVdeFMiI9cwmLpWIeKw_2[0] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2].offset = offsetof(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA, s);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[2].name = "s";
TM_L3r6bVdeFMiI9cwmLpWIeKw_2[1] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3].offset = offsetof(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA, next);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3].typ = (&NTI_B0xRsLi0eK4raPu9bd2tkcA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[3].name = "next";
TM_L3r6bVdeFMiI9cwmLpWIeKw_2[2] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4].offset = offsetof(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA, h);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[4].name = "h";
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1].len = 3; TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1].kind = 2; TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1].sons = &TM_L3r6bVdeFMiI9cwmLpWIeKw_2[0];
NTI_GufRQq9c0miSybX3zBD4tyA_.node = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[1];
NTI_B0xRsLi0eK4raPu9bd2tkcA_.size = sizeof(tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA*);
NTI_B0xRsLi0eK4raPu9bd2tkcA_.kind = 22;
NTI_B0xRsLi0eK4raPu9bd2tkcA_.base = (&NTI_GufRQq9c0miSybX3zBD4tyA_);
NTI_B0xRsLi0eK4raPu9bd2tkcA_.flags = 2;
NTI_B0xRsLi0eK4raPu9bd2tkcA_.marker = Marker_tyRef_B0xRsLi0eK4raPu9bd2tkcA;
NTI_eH2Hxsu3PVPvJHXo2xTrZw_.size = sizeof(tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA*);
NTI_eH2Hxsu3PVPvJHXo2xTrZw_.kind = 22;
NTI_eH2Hxsu3PVPvJHXo2xTrZw_.base = (&NTI_iIXPrEsiKHiioLj0HSkQhA_);
NTI_eH2Hxsu3PVPvJHXo2xTrZw_.marker = Marker_tyRef_eH2Hxsu3PVPvJHXo2xTrZw;
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.size = sizeof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw);
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.kind = 18;
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.base = 0;
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.flags = 2;
TM_L3r6bVdeFMiI9cwmLpWIeKw_3[0] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6];
NTI_o8KQyTFgNQGvsJZYtdEsgA_.size = sizeof(tyArray_o8KQyTFgNQGvsJZYtdEsgA);
NTI_o8KQyTFgNQGvsJZYtdEsgA_.kind = 16;
NTI_o8KQyTFgNQGvsJZYtdEsgA_.base = (&NTI_B0xRsLi0eK4raPu9bd2tkcA_);
NTI_o8KQyTFgNQGvsJZYtdEsgA_.flags = 2;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, buckets);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6].typ = (&NTI_o8KQyTFgNQGvsJZYtdEsgA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[6].name = "buckets";
TM_L3r6bVdeFMiI9cwmLpWIeKw_3[1] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, wordCounter);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[7].name = "wordCounter";
TM_L3r6bVdeFMiI9cwmLpWIeKw_3[2] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, idAnon);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8].typ = (&NTI_B0xRsLi0eK4raPu9bd2tkcA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[8].name = "idAnon";
TM_L3r6bVdeFMiI9cwmLpWIeKw_3[3] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, idDelegator);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9].typ = (&NTI_B0xRsLi0eK4raPu9bd2tkcA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[9].name = "idDelegator";
TM_L3r6bVdeFMiI9cwmLpWIeKw_3[4] = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10];
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10].kind = 1;
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10].offset = offsetof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw, emptyIdent);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10].typ = (&NTI_B0xRsLi0eK4raPu9bd2tkcA_);
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[10].name = "emptyIdent";
TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5].len = 5; TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5].kind = 2; TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5].sons = &TM_L3r6bVdeFMiI9cwmLpWIeKw_3[0];
NTI_TzLHS09bRH9a0TYLs39cqcNaw_.node = &TM_L3r6bVdeFMiI9cwmLpWIeKw_0[5];
NTI_lnkYNZP9asc88UfiEGjLrbA_.size = sizeof(tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw*);
NTI_lnkYNZP9asc88UfiEGjLrbA_.kind = 22;
NTI_lnkYNZP9asc88UfiEGjLrbA_.base = (&NTI_TzLHS09bRH9a0TYLs39cqcNaw_);
NTI_lnkYNZP9asc88UfiEGjLrbA_.flags = 2;
NTI_lnkYNZP9asc88UfiEGjLrbA_.marker = Marker_tyRef_lnkYNZP9asc88UfiEGjLrbA;
}
