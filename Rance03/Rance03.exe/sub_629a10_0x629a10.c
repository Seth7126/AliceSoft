// 函数: sub_629a10
// 地址: 0x629a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 - 1 u> 0xfd)
    int32_t result
    result.b = arg1.b
    return result

uint128_t xmm2 = 0x4330000000000000
uint64_t xmm5_2[0x2] = ___libm_sse2_pow(
    (_mm_cvtepi32_pd(zx.q(arg1)) f+ *((arg1 u>> 0x1f << 3) + &data_709480))
        * 0.0039215686274509803, 
    _mm_cvtepi32_pd(zx.q(arg2)) * 1.0000000000000001e-05) * 255.0 + 0.5
uint64_t xmm3_1[0x2] = _mm_and_pd(-0x8000000000000000, xmm5_2)
int64_t xmm0_6 = _mm_xor_pd(xmm5_2, xmm3_1)
uint64_t xmm1_3 = xmm5_2[0]
double xmm2_2 = _mm_or_pd(_mm_and_pd(xmm2, _mm_cmpeq_sd(xmm0_6, xmm2, 1)), xmm3_1)
double xmm1_5 = xmm1_3 f+ xmm2_2 - xmm2_2
return int.d(xmm1_5 - _mm_and_pd(_mm_cmpeq_sd(xmm1_5 f- xmm5_2, xmm3_1, 6), 0x3ff0000000000000))
