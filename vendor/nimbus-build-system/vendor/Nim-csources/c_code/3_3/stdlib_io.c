/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <setjmp.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
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
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_EOFError_KGSY1JdrNB7Xi8KDhXFhSg tyObject_EOFError_KGSY1JdrNB7Xi8KDhXFhSg;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA Sup;
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
typedef NU8 tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg;
typedef NimStringDesc* tyArray_XL8FfPqMNtuU56fW9c8pBtQ[5];
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
struct tyObject_EOFError_KGSY1JdrNB7Xi8KDhXFhSg {
  tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw Sup;
};
typedef NU8 tyEnum_FileSeekPos_I9aQjuvWxs8BspGbxwsngWw;
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer_liBuPp3JMg9aDo4H9c6aGYGw)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, checkErr_k6YHNhIszu4WOtt3t6Q8yA)(FILE* f);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO_Hni24j8x088uhMYYX4qEGw)(NimStringDesc* msg) __attribute__((noreturn));
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_9bJmir28gOIZeFueZNVXx8A)(FILE** f, NimStringDesc* filename, tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle_MctBCgDcXWCh9ae9cV5npFvQ)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, close_Yruu81izRSfgSs1G6fzRxA_2)(FILE* f);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgio)(NCSTRING x, NCSTRING y);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll_1d5KxLvDJHJhYZhTybrveg)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize_bIybRWrtNUgtcFaW7cK0gA)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllFile_qxGOP7ksXpZKG9a4ziTWcMw)(FILE* file, NI64 len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer_liBuPp3JMg9aDo4H9c6aGYGw_2)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile_WQRi7TfXZmv1bYFtfaAVEQ)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllBuffer_1d5KxLvDJHJhYZhTybrveg_2)(FILE* file);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine_0MLjfHcSqXRQTAcgai9bjXQ)(FILE* f, NimStringDesc** line);
N_LIB_PRIVATE N_NOINLINE(void, raiseEOF_gQQcXyOjS6RDk3YCtIOvoQ)(void) __attribute__((noreturn));
N_LIB_PRIVATE N_NIMCALL(void, write_K9cOfFd4JHcDlmXKlD5CfyQ)(FILE* f, NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TNimType NTI_HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI_iLZrPn9anoh9ad1MmO0RczFw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_LEclZrWX2FQAodlapxGITw_;
extern TNimType NTI_KGSY1JdrNB7Xi8KDhXFhSg_;
TNimType NTI_2gIj3gQlK3HZJjQaYCP6ZQ_;
TNimType NTI_MAWzaQJYFu3mlxj0Ppxhmw_;
TNimType NTI_XBeRj4rw9bUuE7CB3DS1rgg_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_2, "errno: ", 7);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_3, " `", 2);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_4, "`", 1);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_5, "cannot write string to file", 27);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_6, "rb", 2);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_7, "wb", 2);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_8, "w+b", 3);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_9, "r+b", 3);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_10, "ab", 2);
NIM_CONST tyArray_XL8FfPqMNtuU56fW9c8pBtQ FormatOpen_iWZDMxVvD1FETfmW09b8gFQ = {((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_6),
((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_7),
((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_8),
((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_9),
((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_10)}
;
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_11, "cannot open: ", 13);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_13, "EOF reached", 11);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_15, "cannot set file position", 24);
STRING_LITERAL(TM_MnCJ0VAmeZ9aTATUB39cx60Q_16, "cannot retrieve file position", 29);

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

N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0) {
	int T5_;
	int T6_;
	flockfile(stdout);
	{
		NimStringDesc* s;
		NI i;
		s = (NimStringDesc*)0;
		i = ((NI) 0);
		{
			while (1) {
				int T4_;
				if (!(i < argsLen_0)) goto LA3;
				s = args[i];
				T4_ = (int)0;
				T4_ = fwrite(((void*) (nimToCStringConv(s))), (s ? s->Sup.len : 0), ((NI) 1), stdout);
				(void)(T4_);
				i += ((NI) 1);
			} LA3: ;
		}
	}
	T5_ = (int)0;
	T5_ = fwrite("\012", ((NI) 1), ((NI) 1), stdout);
	(void)(T5_);
	T6_ = (int)0;
	T6_ = fflush(stdout);
	(void)(T6_);
	funlockfile(stdout);
}

N_LIB_PRIVATE N_NIMCALL(int, getFileHandle_MctBCgDcXWCh9ae9cV5npFvQ)(FILE* f) {
	int result;
	result = (int)0;
	result = fileno(f);
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T1_);
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NOINLINE(void, raiseEIO_Hni24j8x088uhMYYX4qEGw)(NimStringDesc* msg) {
	tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw* e;
	NimStringDesc* T1_;
	e = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*)0;
	e = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI_HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw));
	(*e).Sup.Sup.Sup.m_type = (&NTI_iLZrPn9anoh9ad1MmO0RczFw_);
	T1_ = (NimStringDesc*)0;
	T1_ = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(msg);
	if (T1_) nimGCunrefNoCycle(T1_);
	asgnRef((void**) (&(*e).Sup.Sup.parent), NIM_NIL);
	raiseExceptionEx((Exception*)e, "IOError", "raiseEIO", "../lib/system/io.nim", 119);
}

N_LIB_PRIVATE N_NIMCALL(void, checkErr_k6YHNhIszu4WOtt3t6Q8yA)(FILE* f) {
	{
		int T3_;
		NimStringDesc* msg;
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		NCSTRING T8_;
		NimStringDesc* T9_;
		T3_ = (int)0;
		T3_ = ferror(f);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		T6_ = (NimStringDesc*)0;
		T7_ = (NimStringDesc*)0;
		T7_ = nimIntToStr(((NI) (errno)));
		T8_ = (NCSTRING)0;
		T8_ = strerror(errno);
		T9_ = (NimStringDesc*)0;
		T9_ = cstrToNimstr(T8_);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + (T9_ ? T9_->Sup.len : 0) + 10);
appendString(T6_, ((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_2));
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_3));
appendString(T6_, T9_);
appendString(T6_, ((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_4));
		msg = T6_;
		clearerr(f);
		raiseEIO_Hni24j8x088uhMYYX4qEGw(msg);
	}
	LA4_: ;
}

N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer_liBuPp3JMg9aDo4H9c6aGYGw)(FILE* f, void* buffer, NI len) {
	NI result;
	int T1_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = fwrite(buffer, ((NI) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	checkErr_k6YHNhIszu4WOtt3t6Q8yA(f);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, write_K9cOfFd4JHcDlmXKlD5CfyQ)(FILE* f, NimStringDesc* s) {
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = writeBuffer_liBuPp3JMg9aDo4H9c6aGYGw(f, ((void*) (nimToCStringConv(s))), ((NI) ((s ? s->Sup.len : 0))));
		if (!!((T3_ == (s ? s->Sup.len : 0)))) goto LA4_;
		raiseEIO_Hni24j8x088uhMYYX4qEGw(((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_5));
	}
	LA4_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, flushFile_Yruu81izRSfgSs1G6fzRxA)(FILE* f) {
	int T1_;
	T1_ = (int)0;
	T1_ = fflush(f);
	(void)(T1_);
}

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

N_LIB_PRIVATE N_NIMCALL(void, close_Yruu81izRSfgSs1G6fzRxA_2)(FILE* f) {
	{
		int T5_;
		if (!!((f == 0))) goto LA3_;
		T5_ = (int)0;
		T5_ = fclose(f);
		(void)(T5_);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_9bJmir28gOIZeFueZNVXx8A)(FILE** f, NimStringDesc* filename, tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {
	NIM_BOOL result;
	void* p;
{	result = (NIM_BOOL)0;
	p = fopen(nimToCStringConv(filename), nimToCStringConv(FormatOpen_iWZDMxVvD1FETfmW09b8gFQ[(mode)- 0]));
	{
		FILE* f2;
		struct stat res;
		if (!!((p == NIM_NIL))) goto LA3_;
		f2 = ((FILE*) (p));
		nimZeroMem((void*)(&res), sizeof(struct stat));
		{
			NIM_BOOL T7_;
			int T8_;
			int T9_;
			T7_ = (NIM_BOOL)0;
			T8_ = (int)0;
			T8_ = getFileHandle_MctBCgDcXWCh9ae9cV5npFvQ(f2);
			T9_ = (int)0;
			T9_ = fstat(T8_, (&res));
			T7_ = (((NI32) 0) <= T9_);
			if (!(T7_)) goto LA10_;
			T7_ = S_ISDIR(res.st_mode);
			LA10_: ;
			if (!T7_) goto LA11_;
			close_Yruu81izRSfgSs1G6fzRxA_2(f2);
			result = NIM_FALSE;
			goto BeforeRet_;
		}
		LA11_: ;
		result = NIM_TRUE;
		(*f) = ((FILE*) (p));
		{
			NIM_BOOL T15_;
			int T19_;
			T15_ = (NIM_BOOL)0;
			T15_ = (((NI) 0) < bufSize);
			if (!(T15_)) goto LA16_;
			T15_ = (bufSize <= ((NI) 2147483647));
			LA16_: ;
			if (!T15_) goto LA17_;
			T19_ = (int)0;
			T19_ = setvbuf((*f), NIM_NIL, _IOFBF, ((size_t) (((int) (bufSize)))));
			(void)(T19_);
		}
		goto LA13_;
		LA17_: ;
		{
			int T23_;
			if (!(bufSize == ((NI) 0))) goto LA21_;
			T23_ = (int)0;
			T23_ = setvbuf((*f), NIM_NIL, _IONBF, ((NI) 0));
			(void)(T23_);
		}
		goto LA13_;
		LA21_: ;
		LA13_: ;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(FILE*, open_CzQonrE2Bx859a05Iey1oOg)(NimStringDesc* filename, tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {
	FILE* result;
	result = (FILE*)0;
	{
		NIM_BOOL T3_;
		tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw* e;
		NimStringDesc* T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = open_9bJmir28gOIZeFueZNVXx8A(&result, filename, mode, bufSize);
		if (!!(T3_)) goto LA4_;
		e = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*)0;
		e = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI_HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw));
		(*e).Sup.Sup.Sup.m_type = (&NTI_iLZrPn9anoh9ad1MmO0RczFw_);
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T6_, ((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_11));
appendString(T6_, filename);
		asgnRef((void**) (&(*e).Sup.Sup.message), T6_);
		asgnRef((void**) (&(*e).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)e, "IOError", "open", "../lib/system/io.nim", 515);
	}
	LA4_: ;
	return result;
}

static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgio)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine_0MLjfHcSqXRQTAcgai9bjXQ)(FILE* f, NimStringDesc** line) {
	NIM_BOOL result;
	NI pos;
	NI sp;
{	result = (NIM_BOOL)0;
	pos = ((NI) 0);
	sp = ((((*line) ? (*line)->Sup.len : 0) >= ((NI) 80)) ? ((*line) ? (*line)->Sup.len : 0) : ((NI) 80));
	unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (sp))));
	{
		while (1) {
			NIM_BOOL fgetsSuccess;
			NCSTRING T6_;
			NIM_BOOL T7_;
			void* m;
			{
				NI i;
				NI i_2;
				i = (NI)0;
				i_2 = ((NI) 0);
				{
					while (1) {
						if (!(i_2 < sp)) goto LA5;
						i = i_2;
						(*line)->data[(NI)(pos + i)] = 10;
						i_2 += ((NI) 1);
					} LA5: ;
				}
			}
			T6_ = (NCSTRING)0;
			T6_ = fgets(((NCSTRING) ((&(*line)->data[pos]))), ((int) (sp)), f);
			T7_ = (NIM_BOOL)0;
			T7_ = eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgio(T6_, NIM_NIL);
			fgetsSuccess = !(T7_);
			{
				if (!!(fgetsSuccess)) goto LA10_;
				checkErr_k6YHNhIszu4WOtt3t6Q8yA(f);
			}
			LA10_: ;
			m = memchr(((void*) ((&(*line)->data[pos]))), ((int) 10), sp);
			{
				NI last;
				NIM_BOOL T35_;
				if (!!((m == NIM_NIL))) goto LA14_;
				last = (NI)(((NI) (ptrdiff_t) (m)) - ((NI) (ptrdiff_t) ((&(*line)->data[((NI) 0)]))));
				{
					NIM_BOOL T18_;
					NIM_BOOL T22_;
					T18_ = (NIM_BOOL)0;
					T18_ = (((NI) 0) < last);
					if (!(T18_)) goto LA19_;
					T18_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(13));
					LA19_: ;
					if (!T18_) goto LA20_;
					unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(last - ((NI) 1))))));
					T22_ = (NIM_BOOL)0;
					T22_ = (((NI) 1) < last);
					if (T22_) goto LA23_;
					T22_ = fgetsSuccess;
					LA23_: ;
					result = T22_;
					goto BeforeRet_;
				}
				goto LA16_;
				LA20_: ;
				{
					NIM_BOOL T25_;
					T25_ = (NIM_BOOL)0;
					T25_ = (((NI) 0) < last);
					if (!(T25_)) goto LA26_;
					T25_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(0));
					LA26_: ;
					if (!T25_) goto LA27_;
					{
						NIM_BOOL T31_;
						T31_ = (NIM_BOOL)0;
						T31_ = (last < (NI)((NI)(pos + sp) - ((NI) 1)));
						if (!(T31_)) goto LA32_;
						T31_ = !(((NU8)((*line)->data[(NI)(last + ((NI) 1))]) == (NU8)(0)));
						LA32_: ;
						if (!T31_) goto LA33_;
						last -= ((NI) 1);
					}
					LA33_: ;
				}
				goto LA16_;
				LA27_: ;
				LA16_: ;
				unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (last))));
				T35_ = (NIM_BOOL)0;
				T35_ = (((NI) 0) < last);
				if (T35_) goto LA36_;
				T35_ = fgetsSuccess;
				LA36_: ;
				result = T35_;
				goto BeforeRet_;
			}
			goto LA12_;
			LA14_: ;
			{
				sp -= ((NI) 1);
			}
			LA12_: ;
			pos += sp;
			sp = ((NI) 128);
			unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(pos + sp)))));
		}
	}
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize_bIybRWrtNUgtcFaW7cK0gA)(FILE* file) {
	NI64 result;
	NI64 oldPos;
	int T1_;
	int T2_;
	result = (NI64)0;
	oldPos = ftello(file);
	T1_ = (int)0;
	T1_ = fseeko(file, IL64(0), ((int) 2));
	(void)(T1_);
	result = ftello(file);
	T2_ = (int)0;
	T2_ = fseeko(file, oldPos, ((int) 0));
	(void)(T2_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, readBuffer_liBuPp3JMg9aDo4H9c6aGYGw_2)(FILE* f, void* buffer, NI len) {
	NI result;
	result = (NI)0;
	result = fread(buffer, ((NI) 1), ((size_t) (len)), f);
	{
		if (!!((result == ((NI) (len))))) goto LA3_;
		checkErr_k6YHNhIszu4WOtt3t6Q8yA(f);
	}
	LA3_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile_WQRi7TfXZmv1bYFtfaAVEQ)(FILE* f) {
	NIM_BOOL result;
	int c;
	int T1_;
{	result = (NIM_BOOL)0;
	c = fgetc(f);
	T1_ = (int)0;
	T1_ = ungetc(c, f);
	(void)(T1_);
	result = (c < ((NI32) 0));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllBuffer_1d5KxLvDJHJhYZhTybrveg_2)(FILE* file) {
	NimStringDesc* result;
	NimStringDesc* buffer;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	buffer = mnewString(((NI) 4000));
	{
		while (1) {
			NI bytesRead;
			bytesRead = readBuffer_liBuPp3JMg9aDo4H9c6aGYGw_2(file, ((void*) ((&buffer->data[((NI) 0)]))), ((NI) 4000));
			{
				if (!(bytesRead == ((NI) 4000))) goto LA5_;
				result = resizeString(result, (buffer ? buffer->Sup.len : 0) + 0);
appendString(result, buffer);
			}
			goto LA3_;
			LA5_: ;
			{
				buffer = setLengthStr(buffer, ((NI) (bytesRead)));
				result = resizeString(result, (buffer ? buffer->Sup.len : 0) + 0);
appendString(result, buffer);
				goto LA1;
			}
			LA3_: ;
		}
	} LA1: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllFile_qxGOP7ksXpZKG9a4ziTWcMw)(FILE* file, NI64 len) {
	NimStringDesc* result;
	NI bytes;
	result = (NimStringDesc*)0;
	result = mnewString(((NI) (len)));
	bytes = readBuffer_liBuPp3JMg9aDo4H9c6aGYGw_2(file, ((void*) ((&result->data[((NI) 0)]))), ((NI) (len)));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = endOfFile_WQRi7TfXZmv1bYFtfaAVEQ(file);
		if (!T3_) goto LA4_;
		{
			if (!(((NI64) (bytes)) < len)) goto LA8_;
			result = setLengthStr(result, ((NI) (bytes)));
		}
		LA8_: ;
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringDesc* T11_;
		T11_ = (NimStringDesc*)0;
		T11_ = readAllBuffer_1d5KxLvDJHJhYZhTybrveg_2(file);
		result = resizeString(result, (T11_ ? T11_->Sup.len : 0) + 0);
appendString(result, T11_);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll_1d5KxLvDJHJhYZhTybrveg)(FILE* file) {
	NimStringDesc* result;
	NI64 len;
	result = (NimStringDesc*)0;
	{
		if (!!((file == stdin))) goto LA3_;
		len = rawFileSize_bIybRWrtNUgtcFaW7cK0gA(file);
	}
	goto LA1_;
	LA3_: ;
	{
		len = IL64(-1);
	}
	LA1_: ;
	{
		if (!(IL64(0) < len)) goto LA8_;
		result = readAllFile_qxGOP7ksXpZKG9a4ziTWcMw(file, len);
	}
	goto LA6_;
	LA8_: ;
	{
		result = readAllBuffer_1d5KxLvDJHJhYZhTybrveg_2(file);
	}
	LA6_: ;
	return result;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readFile_cisNPM68uOwBvpMG5Dxmkg)(NimStringDesc* filename) {
	NimStringDesc* volatile result;
	FILE* f;
	result = (NimStringDesc*)0;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		TSafePoint TM_MnCJ0VAmeZ9aTATUB39cx60Q_12;
		T3_ = (NIM_BOOL)0;
		T3_ = open_9bJmir28gOIZeFueZNVXx8A(&f, filename, ((tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (!T3_) goto LA4_;
		pushSafePoint(&TM_MnCJ0VAmeZ9aTATUB39cx60Q_12);
		TM_MnCJ0VAmeZ9aTATUB39cx60Q_12.status = _setjmp(TM_MnCJ0VAmeZ9aTATUB39cx60Q_12.context);
		if (TM_MnCJ0VAmeZ9aTATUB39cx60Q_12.status == 0) {
			result = readAll_1d5KxLvDJHJhYZhTybrveg(f);
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			close_Yruu81izRSfgSs1G6fzRxA_2(f);
		}
		if (TM_MnCJ0VAmeZ9aTATUB39cx60Q_12.status != 0) reraiseException();
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw* e;
		NimStringDesc* T10_;
		e = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*)0;
		e = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI_HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw));
		(*e).Sup.Sup.Sup.m_type = (&NTI_iLZrPn9anoh9ad1MmO0RczFw_);
		T10_ = (NimStringDesc*)0;
		T10_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T10_, ((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_11));
appendString(T10_, filename);
		asgnRef((void**) (&(*e).Sup.Sup.message), T10_);
		asgnRef((void**) (&(*e).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)e, "IOError", "readFile", "../lib/system/io.nim", 600);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NOINLINE(void, raiseEOF_gQQcXyOjS6RDk3YCtIOvoQ)(void) {
	tyObject_EOFError_KGSY1JdrNB7Xi8KDhXFhSg* e;
	NimStringDesc* T1_;
	e = (tyObject_EOFError_KGSY1JdrNB7Xi8KDhXFhSg*)0;
	e = (tyObject_EOFError_KGSY1JdrNB7Xi8KDhXFhSg*) newObj((&NTI_LEclZrWX2FQAodlapxGITw_), sizeof(tyObject_EOFError_KGSY1JdrNB7Xi8KDhXFhSg));
	(*e).Sup.Sup.Sup.Sup.m_type = (&NTI_KGSY1JdrNB7Xi8KDhXFhSg_);
	T1_ = (NimStringDesc*)0;
	T1_ = (*e).Sup.Sup.Sup.message; (*e).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_13));
	if (T1_) nimGCunrefNoCycle(T1_);
	asgnRef((void**) (&(*e).Sup.Sup.Sup.parent), NIM_NIL);
	raiseExceptionEx((Exception*)e, "EOFError", "raiseEOF", "../lib/system/io.nim", 122);
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLine_PGfzVUaf8Lk0fKriu3lFnA)(FILE* f) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) 80));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = readLine_0MLjfHcSqXRQTAcgai9bjXQ(f, (&result));
		if (!!(T3_)) goto LA4_;
		raiseEOF_gQQcXyOjS6RDk3YCtIOvoQ();
	}
	LA4_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, writeFile_GICBsKQNBwuxEZi5V9aNhJw)(NimStringDesc* filename, NimStringDesc* content) {
	FILE* f;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		TSafePoint TM_MnCJ0VAmeZ9aTATUB39cx60Q_14;
		T3_ = (NIM_BOOL)0;
		T3_ = open_9bJmir28gOIZeFueZNVXx8A(&f, filename, ((tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg) 1), ((NI) -1));
		if (!T3_) goto LA4_;
		pushSafePoint(&TM_MnCJ0VAmeZ9aTATUB39cx60Q_14);
		TM_MnCJ0VAmeZ9aTATUB39cx60Q_14.status = _setjmp(TM_MnCJ0VAmeZ9aTATUB39cx60Q_14.context);
		if (TM_MnCJ0VAmeZ9aTATUB39cx60Q_14.status == 0) {
			write_K9cOfFd4JHcDlmXKlD5CfyQ(f, content);
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			close_Yruu81izRSfgSs1G6fzRxA_2(f);
		}
		if (TM_MnCJ0VAmeZ9aTATUB39cx60Q_14.status != 0) reraiseException();
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw* e;
		NimStringDesc* T10_;
		e = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*)0;
		e = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI_HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw));
		(*e).Sup.Sup.Sup.m_type = (&NTI_iLZrPn9anoh9ad1MmO0RczFw_);
		T10_ = (NimStringDesc*)0;
		T10_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T10_, ((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_11));
appendString(T10_, filename);
		asgnRef((void**) (&(*e).Sup.Sup.message), T10_);
		asgnRef((void**) (&(*e).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)e, "IOError", "writeFile", "../lib/system/io.nim", 613);
	}
	LA1_: ;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_eY5FsfnPXRu9ainulWcbK8A)(FILE** f, int filehandle, tyEnum_FileMode_ZJfK20XeZ9bv2j1pZjw9aswg mode) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	(*f) = fdopen(filehandle, nimToCStringConv(FormatOpen_iWZDMxVvD1FETfmW09b8gFQ[(mode)- 0]));
	result = !(((*f) == NIM_NIL));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, setFilePos_8cDvnozQLQHrXG8xYP9avhA)(FILE* f, NI64 pos, tyEnum_FileSeekPos_I9aQjuvWxs8BspGbxwsngWw relativeTo) {
	{
		int T3_;
		T3_ = (int)0;
		T3_ = fseeko(f, pos, ((int) (relativeTo)));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		raiseEIO_Hni24j8x088uhMYYX4qEGw(((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_15));
	}
	LA4_: ;
}

N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos_iME8e1dXpcM6GCcGzlXCoQ)(FILE* f) {
	NI64 result;
	result = (NI64)0;
	result = ftello(f);
	{
		if (!(result < IL64(0))) goto LA3_;
		raiseEIO_Hni24j8x088uhMYYX4qEGw(((NimStringDesc*) &TM_MnCJ0VAmeZ9aTATUB39cx60Q_16));
	}
	LA3_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, write_FvTGDxbkQe5nDIjG7jqgmg)(FILE* f, NimStringDesc** a, NI aLen_0) {
	{
		NimStringDesc* x;
		NI i;
		x = (NimStringDesc*)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < aLen_0)) goto LA3;
				x = a[i];
				write_K9cOfFd4JHcDlmXKlD5CfyQ(f, x);
				i += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2();
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioDatInit000)(void) {
static TNimNode TM_MnCJ0VAmeZ9aTATUB39cx60Q_0[1];
NTI_2gIj3gQlK3HZJjQaYCP6ZQ_.size = sizeof(int);
NTI_2gIj3gQlK3HZJjQaYCP6ZQ_.kind = 34;
NTI_2gIj3gQlK3HZJjQaYCP6ZQ_.base = 0;
NTI_2gIj3gQlK3HZJjQaYCP6ZQ_.flags = 3;
NTI_MAWzaQJYFu3mlxj0Ppxhmw_.size = sizeof(void*);
NTI_MAWzaQJYFu3mlxj0Ppxhmw_.kind = 18;
NTI_MAWzaQJYFu3mlxj0Ppxhmw_.base = 0;
NTI_MAWzaQJYFu3mlxj0Ppxhmw_.flags = 3;
NTI_MAWzaQJYFu3mlxj0Ppxhmw_.node = &TM_MnCJ0VAmeZ9aTATUB39cx60Q_0[0];
NTI_XBeRj4rw9bUuE7CB3DS1rgg_.size = sizeof(FILE*);
NTI_XBeRj4rw9bUuE7CB3DS1rgg_.kind = 21;
NTI_XBeRj4rw9bUuE7CB3DS1rgg_.base = (&NTI_MAWzaQJYFu3mlxj0Ppxhmw_);
NTI_XBeRj4rw9bUuE7CB3DS1rgg_.flags = 3;
}
