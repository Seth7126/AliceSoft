// 函数: sub_5b11f0
// 地址: 0x5b11f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_c
float* eax = sub_5b0690(&var_c, arg4)
float xmm6 = *arg2
float xmm2 = *eax
float xmm7_2 = arg2[1] f* eax[2] - arg2[2] f* eax[1]
float xmm3_1 = xmm2 f* arg2[2] - xmm6 * eax[2]
float xmm6_2 = xmm6 * eax[1] - xmm2 f* arg2[1]
float var_14 = xmm3_1
float xmm0_10 = sub_484cc0(xmm7_2 * xmm7_2 + xmm3_1 * xmm3_1 + xmm6_2 * xmm6_2)
xmm0_10 - 0f
eax:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
    | (xmm0_10 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    *arg3 = xmm7_2.q
    arg3[2] = xmm6_2
    return arg3

float xmm1_4 = 1f / xmm0_10
arg3[2] = xmm6_2 * xmm1_4
*arg3 = xmm1_4 * xmm7_2
arg3[1] = xmm1_4 * xmm3_1
return arg3
