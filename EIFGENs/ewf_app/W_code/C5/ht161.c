/*
 * Code for class HTTPD_LOGGER_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F161_2009(EIF_REFERENCE);
extern EIF_TYPED_VALUE F161_2010(EIF_REFERENCE);
extern EIF_TYPED_VALUE F161_2011(EIF_REFERENCE);
extern EIF_TYPED_VALUE F161_2012(EIF_REFERENCE);
extern EIF_TYPED_VALUE F161_2013(EIF_REFERENCE);
extern EIF_TYPED_VALUE F161_2014(EIF_REFERENCE);
extern EIF_TYPED_VALUE F161_2015(EIF_REFERENCE);
extern EIF_TYPED_VALUE F161_2016(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit161(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTPD_LOGGER_CONSTANTS}.alert_level */
EIF_TYPED_VALUE F161_2009 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {HTTPD_LOGGER_CONSTANTS}.critical_level */
EIF_TYPED_VALUE F161_2010 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {HTTPD_LOGGER_CONSTANTS}.error_level */
EIF_TYPED_VALUE F161_2011 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {HTTPD_LOGGER_CONSTANTS}.warning_level */
EIF_TYPED_VALUE F161_2012 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {HTTPD_LOGGER_CONSTANTS}.notice_level */
EIF_TYPED_VALUE F161_2013 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {HTTPD_LOGGER_CONSTANTS}.information_level */
EIF_TYPED_VALUE F161_2014 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {HTTPD_LOGGER_CONSTANTS}.debug_level */
EIF_TYPED_VALUE F161_2015 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {HTTPD_LOGGER_CONSTANTS}.logger_level_representation */
EIF_TYPED_VALUE F161_2016 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "logger_level_representation";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 160, Current, 0, 1, 1981);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(160, Current, 1981);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("alert",5,1819332724);
			break;
		case 2L:
			RTHOOK(3);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("critical",8,1394383468);
			break;
		case 4L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("error",5,1920877938);
			break;
		case 8L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("warning",7,1809215079);
			break;
		case 16L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("notice",6,22705253);
			break;
		case 32L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("information",11,684350830);
			break;
		case 64L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			Result = RTMS_EX_H("debug",5,1701719399);
			break;
		default:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			tr1 = RTMS_EX_H("level #",7,424770083);
			tr2 = c_outi(arg1);
			ur1 = RTCCL(tr2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4840, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr2);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

void EIF_Minit161 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
