// 函数: sub_57a9b0
// 地址: 0x57a9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm0_1[0x4] = arg2 * 0.0174532924f
int80_t x87_r0
float xmm0_2 = ___libm_sse2_cosf(xmm0_1, x87_r0)
int80_t x87_r1
float xmm0_4 = ___libm_sse2_sinf(xmm0_1, x87_r1)
int32_t xmm0_6[0x4] = arg3 * 0.0174532924f
int80_t x87_r2
float xmm0_7 = ___libm_sse2_cosf(xmm0_6, x87_r2)
int80_t x87_r3
float xmm0_9 = ___libm_sse2_sinf(xmm0_6, x87_r3)
int32_t xmm0_11[0x4] = arg4 * 0.0174532924f
int80_t x87_r4
float xmm0_12 = ___libm_sse2_cosf(xmm0_11, x87_r4)
int80_t x87_r5
float xmm0_14 = ___libm_sse2_sinf(xmm0_11, x87_r5)
arg1[3] = 0
arg1[7] = 0
float xmm3_1 = xmm0_9 * xmm0_4
arg1[0xb] = 0
arg1[6] = xmm0_9
float xmm6_1 = xmm0_9 * xmm0_2
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0x3f800000
*arg1 = xmm0_12 * xmm0_2 - xmm3_1 * xmm0_14
arg1[1] = xmm3_1 * xmm0_12 + xmm0_14 * xmm0_2
arg1[2] = (xmm0_7 * xmm0_4) ^ (data_79aad0).d
arg1[4] = (xmm0_14 * xmm0_7) ^ (data_79aad0).d
arg1[5] = xmm0_12 * xmm0_7
arg1[9] = xmm0_14 * xmm0_4 - xmm6_1 * xmm0_12
arg1[0xa] = xmm0_7 * xmm0_2
arg1[8] = xmm6_1 * xmm0_14 + xmm0_12 * xmm0_4
return arg1
