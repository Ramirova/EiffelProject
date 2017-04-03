/*
 * Code for class HTTPD_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F42_614(EIF_REFERENCE);
extern EIF_TYPED_VALUE F42_615(EIF_REFERENCE);
extern EIF_TYPED_VALUE F42_616(EIF_REFERENCE);
extern EIF_TYPED_VALUE F42_617(EIF_REFERENCE);
extern EIF_TYPED_VALUE F42_618(EIF_REFERENCE);
extern EIF_TYPED_VALUE F42_619(EIF_REFERENCE);
extern EIF_TYPED_VALUE F42_620(EIF_REFERENCE);
extern void EIF_Minit42(void);

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

/* {HTTPD_CONSTANTS}.default_http_server_port */
EIF_TYPED_VALUE F42_614 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTPD_CONSTANTS}.default_max_concurrent_connections */
EIF_TYPED_VALUE F42_615 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	return r;
}

/* {HTTPD_CONSTANTS}.default_max_tcp_clients */
EIF_TYPED_VALUE F42_616 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	return r;
}

/* {HTTPD_CONSTANTS}.default_socket_timeout */
EIF_TYPED_VALUE F42_617 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	return r;
}

/* {HTTPD_CONSTANTS}.default_socket_recv_timeout */
EIF_TYPED_VALUE F42_618 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {HTTPD_CONSTANTS}.default_keep_alive_timeout */
EIF_TYPED_VALUE F42_619 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {HTTPD_CONSTANTS}.default_max_keep_alive_requests */
EIF_TYPED_VALUE F42_620 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	return r;
}

void EIF_Minit42 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
