/*
 * Class PACKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_2 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_1_2 [] = {0xFF01,336,1,0xFFFF};
static const EIF_TYPE_INDEX egt_2_2 [] = {0xFF01,1,0xFFFF};
static const EIF_TYPE_INDEX egt_3_2 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_2 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_2 [] = {0xFF01,1,0xFFFF};
static const EIF_TYPE_INDEX egt_6_2 [] = {0xFF01,1,0xFFFF};
static const EIF_TYPE_INDEX egt_7_2 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_2 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_2 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_10_2 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_11_2 [] = {0xFF01,22,0xFFFF};
static const EIF_TYPE_INDEX egt_12_2 [] = {0xFF01,1,0xFFFF};
static const EIF_TYPE_INDEX egt_13_2 [] = {0xFF01,198,0xFFFF};


static const struct desc_info desc_2[] = {
	{EIF_GENERIC(NULL), 42, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_2), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_2), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 39, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_2), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 40, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_2), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_2), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_2), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_2), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_2), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_2), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_2), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_2), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_2), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x03 /*1*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0251 /*296*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_2), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 32, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 33, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 34, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0245 /*290*/), 35, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0245 /*290*/), 36, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 37, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 38, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_2), 41, 0},
};
void Init2(void)
{
	IDSC(desc_2, 0, 1);
	IDSC(desc_2 + 1, 2, 1);
	IDSC(desc_2 + 32, 396, 1);
}


#ifdef __cplusplus
}
#endif
