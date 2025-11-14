// 函数: sub_48b200
// 地址: 0x48b200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result = *(arg1 + 0x70)
float* esi_1

if (result != 0)
    esi_1 = arg5
    
    if (result == 1)
        int32_t xmm1_2 = *(arg1 + 0x7c)
        int32_t xmm0_17 = *(arg1 + 0x78)
        *esi_1 = *(arg1 + 0x74)
        esi_1[1] = xmm0_17
        esi_1[2] = xmm1_2
    else
        int64_t* eax_8
        
        if (result == 2)
            eax_8 = arg2
        label_48b481:
            *esi_1 = *eax_8
            esi_1[2] = eax_8[1].d
        else if (result != 3)
            if (result == 4)
                float xmm6_1 = *(arg1 + 0x78)
                float xmm3_6 = *(arg1 + 0x7c)
                float xmm7_1 = *(arg1 + 0x74)
                float xmm4_2 = xmm6_1 + 10f
                float xmm2_4 = xmm3_6 + 10f
                float var_68 = xmm7_1
                float xmm5_2 = xmm7_1 + 10f
                float var_64_1 = xmm6_1
                float var_60_1 = xmm3_6
                float var_5c = xmm2_4 * xmm6_1 - xmm4_2 * xmm3_6
                float var_58_1 = xmm5_2 * xmm3_6 - xmm2_4 * xmm7_1
                float var_54_2 = xmm4_2 * xmm7_1 - xmm5_2 * xmm6_1
                uint32_t temp1_1 = modu.dp.d(0:(sub_47cc20(arg4)), 0x168)
                void var_50
                float var_40[0x10]
                sub_47c420(
                    sub_47c340(&var_50, &var_68, 
                        _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(temp1_1)) f+
                            *((temp1_1 u>> 0x1f << 3) + &data_709480)) * 3.14159274f * 0.00555555569f), 
                    &var_40)
                eax_8 = sub_47b190(&var_5c, &var_68, &var_40)
                goto label_48b481
            
            if (result == 5)
                eax_8 = arg3
                goto label_48b481
        else
            float xmm0_19 = arg2[1].d f* -1f
            *esi_1 = _mm_unpacklo_ps(*arg2 * -1f, *(arg2 + 4) * -1f)
            esi_1[2] = xmm0_19
    
    if (*(arg1 + 0x70) != 5)
        sub_48b510(*(arg1 + 0x80), esi_1, arg4)
else
    *(arg4 + 4) += 1
    
    if (*(arg4 + 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 + 4) = 0
    
    int32_t ecx_2 = *(arg4 + 4)
    double xmm1_1 = 2.3283064370807974e-10
    int32_t eax = *(arg4 + (ecx_2 << 2) + 8)
    double xmm0_3 = _mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_709480)
    *(arg4 + 4) = ecx_2 + 1
    float xmm3_2 = _mm_cvtpd_ps(xmm0_3 * xmm1_1) - 0.5f
    
    if (ecx_2 + 1 s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 + 4) = 0
    
    int32_t ecx_4 = *(arg4 + 4)
    int32_t eax_3 = *(arg4 + (ecx_4 << 2) + 8)
    double xmm0_7 = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_709480)
    *(arg4 + 4) = ecx_4 + 1
    float xmm0_10 = _mm_cvtpd_ps(xmm0_7 * xmm1_1) - 0.5f
    
    if (ecx_4 + 1 s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 + 4) = 0
    
    int32_t eax_7 = *(arg4 + (*(arg4 + 4) << 2) + 8)
    esi_1 = arg5
    esi_1[1] = xmm0_10
    double xmm0_12 = _mm_cvtepi32_pd(zx.q(eax_7))
    *esi_1 = xmm3_2
    esi_1[2] = _mm_cvtpd_ps((xmm0_12 f+ *((eax_7 u>> 0x1f << 3) + &data_709480)) * xmm1_1) - 0.5f

float xmm3_7 = esi_1[1]
float xmm2_10 = *esi_1
float xmm4_5 = esi_1[2]
float xmm1_9 = xmm2_10 * xmm2_10 + xmm3_7 * xmm3_7 + xmm4_5 * xmm4_5
float xmm1_10 = _mm_sqrt_ss(xmm1_9, xmm1_9)
xmm1_10 - 0f
result:1.b = (xmm1_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_10, 0f) ? 1 : 0) << 2
    | (xmm1_10 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    float xmm0_33 = 1f / xmm1_10
    *esi_1 = xmm2_10 * xmm0_33
    esi_1[1] = xmm3_7 * xmm0_33
    esi_1[2] = xmm4_5 * xmm0_33

return result
