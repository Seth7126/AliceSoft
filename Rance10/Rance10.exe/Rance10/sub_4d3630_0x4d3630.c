// 函数: sub_4d3630
// 地址: 0x4d3630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float eax = *(arg2 i+ 0x70)
float var_64
float* esi_3

if (eax != 0)
    esi_3 = arg6
    
    if (eax == 1)
        int32_t xmm1_3 = *(arg2 i+ 0x7c)
        int32_t xmm0_15 = *(arg2 i+ 0x78)
        *esi_3 = *(arg2 i+ 0x74)
        esi_3[1] = xmm0_15
        esi_3[2] = xmm1_3
    else
        float* eax_7
        
        if (eax == 2)
            eax_7 = arg3
        label_4d398b:
            *esi_3 = *eax_7
            esi_3[2] = eax_7[2]
        else if (eax != 3)
            if (eax == 4)
                float xmm6_1 = *(arg2 i+ 0x78)
                float xmm7_1 = *(arg2 i+ 0x7c)
                float xmm5_1 = *(arg2 i+ 0x74)
                float xmm3_5 = xmm6_1 + 10f
                float xmm2_6 = xmm7_1 + 10f
                float xmm4_3 = xmm5_1 + 10f
                int32_t* ecx_4 = *(arg5 i+ 8)
                *ecx_4 += 1
                bool cond:0_1 = *ecx_4 s< 0x209
                var_64 = xmm2_6 * xmm6_1 - xmm3_5 * xmm7_1
                float var_5c_2 = xmm3_5 * xmm5_1 - xmm4_3 * xmm6_1
                float var_60_1 = xmm4_3 * xmm7_1 - xmm2_6 * xmm5_1
                
                if (not(cond:0_1))
                    sub_4a7690(ecx_4)
                    *ecx_4 = 0
                
                int32_t ecx_6 = ecx_4[*ecx_4 + 1] u% 0x168
                float xmm2_8 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_6)) f+
                    *((ecx_6 u>> 0x1f << 3) + &data_79aa70))
                float xmm1_10 = xmm6_1 * xmm6_1 + xmm5_1 * xmm5_1 + xmm7_1 * xmm7_1
                float var_58
                
                if (0 f< xmm1_10)
                    float xmm1_11 = 1f / sub_484cc0(xmm1_10)
                    int32_t var_6c_1 = xmm2_8 * 0.00872664619f
                    float xmm0_33 = sub_484cb0()
                    var_58 = xmm5_1 * xmm1_11 * xmm0_33
                    float var_54_1 = xmm6_1 * xmm1_11 * xmm0_33
                    float var_50_1 = xmm7_1 * xmm1_11 * xmm0_33
                    int32_t var_4c_1 = sub_48ca30()
                else
                    var_58.o = zx.o(0)
                
                float var_48[0x10]
                sub_6cbac0(&var_58, &var_48)
                eax_7 = sub_6ca8d0(&var_64, &var_58, &var_48)
                goto label_4d398b
            
            if (eax == 5)
                eax_7 = arg4
                goto label_4d398b
        else
            eax = arg3[2] ^ 0x80000000
            *esi_3 = _mm_unpacklo_ps(*arg3 ^ 0x80000000, arg3[1] ^ 0x80000000)
            esi_3[2] = eax
    
    if (*(arg2 i+ 0x70) != 5)
        if (*(arg1 + 8) s< 0xe)
            sub_4d3f40(*(arg2 i+ 0x80), esi_3, arg5)
        else
            sub_4d3a60(esi_3, arg5, arg2)
else
    double xmm4_1 = 2.3283064370807974e-10
    int32_t* esi = *(arg5 i+ 8)
    int32_t xmm0_1
    int32_t xmm2_1
    
    if (esi != 0)
        *esi += 1
        
        if (*esi s>= 0x209)
            sub_4a7690(esi)
            *esi = 0
        
        int32_t eax_2 = esi[*esi + 1]
        xmm2_1 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_2)) f+
            *((eax_2 u>> 0x1f << 3) + &data_79aa70)) * xmm4_1)
        xmm0_1 = (zx.o(0)).d
    else
        xmm0_1 = (zx.o(0)).d
        xmm2_1 = (zx.o(0)).d
    
    int32_t* esi_1 = *(arg5 i+ 8)
    int32_t xmm1_1
    
    if (esi_1 != 0)
        *esi_1 += 1
        
        if (*esi_1 s>= 0x209)
            sub_4a7690(esi_1)
            *esi_1 = 0
        
        int32_t eax_4 = esi_1[*esi_1 + 1]
        xmm1_1 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_4)) f+
            *((eax_4 u>> 0x1f << 3) + &data_79aa70)) * xmm4_1)
        xmm0_1 = (zx.o(0)).d
    else
        xmm1_1 = (zx.o(0)).d
    
    int32_t* esi_2 = *(arg5 i+ 8)
    
    if (esi_2 != 0)
        *esi_2 += 1
        
        if (*esi_2 s>= 0x209)
            sub_4a7690(esi_2)
            *esi_2 = 0
        
        int32_t eax_6 = esi_2[*esi_2 + 1]
        xmm0_1 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_6)) f+
            *((eax_6 u>> 0x1f << 3) + &data_79aa70)) * xmm4_1)
    
    esi_3 = arg6
    *esi_3 = xmm2_1 f- 0.5f
    esi_3[1] = xmm1_1 f- 0.5f
    esi_3[2] = xmm0_1 f- 0.5f

float xmm3_11 = esi_3[1]
float xmm2_14 = *esi_3
float xmm4_8 = esi_3[2]
float xmm0_41 = sub_484cc0(xmm2_14 * xmm2_14 + xmm3_11 * xmm3_11 + xmm4_8 * xmm4_8)
xmm0_41 - 0f
eax:1.b = (xmm0_41 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_41, 0f) ? 1 : 0) << 2
    | (xmm0_41 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    int32_t eax_18 = esi_3[2]
    *esi_3 = *esi_3
    esi_3[2] = eax_18
    return eax_18

float xmm0_42 = 1f / xmm0_41
float xmm4_9 = xmm4_8 * xmm0_42
var_64 = xmm2_14 * xmm0_42
float var_60_2 = xmm3_11 * xmm0_42
*esi_3 = var_64.q
esi_3[2] = xmm4_9
return xmm4_9
