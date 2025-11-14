// 函数: sub_6298d0
// 地址: 0x6298d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint128_t xmm1 = 0x4330000000000000
uint64_t xmm4_4[0x2] =
    _mm_cvtepi32_pd(zx.q(arg1)) * 1.0000000000000001e-05 * _mm_cvtepi32_pd(zx.q(arg2)) + 0.5
uint64_t xmm2[0x2] = _mm_and_pd(-0x8000000000000000, xmm4_4)
int64_t xmm0_3 = _mm_xor_pd(xmm4_4, xmm2)
uint64_t xmm5 = xmm4_4[0]
double xmm1_2 = _mm_or_pd(_mm_and_pd(xmm1, _mm_cmpeq_sd(xmm0_3, xmm1, 1)), xmm2)
double xmm5_2 = xmm5 f+ xmm1_2 - xmm1_2
double xmm5_3 = xmm5_2 - _mm_and_pd(_mm_cmpeq_sd(xmm5_2 f- xmm4_4, xmm2, 6), 0x3ff0000000000000)

if (not(0x41dfffffffc00000 f< xmm5_3) && not(xmm5_3 < -2147483648.0))
    return int.d(xmm5_3)

return 0
