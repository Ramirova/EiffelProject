/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F101_1529(EIF_REFERENCE);
extern EIF_TYPED_VALUE F101_1530(EIF_REFERENCE);
extern EIF_TYPED_VALUE F101_1531(EIF_REFERENCE);
extern EIF_TYPED_VALUE F101_1532(EIF_REFERENCE);
extern EIF_TYPED_VALUE F101_1533(EIF_REFERENCE);
extern EIF_TYPED_VALUE F101_1534(EIF_REFERENCE);
extern void EIF_Minit101(void);

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

/* {HTTP_CONSTANTS}.default_http_port */
EIF_TYPED_VALUE F101_1529 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F101_1530 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F101_1531)


EIF_TYPED_VALUE F101_1531 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F101_1531,1512,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F101_1532)


EIF_TYPED_VALUE F101_1532 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F101_1532,1513,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F101_1533)


EIF_TYPED_VALUE F101_1533 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F101_1533,1514,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F101_1534 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit101 (void)
{
	GTCX
	RTOTS (1531,F101_1531)
	RTOTS (1532,F101_1532)
	RTOTS (1533,F101_1533)
}


#ifdef __cplusplus
}
#endif
