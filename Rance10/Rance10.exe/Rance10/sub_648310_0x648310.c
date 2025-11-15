// 函数: sub_648310
// 地址: 0x648310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_e0
int32_t eax_1 = __security_cookie ^ &var_e0

if (*(arg1 + 0x45) != 0)
    arg2 = 1f - arg2

float xmm1

if (0.5f <= arg2)
    xmm1 = (1f - arg2) * -180f
else
    xmm1 = arg2 * 180f

float var_6c
int32_t* ecx = &var_6c
int32_t* eax_2

if (*(arg1 + 0x44) == 0)
    eax_2 = sub_6caeb0(ecx, xmm1)
else
    eax_2 = sub_6caf70(ecx, xmm1)

int128_t xmm0_4 = *eax_2
int128_t xmm0_5 = *(eax_2 + 0x10)
int128_t xmm0_6 = *(eax_2 + 0x20)
int128_t xmm0_7 = *(eax_2 + 0x30)
sub_6cb130(arg1 + 0x50, &var_6c)
float xmm4_2 = (*(arg1 + 0x4c) f+ *(arg1 + 0x48)) * 0.5f
float xmm2_4 = (*(arg1 + 0x68) f+ *(arg1 + 0x58)) * 0f + *(arg1 + 0x78) * xmm4_2 f+ *(arg1 + 0x88)
float xmm1_5 = (*(arg1 + 0x6c) f+ *(arg1 + 0x5c)) * 0f + *(arg1 + 0x7c) * xmm4_2 f+ *(arg1 + 0x8c)
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
        xmm2_4 = xmm2_4 * 1f / xmm1_5

void* edx = arg1 + 0x90
int32_t xmm0_14 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10)))
int32_t i = 0
int32_t var_28[0x2]
var_28[0] = 0
var_28[1] = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = xmm0_14
int32_t var_c = xmm0_14
int32_t var_b0 = 0x3f800000
int32_t xmm1_7 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
float var_4c
float xmm5_1 = var_4c * xmm2_4
float var_48
float xmm7_1 = var_48 * xmm2_4
int32_t var_20 = xmm1_7
int32_t var_10 = xmm1_7
float var_c4 = xmm5_1
float var_c0 = xmm7_1

do
    float xmm3_1 = 2f / _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
    float xmm0_28 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10)))
    float xmm3_3 = xmm3_1 f* (&var_28)[i][0] - 1f
    var_24
    float xmm2_5 = 1f - 2f / xmm0_28 f* *(&var_24 + (i << 3))
    float var_5c
    float var_3c
    float xmm4_7 = var_5c * xmm2_5 + var_6c * xmm3_3 + xmm5_1 + var_3c
    float var_68
    float var_58
    float var_38
    float xmm5_6 = var_58 * xmm2_5 + var_68 * xmm3_3 + xmm7_1 + var_38
    float var_60
    float var_50
    float var_40
    float var_30
    float xmm7_6 = var_50 * xmm2_5 + var_60 * xmm3_3 + var_40 * xmm2_4 + var_30
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
            xmm4_7 = xmm4_7 * xmm1_10
            xmm5_6 = xmm1_10 * xmm5_6
    
    float xmm1_12 = (zx.o(0)).d
    float xmm3_8 = xmm0_4.d * xmm4_7 + xmm0_5.d * xmm5_6 + xmm0_6.d * 0f f+ xmm0_7.d
    float xmm7_11 = xmm0_4:4.d * xmm4_7 + xmm0_5:4.d * xmm5_6 + xmm0_6:4.d * 0f f+ xmm0_7:4.d
    var_e0 = xmm0_4:8.d * xmm4_7 + xmm0_5:8.d * xmm5_6 + xmm0_6:8.d * 0f f+ xmm0_7:8.d
    float xmm2_15 =
        xmm0_4:0xc.d * xmm4_7 + xmm0_5:0xc.d * xmm5_6 + xmm0_6:0xc.d * 0f f+ xmm0_7:0xc.d
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
            xmm5_6 = xmm1_13 * xmm7_11
    else
        xmm1_12 = var_e0
        xmm4_7 = xmm3_8
        xmm5_6 = xmm7_11
    
    xmm7_1 = var_c0
    i += 1
    float var_b8_1 = xmm5_6
    xmm5_1 = var_c4
    float var_b4_1 = xmm1_12 + xmm4_2
    *edx = xmm4_7.o
    edx += 0x10
while (i s< 4)

@__security_check_cookie@4(eax_1 ^ &var_e0)
return result
