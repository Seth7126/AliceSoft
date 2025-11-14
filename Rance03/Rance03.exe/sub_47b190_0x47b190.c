// 函数: sub_47b190
// 地址: 0x47b190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm1 = *arg1
float xmm3 = arg1[1]
float xmm2 = arg1[2]
float xmm6_1 = arg3[2] * xmm1
float xmm7_1 = arg3[3] * xmm1
float xmm4_4 = arg3[4] * xmm3 + xmm1 * *arg3 + arg3[8] * xmm2 + arg3[0xc]
float xmm5_3 = arg3[1] * xmm1 + arg3[5] * xmm3 + arg3[9] * xmm2
float xmm0_9 = arg3[6] * xmm3
*arg2 = xmm4_4
float xmm5_4 = xmm5_3 + arg3[0xd]
float xmm6_3 = xmm6_1 + xmm0_9 + arg3[0xa] * xmm2
float xmm0_13 = arg3[7] * xmm3
arg2[1] = xmm5_4
float xmm6_4 = xmm6_3 + arg3[0xe]
float xmm0_15 = arg3[0xb] * xmm2
arg2[2] = xmm6_4
float xmm7_4 = xmm7_1 + xmm0_13 + xmm0_15 + arg3[0xf]
xmm7_4 - 1f
float* eax
eax:1.b =
    (xmm7_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 1f) ? 1 : 0) << 2 | (xmm7_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return arg2

xmm7_4 - 0f
bool p_2 = unimplemented  {test ah, 0x44}

if (not(p_2))
    return arg2

float xmm0_16 = 1f / xmm7_4
*arg2 = xmm4_4 * xmm0_16
arg2[1] = xmm5_4 * xmm0_16
arg2[2] = xmm6_4 * xmm0_16
return arg2
