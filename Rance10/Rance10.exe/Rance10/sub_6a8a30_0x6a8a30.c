// 函数: sub_6a8a30
// 地址: 0x6a8a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1

if (arg1 == 0 || arg2 == 0)
    eax_1 = 0
label_6a8ad9:
    
    if (eax_1 - 0x17318 u<= 0x2710)
        return 0
else
    uint128_t xmm1_1 = 0x4330000000000000
    uint32_t xmm4_5[0x4] =
        _mm_cvtepi32_pd(zx.q(arg1)) * _mm_cvtepi32_pd(zx.q(arg2)) * 1.0000000000000001e-05 + 0.5
    uint32_t xmm2_2[0x4] = _mm_and_ps(-0x8000000000000000, xmm4_5)
    double xmm5_1 = xmm4_5[0].q
    double xmm1_3 =
        _mm_or_ps(_mm_and_ps(xmm1_1, _mm_cmpeq_sd(xmm4_5[0].q ^ xmm2_2[0].q, xmm1_1, 1)), xmm2_2)
    double xmm5_3 = xmm5_1 + xmm1_3 - xmm1_3
    double xmm5_4 =
        xmm5_3 - _mm_and_ps(_mm_cmpeq_sd(xmm5_3 f- xmm4_5, xmm2_2, 6), 0x3ff0000000000000)
    
    if (not(0x41dfffffffc00000 f< xmm5_4) && not(xmm5_4 < -2147483648.0))
        eax_1 = int.d(xmm5_4)
        goto label_6a8ad9
return 1
