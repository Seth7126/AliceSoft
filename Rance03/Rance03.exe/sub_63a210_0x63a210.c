// 函数: sub_63a210
// 地址: 0x63a210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg3 + 0x1c)
int32_t* edi = arg4
int32_t esi = edi[2]

if (*(esi + (ebx << 2)) != 0)
    return 

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(*(*(*(*(arg3 + 0x40) + 4) + 0x1c) + (ebx << 2)))
int32_t ebp_2 = (eax_4 - edx) s>> 1
float xmm1_3 = _mm_cvtepi32_ps(zx.o(*(arg2 + 4))) * 0.5f
double xmm0_5
uint64_t xmm2[0x2]
uint64_t xmm2_1[0x2]
xmm0_5, xmm2_1 = ___libm_sse2_atan(fconvert.d(xmm1_3 * xmm1_3 * 1.84999998e-08f), xmm2)
double xmm1_8 = xmm0_5 * 2.2400000095367432
    + ___libm_sse2_atan(_mm_cvtps_pd(xmm1_3 * 0.000739999989f), xmm2_1) * 13.100000381469727
    + _mm_cvtps_pd(xmm1_3 * 9.99999975e-05f)
int32_t xmm0_16 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*edi)) / xmm1_8)
*(esi + (ebx << 2)) = _malloc((ebp_2 << 2) + 4)
int32_t esi_1 = 0

if (ebp_2 s> 0)
    uint64_t xmm2_2[0x2] = 1f / _mm_cvtepi32_ps(zx.o(ebp_2))
    double var_10_1
    var_10_1.d = xmm2_2
    
    do
        float xmm0_20 = _mm_cvtepi32_ps(zx.o(esi_1))
        float xmm1_13 = _mm_cvtepi32_ps(zx.o(*(arg2 + 4))) * 0.5f f* xmm2_2 * xmm0_20
        double xmm0_25
        uint64_t xmm2_3[0x2]
        xmm0_25, xmm2_3 =
            ___libm_sse2_atan(_mm_cvtps_pd(xmm1_13 * xmm1_13 * 1.84999998e-08f), xmm2_2)
        double xmm0_29 =
            ___libm_sse2_atan(_mm_cvtps_pd(xmm1_13 * 0.000739999989f), xmm2_3) * 13.100000381469727
        int32_t eax_10 = *edi
        uint128_t xmm1_16 = 0x4330000000000000
        uint64_t xmm4_4[0x2] = (xmm0_25 * 2.2400000095367432 + xmm0_29
            + _mm_cvtps_pd(xmm1_13 * 9.99999975e-05f)) * _mm_cvtps_pd(xmm0_16)
        uint64_t xmm3_2[0x2] = _mm_and_pd(-0x8000000000000000, xmm4_4)
        int64_t xmm0_36 = _mm_xor_pd(xmm4_4, xmm3_2)
        uint64_t xmm2_4 = xmm4_4[0]
        double xmm1_18 = _mm_or_pd(_mm_and_pd(xmm1_16, _mm_cmpeq_sd(xmm0_36, xmm1_16, 1)), xmm3_2)
        double xmm2_6 = xmm2_4 f+ xmm1_18 - xmm1_18
        int32_t ecx = int.d(xmm2_6
            - _mm_and_pd(_mm_cmpeq_sd(xmm2_6 f- xmm4_4, xmm3_2, 6), 0x3ff0000000000000))
        
        if (ecx s>= eax_10)
            ecx = eax_10 - 1
        
        xmm2_2 = var_10_1.d
        *(*(edi[2] + (ebx << 2)) + (esi_1 << 2)) = ecx
        esi_1 += 1
    while (esi_1 s< ebp_2)

*(*(edi[2] + (ebx << 2)) + (esi_1 << 2)) = 0xffffffff
edi[ebx + 3] = ebp_2
