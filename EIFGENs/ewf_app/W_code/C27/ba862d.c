/*
 * Class BAG [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_862 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_1_862 [] = {0xFF01,336,861,281,0xFFFF};
static const EIF_TYPE_INDEX egt_2_862 [] = {0xFF01,861,281,0xFFFF};
static const EIF_TYPE_INDEX egt_3_862 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_862 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_862 [] = {0xFF01,861,281,0xFFFF};
static const EIF_TYPE_INDEX egt_6_862 [] = {0xFF01,861,281,0xFFFF};
static const EIF_TYPE_INDEX egt_7_862 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_862 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_862 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_10_862 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_11_862 [] = {0xFF01,22,0xFFFF};
static const EIF_TYPE_INDEX egt_12_862 [] = {861,281,0xFFFF};
static const EIF_TYPE_INDEX egt_13_862 [] = {0xFF01,861,281,0xFFFF};
static const EIF_TYPE_INDEX egt_14_862 [] = {0xFF01,856,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_862 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_862[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_862), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_862), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_862), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_862), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_862), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_862), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_862), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_862), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_862), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_862), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_862), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_862), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_862), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0251 /*296*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_862), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2066, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2067, 0},
	{EIF_NON_GENERIC(0x024B /*293*/), 2063, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2064, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2065, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_862), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_862), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2478, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2479, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2480, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 0x00, 0xFFFFFFFF},
};
void Init862(void)
{
	IDSC(desc_862, 0, 861);
	IDSC(desc_862 + 1, 2, 861);
	IDSC(desc_862 + 32, 207, 861);
	IDSC(desc_862 + 41, 265, 861);
	IDSC(desc_862 + 50, 208, 861);
}


#ifdef __cplusplus
}
#endif
