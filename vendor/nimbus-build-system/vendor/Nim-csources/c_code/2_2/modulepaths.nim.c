/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
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
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg tyTuple_7q7q3E6Oj24ZNVJb9aonhAg;
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
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct tySequence_Ef05srmQTDulnBdXR4Ja6Q tySequence_Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ tySequence_DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
};
struct {NF floatVal;
};
struct {NimStringDesc* strVal;
};
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
};
struct {tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* ident;
};
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
};
};
NimStringDesc* comment;
};
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
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
NU raiseId;
Exception* up;
};
typedef long tyArray_TcvIiMAJvcwzNLsZkfnFnQ[25];
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_NT9bSe2DDkjdtx7j9aov2Z6g;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_NT9bSe2DDkjdtx7j9aov2Z6g raiseAction;
};
typedef NU8 tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw[21];
struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
NI zctThreshold;
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
struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
};
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* transformedBody;
};
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
};
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
};
};
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* name;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
typedef NU8 tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw;
typedef NU8 tyEnum_TMsgKind_29cbg2fC1z5iM1PAI28kR5w;
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
struct tySequence_Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getModuleName_rlFejf61X39bVziQhhH7znQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, pathSubs_paMedXIWX6si307wASTsQQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* p, NimStringDesc* config);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple_7q7q3E6Oj24ZNVJb9aonhAg* Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toFullPath_VW1RaR1l9c9bPnJxr1KuvIrg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NI32 fileIdx);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_LIB_PRIVATE N_NIMCALL(void, localError_NF6kBGchnhQYPbCedyefVA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, reraiseException)(void);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TRenderFlag_wrPgUo1ExBlHvFnXN2nSHw renderFlags);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, localError_mMj7lrOf3zBP9bl69amiKu5g_3)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, tyEnum_TMsgKind_29cbg2fC1z5iM1PAI28kR5w msg, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, findModule_Y3iZ4DSoNguudlBW9cSwa2A)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* modulename, NimStringDesc* currentModule);
static N_INLINE(NIM_BOOL, isEmpty_kPpSxL0H5sJ9a6ujvdQ0QVQpathutils)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__qX5C9b0n9bOP7jk69amC8dA7A)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NI32, fileInfoIdx_3HRSVgYDcnQTolSZGx1zjA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename);
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_yoNlBGx0D2tRizIdhQuENw_;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_GM5IT6miOywfWPAzqo7pmA_3 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_4, "strVal", 6);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_5, "invalid path: ", 14);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_GM5IT6miOywfWPAzqo7pmA_6 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_7, "ident", 5);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_GM5IT6miOywfWPAzqo7pmA_8 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_9, "sym", 3);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_GM5IT6miOywfWPAzqo7pmA_10 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_11, "sons", 4);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_12, " ", 1);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_13, "using \'.\' instead of \'/\' in import paths is deprecated", 54);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_14, ".", 1);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_15, "/", 1);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_16, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TM_GM5IT6miOywfWPAzqo7pmA_17, "cannot open file: ", 18);

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = (Exception*)0;
	result = currException_9bVPeDJlYTi9bQApZpfH8wjg;
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}

static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_Y66tOYFjgwJ0k4aLz4bc0Q((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef_AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef_AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_9bVPeDJlYTi9bQApZpfH8wjg), (*currException_9bVPeDJlYTi9bQApZpfH8wjg).up);
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getModuleName_rlFejf61X39bVziQhhH7znQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NimStringDesc* volatile result;
	result = (NimStringDesc*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 21):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		TSafePoint TM_GM5IT6miOywfWPAzqo7pmA_2;
		pushSafePoint(&TM_GM5IT6miOywfWPAzqo7pmA_2);
		TM_GM5IT6miOywfWPAzqo7pmA_2.status = setjmp(TM_GM5IT6miOywfWPAzqo7pmA_2.context);
		if (TM_GM5IT6miOywfWPAzqo7pmA_2.status == 0) {
			NimStringDesc* T3_;
			tyTuple_7q7q3E6Oj24ZNVJb9aonhAg T4_;
			if (!(((TM_GM5IT6miOywfWPAzqo7pmA_3[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_4));
			T3_ = (NimStringDesc*)0;
			T3_ = toFullPath_VW1RaR1l9c9bPnJxr1KuvIrg(conf, (*n).info.fileIndex);
			nimZeroMem((void*)(&T4_), sizeof(tyTuple_7q7q3E6Oj24ZNVJb9aonhAg));
			nossplitFile(T3_, (&T4_));
			result = pathSubs_paMedXIWX6si307wASTsQQ(conf, (*n).strVal, T4_.Field0);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_yoNlBGx0D2tRizIdhQuENw_))) {
				NimStringDesc* T7_;
				TM_GM5IT6miOywfWPAzqo7pmA_2.status = 0;
				T7_ = (NimStringDesc*)0;
				if (!(((TM_GM5IT6miOywfWPAzqo7pmA_3[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_4));
				T7_ = rawNewString(((*n).strVal ? (*n).strVal->Sup.len : 0) + 14);
appendString(T7_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_5));
appendString(T7_, (*n).strVal);
				localError_NF6kBGchnhQYPbCedyefVA(conf, (*n).info, T7_);
				if (!(((TM_GM5IT6miOywfWPAzqo7pmA_3[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_4));
				result = copyString((*n).strVal);
				popCurrentException();
			}
		}
		if (TM_GM5IT6miOywfWPAzqo7pmA_2.status != 0) reraiseException();
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		if (!(((TM_GM5IT6miOywfWPAzqo7pmA_6[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_7));
		result = copyString((*(*n).ident).s);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		if (!(((TM_GM5IT6miOywfWPAzqo7pmA_8[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_9));
		result = copyString((*(*(*n).sym).name).s);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 29):
	{
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n0;
		tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n1;
		NimStringDesc* modname;
		NimStringDesc* T11_;
		NimStringDesc* T12_;
		if (((TM_GM5IT6miOywfWPAzqo7pmA_10[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_11));
		if ((NU)(((NI) 0)) >= (NU)((*n).sons ? (*n).sons->Sup.len : 0)) raiseIndexError2(((NI) 0),((*n).sons ? (*n).sons->Sup.len : 0)-1);
		n0 = (*n).sons->data[((NI) 0)];
		if (((TM_GM5IT6miOywfWPAzqo7pmA_10[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_11));
		if ((NU)(((NI) 1)) >= (NU)((*n).sons ? (*n).sons->Sup.len : 0)) raiseIndexError2(((NI) 1),((*n).sons ? (*n).sons->Sup.len : 0)-1);
		n1 = (*n).sons->data[((NI) 1)];
		if (((TM_GM5IT6miOywfWPAzqo7pmA_10[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_11));
		if ((NU)(((NI) 2)) >= (NU)((*n).sons ? (*n).sons->Sup.len : 0)) raiseIndexError2(((NI) 2),((*n).sons ? (*n).sons->Sup.len : 0)-1);
		modname = getModuleName_rlFejf61X39bVziQhhH7znQ(conf, (*n).sons->data[((NI) 2)]);
		result = getModuleName_rlFejf61X39bVziQhhH7znQ(conf, n1);
		T11_ = (NimStringDesc*)0;
		T11_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n0, 4);
		T12_ = (NimStringDesc*)0;
		T12_ = nsuReplaceStr(T11_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_12), ((NimStringDesc*) NIM_NIL));
		result = resizeString(result, (T12_ ? T12_->Sup.len : 0) + 0);
appendString(result, T12_);
		result = resizeString(result, (modname ? modname->Sup.len : 0) + 0);
appendString(result, modname);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 30):
	{
		NimStringDesc* T14_;
		T14_ = (NimStringDesc*)0;
		T14_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 4);
		result = nsuReplaceStr(T14_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_12), ((NimStringDesc*) NIM_NIL));
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
	{
		NimStringDesc* T16_;
		localError_mMj7lrOf3zBP9bl69amiKu5g_3(conf, (*n).info, ((tyEnum_TMsgKind_29cbg2fC1z5iM1PAI28kR5w) 15), ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_13));
		T16_ = (NimStringDesc*)0;
		T16_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 4);
		result = nsuReplaceStr(T16_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_14), ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_15));
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 78):
	{
		if (((TM_GM5IT6miOywfWPAzqo7pmA_10[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_11));
		if ((NU)(((NI) 0)) >= (NU)((*n).sons ? (*n).sons->Sup.len : 0)) raiseIndexError2(((NI) 0),((*n).sons ? (*n).sons->Sup.len : 0)-1);
		result = getModuleName_rlFejf61X39bVziQhhH7znQ(conf, (*n).sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* T19_;
		NimStringDesc* T20_;
		T19_ = (NimStringDesc*)0;
		T19_ = renderTree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 0);
		T20_ = (NimStringDesc*)0;
		T20_ = nsuFormatSingleElem(((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_16), T19_);
		localError_NF6kBGchnhQYPbCedyefVA(conf, (*n).info, T20_);
		result = ((NimStringDesc*) NIM_NIL);
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, isEmpty_kPpSxL0H5sJ9a6ujvdQ0QVQpathutils)(NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((x ? x->Sup.len : 0) == ((NI) 0));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI32, checkModuleName_fDy39b69bb9cFVEyPkMJp3GTg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NIM_BOOL doLocalError) {
	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullPath;
	NimStringDesc* T1_;
	result = (NI32)0;
	modulename = getModuleName_rlFejf61X39bVziQhhH7znQ(conf, n);
	T1_ = (NimStringDesc*)0;
	T1_ = toFullPath_VW1RaR1l9c9bPnJxr1KuvIrg(conf, (*n).info.fileIndex);
	fullPath = findModule_Y3iZ4DSoNguudlBW9cSwa2A(conf, modulename, T1_);
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = isEmpty_kPpSxL0H5sJ9a6ujvdQ0QVQpathutils(fullPath);
		if (!T4_) goto LA5_;
		{
			NimStringDesc* m;
			NimStringDesc* T16_;
			if (!doLocalError) goto LA9_;
			{
				if (!(((NI) 0) < (modulename ? modulename->Sup.len : 0))) goto LA13_;
				m = modulename;
			}
			goto LA11_;
			LA13_: ;
			{
				m = dollar__qX5C9b0n9bOP7jk69amC8dA7A(n);
			}
			LA11_: ;
			T16_ = (NimStringDesc*)0;
			T16_ = rawNewString((m ? m->Sup.len : 0) + 18);
appendString(T16_, ((NimStringDesc*) &TM_GM5IT6miOywfWPAzqo7pmA_17));
appendString(T16_, m);
			localError_NF6kBGchnhQYPbCedyefVA(conf, (*n).info, T16_);
		}
		LA9_: ;
		result = ((NI32) -1);
	}
	goto LA2_;
	LA5_: ;
	{
		result = fileInfoIdx_3HRSVgYDcnQTolSZGx1zjA(conf, fullPath);
	}
	LA2_: ;
	return result;
}