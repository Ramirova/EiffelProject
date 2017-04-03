/*
 * Code for class HTTPD_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F312_6786(EIF_REFERENCE);
extern EIF_TYPED_VALUE F312_6787(EIF_REFERENCE);
extern void F312_6788(EIF_REFERENCE);
extern void F312_6789(EIF_REFERENCE);
extern void F312_6790(EIF_REFERENCE);
extern void F312_6791(EIF_REFERENCE);
extern void F312_6792(EIF_REFERENCE);
extern void EIF_Minit312(void);

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

/* {HTTPD_CONFIGURATION}.server_details */
RTOID (F312_6786)


EIF_TYPED_VALUE F312_6786 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F312_6786,12181,RTMS_EX_H("Server: Standalone Eiffel Server",32,1003060338));
}

/* {HTTPD_CONFIGURATION}.has_secure_support */
EIF_TYPED_VALUE F312_6787 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_ssl_2_or_3 */
void F312_6788 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_ssl_2_or_3";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 311, Current, 0, 0, 12182);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(311, Current, 12182);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_tls_1_0 */
void F312_6789 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_tls_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 311, Current, 0, 0, 12176);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(311, Current, 12176);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_tls_1_1 */
void F312_6790 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_tls_1_1";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 311, Current, 0, 0, 12177);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(311, Current, 12177);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_tls_1_2 */
void F312_6791 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_tls_1_2";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 311, Current, 0, 0, 12178);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(311, Current, 12178);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_dtls_1_0 */
void F312_6792 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_dtls_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 311, Current, 0, 0, 12179);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(311, Current, 12179);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit312 (void)
{
	GTCX
	RTOTS (6786,F312_6786)
}


#ifdef __cplusplus
}
#endif
