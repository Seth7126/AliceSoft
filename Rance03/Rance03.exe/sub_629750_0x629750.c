// 函数: sub_629750
// 地址: 0x629750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg5 != 0)
    if (arg2 == 0 || arg4 == 0)
        *arg3 = 0
        return 1
    
    uint128_t xmm1_1 = 0x4330000000000000
    uint64_t xmm4_5[0x2] =
        _mm_cvtepi32_pd(zx.q(arg2)) * _mm_cvtepi32_pd(zx.q(arg4)) / _mm_cvtepi32_pd(zx.q(arg5))
        + 0.5
    uint64_t xmm2_2[0x2] = _mm_and_pd(-0x8000000000000000, xmm4_5)
    int64_t xmm0_6 = _mm_xor_pd(xmm4_5, xmm2_2)
    uint64_t xmm5_1 = xmm4_5[0]
    double xmm1_3 = _mm_or_pd(_mm_and_pd(xmm1_1, _mm_cmpeq_sd(xmm0_6, xmm1_1, 1)), xmm2_2)
    double xmm5_3 = xmm5_1 f+ xmm1_3 - xmm1_3
    double xmm5_4 =
        xmm5_3 - _mm_and_pd(_mm_cmpeq_sd(xmm5_3 f- xmm4_5, xmm2_2, 6), 0x3ff0000000000000)
    
    if (not(0x41dfffffffc00000 f< xmm5_4) && not(xmm5_4 < -2147483648.0))
        *arg3 = int.d(xmm5_4)
        return 1

return 0
