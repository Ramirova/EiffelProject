/*
 * Class WGI_EXECUTION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_60 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_1_60 [] = {0xFF01,336,59,0xFFFF};
static const EIF_TYPE_INDEX egt_2_60 [] = {0xFF01,59,0xFFFF};
static const EIF_TYPE_INDEX egt_3_60 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_60 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_60 [] = {0xFF01,59,0xFFFF};
static const EIF_TYPE_INDEX egt_6_60 [] = {0xFF01,59,0xFFFF};
static const EIF_TYPE_INDEX egt_7_60 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_60 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_60 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_10_60 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_11_60 [] = {0xFF01,22,0xFFFF};
static const EIF_TYPE_INDEX egt_12_60 [] = {0xFF01,59,0xFFFF};
static const EIF_TYPE_INDEX egt_13_60 [] = {0xFF01,62,0xFFFF};
static const EIF_TYPE_INDEX egt_14_60 [] = {0xFF01,94,0xFFFF};


static const struct desc_info desc_60[] = {
	{EIF_GENERIC(NULL), 1009, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_60), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_60), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_60), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_60), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_60), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_60), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_60), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_60), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_60), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_60), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_60), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_60), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x77 /*59*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0251 /*296*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_60), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1003, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1004, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_60), 1005, 0},
	{EIF_GENERIC(egt_14_60), 1006, 8},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1007, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1008, 0xFFFFFFFF},
};
void Init60(void)
{
	IDSC(desc_60, 0, 59);
	IDSC(desc_60 + 1, 2, 59);
	IDSC(desc_60 + 32, 191, 59);
}


#ifdef __cplusplus
}
#endif
