// 函数: sub_47c340
// 地址: 0x47c340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm3 = arg2[1]
float xmm1 = *arg2
float xmm4 = arg2[2]
float xmm1_3 = xmm1 * xmm1 + xmm3 * xmm3 + xmm4 * xmm4

if (not(0 f< xmm1_3))
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0
    return arg1

int32_t xmm2[0x4] = arg3 * 0.5f
float xmm1_4 = 1f / _mm_sqrt_ss(0, xmm1_3)
int80_t x87_r0
float xmm0_6 = ___libm_sse2_sinf(xmm2, x87_r0)
float xmm3_3 = arg2[1] f* xmm1_4 * xmm0_6
float xmm4_3 = arg2[2] f* xmm1_4 * xmm0_6
*arg1 = *arg2 * xmm1_4 * xmm0_6
arg1[1] = xmm3_3
arg1[2] = xmm4_3
int80_t x87_r1
arg1[3] = ___libm_sse2_cosf(xmm2, x87_r1)
return arg1
