// 函数: sub_4d3280
// 地址: 0x4d3280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

double xmm5 = 2.3283064370807974e-10
float xmm6 = *(arg1 i+ 0x2c)
float xmm3 = *(arg1 i+ 0x28)
uint32_t eax_1 = *(arg1 i+ 0x24)

if (eax_1 == 3)
    int32_t xmm1_1 = (zx.o(0)).d
    int32_t* esi = *(arg2 + 8)
    int32_t xmm2
    
    if (esi != 0)
        *esi += 1
        
        if (*esi s>= 0x209)
            sub_4a7690(esi)
            *esi = 0
        
        int32_t eax_3 = esi[*esi + 1]
        xmm2 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_3)) f+
            *((eax_3 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
    else
        xmm2 = (zx.o(0)).d
    
    int32_t* esi_1 = *(arg2 + 8)
    
    if (esi_1 != 0)
        *esi_1 += 1
        
        if (*esi_1 s>= 0x209)
            sub_4a7690(esi_1)
            *esi_1 = 0
        
        int32_t eax_6 = esi_1[*esi_1 + 1]
        xmm1_1 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_6)) f+
            *((eax_6 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
    
    arg3[2] = 0
    *arg3 = (xmm2 f- 0.5f) * xmm3
    arg3[1] = (xmm1_1 f- 0.5f) * xmm6
    return arg3

float xmm2_3 = (zx.o(0)).d

if (eax_1 == 1)
    int32_t* edi_2 = *(arg2 + 8)
    int32_t xmm4_1
    
    if (edi_2 != 0)
        *edi_2 += 1
        
        if (*edi_2 s>= 0x209)
            sub_4a7690(edi_2)
            *edi_2 = 0
        
        int32_t eax_10 = edi_2[*edi_2 + 1]
        xmm4_1 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_10)) f+
            *((eax_10 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
    else
        xmm4_1 = (zx.o(0)).d
    
    int32_t* edi_3 = *(arg2 + 8)
    int32_t xmm1_4
    
    if (edi_3 != 0)
        *edi_3 += 1
        
        if (*edi_3 s>= 0x209)
            sub_4a7690(edi_3)
            *edi_3 = 0
        
        int32_t eax_12 = edi_3[*edi_3 + 1]
        xmm1_4 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_12)) f+
            *((eax_12 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
    else
        xmm1_4 = (zx.o(0)).d
    
    int32_t* edi_4 = *(arg2 + 8)
    int32_t xmm0_17
    
    if (edi_4 != 0)
        *edi_4 += 1
        
        if (*edi_4 s>= 0x209)
            sub_4a7690(edi_4)
            *edi_4 = 0
        
        int32_t eax_14 = edi_4[*edi_4 + 1]
        xmm0_17 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_14)) f+
            *((eax_14 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
    else
        xmm0_17 = (zx.o(0)).d
    
    *arg3 = xmm4_1 f- 0.5f
    arg3[1] = xmm1_4 f- 0.5f
    arg3[2] = xmm0_17 f- 0.5f
else if (eax_1 == 2)
    int32_t* edi_5 = *(arg2 + 8)
    int32_t xmm1_6
    
    if (edi_5 != 0)
        *edi_5 += 1
        
        if (*edi_5 s>= 0x209)
            sub_4a7690(edi_5)
            *edi_5 = 0
        
        int32_t eax_16 = edi_5[*edi_5 + 1]
        xmm1_6 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_16)) f+
            *((eax_16 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
    else
        xmm1_6 = (zx.o(0)).d
    
    int32_t* edi_6 = *(arg2 + 8)
    int32_t xmm0_27
    
    if (edi_6 != 0)
        *edi_6 += 1
        
        if (*edi_6 s>= 0x209)
            sub_4a7690(edi_6)
            *edi_6 = 0
        
        int32_t eax_18 = edi_6[*edi_6 + 1]
        xmm0_27 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_18)) f+
            *((eax_18 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
    else
        xmm0_27 = (zx.o(0)).d
    
    *arg3 = xmm1_6 f- 0.5f
    arg3[2] = 0
    arg3[1] = xmm0_27 f- 0.5f

float xmm6_1 = arg3[1]
float xmm4_3 = *arg3
float xmm7 = arg3[2]
float xmm0_37 = sub_484cc0(xmm4_3 * xmm4_3 + xmm6_1 * xmm6_1 + xmm7 * xmm7)
xmm0_37 f- 0
eax_1:1.b = (xmm0_37 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_37, 0f) ? 1 : 0) << 2
    | (xmm0_37 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float eax_19
int64_t xmm0_38

if (not(p_1))
    xmm0_38 = *arg3
    eax_19 = arg3[2]
else
    float xmm1_12 = 1f / xmm0_37
    float var_8_1 = xmm6_1 * xmm1_12
    xmm0_38 = (xmm4_3 * xmm1_12).q
    eax_19 = xmm7 * xmm1_12

*arg3 = xmm0_38
arg3[2] = eax_19
int32_t* edi_7 = *(arg2 + 8)

if (edi_7 != 0)
    *edi_7 += 1
    
    if (*edi_7 s>= 0x209)
        sub_4a7690(edi_7)
        *edi_7 = 0
    
    int32_t eax_21 = edi_7[*edi_7 + 1]
    eax_19 = eax_21 u>> 0x1f
    xmm2_3 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_21)) f+ *((eax_19 << 3) + &data_79aa70)) * xmm5)

float xmm3_3 = (xmm3 - xmm6) * xmm2_3 + xmm6
*arg3 = *arg3 * xmm3_3
arg3[1] = xmm3_3 * arg3[1]
arg3[2] = arg3[2] * xmm3_3
return eax_19
