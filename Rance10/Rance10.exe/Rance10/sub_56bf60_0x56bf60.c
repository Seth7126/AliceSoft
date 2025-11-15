// 函数: sub_56bf60
// 地址: 0x56bf60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0_37 = *arg1
float xmm1 = arg1[5]
float xmm3 = arg1[0xa]
float xmm4_3 = xmm0_37 + xmm1 + xmm3 + 1f

if (not(xmm4_3 < 1f))
    float xmm0 = arg1[6]
    float xmm1_2 = _mm_sqrt_ss(0, xmm4_3) * 2f
    float xmm2 = 1f / xmm1_2
    float xmm0_2 = (xmm0 f- arg1[9]) * xmm2
    arg2[3] = xmm1_2 * 0.25f
    *arg2 = xmm0_2
    arg2[1] = (arg1[8] f- arg1[2]) * xmm2
    arg2[2] = arg1[1] f* xmm2
    return arg2

if (xmm0_37 <= xmm1)
    if (not(xmm1 < xmm3))
        float xmm0_21 = arg1[1]
        float xmm1_8 = xmm1 - xmm3 - xmm0_37 + 1f
        float xmm1_10 = _mm_sqrt_ss(xmm1_8, xmm1_8) * 2f
        float xmm2_2 = 1f / xmm1_10
        arg2[1] = xmm1_10 * 0.25f
        *arg2 = xmm0_21 * xmm2_2
        arg2[2] = (arg1[9] f+ arg1[6]) * xmm2_2
        arg2[3] = (arg1[8] f- arg1[2]) * xmm2_2
        return arg2
else if (not(xmm0_37 < xmm3))
    float xmm1_5 = _mm_sqrt_ss(0, xmm0_37 - xmm1 - xmm3 + 1f) * 2f
    float xmm2_1 = 1f / xmm1_5
    *arg2 = xmm1_5 * 0.25f
    arg2[1] = arg1[1] f* xmm2_1
    arg2[2] = (arg1[8] f+ arg1[2]) * xmm2_1
    arg2[3] = (arg1[6] f- arg1[9]) * xmm2_1
    return arg2

float xmm0_30 = arg1[8] f+ arg1[2]
float xmm1_13 = _mm_sqrt_ss(0, xmm3 - xmm0_37 - xmm1 + 1f) * 2f
float xmm2_3 = 1f / xmm1_13
arg2[2] = xmm1_13 * 0.25f
*arg2 = xmm0_30 * xmm2_3
arg2[1] = (arg1[9] f+ arg1[6]) * xmm2_3
arg2[3] = arg1[1] f* xmm2_3
return arg2
