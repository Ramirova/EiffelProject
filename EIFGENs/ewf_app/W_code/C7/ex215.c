/*
 * Code for class EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F215_3293(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3294(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3295(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3296(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3297(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3298(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3299(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3300(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3301(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3302(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3303(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3304(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3305(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3306(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3307(EIF_REFERENCE);
extern void F215_3308(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F215_3309(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F215_3310(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F215_3311(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F215_3312(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F215_3313(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3314(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3315(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3316(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3317(EIF_REFERENCE);
extern EIF_TYPED_VALUE F215_3318(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3319(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3320(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3321(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3322(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F215_3323(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3324(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F215_3325(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F215_3326(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit215(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include <stdlib.h>
#include "eif_path_name.h"
#include "eif_dir.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F215_3315
static EIF_POINTER inline_F215_3315 (EIF_INTEGER_32 arg1)
{
	if (eif_environ) {
	#ifdef EIF_WINDOWS
		EIF_NATIVE_CHAR *vars = (EIF_NATIVE_CHAR *) eif_environ;
		int cnt = 0;
		for (; *vars; vars++) {
		   if (arg1==cnt) return vars;
		   while (*vars) { vars++; }
		   cnt++;
		}
		return NULL;
	#else
		return ((EIF_NATIVE_CHAR **)eif_environ)[arg1];
	#endif
} else {
	return NULL;
}
	;
}
#define INLINE_F215_3315
#endif
#ifndef INLINE_F215_3319
static EIF_POINTER inline_F215_3319 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wgetenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return getenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F215_3319
#endif
#ifndef INLINE_F215_3320
static EIF_INTEGER_32 inline_F215_3320 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wputenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return putenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F215_3320
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXECUTION_ENVIRONMENT}.arguments */
RTOID (F215_3293)
EIF_TYPED_VALUE F215_3293 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "arguments";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3293);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 0, 3765);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(214, Current, 3765);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E1, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(225, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.command_line */
RTOID (F215_3294)
EIF_TYPED_VALUE F215_3294 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "command_line";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3294);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 0, 3766);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(214, Current, 3766);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E0, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(224, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.current_working_path */
EIF_TYPED_VALUE F215_3295 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_working_path";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 214, Current, 3, 0, 3767);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3767);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000C6, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(198, 0x01).id);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2364, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
	up1 = tp1;
	ui4_1 = loc1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2865, dtype))(Current, up1x, ui4_1x)).it_i4);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF80000FE, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(254, 0x01).id);
		tr2 = RTMS_EX_H(".",1,46);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3954, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2452, "resize", loc3))(loc3, ui4_1x);
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
			up1 = tp1;
			ui4_1 = loc1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2865, dtype))(Current, up1x, ui4_1x)).it_i4);
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF80000FE, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(254, 0x01).id);
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3958, Dtype(tr1)))(tr1, up1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF80000FE, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(254, 0x01).id);
			tr2 = RTMS_EX_H(".",1,46);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3954, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {EXECUTION_ENVIRONMENT}.current_working_directory */
EIF_TYPED_VALUE F215_3296 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_working_directory";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 214, Current, 3, 0, 3768);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3768);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000C6, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(198, 0x01).id);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2364, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
	up1 = tp1;
	ui4_1 = loc1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2865, dtype))(Current, up1x, ui4_1x)).it_i4);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
		Result = RTMS_EX_H(".",1,46);
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2452, "resize", loc3))(loc3, ui4_1x);
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
			up1 = tp1;
			ui4_1 = loc1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2865, dtype))(Current, up1x, ui4_1x)).it_i4);
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
			up2 = tp1;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2971, "pointer_to_file_name_8", tr1))(tr1, up2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H(".",1,46);
			if (RTAL & CK_CHECK) {
				RTHOOK(13);
				RTCT(NULL, EX_CHECK);
					RTCF;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
}

/* {EXECUTION_ENVIRONMENT}.default_shell */
RTOID (F215_3297)
EIF_TYPED_VALUE F215_3297 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_shell";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3297);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 214, Current, 1, 0, 3769);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(214, Current, 3769);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTMS_EX_H("SHELL",5,1213138508);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2846, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000132, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF8000132, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(306, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4762, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.get */
EIF_TYPED_VALUE F215_3298 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 214, Current, 1, 1, 3770);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3770);
	RTCC(arg1, 214, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_has_null_character", EX_PRE);
		uc1 = (EIF_CHARACTER_8) '\000';
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1811, "has", arg1))(arg1, uc1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2846, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4817, "as_string_8", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef uc1
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.item */
EIF_TYPED_VALUE F215_3299 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_POINTER, &loc3);
	
	RTEAA(l_feature_name, 214, Current, 3, 1, 3771);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3771);
	RTCC(arg1, 214, l_feature_name, 1, eif_new_type(298, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		uw1 = tw1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4781, "has", arg1))(arg1, uw1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80000D7, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(215, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2874, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 3, 0x40000000, 1, 0); /* loc3 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2881, "item", loc1))(loc1)).it_p);
	up1 = tp1;
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2866, dtype))(Current, up1x)).it_p);
	RTHOOK(5);
	tb1 = !loc3;
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF80000D7, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(215, 0x01).id);
		up1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2876, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(6,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(Current, 0, 0xF8000132, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2879, "string", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef uw1
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.home_directory_path */
RTOID (F215_3300)
EIF_TYPED_VALUE F215_3300 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "home_directory_path";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3300);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 214, Current, 3, 0, 3772);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3772);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("home_directory_supported", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(31, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(522, "home_directory_supported", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF80000C6, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(198, 0x01).id);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2364, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
	up1 = tp1;
	ui4_1 = loc1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2871, dtype))(Current, up1x, ui4_1x)).it_i4);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2452, "resize", loc3))(loc3, ui4_1x);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
		up1 = tp1;
		ui4_1 = loc1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2871, dtype))(Current, up1x, ui4_1x)).it_i4);
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(10);
		RTDBGAL(Current, 0, 0xF80000FE, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(254, 0x01).id);
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3958, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(10,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.user_directory_path */
RTOID (F215_3301)
EIF_TYPED_VALUE F215_3301 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "user_directory_path";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3301);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 214, Current, 4, 0, 3773);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3773);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000C6, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(198, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 50L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2364, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
	up1 = tp1;
	ui4_1 = loc1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2872, dtype))(Current, up1x, ui4_1x)).it_i4);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2452, "resize", loc3))(loc3, ui4_1x);
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
		up1 = tp1;
		ui4_1 = loc1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2872, dtype))(Current, up1x, ui4_1x)).it_i4);
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		RTDBGAL(Current, 0, 0xF80000FE, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(254, 0x01).id);
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3958, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(9,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3962, "is_empty", Result))(Result)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		RTHOOK(11);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(31, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(522, "home_directory_supported", tr1))(tr1)).it_b);
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2847, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTCCL(tr1);
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF80000FE, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc4);
		} else {
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF80000FE, 0,0); /* Result */
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.home_directory_name */
RTOID (F215_3302)
EIF_TYPED_VALUE F215_3302 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "home_directory_name";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3302);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 214, Current, 3, 0, 3774);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3774);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("home_directory_supported", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(31, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(522, "home_directory_supported", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF80000C6, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(198, 0x01).id);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2364, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
	up1 = tp1;
	ui4_1 = loc1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2871, dtype))(Current, up1x, ui4_1x)).it_i4);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2452, "resize", loc3))(loc3, ui4_1x);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
		up1 = tp1;
		ui4_1 = loc1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2871, dtype))(Current, up1x, ui4_1x)).it_i4);
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(10);
		RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
		up2 = tp1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2971, "pointer_to_file_name_8", tr1))(tr1, up2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.user_directory_name */
RTOID (F215_3303)
EIF_TYPED_VALUE F215_3303 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "user_directory_name";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3303);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc4);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 214, Current, 4, 0, 3775);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3775);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0xF80000C6, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(198, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 50L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2364, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
	up1 = tp1;
	ui4_1 = loc1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2872, dtype))(Current, up1x, ui4_1x)).it_i4);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2452, "resize", loc3))(loc3, ui4_1x);
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
		up1 = tp1;
		ui4_1 = loc1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2872, dtype))(Current, up1x, ui4_1x)).it_i4);
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(2370, "item", loc3));
		up2 = tp1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2971, "pointer_to_file_name_8", tr1))(tr1, up2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", Result))(Result)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		RTHOOK(11);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(31, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(522, "home_directory_supported", tr1))(tr1)).it_b);
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2849, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTCCL(tr1);
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc4);
		} else {
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.root_directory_name */
RTOID (F215_3304)
EIF_TYPED_VALUE F215_3304 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "root_directory_name";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3304);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 0, 3776);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3776);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("root_directory_supported", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(31, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(523, "root_directory_supported", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2308, 195))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
		Result = RTMS_EX_H("\\",1,92);
	} else {
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2310, 195))(Current)).it_b);
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("[000000]",8,1461084509);
		} else {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("/",1,47);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.starting_environment_variables */
EIF_TYPED_VALUE F215_3305 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "starting_environment_variables";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 214, Current, 4, 0, 3777);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3777);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000240, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,303,0xFF01,303,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 40L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3426, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ui4_1 = loc2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2862, dtype))(Current, ui4_1x)).it_p);
	RTHOOK(4);
	RTDBGAL(Current, 3, 0xF80000D7, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(215, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2875, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(5);
		tb1 = !loc1;
		if (tb1) break;
		RTHOOK(6);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2890, "set_shared_from_pointer", loc3))(loc3, up1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2879, "string", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2863, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(8);
			tr1 = eif_boxed_item(loc4,1);
			RTNHOOK(8,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4817, "as_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr1 = eif_boxed_item(loc4,2);
			RTNHOOK(8,2);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4817, "as_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1865, "force", Result))(Result, ur1x, ur2x);
		}
		RTHOOK(9);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(10);
		RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2862, dtype))(Current, ui4_1x)).it_p);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
#undef ur2
#undef ui4_1
}

/* {EXECUTION_ENVIRONMENT}.starting_environment */
EIF_TYPED_VALUE F215_3306 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "starting_environment";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 214, Current, 4, 0, 3778);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3778);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000240, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,306,0xFF01,306,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 40L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3426, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	ui4_1 = loc2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2862, dtype))(Current, ui4_1x)).it_p);
	RTHOOK(4);
	RTDBGAL(Current, 3, 0xF80000D7, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(215, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2875, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(5);
		tb1 = !loc1;
		if (tb1) break;
		RTHOOK(6);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2890, "set_shared_from_pointer", loc3))(loc3, up1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2879, "string", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2863, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(8);
			tr1 = eif_boxed_item(loc4,1);
			ur1 = RTCCL(tr1);
			tr2 = eif_boxed_item(loc4,2);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1865, "force", Result))(Result, ur1x, ur2x);
		}
		RTHOOK(9);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(10);
		RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2862, dtype))(Current, ui4_1x)).it_p);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
#undef ur2
#undef ui4_1
}

/* {EXECUTION_ENVIRONMENT}.return_code */
EIF_TYPED_VALUE F215_3307 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2854,Dtype(Current)));
	return r;
}


/* {EXECUTION_ENVIRONMENT}.change_working_directory */
void F215_3308 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "change_working_directory";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	RTLR(5,ur2);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 214, Current, 1, 1, 3780);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3780);
	RTCC(arg1, 214, l_feature_name, 1, eif_new_type(298, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000C6, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	ur2 = NULL;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2969, "file_name_to_pointer", tr1))(tr1, ur1x, ur2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2854, 0x10000000, 1); /* return_code */
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(2370, "item", loc1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2868, dtype))(Current, up1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2854, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.change_working_path */
void F215_3309 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "change_working_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 214, Current, 1, 1, 3781);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3781);
	RTCC(arg1, 214, l_feature_name, 1, eif_new_type(254, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000C6, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3989, "to_pointer", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2854, 0x10000000, 1); /* return_code */
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(2370, "item", loc1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2868, dtype))(Current, up1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2854, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.put */
void F215_3310 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,Current);
	RTLR(7,tr2);
	RTLR(8,ur2);
	RTLR(9,loc3);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 214, Current, 3, 2, 3782);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3782);
	RTCC(arg1, 214, l_feature_name, 1, eif_new_type(298, 0x01), 0x01);
	RTCC(arg2, 214, l_feature_name, 2, eif_new_type(298, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_meaningful", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", arg2))(arg2)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_key_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		uw1 = tw1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4781, "has", arg2))(arg2, uw1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("value_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("not_value_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		uw1 = tw1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4781, "has", arg1))(arg1, uw1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	RTDBGAL(Current, 1, 0xF8000132, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(306, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4800, "count", arg1))(arg1)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4800, "count", arg2))(arg2)).it_i4);
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4761, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(6,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4897, "append_string_general", loc1))(loc1, ur1x);
	RTHOOK(8);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5035, "append_character", loc1))(loc1, uw1x);
	RTHOOK(9);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4897, "append_string_general", loc1))(loc1, ur1x);
	RTHOOK(10);
	RTDBGAL(Current, 2, 0xF80000D7, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(215, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2874, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(10,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	ur1 = RTCCL(loc2);
	tr2 = RTLN(eif_new_type(305, 0x01).id);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4967, Dtype(tr2)))(tr2, ur2x);
	RTNHOOK(11,2);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1865, "force", tr1))(tr1, ur1x, ur2x);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 2854, 0x10000000, 1); /* return_code */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2881, "item", loc2))(loc2)).it_p);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2867, dtype))(Current, up1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2854, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("variable_set", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2854, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\01';
			tb3 = '\0';
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", arg1))(arg1)).it_b);
			if (tb4) {
				ur1 = RTCCL(arg2);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2846, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb3 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			if (!(tb3)) {
				tb3 = '\0';
				tb4 = '\0';
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", arg1))(arg1)).it_b);
				if ((EIF_BOOLEAN) !tb5) {
					ur1 = RTCCL(arg2);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2846, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc3 = RTCCL(tr1);
					tb4 = EIF_TEST(loc3);
				}
				if (tb4) {
					ur1 = RTCCL(arg1);
					tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4806, "same_string_general", loc3))(loc3, ur1x)).it_b);
					tb3 = tb4;
				}
				tb2 = tb3;
			}
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
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uw1
#undef arg2
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.system */
void F215_3311 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "system";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 214, Current, 1, 1, 3783);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3783);
	RTCC(arg1, 214, l_feature_name, 1, eif_new_type(298, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", arg1))(arg1)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF80000D7, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(215, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2844, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2874, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80000D7, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(215, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2874, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 2854, 0x10000000, 1); /* return_code */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2881, "item", loc1))(loc1)).it_p);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2869, dtype))(Current, up1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(2854, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.launch */
void F215_3312 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "launch";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 214, Current, 1, 1, 3784);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3784);
	RTCC(arg1, 214, l_feature_name, 1, eif_new_type(298, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4778, "is_empty", arg1))(arg1)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF80000D7, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(215, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2844, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2874, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80000D7, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(215, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2874, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(5);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2881, "item", loc1))(loc1)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2870, dtype))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.sleep */
void F215_3313 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sleep";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 1, 3785);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(214, Current, 3785);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_nanoseconds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui8_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2873, dtype))(Current, ui8_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui8_1
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.environ */
RTOID (F215_3314)
EIF_TYPED_VALUE F215_3314 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "environ";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3314);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 0, 3786);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(214, Current, 3786);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000240, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,215,0xFF01,305,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3426, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.i_th_environ */
EIF_TYPED_VALUE F215_3315 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "i_th_environ";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 1, 3787);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3787);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F215_3315 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.separated_variables */
EIF_TYPED_VALUE F215_3316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "separated_variables";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_BOOL, &loc3);
	
	RTEAA(l_feature_name, 214, Current, 3, 1, 3788);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(214, Current, 3788);
	RTCC(arg1, 214, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_var_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4992, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || loc3)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4764, "item", arg1))(arg1, ui4_1x)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(6);
			RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (loc1 < loc2))) {
		RTHOOK(9);
		RTDBGAL(Current, 0, 0xF80000FF, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,255,0xFF01,306,0xFF01,306,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		ui4_2 = loc2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
		RTAR(tr1,tr2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4841, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
		RTAR(tr1,tr2);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.file_info */
RTOID (F215_3317)
EIF_TYPED_VALUE F215_3317 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "file_info";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F215_3317);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 0, 3789);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(214, Current, 3789);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(217, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2952, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {EXECUTION_ENVIRONMENT}.eif_dir_current */
EIF_TYPED_VALUE F215_3318 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "eif_dir_current";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 2, 3790);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3790);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.eif_getenv */
EIF_TYPED_VALUE F215_3319 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_getenv";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 1, 3791);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3791);
	RTIV(Current, RTAL);
	Result = inline_F215_3319 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.eif_putenv */
EIF_TYPED_VALUE F215_3320 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_putenv";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 1, 3792);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3792);
	RTIV(Current, RTAL);
	Result = inline_F215_3320 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.eif_chdir */
EIF_TYPED_VALUE F215_3321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_chdir";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 1, 3793);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3793);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_chdir((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.system_call */
EIF_TYPED_VALUE F215_3322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "system_call";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 1, 3794);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3794);
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_system(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.asynchronous_system_call */
void F215_3323 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "asynchronous_system_call";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 1, 3795);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3795);
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_system_asynchronous(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.eif_home_directory_name_ptr */
EIF_TYPED_VALUE F215_3324 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "eif_home_directory_name_ptr";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 2, 3796);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3796);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_home_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.eif_user_directory_name_ptr */
EIF_TYPED_VALUE F215_3325 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "eif_user_directory_name_ptr";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 2, 3797);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3797);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_user_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {EXECUTION_ENVIRONMENT}.eif_sleep */
void F215_3326 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "eif_sleep";
	RTEX;
#define arg1 arg1x.it_i8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 214, Current, 0, 1, 3798);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(214, Current, 3798);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_nanoseconds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	EIF_ENTER_C;eif_sleep(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit215 (void)
{
	GTCX
	RTOTS (3293,F215_3293)
	RTOTS (3294,F215_3294)
	RTOTS (3297,F215_3297)
	RTOTS (3300,F215_3300)
	RTOTS (3301,F215_3301)
	RTOTS (3302,F215_3302)
	RTOTS (3303,F215_3303)
	RTOTS (3304,F215_3304)
	RTOTS (3314,F215_3314)
	RTOTS (3317,F215_3317)
}


#ifdef __cplusplus
}
#endif
