// 函数: sub_5b0ac0
// 地址: 0x5b0ac0
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
    
    int32_t eax_4 = arg2[*arg2 + 1]
    uint32_t eax_5 = eax_4 u>> 0x1f
    float xmm2 =
        _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_5 << 3) + &data_79aa70)) * xmm6)
    float xmm2_2 = xmm2 + xmm2 - 1f
    float xmm3_3 = xmm2_2 * xmm2_2 + xmm1_3 * xmm1_3
    
    if (xmm3_3 <= 1f)
        float var_c = xmm1_3
        float var_8 = 0f
        sub_5b09b0(eax_5, arg2, &var_c, xmm3_3, arg5)
        *arg3 = var_c * arg4
        arg3[1] = var_8 * arg4
        arg3[2] = xmm2_2 * arg4
        return arg3

*arg3 = data_7e70d4 * arg4
arg3[1] = data_7e70d8 * arg4
arg3[2] = data_7e70dc * arg4
return arg3
