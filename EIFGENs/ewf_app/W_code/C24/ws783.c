/*
 * Code for class WSF_FILE_UTILITIES [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F783_118(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F783_119(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F783_120(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F783_121(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit783(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_FILE_UTILITIES}.new_file */
EIF_TYPED_VALUE F783_118 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_file";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 782, Current, 3, 1, 137);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(782, Current, 137);
	RTCC(arg1, 782, l_feature_name, 1, eif_new_type(254, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000DB, 0, 0); /* loc1 */
	tr1 = RTLNSMART(RTWCT(122, dtype, Dftype(Current)).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(121, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result != NULL) || (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 1000L)))) break;
		RTHOOK(5);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF8000132, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(306, 0x01).id);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 10L)));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4761, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(6,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5035, "append_character", loc2))(loc2, uw1x);
		RTHOOK(8);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5025, "append_integer", loc2))(loc2, ui4_1x);
		RTHOOK(9);
		ur1 = RTCCL(loc2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3982, "appended", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3011, "make_with_path", loc1))(loc1, ur1x);
		RTHOOK(10);
		RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
		ur1 = RTCCL(loc1);
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(121, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_opened_for_writing_if_set", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2089, "is_open_write", Result))(Result)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uw1
#undef arg1
}

/* {WSF_FILE_UTILITIES}.new_temporary_file */
EIF_TYPED_VALUE F783_119 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "new_temporary_file";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,loc3);
	RTLR(8,Current);
	RTLR(9,loc1);
	RTLR(10,Result);
	RTLIU(11);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 782, Current, 3, 3, 138);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(782, Current, 138);
	RTCC(arg1, 782, l_feature_name, 1, eif_new_type(216, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 782, l_feature_name, 2, eif_new_type(298, 0x00), 0x00);
	}
	if (arg3) {
		RTCC(arg3, 782, l_feature_name, 3, eif_new_type(298, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_valid", EX_PRE);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2919, "exists", arg1))(arg1)).it_b);
		if (tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2922, "is_writable", arg1))(arg1)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF8000132, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(306, 0x01).id);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4967, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF8000132, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(306, 0x01).id);
		tr2 = RTMS_EX_H("tmp",3,7630192);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4967, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(5);
	RTDBGAL(Current, 3, 0xF80000FE, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2900, "path", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(arg3 != NULL)) {
		RTHOOK(7);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5035, "append_character", loc2))(loc2, uw1x);
		RTHOOK(8);
		ur1 = RTCCL(arg3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(120, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4897, "append_string_general", loc2))(loc2, ur1x);
	}
	RTHOOK(9);
	RTDBGAL(Current, 1, 0xF80000FE, 0, 0); /* loc1 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3980, "extended", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(118, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_opened_for_writing_if_set", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2089, "is_open_write", Result))(Result)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef uw1
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_FILE_UTILITIES}.safe_filename */
EIF_TYPED_VALUE F783_120 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "safe_filename";
	RTEX;
	EIF_CHARACTER_32 loc1 = (EIF_CHARACTER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 782, Current, 3, 1, 139);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(782, Current, 139);
	RTCC(arg1, 782, l_feature_name, 1, eif_new_type(298, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4800, "count", arg1))(arg1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(303, 0x01).id);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4761, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x1C000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4764, "item", arg1))(arg1, ui4_1x)).it_c4);
		loc1 = (EIF_CHARACTER_32) tw1;
		RTHOOK(6);
		switch (loc1) {
			case (EIF_CHARACTER_8) '-':
			case (EIF_CHARACTER_8) '.':
			case (EIF_CHARACTER_8) '_':
				RTHOOK(7);
				tu4_1 = (EIF_NATURAL_32) loc1;
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4896, "append_code", Result))(Result, uu4_1x);
				break;
			case (EIF_CHARACTER_8) '0':
			case (EIF_CHARACTER_8) '1':
			case (EIF_CHARACTER_8) '2':
			case (EIF_CHARACTER_8) '3':
			case (EIF_CHARACTER_8) '4':
			case (EIF_CHARACTER_8) '5':
			case (EIF_CHARACTER_8) '6':
			case (EIF_CHARACTER_8) '7':
			case (EIF_CHARACTER_8) '8':
			case (EIF_CHARACTER_8) '9':
			case (EIF_CHARACTER_8) 'A':
			case (EIF_CHARACTER_8) 'B':
			case (EIF_CHARACTER_8) 'C':
			case (EIF_CHARACTER_8) 'D':
			case (EIF_CHARACTER_8) 'E':
			case (EIF_CHARACTER_8) 'F':
			case (EIF_CHARACTER_8) 'G':
			case (EIF_CHARACTER_8) 'H':
			case (EIF_CHARACTER_8) 'I':
			case (EIF_CHARACTER_8) 'J':
			case (EIF_CHARACTER_8) 'K':
			case (EIF_CHARACTER_8) 'L':
			case (EIF_CHARACTER_8) 'M':
			case (EIF_CHARACTER_8) 'N':
			case (EIF_CHARACTER_8) 'O':
			case (EIF_CHARACTER_8) 'P':
			case (EIF_CHARACTER_8) 'Q':
			case (EIF_CHARACTER_8) 'R':
			case (EIF_CHARACTER_8) 'S':
			case (EIF_CHARACTER_8) 'T':
			case (EIF_CHARACTER_8) 'U':
			case (EIF_CHARACTER_8) 'V':
			case (EIF_CHARACTER_8) 'W':
			case (EIF_CHARACTER_8) 'X':
			case (EIF_CHARACTER_8) 'Y':
			case (EIF_CHARACTER_8) 'Z':
			case (EIF_CHARACTER_8) 'a':
			case (EIF_CHARACTER_8) 'b':
			case (EIF_CHARACTER_8) 'c':
			case (EIF_CHARACTER_8) 'd':
			case (EIF_CHARACTER_8) 'e':
			case (EIF_CHARACTER_8) 'f':
			case (EIF_CHARACTER_8) 'g':
			case (EIF_CHARACTER_8) 'h':
			case (EIF_CHARACTER_8) 'i':
			case (EIF_CHARACTER_8) 'j':
			case (EIF_CHARACTER_8) 'k':
			case (EIF_CHARACTER_8) 'l':
			case (EIF_CHARACTER_8) 'm':
			case (EIF_CHARACTER_8) 'n':
			case (EIF_CHARACTER_8) 'o':
			case (EIF_CHARACTER_8) 'p':
			case (EIF_CHARACTER_8) 'q':
			case (EIF_CHARACTER_8) 'r':
			case (EIF_CHARACTER_8) 's':
			case (EIF_CHARACTER_8) 't':
			case (EIF_CHARACTER_8) 'u':
			case (EIF_CHARACTER_8) 'v':
			case (EIF_CHARACTER_8) 'w':
			case (EIF_CHARACTER_8) 'x':
			case (EIF_CHARACTER_8) 'y':
			case (EIF_CHARACTER_8) 'z':
				RTHOOK(8);
				tu4_1 = (EIF_NATURAL_32) loc1;
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4896, "append_code", Result))(Result, uu4_1x);
				break;
			default:
				RTHOOK(9);
				switch (loc1) {
					case (EIF_CHARACTER_8) '\300':
						RTHOOK(10);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\301':
						RTHOOK(11);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\302':
						RTHOOK(12);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\303':
						RTHOOK(13);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\304':
						RTHOOK(14);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\305':
						RTHOOK(15);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\307':
						RTHOOK(16);
						uc1 = (EIF_CHARACTER_8) 'C';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\310':
						RTHOOK(17);
						uc1 = (EIF_CHARACTER_8) 'E';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\311':
						RTHOOK(18);
						uc1 = (EIF_CHARACTER_8) 'E';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\312':
						RTHOOK(19);
						uc1 = (EIF_CHARACTER_8) 'E';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\313':
						RTHOOK(20);
						uc1 = (EIF_CHARACTER_8) 'E';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\314':
						RTHOOK(21);
						uc1 = (EIF_CHARACTER_8) 'I';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\315':
						RTHOOK(22);
						uc1 = (EIF_CHARACTER_8) 'I';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\316':
						RTHOOK(23);
						uc1 = (EIF_CHARACTER_8) 'I';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\317':
						RTHOOK(24);
						uc1 = (EIF_CHARACTER_8) 'I';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\322':
						RTHOOK(25);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\323':
						RTHOOK(26);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\324':
						RTHOOK(27);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\325':
						RTHOOK(28);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\326':
						RTHOOK(29);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\331':
						RTHOOK(30);
						uc1 = (EIF_CHARACTER_8) 'U';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\332':
						RTHOOK(31);
						uc1 = (EIF_CHARACTER_8) 'U';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\333':
						RTHOOK(32);
						uc1 = (EIF_CHARACTER_8) 'U';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\334':
						RTHOOK(33);
						uc1 = (EIF_CHARACTER_8) 'U';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\335':
						RTHOOK(34);
						uc1 = (EIF_CHARACTER_8) 'Y';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\340':
						RTHOOK(35);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\341':
						RTHOOK(36);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\342':
						RTHOOK(37);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\343':
						RTHOOK(38);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\344':
						RTHOOK(39);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\345':
						RTHOOK(40);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\347':
						RTHOOK(41);
						uc1 = (EIF_CHARACTER_8) 'c';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\350':
						RTHOOK(42);
						uc1 = (EIF_CHARACTER_8) 'e';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\351':
						RTHOOK(43);
						uc1 = (EIF_CHARACTER_8) 'e';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\352':
						RTHOOK(44);
						uc1 = (EIF_CHARACTER_8) 'e';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\353':
						RTHOOK(45);
						uc1 = (EIF_CHARACTER_8) 'e';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\354':
						RTHOOK(46);
						uc1 = (EIF_CHARACTER_8) 'i';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\355':
						RTHOOK(47);
						uc1 = (EIF_CHARACTER_8) 'i';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\356':
						RTHOOK(48);
						uc1 = (EIF_CHARACTER_8) 'i';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\357':
						RTHOOK(49);
						uc1 = (EIF_CHARACTER_8) 'i';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\360':
						RTHOOK(50);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\362':
						RTHOOK(51);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\363':
						RTHOOK(52);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\364':
						RTHOOK(53);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\365':
						RTHOOK(54);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\366':
						RTHOOK(55);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\371':
						RTHOOK(56);
						uc1 = (EIF_CHARACTER_8) 'u';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\372':
						RTHOOK(57);
						uc1 = (EIF_CHARACTER_8) 'u';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\373':
						RTHOOK(58);
						uc1 = (EIF_CHARACTER_8) 'u';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\374':
						RTHOOK(59);
						uc1 = (EIF_CHARACTER_8) 'u';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\375':
						RTHOOK(60);
						uc1 = (EIF_CHARACTER_8) 'y';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\377':
						RTHOOK(61);
						uc1 = (EIF_CHARACTER_8) 'y';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
					default:
						RTHOOK(62);
						uc1 = (EIF_CHARACTER_8) '-';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1854, "extend", Result))(Result, uc1x);
						break;
				}
				break;
		}
		RTHOOK(63);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(64);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg1
}

/* {WSF_FILE_UTILITIES}.new_file_opened_for_writing */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_TYPED_VALUE F783_121 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_file_opened_for_writing";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	RTS_SDX;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,saved_except);
	RTLIU(4);
	RTXSLS;
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 782, Current, 1, 1, 140);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(782, Current, 140);
	RTCC(arg1, 782, l_feature_name, 1, RTWCT(122, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2087, "exists", arg1))(arg1)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(3);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3057, "open_write", arg1))(arg1);
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2089, "is_open_write", arg1))(arg1)).it_b);
			if (tb1) {
				RTHOOK(5);
				RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(arg1);
			} else {
				RTHOOK(6);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2095, "is_closed", arg1))(arg1)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(7);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2097, "close", arg1))(arg1);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT(NULL, EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2089, "is_open_write", Result))(Result)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(9);
	RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(4);
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit783 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
