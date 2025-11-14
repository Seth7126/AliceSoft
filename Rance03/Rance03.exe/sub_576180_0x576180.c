// 函数: sub_576180
// 地址: 0x576180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

double xmm6 = 2.3283064370807974e-10

for (int32_t i = 0; i s< 0x64; i += 1)
    *(arg3 + 4) += 1
    
    if (*(arg3 + 4) s>= 0x209)
        sub_47cac0(arg3)
        *(arg3 + 4) = 0
    
    int32_t ecx_2 = *(arg3 + 4)
    int32_t eax_1 = *(arg3 + (ecx_2 << 2) + 8)
    double xmm0_3 = _mm_cvtepi32_pd(zx.q(eax_1)) f+ *((eax_1 u>> 0x1f << 3) + &data_709480)
    *(arg3 + 4) = ecx_2 + 1
    float xmm2_3 = _mm_cvtpd_ps(xmm0_3 * xmm6) * 2f - 1f
    
    if (ecx_2 + 1 s>= 0x209)
        sub_47cac0(arg3)
        *(arg3 + 4) = 0
    
    int32_t eax_5 = *(arg3 + (*(arg3 + 4) << 2) + 8)
    float xmm3_2 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_5)) f+
        *((eax_5 u>> 0x1f << 3) + &data_709480)) * xmm6) * 2f - 1f
    
    if (1f >= xmm3_2 * xmm3_2 + xmm2_3 * xmm2_3)
        *arg2 = xmm2_3 * arg1
        arg2[1] = arg1 * 0f
        arg2[2] = xmm3_2 * arg1
        return arg2

*arg2 = arg1
float xmm4_1 = arg1 * 0f
arg2[1] = xmm4_1
arg2[2] = xmm4_1
return arg2
