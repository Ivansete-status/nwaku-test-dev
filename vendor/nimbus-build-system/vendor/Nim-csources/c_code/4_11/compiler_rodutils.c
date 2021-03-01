/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NIM_CHAR TY_O0bnt9anuBewVU3B6Zou3SQ[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(void, hexchar_AQ39b2vc2IkLN3FY9bhdTqCg)(NIM_CHAR c0, NI* xi0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, encodevintaux_UxDO4XNnIGIEXt1v5wvZJQ_2)(NI x0, NimStringDesc** result0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(void, encodevbiggestintaux_nNFWlW1IRaHQroAl4mzSKg_2)(NI64 x0, NimStringDesc** result0);
STRING_LITERAL(T_mZLUkjbotQF2WK9bQcNKBCA_2, "", 0);
STRING_LITERAL(T_mZLUkjbotQF2WK9bQcNKBCA_3, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(T_mZLUkjbotQF2WK9bQcNKBCA_4, "NAN", 3);
STRING_LITERAL(T_mZLUkjbotQF2WK9bQcNKBCA_5, "0.0", 3);
STRING_LITERAL(T_mZLUkjbotQF2WK9bQcNKBCA_6, "INF", 3);
STRING_LITERAL(T_mZLUkjbotQF2WK9bQcNKBCA_7, "-INF", 4);

N_NIMCALL(NI, decodevint_P9b8WkVDF9cqEDrYeG3xWGwQ)(NCSTRING s0, NI* pos0) {
	NI result0;
	NI i_9cV3UrBT9aoHlkZRInBVIgTA;
	NI sign_H9cQxu6gsYtEm1xd9a0GLrTQ;
	result0 = (NI)0;
	i_9cV3UrBT9aoHlkZRInBVIgTA = (*pos0);
	sign_H9cQxu6gsYtEm1xd9a0GLrTQ = ((NI) -1);
	{
		if (!((NU8)(s0[i_9cV3UrBT9aoHlkZRInBVIgTA]) == (NU8)(45))) goto LA3;
		i_9cV3UrBT9aoHlkZRInBVIgTA += ((NI) 1);
		sign_H9cQxu6gsYtEm1xd9a0GLrTQ = ((NI) 1);
	}
	LA3: ;
	result0 = ((NI) 0);
	{
		while (1) {
			switch (((NU8)(s0[i_9cV3UrBT9aoHlkZRInBVIgTA]))) {
			case 48 ... 57:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) (((NU8)(s0[i_9cV3UrBT9aoHlkZRInBVIgTA])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_9cV3UrBT9aoHlkZRInBVIgTA])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_9cV3UrBT9aoHlkZRInBVIgTA])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_9cV3UrBT9aoHlkZRInBVIgTA])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_9cV3UrBT9aoHlkZRInBVIgTA += ((NI) 1);
		}
	} LA5: ;
	result0 = (NI)((NU64)((NI)(result0 * sign_H9cQxu6gsYtEm1xd9a0GLrTQ)) - (NU64)(((NI) 5)));
	(*pos0) = i_9cV3UrBT9aoHlkZRInBVIgTA;
	return result0;
}

N_NIMCALL(void, hexchar_AQ39b2vc2IkLN3FY9bhdTqCg)(NIM_CHAR c0, NI* xi0) {
	switch (((NU8)(c0))) {
	case 48 ... 57:
	{
		(*xi0) = (NI)((NI)((NU64)((*xi0)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) (((NU8)(c0)))) - ((NI) 48)))));
	}
	break;
	case 97 ... 102:
	{
		(*xi0) = (NI)((NI)((NU64)((*xi0)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c0)))) - ((NI) 97)))) + ((NI) 10)))));
	}
	break;
	case 65 ... 70:
	{
		(*xi0) = (NI)((NI)((NU64)((*xi0)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c0)))) - ((NI) 65)))) + ((NI) 10)))));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, decodestr_STVN8cb52NB3wWUNHppyDQ)(NCSTRING s0, NI* pos0) {
	NimStringDesc* result0;
	NI i0;
	result0 = (NimStringDesc*)0;
	i0 = (*pos0);
	result0 = copyString(((NimStringDesc*) &T_mZLUkjbotQF2WK9bQcNKBCA_2));
	{
		while (1) {
			switch (((NU8)(s0[i0]))) {
			case 92:
			{
				NI xi0;
				i0 += ((NI) 3);
				xi0 = ((NI) 0);
				hexchar_AQ39b2vc2IkLN3FY9bhdTqCg(s0[(NI)(i0 - ((NI) 2))], (&xi0));
				hexchar_AQ39b2vc2IkLN3FY9bhdTqCg(s0[(NI)(i0 - ((NI) 1))], (&xi0));
				result0 = addChar(result0, ((NIM_CHAR) (((NI) (xi0)))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				result0 = addChar(result0, s0[i0]);
				i0 += ((NI) 1);
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*pos0) = i0;
	return result0;
}

N_NIMCALL(NI64, decodevbiggestint_5JGKp2eBU7Vp9cFMYv9bssUA)(NCSTRING s0, NI* pos0) {
	NI64 result0;
	NI i_1P3GUp8dNC2IlQB2ZC7L1w;
	NI sign_euY9ct2bU6IxDMSaCKlpidw;
	result0 = (NI64)0;
	i_1P3GUp8dNC2IlQB2ZC7L1w = (*pos0);
	sign_euY9ct2bU6IxDMSaCKlpidw = ((NI) -1);
	{
		if (!((NU8)(s0[i_1P3GUp8dNC2IlQB2ZC7L1w]) == (NU8)(45))) goto LA3;
		i_1P3GUp8dNC2IlQB2ZC7L1w += ((NI) 1);
		sign_euY9ct2bU6IxDMSaCKlpidw = ((NI) 1);
	}
	LA3: ;
	result0 = IL64(0);
	{
		while (1) {
			switch (((NU8)(s0[i_1P3GUp8dNC2IlQB2ZC7L1w]))) {
			case 48 ... 57:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) (((NU8)(s0[i_1P3GUp8dNC2IlQB2ZC7L1w])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_1P3GUp8dNC2IlQB2ZC7L1w])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_1P3GUp8dNC2IlQB2ZC7L1w])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_1P3GUp8dNC2IlQB2ZC7L1w])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_1P3GUp8dNC2IlQB2ZC7L1w += ((NI) 1);
		}
	} LA5: ;
	result0 = (NI64)((NU64)((NI64)(result0 * ((NI64) (sign_euY9ct2bU6IxDMSaCKlpidw)))) - (NU64)(IL64(5)));
	(*pos0) = i_1P3GUp8dNC2IlQB2ZC7L1w;
	return result0;
}

N_NIMCALL(void, encodevintaux_UxDO4XNnIGIEXt1v5wvZJQ_2)(NI x0, NimStringDesc** result0) {
	NIM_CHAR d_ax9bS9bsAPVgC4ahHddm4Hcw;
	NI v_gBdlxiROIAt5LFmlJ8v8kg;
	NI rem_yreReHvXxN1M69b1CTWIVEg;
	NI idx_qCyVzkN9bJtLyqCbx9cCK6wA;
	d_ax9bS9bsAPVgC4ahHddm4Hcw = (NIM_CHAR)0;
	v_gBdlxiROIAt5LFmlJ8v8kg = x0;
	rem_yreReHvXxN1M69b1CTWIVEg = (NI)(v_gBdlxiROIAt5LFmlJ8v8kg % ((NI) 190));
	{
		if (!(((NI) (rem_yreReHvXxN1M69b1CTWIVEg)) < ((NI) 0))) goto LA3;
		(*result0) = addChar((*result0), 45);
		v_gBdlxiROIAt5LFmlJ8v8kg = ((NI64)-((NI)(v_gBdlxiROIAt5LFmlJ8v8kg / ((NI) 190))));
		rem_yreReHvXxN1M69b1CTWIVEg = ((NI64)-(((NI) (rem_yreReHvXxN1M69b1CTWIVEg))));
	}
	goto LA1;
	LA3: ;
	{
		v_gBdlxiROIAt5LFmlJ8v8kg = (NI)(v_gBdlxiROIAt5LFmlJ8v8kg / ((NI) 190));
	}
	LA1: ;
	idx_qCyVzkN9bJtLyqCbx9cCK6wA = ((NI) (rem_yreReHvXxN1M69b1CTWIVEg));
	{
		if (!(idx_qCyVzkN9bJtLyqCbx9cCK6wA < ((NI) 62))) goto LA8;
		d_ax9bS9bsAPVgC4ahHddm4Hcw = ((NimStringDesc*) &T_mZLUkjbotQF2WK9bQcNKBCA_3)->data[idx_qCyVzkN9bJtLyqCbx9cCK6wA];
	}
	goto LA6;
	LA8: ;
	{
		d_ax9bS9bsAPVgC4ahHddm4Hcw = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_qCyVzkN9bJtLyqCbx9cCK6wA - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_gBdlxiROIAt5LFmlJ8v8kg == ((NI) 0)))) goto LA13;
		encodevintaux_UxDO4XNnIGIEXt1v5wvZJQ_2(v_gBdlxiROIAt5LFmlJ8v8kg, result0);
	}
	LA13: ;
	(*result0) = addChar((*result0), d_ax9bS9bsAPVgC4ahHddm4Hcw);
}

N_NIMCALL(void, encodevint_UxDO4XNnIGIEXt1v5wvZJQ)(NI x0, NimStringDesc** result0) {
	encodevintaux_UxDO4XNnIGIEXt1v5wvZJQ_2((NI)((NU64)(x0) + (NU64)(((NI) 5))), result0);
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_xisfYYsxrgBS84v5yB2OvQ)(NF f0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		if (!!((f0 == f0))) goto LA3;
		result0 = copyString(((NimStringDesc*) &T_mZLUkjbotQF2WK9bQcNKBCA_4));
	}
	goto LA1;
	LA3: ;
	{
		if (!(f0 == 0.0)) goto LA6;
		result0 = copyString(((NimStringDesc*) &T_mZLUkjbotQF2WK9bQcNKBCA_5));
	}
	goto LA1;
	LA6: ;
	{
		if (!(f0 == ((NF)(5.0000000000000000e-01) * (NF)(f0)))) goto LA9;
		{
			if (!(0.0 < f0)) goto LA13;
			result0 = copyString(((NimStringDesc*) &T_mZLUkjbotQF2WK9bQcNKBCA_6));
		}
		goto LA11;
		LA13: ;
		{
			result0 = copyString(((NimStringDesc*) &T_mZLUkjbotQF2WK9bQcNKBCA_7));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY_O0bnt9anuBewVU3B6Zou3SQ buf0;
		memset((void*)buf0, 0, sizeof(buf0));
		sprintf(((NCSTRING) (buf0)), "%#.16e", f0);
		result0 = cstrToNimstr(((NCSTRING) (buf0)));
	}
	LA1: ;
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, encodestr_fnpFTBPI8YDkXyVTnD89aFw)(NimStringDesc* s0, NimStringDesc** result0) {
	{
		NI i_PBwd3DD3u6OiFWDkyH9agLQ;
		NI HEX3Atmp_PhIPIaQU9a9bOhOesP9aoJ9bsQ;
		NI res_PRc9cj8OGXk9a9bVEGmJnelyw;
		i_PBwd3DD3u6OiFWDkyH9agLQ = (NI)0;
		HEX3Atmp_PhIPIaQU9a9bOhOesP9aoJ9bsQ = (NI)0;
		HEX3Atmp_PhIPIaQU9a9bOhOesP9aoJ9bsQ = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
		res_PRc9cj8OGXk9a9bVEGmJnelyw = ((NI) 0);
		{
			while (1) {
				if (!(res_PRc9cj8OGXk9a9bVEGmJnelyw <= HEX3Atmp_PhIPIaQU9a9bOhOesP9aoJ9bsQ)) goto LA3;
				i_PBwd3DD3u6OiFWDkyH9agLQ = res_PRc9cj8OGXk9a9bVEGmJnelyw;
				switch (((NU8)(s0->data[i_PBwd3DD3u6OiFWDkyH9agLQ]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result0) = addChar((*result0), s0->data[i_PBwd3DD3u6OiFWDkyH9agLQ]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					LOC6 = (NimStringDesc*)0;
					LOC7 = (NimStringDesc*)0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s0->data[i_PBwd3DD3u6OiFWDkyH9agLQ])))), ((NI) 2));
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result0) = resizeString((*result0), LOC6->Sup.len + 0);
appendString((*result0), LOC6);
				}
				break;
				}
				res_PRc9cj8OGXk9a9bVEGmJnelyw += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, encodevbiggestintaux_nNFWlW1IRaHQroAl4mzSKg_2)(NI64 x0, NimStringDesc** result0) {
	NIM_CHAR d_DGZaC4dSJrtTmfDJxRaSHQ;
	NI64 v_PoOal0oJuCyU9cyVMvHC7Nw;
	NI64 rem_9cy0ePoTK9b9amnMIaBg9a9a6rw;
	NI idx_FZVuWobgewRpMbjCfRJKpw;
	d_DGZaC4dSJrtTmfDJxRaSHQ = (NIM_CHAR)0;
	v_PoOal0oJuCyU9cyVMvHC7Nw = x0;
	rem_9cy0ePoTK9b9amnMIaBg9a9a6rw = (NI64)(v_PoOal0oJuCyU9cyVMvHC7Nw % IL64(190));
	{
		if (!(((NI) (rem_9cy0ePoTK9b9amnMIaBg9a9a6rw)) < ((NI) 0))) goto LA3;
		(*result0) = addChar((*result0), 45);
		v_PoOal0oJuCyU9cyVMvHC7Nw = -((NI64)(v_PoOal0oJuCyU9cyVMvHC7Nw / IL64(190)));
		rem_9cy0ePoTK9b9amnMIaBg9a9a6rw = -(((NI64) (rem_9cy0ePoTK9b9amnMIaBg9a9a6rw)));
	}
	goto LA1;
	LA3: ;
	{
		v_PoOal0oJuCyU9cyVMvHC7Nw = (NI64)(v_PoOal0oJuCyU9cyVMvHC7Nw / IL64(190));
	}
	LA1: ;
	idx_FZVuWobgewRpMbjCfRJKpw = ((NI) (rem_9cy0ePoTK9b9amnMIaBg9a9a6rw));
	{
		if (!(idx_FZVuWobgewRpMbjCfRJKpw < ((NI) 62))) goto LA8;
		d_DGZaC4dSJrtTmfDJxRaSHQ = ((NimStringDesc*) &T_mZLUkjbotQF2WK9bQcNKBCA_3)->data[idx_FZVuWobgewRpMbjCfRJKpw];
	}
	goto LA6;
	LA8: ;
	{
		d_DGZaC4dSJrtTmfDJxRaSHQ = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_FZVuWobgewRpMbjCfRJKpw - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_PoOal0oJuCyU9cyVMvHC7Nw == IL64(0)))) goto LA13;
		encodevbiggestintaux_nNFWlW1IRaHQroAl4mzSKg_2(v_PoOal0oJuCyU9cyVMvHC7Nw, result0);
	}
	LA13: ;
	(*result0) = addChar((*result0), d_DGZaC4dSJrtTmfDJxRaSHQ);
}

N_NIMCALL(void, encodevbiggestint_nNFWlW1IRaHQroAl4mzSKg)(NI64 x0, NimStringDesc** result0) {
	encodevbiggestintaux_nNFWlW1IRaHQroAl4mzSKg_2((NI64)((NU64)(x0) + (NU64)(IL64(5))), result0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit000)(void) {
}
