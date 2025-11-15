// 函数: sub_6cbf50
// 地址: 0x6cbf50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm4 = *(arg4 + 4)
float xmm1 = *arg4
float xmm7 = *arg1
float xmm3 = *(arg4 + 8)
float xmm5 = *(arg4 + 0xc)
int128_t xmm2_4 = xmm7 * xmm1 + arg1[1] f* xmm4 + arg1[2] f* xmm3 + arg1[3] f* xmm5
float var_30_1[0x4]

if (0 f<= xmm2_4)
    var_30_1 = *arg4
else
    float var_30[0x4]
    var_30[0] = xmm1 ^ 0x80000000
    var_30[1] = xmm4 ^ 0x80000000
    var_30[2] = xmm3 ^ 0x80000000
    xmm2_4 ^= 0x80000000
    var_30[3] = xmm5 ^ 0x80000000
    var_30_1 = var_30

if (0.949999988f f<= xmm2_4)
    float xmm1_9 = (var_30_1[1] f- arg1[1]) * arg2
    float xmm2_11 = (var_30_1[2] f- arg1[2]) * arg2
    float xmm3_6 = (var_30_1[3] f- arg1[3]) * arg2
    var_30_1[0] = (var_30_1[0] - xmm7) * arg2
    float xmm0_26[0x4] = *arg1
    var_30_1[1] = xmm1_9
    var_30_1[2] = xmm2_11
    var_30_1[3] = xmm3_6
    *arg3 = _mm_add_ps(var_30_1, xmm0_26)
    return arg3

float var_38 = ___libm_sse2_acosf(xmm2_4.d)
float xmm0_10 = sub_484cb0()
float xmm0_13 = sub_484cb0()
float xmm7_1 = arg1[2]
float xmm3_3 = var_30_1[1] * xmm0_10
float xmm4_3 = var_30_1[2] * xmm0_10
float xmm5_3 = var_30_1[3] * xmm0_10
float xmm2_8 = arg1[3] f* xmm0_13
float xmm6_2 = arg1[1] f* xmm0_13
var_30_1[0] = *arg1 * xmm0_13 + var_30_1[0] * xmm0_10
float var_3c_1 = xmm2_8
var_30_1[3] = xmm2_8 + xmm5_3
var_30_1[1] = xmm6_2 + xmm3_3
var_30_1[2] = xmm7_1 * xmm0_13 + xmm4_3
float xmm1_4[0x4] = 1f / sub_484cb0()
*arg3 = _mm_mul_ps(_mm_shuffle_ps(xmm1_4, xmm1_4, 0), var_30_1)
return arg3
