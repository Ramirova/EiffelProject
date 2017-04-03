/*
 * Code for class WGI_STANDALONE_RESPONSE_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F97_1430(EIF_REFERENCE);
extern EIF_TYPED_VALUE F97_1431(EIF_REFERENCE);
extern EIF_TYPED_VALUE F97_1432(EIF_REFERENCE);
extern void F97_1433(EIF_REFERENCE);
extern void F97_1434(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F97_1435(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F97_1436(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit97(void);

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

/* {WGI_STANDALONE_RESPONSE_STREAM}.is_http_version_1_0 */
EIF_TYPED_VALUE F97_1430 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1323,Dtype(Current)));
	return r;
}


/* {WGI_STANDALONE_RESPONSE_STREAM}.is_persistent_connection_supported */
EIF_TYPED_VALUE F97_1431 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1324,Dtype(Current)));
	return r;
}


/* {WGI_STANDALONE_RESPONSE_STREAM}.is_persistent_connection_requested */
EIF_TYPED_VALUE F97_1432 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1325,Dtype(Current)));
	return r;
}


/* {WGI_STANDALONE_RESPONSE_STREAM}.set_http_version_1_0 */
void F97_1433 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_http_version_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 96, Current, 0, 0, 1413);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(96, Current, 1413);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 1323, 0x04000000, 1); /* is_http_version_1_0 */
	*(EIF_BOOLEAN *)(Current + RTWA(1323, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WGI_STANDALONE_RESPONSE_STREAM}.set_is_persistent_connection_supported */
void F97_1434 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_persistent_connection_supported";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 96, Current, 0, 1, 1414);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(96, Current, 1414);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 1324, 0x04000000, 1); /* is_persistent_connection_supported */
	*(EIF_BOOLEAN *)(Current + RTWA(1324, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WGI_STANDALONE_RESPONSE_STREAM}.set_is_persistent_connection_requested */
void F97_1435 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_persistent_connection_requested";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 96, Current, 0, 1, 1415);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(96, Current, 1415);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 1325, 0x04000000, 1); /* is_persistent_connection_requested */
	*(EIF_BOOLEAN *)(Current + RTWA(1325, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WGI_STANDALONE_RESPONSE_STREAM}.put_header_text */
void F97_1436 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_header_text";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,loc1);
	RTLR(6,loc3);
	RTLR(7,loc2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 96, Current, 5, 1, 1416);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(96, Current, 1416);
	RTCC(arg1, 96, l_feature_name, 1, eif_new_type(300, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_has_single_ending_crlf", EX_PRE);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4886, "count", arg1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4886, "count", arg1));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L));
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4886, "count", arg1));
			ui4_2 = ti4_2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(1,1);
			tr2 = RTMS_EX_H("\015\012",2,3338);
			ur1 = tr2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4872, "same_string", tr1))(tr1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_text_does_not_has_ending_crlf_crlf", EX_PRE);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4886, "count", arg1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 4L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4886, "count", arg1));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 4L));
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4886, "count", arg1));
			ui4_2 = ti4_2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(2,1);
			tr2 = RTMS_EX_H("\015\012\015\012",4,218762506);
			ur1 = tr2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4872, "same_string", tr1))(tr1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("status_set", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1304, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("header_not_committed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1321, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF8000025, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1316, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(6);
	RTDBGAL(Current, 3, 0xF800012F, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(303, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4857, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(6,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	tr1 = RTMS_EX_H("\012Connection:",12,1170994746);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4811, "substring_index", loc3))(loc3, ur1x, ui4_1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1324, dtype));
	if (tb1) {
		RTHOOK(9);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1325, dtype));
		if (tb1) {
			RTHOOK(10);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1323, dtype));
			if (tb1) {
				RTHOOK(11);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(12);
					tr1 = RTMS_EX_H("Connection: keep-alive",22,2134188645);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
					RTHOOK(13);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(593, "crlf", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
				}
			}
		} else {
			RTHOOK(14);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1323, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) !tb1)) {
				RTHOOK(15);
				tr1 = RTMS_EX_H("Connection: close",17,955446373);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(593, "crlf", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
			}
		}
	} else {
		RTHOOK(17);
		if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(18);
			RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
			uc1 = (EIF_CHARACTER_8) '\015';
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 12L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4865, "index_of", loc3))(loc3, uc1x, ui4_1x)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(19);
		if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(20);
			RTDBGAL(Current, 2, 0xF800012F, 0, 0); /* loc2 */
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 12L));
			ui4_2 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", loc3))(loc3, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(21);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4905, "adjust", loc2))(loc2);
			RTHOOK(22);
			tr1 = RTMS_EX_H("close",5,1820003685);
			ur1 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4803, "is_case_insensitive_equal_general", loc2))(loc2, ur1x)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(23);
				tr1 = RTMS_EX_H("Connection: close",17,955446373);
				ur1 = tr1;
				ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
				ui4_2 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4914, "replace_substring", loc3))(loc3, ur1x, ui4_1x, ui4_2x);
			}
		} else {
			RTHOOK(24);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1323, dtype));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(25);
				tr1 = RTMS_EX_H("Connection: close",17,955446373);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
				RTHOOK(26);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(593, "crlf", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
			} else {
				RTHOOK(27);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1325, dtype));
				if (tb1) {
					RTHOOK(28);
					tr1 = RTMS_EX_H("Connection: close",17,955446373);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
					RTHOOK(29);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(593, "crlf", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
				}
			}
		}
	}
	RTHOOK(30);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(593, "crlf", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4930, "append", loc3))(loc3, ur1x);
	RTHOOK(31);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(581, "put_string", loc1))(loc1, ur1x);
	RTHOOK(32);
	RTDBGAA(Current, dtype, 1321, 0x04000000, 1); /* header_committed */
	*(EIF_BOOLEAN *)(Current + RTWA(1321, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(33);
		RTCT("status_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1304, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(34);
		RTCT("status_committed", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1322, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(35);
		RTCT("header_committed", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1321, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(36);
		RTCT("message_writable", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1303, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

void EIF_Minit97 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
