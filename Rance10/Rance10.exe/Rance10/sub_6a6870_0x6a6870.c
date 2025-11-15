// 函数: sub_6a6870
// 地址: 0x6a6870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 - 1 u> 0xfd)
    int32_t result
    result.b = arg1.b
    return result

uint128_t xmm2 = 0x4330000000000000
uint32_t xmm5_2[0x4] = ___libm_sse2_pow(
    (_mm_cvtepi32_pd(zx.q(arg1)) f+ *((arg1 u>> 0x1f << 3) + &data_79aa70))
        * 0.0039215686274509803, 
    _mm_cvtepi32_pd(zx.q(arg2)) * 1.0000000000000001e-05) * 255.0 + 0.5
uint32_t xmm3_1[0x4] = _mm_and_ps(-0x8000000000000000, xmm5_2)
double xmm1_3 = xmm5_2[0].q
double xmm2_2 =
    _mm_or_ps(_mm_and_ps(xmm2, _mm_cmpeq_sd(xmm5_2[0].q ^ xmm3_1[0].q, xmm2, 1)), xmm3_1)
double xmm1_5 = xmm1_3 + xmm2_2 - xmm2_2
return int.d(xmm1_5 - _mm_and_ps(_mm_cmpeq_sd(xmm1_5 f- xmm5_2, xmm3_1, 6), 0x3ff0000000000000))
