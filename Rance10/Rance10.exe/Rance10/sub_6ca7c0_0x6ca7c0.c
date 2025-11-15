// 函数: sub_6ca7c0
// 地址: 0x6ca7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm1 = *arg1
float xmm3 = arg1[1]
float xmm2 = arg1[2]
float xmm5_4 = arg2[4] * xmm3 + xmm1 * *arg2 + arg2[8] * xmm2 + arg2[0xc]
float xmm6_4 = arg2[1] * xmm1 + arg2[5] * xmm3 + arg2[9] * xmm2 + arg2[0xd]
float xmm7_4 = arg2[2] * xmm1 + arg2[6] * xmm3 + arg2[0xa] * xmm2 + arg2[0xe]
float xmm4_4 = arg2[3] * xmm1 + arg2[7] * xmm3 + arg2[0xb] * xmm2 + arg2[0xf]
xmm4_4 - 1f
float* eax
eax:1.b =
    (xmm4_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 1f) ? 1 : 0) << 2 | (xmm4_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    *arg1 = xmm5_4
    arg1[1] = xmm6_4
    arg1[2] = xmm7_4
    return arg1

xmm4_4 - 0f
eax:1.b =
    (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2 | (xmm4_4 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    float xmm1_1 = 1f / xmm4_4
    *arg1 = xmm1_1 * xmm5_4
    arg1[1] = xmm1_1 * xmm6_4
    arg1[2] = xmm1_1 * xmm7_4

return arg1
