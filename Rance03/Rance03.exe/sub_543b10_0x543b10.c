// 函数: sub_543b10
// 地址: 0x543b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm1_1 = arg2 * 0f
float xmm0_1 = xmm1_1 + 1f
float var_38
float var_2c
int16_t top

for (int32_t i = 0; i s< 0x14; )
    float xmm0_7 = _mm_cvtepi32_ps(zx.o(i)) * 360f * 0.0500000007f * 3.14159274f * 0.00555555569f
    float xmm0_8 = ___libm_sse2_cosf(xmm0_7)
    double* eax_1
    float xmm0_10
    eax_1, xmm0_10 = ___libm_sse2_sinf(xmm0_7)
    float xmm6_1 = xmm1_1
    float xmm5_3 = xmm0_8 * arg2 + xmm0_10 * 0f
    float xmm3_4 = (xmm0_10 ^ (data_7094c0).d) * arg2 + xmm0_8 * 0f
    xmm0_1 - 1f
    eax_1:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm0_1 f- 0
        eax_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm0_12 = 1f / xmm0_1
            xmm5_3 = xmm5_3 * xmm0_12
            xmm6_1 = xmm6_1 * xmm0_12
            xmm3_4 = xmm3_4 * xmm0_12
    
    i += 1
    float xmm0_13 = *arg3
    float xmm6_2 = xmm6_1 f+ arg3[1]
    float xmm3_5 = xmm3_4 f+ arg3[2]
    var_38 = xmm0_13 + xmm5_3
    float var_34_1 = xmm6_2
    float var_30_1 = xmm3_5
    float xmm0_20 = _mm_cvtepi32_ps(zx.o(i)) * 360f * 0.0500000007f * 3.14159274f * 0.00555555569f
    float xmm0_21 = ___libm_sse2_cosf(xmm0_20)
    double* eax_3
    float xmm0_23
    eax_3, xmm0_23 = ___libm_sse2_sinf(xmm0_20)
    top += 4
    float xmm4_2 = xmm1_1
    float xmm6_5 = xmm0_21 * arg2 + xmm0_23 * 0f
    float xmm5_7 = (xmm0_23 ^ (data_7094c0).d) * arg2 + xmm0_21 * 0f
    xmm0_1 - 1f
    eax_3:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        xmm0_1 f- 0
        eax_3:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            float xmm0_25 = 1f / xmm0_1
            xmm6_5 = xmm6_5 * xmm0_25
            xmm4_2 = xmm4_2 * xmm0_25
            xmm5_7 = xmm5_7 * xmm0_25
    
    float xmm4_3 = xmm4_2 f+ arg3[1]
    float xmm5_8 = xmm5_7 f+ arg3[2]
    var_2c = xmm0_13 + xmm6_5
    float var_28_1 = xmm4_3
    float var_24_1 = xmm5_8
    sub_5434e0(arg1, &var_38, arg4, &var_2c, arg4)

for (int32_t i_1 = 0; i_1 s< 0x14; )
    float xmm0_33 = _mm_cvtepi32_ps(zx.o(i_1)) * 360f * 0.0500000007f * 3.14159274f * 0.00555555569f
    float xmm0_34 = ___libm_sse2_cosf(xmm0_33)
    double* eax_5
    float xmm0_36
    eax_5, xmm0_36 = ___libm_sse2_sinf(xmm0_33)
    float xmm6_6 = xmm1_1
    float xmm5_11 = xmm0_34 * arg2 + (xmm0_36 ^ (data_7094c0).d) * 0f
    float xmm4_6 = xmm0_36 * arg2 + xmm0_34 * 0f
    xmm0_1 - 1f
    eax_5:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_10 = unimplemented  {test ah, 0x44}
    
    if (p_10)
        xmm0_1 f- 0
        eax_5:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_12 = unimplemented  {test ah, 0x44}
        
        if (p_12)
            float xmm1_11 = 1f / xmm0_1
            xmm6_6 = xmm6_6 * xmm1_11
            xmm5_11 = xmm5_11 * xmm1_11
            xmm4_6 = xmm4_6 * xmm1_11
    
    i_1 += 1
    var_2c = *arg3 + xmm6_6
    float xmm0_43 = arg3[1]
    float var_28_2 = xmm0_43 + xmm5_11
    float xmm0_45 = arg3[2]
    float var_24_2 = xmm0_45 + xmm4_6
    float xmm0_52 = _mm_cvtepi32_ps(zx.o(i_1)) * 360f * 0.0500000007f * 3.14159274f * 0.00555555569f
    float xmm0_53 = ___libm_sse2_cosf(xmm0_52)
    double* eax_7
    float xmm0_55
    eax_7, xmm0_55 = ___libm_sse2_sinf(xmm0_52)
    top += 4
    float xmm4_7 = xmm1_1
    float xmm6_9 = xmm0_53 * arg2 + (xmm0_55 ^ (data_7094c0).d) * 0f
    float xmm5_14 = xmm0_55 * arg2 + xmm0_53 * 0f
    xmm0_1 - 1f
    eax_7:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_14 = unimplemented  {test ah, 0x44}
    
    if (p_14)
        xmm0_1 f- 0
        eax_7:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_16 = unimplemented  {test ah, 0x44}
        
        if (p_16)
            float xmm1_15 = 1f / xmm0_1
            xmm4_7 = xmm4_7 * xmm1_15
            xmm6_9 = xmm6_9 * xmm1_15
            xmm5_14 = xmm5_14 * xmm1_15
    
    float var_34_2 = xmm0_43 + xmm6_9
    var_38 = xmm4_7 + *arg3
    float var_30_2 = xmm0_45 + xmm5_14
    sub_5434e0(arg1, &var_2c, arg4, &var_38, arg4)

int32_t result

for (int32_t i_2 = 0; i_2 s< 0x14; )
    float xmm0_69 = _mm_cvtepi32_ps(zx.o(i_2)) * 360f * 0.0500000007f * 3.14159274f * 0.00555555569f
    float xmm0_70 = ___libm_sse2_cosf(xmm0_69)
    double* eax_9
    float xmm0_72
    eax_9, xmm0_72 = ___libm_sse2_sinf(xmm0_69)
    float xmm6_10 = xmm1_1
    float xmm5_17 = xmm0_70 * arg2 + (xmm0_72 ^ (data_7094c0).d) * 0f
    float xmm4_11 = xmm0_72 * arg2 + xmm0_70 * 0f
    xmm0_1 - 1f
    eax_9:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_18 = unimplemented  {test ah, 0x44}
    
    if (p_18)
        xmm0_1 f- 0
        eax_9:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_20 = unimplemented  {test ah, 0x44}
        
        if (p_20)
            float xmm1_19 = 1f / xmm0_1
            xmm6_10 = xmm6_10 * xmm1_19
            xmm5_17 = xmm5_17 * xmm1_19
            xmm4_11 = xmm4_11 * xmm1_19
    
    float* eax_10 = arg3
    i_2 += 1
    float xmm0_77 = eax_10[1]
    float var_28_3 = xmm0_77 + xmm4_11
    float xmm0_79 = eax_10[2]
    var_2c = xmm5_17 + *eax_10
    float var_24_3 = xmm0_79 + xmm6_10
    float xmm0_86 = _mm_cvtepi32_ps(zx.o(i_2)) * 360f * 0.0500000007f * 3.14159274f * 0.00555555569f
    float xmm0_87 = ___libm_sse2_cosf(xmm0_86)
    double* eax_11
    float xmm0_89
    eax_11, xmm0_89 = ___libm_sse2_sinf(xmm0_86)
    top += 4
    float xmm5_19 = xmm1_1
    float xmm4_14 = xmm0_87 * arg2 + (xmm0_89 ^ (data_7094c0).d) * 0f
    float xmm6_13 = xmm0_89 * arg2 + xmm0_87 * 0f
    xmm0_1 - 1f
    eax_11:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_22 = unimplemented  {test ah, 0x44}
    
    if (p_22)
        xmm0_1 f- 0
        eax_11:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_24 = unimplemented  {test ah, 0x44}
        
        if (p_24)
            float xmm1_23 = 1f / xmm0_1
            xmm5_19 = xmm5_19 * xmm1_23
            xmm4_14 = xmm4_14 * xmm1_23
            xmm6_13 = xmm6_13 * xmm1_23
    
    float var_34_3 = xmm0_77 + xmm6_13
    var_38 = xmm4_14 f+ *arg3
    float var_30_3 = xmm0_79 + xmm5_19
    result = sub_5434e0(arg1, &var_2c, arg4, &var_38, arg4)

return result
