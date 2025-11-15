// 函数: sub_6ca9e0
// 地址: 0x6ca9e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm3_1 = arg1[1]
float xmm2 = *arg1
float xmm4 = arg1[2]
float xmm0_4 = sub_484cc0(xmm2 * xmm2 + xmm3_1 * xmm3_1 + xmm4 * xmm4)
xmm0_4 - 0f
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    int32_t ecx = arg1[2]
    *arg2 = *arg1
    arg2[2] = ecx
    return arg2

float xmm1_4 = 1f / xmm0_4
*arg2 = xmm2 * xmm1_4
arg2[1] = xmm3_1 * xmm1_4
arg2[2] = xmm4 * xmm1_4
return arg2
