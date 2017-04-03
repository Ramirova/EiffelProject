/*
 * Code for class WSF_VALUE_UTILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F317_6818(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F317_6819(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F317_6820(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F317_6821(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F317_6822(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit317(void);

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

/* {WSF_VALUE_UTILITIES}.add_utf_8_string_value_to_table */
void F317_6818 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "add_utf_8_string_value_to_table";
	RTEX;
	struct eif_ex_16 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(16, 0x00).id);
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLR(6,tr1);
	RTLR(7,loc3);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLR(10,Current);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 316, Current, 3, 3, 12208);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(316, Current, 12208);
	RTCC(arg1, 316, l_feature_name, 1, eif_new_type(300, 0x01), 0x01);
	RTCC(arg2, 316, l_feature_name, 2, eif_new_type(300, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,246,0xFF01,298,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 316, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF8000130, 0, 0); /* loc2 */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(287, "utf_8_string_8_to_string_32", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF8000130, 0, 0); /* loc3 */
	ur1 = RTCCL(arg2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(287, "utf_8_string_8_to_string_32", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc2);
	ur3 = RTCCL(loc3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5176, dtype))(Current, ur2x, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr1);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_VALUE_UTILITIES}.add_percent_encoded_string_value_to_table */
void F317_6819 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "add_percent_encoded_string_value_to_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 316, Current, 1, 3, 12209);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(316, Current, 12209);
	RTCC(arg1, 316, l_feature_name, 1, eif_new_type(300, 0x01), 0x01);
	RTCC(arg2, 316, l_feature_name, 2, eif_new_type(300, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,246,0xFF01,298,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 316, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000FA, 0, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5177, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3871, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ur2 = RTCCL(loc1);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_VALUE_UTILITIES}.add_value_to_table */
void F317_6820 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "add_value_to_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(24);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc6);
	RTLR(8,loc10);
	RTLR(9,ur1);
	RTLR(10,loc12);
	RTLR(11,loc5);
	RTLR(12,loc3);
	RTLR(13,loc7);
	RTLR(14,loc11);
	RTLR(15,loc13);
	RTLR(16,ur2);
	RTLR(17,loc14);
	RTLR(18,loc15);
	RTLR(19,loc16);
	RTLR(20,Current);
	RTLR(21,tr2);
	RTLR(22,tr3);
	RTLR(23,tr4);
	RTLIU(24);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	
	RTEAA(l_feature_name, 316, Current, 16, 3, 12205);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(316, Current, 12205);
	RTCC(arg1, 316, l_feature_name, 1, eif_new_type(298, 0x01), 0x01);
	RTCC(arg2, 316, l_feature_name, 2, eif_new_type(246, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,246,0xFF01,298,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 316, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000132, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4820, "as_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF800012C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3872, "url_encoded_name", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
	uw1 = (EIF_CHARACTER_32) 91U;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4765, "index_of", loc1))(loc1, uw1x, ui4_1x)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 4, 0xF8000132, 0, 0); /* loc4 */
	loc4 = (EIF_REFERENCE) RTCCL(loc1);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
		uw1 = (EIF_CHARACTER_32) 93U;
		ui4_1 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4765, "index_of", loc1))(loc1, uw1x, ui4_1x)).it_i4);
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc9 > loc8)) {
			RTHOOK(8);
			RTDBGAL(Current, 4, 0xF8000132, 0, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = (EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			RTDBGAL(Current, 6, 0xF8000132, 0, 0); /* loc6 */
			ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4992, "count", loc1));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4903, "left_adjust", loc6))(loc6);
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4904, "right_adjust", loc6))(loc6);
			RTHOOK(12);
			RTDBGAL(Current, 10, 0xF80000F9, 0, 0); /* loc10 */
			tr1 = RTLN(eif_new_type(249, 0x01).id);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3898, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(12,1);
			loc10 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3910, "name", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1861, "item", arg3))(arg3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc12 = RTCCL(tr1);
			loc12 = RTRV(eif_new_type(249, 0x01),loc12);
			if (EIF_TEST(loc12)) {
				RTHOOK(14);
				RTDBGAL(Current, 10, 0xF80000F9, 0, 0); /* loc10 */
				loc10 = (EIF_REFERENCE) RTCCL(loc12);
			}
			RTHOOK(15);
			RTDBGAL(Current, 5, 0xF8000132, 0, 0); /* loc5 */
			ui4_1 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
			ui4_2 = (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", loc1))(loc1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(16);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4903, "left_adjust", loc5))(loc5);
			RTHOOK(17);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4904, "right_adjust", loc5))(loc5);
			RTHOOK(18);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", loc5))(loc5)).it_b);
			if (tb1) {
				RTHOOK(19);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3904, "count", loc10))(loc10)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5025, "append_integer", loc5))(loc5, ui4_1x);
			}
			RTHOOK(20);
			RTDBGAL(Current, 3, 0xF80000F6, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) RTCCL(loc10);
			RTHOOK(21);
			RTDBGAL(Current, 7, 0xF8000132, 0, 0); /* loc7 */
			tr1 = RTLN(eif_new_type(306, 0x01).id);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4966, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(21,1);
			loc7 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(22);
			uw1 = (EIF_CHARACTER_32) 91U;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5035, "append_character", loc7))(loc7, uw1x);
			RTHOOK(23);
			ur1 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5022, "append", loc7))(loc7, ur1x);
			RTHOOK(24);
			uw1 = (EIF_CHARACTER_32) 93U;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5035, "append_character", loc7))(loc7, uw1x);
			for (;;) {
				RTHOOK(25);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", loc6))(loc6)).it_b);
				if (tb1) break;
				RTHOOK(26);
				RTDBGAL(Current, 11, 0xF80000F9, 0, 0); /* loc11 */
				loc11 = (EIF_REFERENCE) RTCCL(loc10);
				RTHOOK(27);
				RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
				uw1 = (EIF_CHARACTER_32) 91U;
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4765, "index_of", loc6))(loc6, uw1x, ui4_1x)).it_i4);
				loc8 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(28);
				if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(29);
					RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
					uw1 = (EIF_CHARACTER_32) 93U;
					ui4_1 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4765, "index_of", loc6))(loc6, uw1x, ui4_1x)).it_i4);
					loc9 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(30);
					if ((EIF_BOOLEAN) (loc9 > loc8)) {
						RTHOOK(31);
						ur1 = RTCCL(loc5);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3903, "value", loc11))(loc11, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc13 = RTCCL(tr1);
						loc13 = RTRV(eif_new_type(249, 0x01),loc13);
						if (EIF_TEST(loc13)) {
							RTHOOK(32);
							RTDBGAL(Current, 10, 0xF80000F9, 0, 0); /* loc10 */
							loc10 = (EIF_REFERENCE) RTCCL(loc13);
						} else {
							RTHOOK(33);
							RTDBGAL(Current, 10, 0xF80000F9, 0, 0); /* loc10 */
							tr1 = RTLN(eif_new_type(249, 0x01).id);
							ur1 = RTCCL(loc4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3898, Dtype(tr1)))(tr1, ur1x);
							RTNHOOK(33,1);
							loc10 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(34);
							ur1 = RTCCL(loc10);
							ur2 = RTCCL(loc5);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3908, "add_value", loc11))(loc11, ur1x, ur2x);
						}
						RTHOOK(35);
						RTDBGAL(Current, 5, 0xF8000132, 0, 0); /* loc5 */
						ui4_1 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
						ui4_2 = (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", loc6))(loc6, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc5 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(36);
						RTDBGAL(Current, 6, 0xF8000132, 0, 0); /* loc6 */
						ui4_1 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
						ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(4992, "count", loc6));
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", loc6))(loc6, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(37);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4903, "left_adjust", loc6))(loc6);
						RTHOOK(38);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4904, "right_adjust", loc6))(loc6);
						RTHOOK(39);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", loc5))(loc5)).it_b);
						if (tb2) {
							RTHOOK(40);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3904, "count", loc10))(loc10)).it_i4);
							ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5025, "append_integer", loc5))(loc5, ui4_1x);
						}
						RTHOOK(41);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '[';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5035, "append_character", loc7))(loc7, uw1x);
						RTHOOK(42);
						ur1 = RTCCL(loc5);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5022, "append", loc7))(loc7, ur1x);
						RTHOOK(43);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ']';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5035, "append_character", loc7))(loc7, uw1x);
					}
				} else {
					RTHOOK(44);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1858, "wipe_out", loc6))(loc6);
				}
			}
			RTHOOK(45);
			ur1 = RTCCL(loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3874, "change_name", arg2))(arg2, ur1x);
			RTHOOK(46);
			ur1 = RTCCL(arg2);
			ur2 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3908, "add_value", loc10))(loc10, ur1x, ur2x);
		}
	}
	RTHOOK(47);
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		RTHOOK(48);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3874, "change_name", arg2))(arg2, ur1x);
		RTHOOK(49);
		RTDBGAL(Current, 3, 0xF80000F6, 0, 0); /* loc3 */
		loc3 = (EIF_REFERENCE) RTCCL(arg2);
	}
	RTHOOK(50);
	ur1 = RTCCL(loc4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1861, "item", arg3))(arg3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc14 = RTCCL(tr1);
	if (EIF_TEST(loc14)) {
		RTHOOK(51);
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
		} else {
			RTHOOK(52);
			loc15 = RTCCL(loc14);
			loc15 = RTRV(eif_new_type(248, 0x01),loc15);
			if (EIF_TEST(loc15)) {
				RTHOOK(53);
				ur1 = RTCCL(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3895, "add_value", loc15))(loc15, ur1x);
			} else {
				RTHOOK(54);
				loc16 = RTCCL(loc14);
				loc16 = RTRV(eif_new_type(249, 0x01),loc16);
				if (EIF_TEST(loc16)) {
				} else {
					RTHOOK(55);
					tr1 = RTLN(eif_new_type(248, 0x01).id);
					ui4_1 = ((EIF_INTEGER_32) 2L);
					{
						static EIF_TYPE_INDEX typarr0[] = {387,0xFF01,246,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr3 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
						RT_SPECIAL_COUNT(tr3) = 2L;
						memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
					}
					tr4 = RTCCL(loc14);
					*((EIF_REFERENCE *)tr3+0) = (EIF_REFERENCE) tr4;
					RTAR(tr3,tr4);
					tr4 = RTCCL(loc3);
					*((EIF_REFERENCE *)tr3+1) = (EIF_REFERENCE) tr4;
					RTAR(tr3,tr4);
					tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(3838, Dtype(tr3)))(tr3).it_r;
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3889, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(55,1);
					ur1 = RTCCL(tr1);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3871, "name", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1865, "force", arg3))(arg3, ur1x, ur2x);
					if (RTAL & CK_CHECK) {
						RTHOOK(56);
						RTCT("replaced", EX_CHECK);
						tb2 = '\0';
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3444, "found", arg3))(arg3)).it_b);
						if (tb3) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3429, "found_item", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tb2 = RTEQ(tr1, loc14);
						}
						if (tb2) {
							RTCK;
						} else {
							RTCF;
						}
					}
				}
			}
		}
	} else {
		RTHOOK(57);
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1865, "force", arg3))(arg3, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(58);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uw1
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_VALUE_UTILITIES}.new_string_value */
EIF_TYPED_VALUE F317_6821 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_string_value";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Result);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 316, Current, 0, 2, 12206);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(316, Current, 12206);
	RTCC(arg1, 316, l_feature_name, 1, eif_new_type(298, 0x01), 0x01);
	RTCC(arg2, 316, l_feature_name, 2, eif_new_type(298, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000FA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(250, 0x01).id);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3911, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {WSF_VALUE_UTILITIES}.new_string_value_with_percent_encoded_values */
EIF_TYPED_VALUE F317_6822 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_string_value_with_percent_encoded_values";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Result);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 316, Current, 0, 2, 12207);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(316, Current, 12207);
	RTCC(arg1, 316, l_feature_name, 1, eif_new_type(300, 0x01), 0x01);
	RTCC(arg2, 316, l_feature_name, 2, eif_new_type(300, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000FA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(250, 0x01).id);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3912, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

void EIF_Minit317 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
