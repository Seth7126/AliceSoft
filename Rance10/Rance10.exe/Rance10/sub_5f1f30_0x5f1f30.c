// 函数: sub_5f1f30
// 地址: 0x5f1f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg4
float xmm0 = esi[1]
float xmm4 = esi[2]
float xmm2_1 = arg5[1] f- xmm0
float xmm6 = *esi
float xmm3_1 = arg5[2] f- xmm4
float xmm4_1 = xmm4 - arg2[2]
float xmm5_1 = xmm0 - arg2[1]
float xmm1_1 = *arg5 - xmm6
float xmm6_1 = xmm6 - *arg2
float xmm7_2 = xmm3_1 * xmm5_1 - xmm2_1 * xmm4_1
float xmm3_3 = xmm1_1 * xmm4_1 - xmm6_1 * xmm3_1
float xmm6_3 = xmm6_1 * xmm2_1 - xmm1_1 * xmm5_1
float var_8 = xmm3_3
float xmm0_11 = sub_484cc0(xmm7_2 * xmm7_2 + xmm3_3 * xmm3_3 + xmm6_3 * xmm6_3)
xmm0_11 - 0f
int32_t* eax
eax:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
    | (xmm0_11 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    *arg3 = xmm7_2.q
    arg3[2] = xmm6_3
    return arg3

float xmm1_7 = 1f / xmm0_11
*arg3 = xmm7_2 * xmm1_7
arg3[1] = xmm1_7 * xmm3_3
arg3[2] = xmm6_3 * xmm1_7
return arg3
