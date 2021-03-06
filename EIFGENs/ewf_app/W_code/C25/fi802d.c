/*
 * Class FINITE [POINTER]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_802 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_1_802 [] = {0xFF01,336,801,296,0xFFFF};
static const EIF_TYPE_INDEX egt_2_802 [] = {0xFF01,801,296,0xFFFF};
static const EIF_TYPE_INDEX egt_3_802 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_802 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_802 [] = {0xFF01,801,296,0xFFFF};
static const EIF_TYPE_INDEX egt_6_802 [] = {0xFF01,801,296,0xFFFF};
static const EIF_TYPE_INDEX egt_7_802 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_802 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_802 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_10_802 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_11_802 [] = {0xFF01,22,0xFFFF};
static const EIF_TYPE_INDEX egt_12_802 [] = {801,296,0xFFFF};
static const EIF_TYPE_INDEX egt_13_802 [] = {0xFF01,801,296,0xFFFF};
static const EIF_TYPE_INDEX egt_14_802 [] = {0xFF01,785,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_802 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_802[] = {
	{EIF_GENERIC(NULL), 2344, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_802), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_802), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_802), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_802), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_802), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_802), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_802), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_802), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_802), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_802), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_802), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_802), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_802), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0251 /*296*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_802), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2345, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2056, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2057, 0},
	{EIF_NON_GENERIC(0x024B /*293*/), 2053, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2054, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2055, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_802), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_802), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 0x00, 0xFFFFFFFF},
};
void Init802(void)
{
	IDSC(desc_802, 0, 801);
	IDSC(desc_802 + 1, 2, 801);
	IDSC(desc_802 + 32, 207, 801);
	IDSC(desc_802 + 41, 205, 801);
	IDSC(desc_802 + 42, 266, 801);
}


#ifdef __cplusplus
}
#endif
