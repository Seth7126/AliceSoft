// 函数: sub_576370
// 地址: 0x576370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_c
float* eax = sub_575ea0(&var_c, arg3)
float xmm2 = *eax
float xmm6 = *arg2
float xmm7_2 = arg2[1] * eax[2] - arg2[2] * eax[1]
float xmm3_1 = xmm2 * arg2[2] - xmm6 * eax[2]
float xmm6_2 = xmm6 * eax[1] - xmm2 * arg2[1]
float var_14 = xmm3_1
float xmm0_10 = _mm_sqrt_ss(0, xmm7_2 * xmm7_2 + xmm3_1 * xmm3_1 + xmm6_2 * xmm6_2)
xmm0_10 - 0f
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    *arg1 = xmm7_2.q
    arg1[2] = xmm6_2
    return arg1

float xmm1_4 = 1f / xmm0_10
arg1[2] = xmm6_2 * xmm1_4
*arg1 = xmm1_4 * xmm7_2
arg1[1] = xmm1_4 * xmm3_1
return arg1
