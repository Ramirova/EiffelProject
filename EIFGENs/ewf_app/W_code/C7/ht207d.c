/*
 * Class HTTPD_STREAM_SECURE_SOCKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_207 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_1_207 [] = {0xFF01,336,206,0xFFFF};
static const EIF_TYPE_INDEX egt_2_207 [] = {0xFF01,206,0xFFFF};
static const EIF_TYPE_INDEX egt_3_207 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_207 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_207 [] = {0xFF01,206,0xFFFF};
static const EIF_TYPE_INDEX egt_6_207 [] = {0xFF01,206,0xFFFF};
static const EIF_TYPE_INDEX egt_7_207 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_207 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_207 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_10_207 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_11_207 [] = {0xFF01,22,0xFFFF};
static const EIF_TYPE_INDEX egt_12_207 [] = {0xFF01,206,0xFFFF};
static const EIF_TYPE_INDEX egt_13_207 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_14_207 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_15_207 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_16_207 [] = {0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_17_207 [] = {0xFF01,69,0xFFFF};
static const EIF_TYPE_INDEX egt_18_207 [] = {0xFF02,159,0xFFFF};
static const EIF_TYPE_INDEX egt_19_207 [] = {0xFF02,159,0xFFFF};
static const EIF_TYPE_INDEX egt_20_207 [] = {0xFF01,159,0xFFFF};
static const EIF_TYPE_INDEX egt_21_207 [] = {0xFF01,198,0xFFFF};
static const EIF_TYPE_INDEX egt_22_207 [] = {0xFF01,76,0xFFFF};
static const EIF_TYPE_INDEX egt_23_207 [] = {0xFF01,76,0xFFFF};
static const EIF_TYPE_INDEX egt_24_207 [] = {0xFF01,76,0xFFFF};
static const EIF_TYPE_INDEX egt_25_207 [] = {0xFF01,73,0xFFFF};
static const EIF_TYPE_INDEX egt_26_207 [] = {378,0xFF01,76,0xFFFF};
static const EIF_TYPE_INDEX egt_27_207 [] = {550,278,0xFFFF};
static const EIF_TYPE_INDEX egt_28_207 [] = {550,278,0xFFFF};
static const EIF_TYPE_INDEX egt_29_207 [] = {550,278,0xFFFF};
static const EIF_TYPE_INDEX egt_30_207 [] = {0xFF01,378,0xFF01,303,0xFFFF};
static const EIF_TYPE_INDEX egt_31_207 [] = {378,0xFF01,76,0xFFFF};
static const EIF_TYPE_INDEX egt_32_207 [] = {0xFF01,203,0xFFFF};


static const struct desc_info desc_207[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_207), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_207), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_207), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_207), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_207), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_207), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_207), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_207), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_207), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_207), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_207), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_207), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0251 /*296*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_207), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_207), 3244, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1864, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3243, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1866, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1867, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1868, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1869, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1870, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1871, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1872, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1873, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1874, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1875, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1876, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1877, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1878, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1879, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1880, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1881, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1882, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1883, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1884, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1885, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1886, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1887, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1888, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1889, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1890, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1891, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1892, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1893, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1894, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1895, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1896, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1897, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1898, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1899, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1900, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1901, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1902, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1903, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1904, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1905, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1906, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1907, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1908, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1909, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1910, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1911, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1912, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1913, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1914, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1915, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1916, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1917, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1918, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1919, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1920, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1921, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1922, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1923, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1924, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1925, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1926, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1927, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1928, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1929, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1930, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1931, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1932, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1933, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1934, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1935, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1936, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1937, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1938, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1939, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1940, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1941, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1848, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1849, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1850, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1851, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1852, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1853, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1854, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1855, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1856, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1857, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1858, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1859, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1860, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1861, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1862, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2838, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 2781, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_207), 3262, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01 /*0*/), 3241, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3248, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3249, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3250, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3377, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3253, 53},
	{EIF_NON_GENERIC(0x024B /*293*/), 2840, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0245 /*290*/), 2841, 48},
	{EIF_GENERIC(egt_15_207), 2842, 0},
	{EIF_NON_GENERIC(0x0209 /*260*/), 2843, 68},
	{EIF_NON_GENERIC(0x0209 /*260*/), 2844, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0203 /*257*/), 2845, 136},
	{EIF_NON_GENERIC(0x020F /*263*/), 2846, 62},
	{EIF_NON_GENERIC(0x0215 /*266*/), 2847, 59},
	{EIF_NON_GENERIC(0x021B /*269*/), 2848, 128},
	{EIF_NON_GENERIC(0x0221 /*272*/), 2837, 64},
	{EIF_NON_GENERIC(0x0221 /*272*/), 2850, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0227 /*275*/), 2851, 60},
	{EIF_NON_GENERIC(0x022D /*278*/), 2836, 58},
	{EIF_NON_GENERIC(0x0233 /*281*/), 2853, 120},
	{EIF_NON_GENERIC(0x0239 /*284*/), 2835, 144},
	{EIF_NON_GENERIC(0x0209 /*260*/), 2839, 72},
	{EIF_NON_GENERIC(0x024B /*293*/), 3375, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3292, 51},
	{EIF_NON_GENERIC(0x024B /*293*/), 3291, 52},
	{EIF_NON_GENERIC(0x024B /*293*/), 3295, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3293, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3294, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3296, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3297, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3381, 57},
	{EIF_NON_GENERIC(0x024B /*293*/), 3349, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3252, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3263, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3264, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3265, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3266, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3269, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3270, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3271, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3272, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3275, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3276, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3277, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3278, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3279, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3280, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3281, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3282, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3283, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3284, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3285, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3286, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3287, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3273, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3274, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3267, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3298, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3299, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3300, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3301, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3302, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3303, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3307, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3308, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3309, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3310, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3311, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3312, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3313, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3314, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3315, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3316, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3317, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3318, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3319, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2849, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3322, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3323, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2852, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3320, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0245 /*290*/), 2854, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_207), 2855, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 2856, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0233 /*281*/), 2857, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0239 /*284*/), 2858, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1151, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1152, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1153, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1154, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1155, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1156, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1157, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1158, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1159, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1160, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1161, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1162, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1163, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1164, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1165, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1166, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1167, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1168, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1169, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1170, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1171, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1172, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1173, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1174, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1175, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1176, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1177, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1178, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1179, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1180, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1181, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1182, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1183, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_207), 1701, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1722, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1723, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1724, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1725, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1726, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1702, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1703, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1704, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1705, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1706, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1707, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1708, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1709, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1710, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1711, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 1712, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1713, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1714, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1715, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1716, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1717, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1718, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1719, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1720, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1721, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3070, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3071, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3072, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3073, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3074, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3075, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3076, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3077, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3078, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3079, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3080, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3081, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3082, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3083, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3084, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3085, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3086, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3087, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3088, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3089, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3090, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3091, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3092, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3093, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3094, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3095, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3096, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3097, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3098, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3099, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3100, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3101, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3102, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3103, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3104, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3105, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3106, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3057, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3058, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3059, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3060, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3061, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3062, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3063, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3064, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3065, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3066, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3067, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3068, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3069, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3242, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3387, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3388, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3379, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3378, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3358, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3251, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3376, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3254, 76},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3255, 80},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3256, 84},
	{EIF_GENERIC(egt_18_207), 3257, 8},
	{EIF_GENERIC(egt_19_207), 3258, 16},
	{EIF_GENERIC(egt_20_207), 3380, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3260, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3261, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3268, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3288, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3289, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3304, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3305, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3306, 49},
	{EIF_GENERIC(NULL), 3321, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3324, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x03 /*1*/), 3325, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x03 /*1*/), 3326, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3327, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3328, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3329, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3330, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3331, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3332, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3333, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3334, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3335, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3336, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3337, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3356, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3357, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3340, 50},
	{EIF_GENERIC(NULL), 3341, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3342, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3343, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3344, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3345, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x025F /*303*/), 3346, 24},
	{EIF_GENERIC(NULL), 3347, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3348, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3360, 0xFFFFFFFF},
	{EIF_GENERIC(egt_21_207), 3218, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 3219, 32},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3220, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3221, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3222, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3223, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3224, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3225, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3226, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3227, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3228, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3229, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3230, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3231, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3232, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3233, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3234, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3235, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3236, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01 /*0*/), 3237, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3238, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3239, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3240, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3292, 51},
	{EIF_NON_GENERIC(0x024B /*293*/), 3291, 52},
	{EIF_NON_GENERIC(0x024B /*293*/), 3253, 53},
	{EIF_NON_GENERIC(0x024B /*293*/), 1209, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1210, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1211, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_207), 1950, 0xFFFFFFFF},
	{EIF_GENERIC(egt_23_207), 1951, 0xFFFFFFFF},
	{EIF_GENERIC(egt_24_207), 1952, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x99 /*76*/), 1953, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x99 /*76*/), 1954, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x99 /*76*/), 1955, 0xFFFFFFFF},
	{EIF_GENERIC(egt_25_207), 1956, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1957, 0xFFFFFFFF},
	{EIF_GENERIC(egt_26_207), 1958, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1959, 0xFFFFFFFF},
	{EIF_GENERIC(egt_27_207), 1960, 0xFFFFFFFF},
	{EIF_GENERIC(egt_28_207), 1961, 0xFFFFFFFF},
	{EIF_GENERIC(egt_29_207), 1962, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 1942, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x022D /*278*/), 1943, 0xFFFFFFFF},
	{EIF_GENERIC(egt_30_207), 1944, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1945, 0xFFFFFFFF},
	{EIF_GENERIC(egt_31_207), 1946, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x39 /*28*/), 1947, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0251 /*296*/), 1948, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 1949, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3382, 54},
	{EIF_NON_GENERIC(0x024B /*293*/), 3383, 55},
	{EIF_NON_GENERIC(0x024B /*293*/), 3384, 56},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3385, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3386, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3389, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3390, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3391, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3392, 88},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3393, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3394, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3351, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3352, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3353, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3354, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3355, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3359, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3361, 92},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3362, 96},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3363, 100},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3364, 104},
	{EIF_GENERIC(NULL), 3426, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3424, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3425, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3366, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3367, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3368, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3369, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3370, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3371, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3372, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3373, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3374, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3381, 57},
	{EIF_GENERIC(NULL), 3408, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 3350, 40},
	{EIF_GENERIC(NULL), 3410, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3395, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3396, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3397, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3398, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3399, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3400, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3401, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3402, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3403, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3404, 108},
	{EIF_GENERIC(NULL), 3405, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3406, 112},
	{EIF_GENERIC(NULL), 3407, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3409, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3411, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3412, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3413, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3414, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3415, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3416, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3417, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3418, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3419, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3420, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3421, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3422, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3423, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3427, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3428, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3429, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3430, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3431, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3432, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3433, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3434, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3435, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3436, 0xFFFFFFFF},
	{EIF_GENERIC(egt_32_207), 3453, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 641, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 642, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 643, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3437, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3438, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3439, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3440, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3441, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3442, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3443, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0209 /*260*/), 3444, 116},
	{EIF_GENERIC(NULL), 3445, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3446, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3447, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3448, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3449, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x024B /*293*/), 3450, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3451, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3452, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3461, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3462, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3454, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3455, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3456, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3457, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3458, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3459, 0xFFFFFFFF},
};
void Init207(void)
{
	IDSC(desc_207, 0, 206);
	IDSC(desc_207 + 1, 2, 206);
	IDSC(desc_207 + 32, 382, 206);
	IDSC(desc_207 + 126, 223, 206);
	IDSC(desc_207 + 128, 241, 206);
	IDSC(desc_207 + 215, 92, 206);
	IDSC(desc_207 + 248, 115, 206);
	IDSC(desc_207 + 249, 35, 206);
	IDSC(desc_207 + 274, 38, 206);
	IDSC(desc_207 + 324, 393, 206);
	IDSC(desc_207 + 399, 381, 206);
	IDSC(desc_207 + 402, 359, 206);
	IDSC(desc_207 + 423, 389, 206);
	IDSC(desc_207 + 457, 390, 206);
	IDSC(desc_207 + 460, 384, 206);
	IDSC(desc_207 + 497, 385, 206);
	IDSC(desc_207 + 501, 365, 206);
	IDSC(desc_207 + 517, 394, 206);
}


#ifdef __cplusplus
}
#endif
