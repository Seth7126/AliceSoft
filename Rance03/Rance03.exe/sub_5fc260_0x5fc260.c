// 函数: sub_5fc260
// 地址: 0x5fc260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_e0
int32_t eax_1 = __security_cookie ^ &var_e0

if (*(arg1 + 5) != 0)
    arg2 = 1f - arg2

float xmm1

if (0.5f <= arg2)
    xmm1 = (1f - arg2) * -180f
else
    xmm1 = arg2 * 180f

int128_t var_6c
int32_t* ecx = &var_6c
EnumC13Lines::EnumC13Lines(ecx)

if (*(arg1 + 4) == 0)
    sub_47b7f0(ecx, xmm1)
else
    sub_47b8b0(ecx, xmm1)

int128_t xmm0_4 = var_6c
sub_47ba10(arg1 + 0x18, &var_6c)
float xmm4_2 = (*(arg1 + 0x14) f+ *(arg1 + 0x10)) * 0.5f
float xmm2_4 = (*(arg1 + 0x30) f+ *(arg1 + 0x20)) * 0f + *(arg1 + 0x40) * xmm4_2 f+ *(arg1 + 0x50)
float xmm1_5 = (*(arg1 + 0x34) f+ *(arg1 + 0x24)) * 0f + *(arg1 + 0x44) * xmm4_2 f+ *(arg1 + 0x54)
xmm1_5 - 1f
int32_t* result
result:1.b =
    (xmm1_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_5, 1f) ? 1 : 0) << 2 | (xmm1_5 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm1_5 f- 0
    result:1.b = (xmm1_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_5, 0f) ? 1 : 0) << 2
        | (xmm1_5 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        xmm2_4 = 1f / xmm1_5 * xmm2_4

void* edx = arg1 + 0x58
int32_t xmm0_15 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
int32_t i = 0
int32_t var_28[0x2]
var_28[0] = 0
var_28[1] = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = xmm0_15
int32_t var_c = xmm0_15
int32_t var_b0 = 0x3f800000
int32_t xmm1_7 = _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
int128_t var_4c
float xmm7_1 = var_4c.d * xmm2_4
int32_t var_20 = xmm1_7
int32_t var_10 = xmm1_7
float var_d0 = xmm7_1

do
    float xmm3_3 = (&var_28)[i][0] f/ (_mm_cvtepi32_ps(zx.o(*(arg1 + 8))) * 0.5f) - 1f
    var_24
    float xmm2_5 = 1f - *(&var_24 + (i << 3)) / (_mm_cvtepi32_ps(zx.o(*(arg1 + 0xc))) * 0.5f)
    int128_t var_5c
    int128_t var_3c
    float xmm4_7 = var_5c.d * xmm2_5 + var_6c.d * xmm3_3 + xmm7_1 f+ var_3c.d
    float xmm5_5 = var_5c:4.d * xmm2_5 + var_6c:4.d * xmm3_3 + var_4c:4.d * xmm2_4 f+ var_3c:4.d
    float xmm7_6 =
        var_5c:0xc.d * xmm2_5 + var_6c:0xc.d * xmm3_3 + var_4c:0xc.d * xmm2_4 f+ var_3c:0xc.d
    xmm7_6 - 1f
    result:1.b = (xmm7_6 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_6, 1f) ? 1 : 0) << 2
        | (xmm7_6 < 1f ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        xmm7_6 f- 0
        result:1.b = (xmm7_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_6, 0f) ? 1 : 0) << 2
            | (xmm7_6 < 0f ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            float xmm1_10 = 1f / xmm7_6
            xmm5_5 = xmm1_10 * xmm5_5
            xmm4_7 = xmm1_10 * xmm4_7
    
    float xmm1_12 = (zx.o(0)).d
    float xmm3_8 = xmm0_4.d * xmm4_7 + var_5c.d * xmm5_5 + var_4c.d * 0f f+ var_3c.d
    float xmm7_11 = xmm0_4:4.d * xmm4_7 + var_5c:4.d * xmm5_5 + var_4c:4.d * 0f f+ var_3c:4.d
    var_e0 = xmm0_4:8.d * xmm4_7 + var_5c:8.d * xmm5_5 + var_4c:8.d * 0f f+ var_3c:8.d
    float xmm2_15 =
        xmm0_4:0xc.d * xmm4_7 + var_5c:0xc.d * xmm5_5 + var_4c:0xc.d * 0f f+ var_3c:0xc.d
    xmm2_15 - 1f
    result:1.b = (xmm2_15 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_15, 1f) ? 1 : 0) << 2
        | (xmm2_15 < 1f ? 1 : 0)
    bool p_9 = unimplemented  {test ah, 0x44}
    
    if (p_9)
        xmm2_15 f- 0
        result:1.b = (xmm2_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_15, 0f) ? 1 : 0) << 2
            | (xmm2_15 < 0f ? 1 : 0)
        bool p_11 = unimplemented  {test ah, 0x44}
        
        if (p_11)
            float xmm1_13 = 1f / xmm2_15
            xmm1_12 = xmm1_13 * var_e0
            xmm4_7 = xmm1_13 * xmm3_8
            xmm5_5 = xmm1_13 * xmm7_11
    else
        xmm1_12 = var_e0
        xmm4_7 = xmm3_8
        xmm5_5 = xmm7_11
    
    xmm7_1 = var_d0
    i += 1
    float var_b8_1 = xmm5_5
    float var_b4_1 = xmm1_12 + xmm4_2
    *edx = xmm4_7.o
    edx += 0x10
while (i s< 4)

sub_69a5bc(eax_1 ^ &var_e0)
return result
