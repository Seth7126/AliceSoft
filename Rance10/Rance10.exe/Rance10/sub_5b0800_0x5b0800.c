// 函数: sub_5b0800
// 地址: 0x5b0800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

double xmm6 = 2.3283064370807974e-10

for (int32_t i = 0; i s< 0x64; i += 1)
    *arg2 += 1
    
    if (*arg2 s>= 0x209)
        sub_4a7690(arg2)
        *arg2 = 0
    
    int32_t ecx_1 = *arg2
    int32_t eax = arg2[ecx_1 + 1]
    double xmm0_3 = _mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_79aa70)
    *arg2 = ecx_1 + 1
    float xmm1_1 = _mm_cvtpd_ps(xmm0_3 * xmm6)
    float xmm1_3 = xmm1_1 + xmm1_1 - 1f
    
    if (ecx_1 + 1 s>= 0x209)
        sub_4a7690(arg2)
        *arg2 = 0
    
    int32_t ecx_3 = *arg2
    int32_t eax_3 = arg2[ecx_3 + 1]
    double xmm0_7 = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_79aa70)
    *arg2 = ecx_3 + 1
    float xmm2 = _mm_cvtpd_ps(xmm0_7 * xmm6)
    float xmm2_2 = xmm2 + xmm2 - 1f
    
    if (ecx_3 + 1 s>= 0x209)
        sub_4a7690(arg2)
        *arg2 = 0
    
    int32_t eax_7 = arg2[*arg2 + 1]
    uint32_t eax_8 = eax_7 u>> 0x1f
    float xmm3_1 =
        _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_7)) f+ *((eax_8 << 3) + &data_79aa70)) * xmm6)
    float xmm3_3 = xmm3_1 + xmm3_1 - 1f
    float xmm4_4 = xmm2_2 * xmm2_2 + xmm1_3 * xmm1_3 + xmm3_3 * xmm3_3
    
    if (xmm4_4 <= 1f)
        float var_c = xmm1_3
        sub_5b09b0(eax_8, arg2, &var_c, xmm4_4, arg5)
        *arg3 = var_c * arg4
        arg3[1] = xmm2_2 * arg4
        arg3[2] = xmm3_3 * arg4
        return arg3

*arg3 = data_7e70d4 * arg4
arg3[1] = data_7e70d8 * arg4
arg3[2] = data_7e70dc * arg4
return arg3
