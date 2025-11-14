// 函数: sub_48af30
// 地址: 0x48af30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm6 = *(arg1 + 0x28)
float xmm7 = *(arg1 + 0x2c)
uint32_t eax = *(arg1 + 0x24)

if (eax == 3)
    *(arg2 + 4) += 1
    
    if (*(arg2 + 4) s>= 0x209)
        sub_47cac0(arg2)
        *(arg2 + 4) = 0
    
    int32_t ecx_2 = *(arg2 + 4)
    double xmm1 = 2.3283064370807974e-10
    int32_t eax_1 = *(arg2 + (ecx_2 << 2) + 8)
    double xmm0_3 = _mm_cvtepi32_pd(zx.q(eax_1)) f+ *((eax_1 u>> 0x1f << 3) + &data_709480)
    *(arg2 + 4) = ecx_2 + 1
    float xmm0_6 = _mm_cvtpd_ps(xmm0_3 * xmm1) - 0.5f
    
    if (ecx_2 + 1 s>= 0x209)
        sub_47cac0(arg2)
        *(arg2 + 4) = 0
    
    int32_t eax_5 = *(arg2 + (*(arg2 + 4) << 2) + 8)
    arg3[2] = 0
    *arg3 = xmm0_6 * xmm6
    uint32_t eax_6 = eax_5 u>> 0x1f
    arg3[1] = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_5)) f+ *((eax_6 << 3) + &data_709480)) * xmm1)
        - 0.5f) * xmm7
    return eax_6

double xmm5 = 2.3283064370807974e-10
float xmm2_2

if (eax == 1)
    *(arg2 + 4) += 1
    
    if (*(arg2 + 4) s>= 0x209)
        sub_47cac0(arg2)
        *(arg2 + 4) = 0
    
    int32_t ecx_6 = *(arg2 + 4)
    int32_t eax_7 = *(arg2 + (ecx_6 << 2) + 8)
    double xmm0_17 = _mm_cvtepi32_pd(zx.q(eax_7)) f+ *((eax_7 u>> 0x1f << 3) + &data_709480)
    *(arg2 + 4) = ecx_6 + 1
    xmm2_2 = _mm_cvtpd_ps(xmm0_17 * xmm5) - 0.5f
    
    if (ecx_6 + 1 s>= 0x209)
        sub_47cac0(arg2)
        *(arg2 + 4) = 0
    
    int32_t ecx_8 = *(arg2 + 4)
    int32_t eax_10 = *(arg2 + (ecx_8 << 2) + 8)
    double xmm0_21 = _mm_cvtepi32_pd(zx.q(eax_10)) f+ *((eax_10 u>> 0x1f << 3) + &data_709480)
    *(arg2 + 4) = ecx_8 + 1
    float xmm0_24 = _mm_cvtpd_ps(xmm0_21 * xmm5) - 0.5f
    
    if (ecx_8 + 1 s>= 0x209)
        sub_47cac0(arg2)
        *(arg2 + 4) = 0
    
    int32_t eax_14 = *(arg2 + (*(arg2 + 4) << 2) + 8)
    arg3[1] = xmm0_24
    arg3[2] = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_14)) f+
        *((eax_14 u>> 0x1f << 3) + &data_709480)) * xmm5) - 0.5f
    *arg3 = xmm2_2
else if (eax == 2)
    xmm2_2 = sub_47cc50(arg2) - 0.5f
    float xmm0_32
    eax, xmm0_32 = sub_47cc50(arg2)
    arg3[2] = 0
    arg3[1] = xmm0_32 - 0.5f
    *arg3 = xmm2_2
float xmm3 = arg3[1]
float xmm2_4 = *arg3
float xmm4 = arg3[2]
float xmm1_4 = xmm2_4 * xmm2_4 + xmm3 * xmm3 + xmm4 * xmm4
float xmm1_5 = _mm_sqrt_ss(xmm1_4, xmm1_4)
xmm1_5 f- 0
eax:1.b =
    (xmm1_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_5, 0f) ? 1 : 0) << 2 | (xmm1_5 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    float xmm0_38 = 1f / xmm1_5
    *arg3 = xmm2_4 * xmm0_38
    arg3[1] = xmm3 * xmm0_38
    arg3[2] = xmm4 * xmm0_38

*(arg2 + 4) += 1

if (*(arg2 + 4) s>= 0x209)
    sub_47cac0(arg2)
    *(arg2 + 4) = 0

int32_t eax_16 = *(arg2 + (*(arg2 + 4) << 2) + 8)
uint32_t eax_17 = eax_16 u>> 0x1f
float xmm1_8 =
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_16)) f+ *((eax_17 << 3) + &data_709480)) * xmm5)
    * (xmm6 - xmm7) + xmm7
*arg3 = *arg3 * xmm1_8
arg3[1] = arg3[1] * xmm1_8
arg3[2] = arg3[2] * xmm1_8
return eax_17
