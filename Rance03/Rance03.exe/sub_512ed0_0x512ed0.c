// 函数: sub_512ed0
// 地址: 0x512ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = arg3
int32_t* esi = arg4
float xmm1 = *edx
float xmm6 = *esi
xmm1 - xmm6
int32_t result
result:1.b =
    (xmm1 == xmm6 ? 1 : 0) << 6 | (is_unordered.d(xmm1, xmm6) ? 1 : 0) << 2 | (xmm1 < xmm6 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
label_512f47:
    float xmm7_2 = esi[1] f+ edx[1]
    float xmm4_2 = edx[1] f- esi[1]
    float xmm2_4 = xmm6 + xmm1 f+ *arg5
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(arg1))
    float xmm2_5 = xmm2_4 * 0.333333343f
    float xmm7_3 = xmm7_2 f+ arg5[1]
    float xmm2_7 = xmm1 - xmm6
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(arg1))
    float xmm7_4 = xmm7_3 * 0.333333343f
    float xmm5_2 = _mm_cvtepi32_ps(zx.o(arg2))
    
    if (not(((xmm5_2 f- edx[1]) * xmm2_7 + (xmm1 - xmm1_2) * xmm4_2)
            * ((xmm7_4 f- edx[1]) * xmm2_7 + (*edx - xmm2_5) * xmm4_2) f< 0))
        float xmm0_10 = esi[1]
        float xmm4_3 = *arg5
        float xmm3_7 = xmm0_10 f- arg5[1]
        float xmm1_8 = xmm6 - xmm4_3
        
        if (not(((xmm5_2 - xmm0_10) * xmm1_8 + (xmm6 - xmm0_3) * xmm3_7)
                * ((xmm7_4 f- esi[1]) * xmm1_8 + (xmm6 - xmm2_5) * xmm3_7) f< 0))
            float xmm3_8 = arg5[1]
            float xmm1_10 = xmm4_3 f- *edx
            float xmm6_4 = _mm_cvtepi32_ps(zx.o(arg1))
            float xmm2_14 = xmm3_8 f- edx[1]
            result.b = ((xmm5_2 - xmm3_8) * xmm1_10 + (xmm4_3 - xmm6_4) * xmm2_14)
                * ((xmm7_4 - xmm3_8) * xmm1_10 + (xmm4_3 - xmm2_5) * xmm2_14) f>= 0
            return result
else
    float xmm0_1 = edx[1]
    float temp1_1 = esi[1]
    xmm0_1 - temp1_1
    result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_512f47
    
    float xmm2_1 = edx[2]
    float temp2_1 = esi[2]
    xmm2_1 - temp2_1
    result:1.b = (xmm2_1 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, temp2_1) ? 1 : 0) << 2
        | (xmm2_1 < temp2_1 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        goto label_512f47
    
    float temp3_1 = *arg5
    xmm1 - temp3_1
    result:1.b = (xmm1 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm1, temp3_1) ? 1 : 0) << 2
        | (xmm1 < temp3_1 ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        goto label_512f47
    
    float temp4_1 = arg5[1]
    xmm0_1 - temp4_1
    result:1.b = (xmm0_1 == temp4_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp4_1) ? 1 : 0) << 2
        | (xmm0_1 < temp4_1 ? 1 : 0)
    bool p_9 = unimplemented  {test ah, 0x44}
    
    if (p_9)
        goto label_512f47
    
    float temp5_1 = arg5[2]
    xmm2_1 - temp5_1
    result:1.b = (xmm2_1 == temp5_1 ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, temp5_1) ? 1 : 0) << 2
        | (xmm2_1 < temp5_1 ? 1 : 0)
    bool p_11 = unimplemented  {test ah, 0x44}
    
    if (p_11)
        goto label_512f47

result.b = 0
return result
