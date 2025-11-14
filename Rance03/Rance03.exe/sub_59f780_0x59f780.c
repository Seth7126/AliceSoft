// 函数: sub_59f780
// 地址: 0x59f780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm3_1 = arg1[1]
float xmm2 = *arg1
float xmm4 = arg1[2]
float xmm1_3 = xmm2 * xmm2 + xmm3_1 * xmm3_1 + xmm4 * xmm4
float xmm1_4 = _mm_sqrt_ss(xmm1_3, xmm1_3)
xmm1_4 - 0f
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    int32_t ecx = arg1[2]
    *arg2 = *arg1
    arg2[2] = ecx
    return arg2

float xmm0_4 = 1f / xmm1_4
*arg2 = xmm2 * xmm0_4
arg2[1] = xmm3_1 * xmm0_4
arg2[2] = xmm4 * xmm0_4
return arg2
