// 函数: sub_56aae0
// 地址: 0x56aae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm1 = *(arg1 + 4)
float xmm3 = *(arg1 + 8)
float xmm2 = *(arg1 + 0xc)
int32_t edx = *arg3
int32_t eax_1 = *(arg1 + 0x20) * 0xd8
float xmm4_4 = *(eax_1 + edx + 0x4c) * xmm3 + *(eax_1 + edx + 0x3c) * xmm1
    + *(eax_1 + edx + 0x5c) * xmm2 f+ *(eax_1 + edx + 0x6c)
float xmm6_4 = *(eax_1 + edx + 0x40) * xmm1 + *(eax_1 + edx + 0x50) * xmm3
    + *(eax_1 + edx + 0x60) * xmm2 f+ *(eax_1 + edx + 0x70)
float xmm5_4 = *(eax_1 + edx + 0x44) * xmm1 + *(eax_1 + edx + 0x54) * xmm3
    + *(eax_1 + edx + 0x64) * xmm2 f+ *(eax_1 + edx + 0x74)
float xmm7_4 = *(eax_1 + edx + 0x48) * xmm1 + *(eax_1 + edx + 0x58) * xmm3
    + *(eax_1 + edx + 0x68) * xmm2 f+ *(eax_1 + edx + 0x78)
arg3 = xmm7_4
arg3 f- 1f
eax_1:1.b =
    (arg3 f== 1f ? 1 : 0) << 6 | (is_unordered.d(arg3, 1f) ? 1 : 0) << 2 | (arg3 f< 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    arg3 f- 0
    eax_1:1.b =
        (arg3 f== 0f ? 1 : 0) << 6 | (is_unordered.d(arg3, 0f) ? 1 : 0) << 2 | (arg3 f< 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm0_16 = 1f f/ arg3
        xmm4_4 = xmm4_4 * xmm0_16
        xmm6_4 = xmm6_4 * xmm0_16
        xmm5_4 = xmm5_4 * xmm0_16

int32_t eax_2 = *(arg2 i+ 0x20) * 0xd8
float xmm3_1 = *(arg2 i+ 8)
float xmm1_2 = *(arg2 i+ 4)
float xmm2_1 = *(arg2 i+ 0xc)
float xmm0_24 = *(eax_2 + edx + 0x4c) * xmm3_1 f+ xmm1_2 f* *(eax_2 + edx + 0x3c)
    + *(eax_2 + edx + 0x5c) * xmm2_1 f+ *(eax_2 + edx + 0x6c)
arg3 = xmm0_24
float xmm7_12 = *(eax_2 + edx + 0x40) * xmm1_2 + *(eax_2 + edx + 0x50) * xmm3_1
    + *(eax_2 + edx + 0x60) * xmm2_1 f+ *(eax_2 + edx + 0x70)
float xmm7_17 = *(eax_2 + edx + 0x44) * xmm1_2 + *(eax_2 + edx + 0x54) * xmm3_1
    + *(eax_2 + edx + 0x64) * xmm2_1 f+ *(eax_2 + edx + 0x74)
float xmm3_2 = xmm7_17
float xmm2_2 = xmm7_12
float xmm7_22 = *(eax_2 + edx + 0x48) * xmm1_2 + *(eax_2 + edx + 0x58) * xmm3_1
    + *(eax_2 + edx + 0x68) * xmm2_1 f+ *(eax_2 + edx + 0x78)
xmm7_22 - 1f
eax_2:1.b = (xmm7_22 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_22, 1f) ? 1 : 0) << 2
    | (xmm7_22 < 1f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}
bool p_7

if (p_5)
    xmm7_22 f- 0
    eax_2:1.b = (xmm7_22 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_22, 0f) ? 1 : 0) << 2
        | (xmm7_22 < 0f ? 1 : 0)
    p_7 = unimplemented  {test ah, 0x44}

float xmm1_5

if (not(p_5) || not(p_7))
    xmm1_5 = arg3
else
    float xmm0_37 = 1f / xmm7_22
    xmm1_5 = arg3 f* xmm0_37
    xmm2_2 = xmm2_2 * xmm0_37
    xmm3_2 = xmm3_2 * xmm0_37

float xmm4_5 = xmm4_4 - xmm1_5
float xmm6_5 = xmm6_4 - xmm2_2
float xmm5_5 = xmm5_4 - xmm3_2
float xmm0_42 = sub_484cc0(xmm6_5 * xmm6_5 + xmm4_5 * xmm4_5 + xmm5_5 * xmm5_5)
float xmm1_11 = *(arg2 i+ 0x1c) f+ *(arg1 + 0x1c)

if (not(xmm0_42 <= xmm1_11))
    eax_2.b = 0
    return eax_2

xmm0_42 f- 0
eax_2:1.b = (xmm0_42 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_42, 0f) ? 1 : 0) << 2
    | (xmm0_42 < 0f ? 1 : 0)
bool p_9 = unimplemented  {test ah, 0x44}

if (p_9)
    float xmm7_23 = 1f / xmm0_42
    xmm4_5 = xmm4_5 * xmm7_23
    xmm6_5 = xmm6_5 * xmm7_23
    xmm5_5 = xmm5_5 * xmm7_23

float xmm1_12 = xmm1_11 - xmm0_42
*arg4 = _mm_unpacklo_ps(xmm4_5 * xmm1_12, xmm6_5 * xmm1_12)
arg4[1].d = xmm5_5 * xmm1_12
float eax_3
eax_3.b = 1
return eax_3
