// 函数: ___libm_sse2_atan
// 地址: 0x72368a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint64_t xmm2[0x2] = _mm_xor_pd(arg2, arg2)
uint32_t edx = _mm_extract_epi16(arg1, 3)
int64_t xmm2_1 = _mm_insert_epi16(xmm2, 0x4040, 3)
uint64_t xmm0[0x2] = _mm_and_pd(arg1, 0x7fffffffffffffff)
uint64_t xmm7[0x2] = _mm_xor_pd(0x7fffffffffffffff, 0x7fffffffffffffff)
uint64_t xmm1[0x2] = xmm0.q
uint64_t xmm3[0x2] = _mm_and_pd(-0x1000000000000, xmm0)
int32_t xmm7_1[0x4] = _mm_insert_epi16(xmm7, 0x4040, 3)
int64_t xmm3_1 = _mm_or_pd(xmm3, 0x800000000000)

if ((edx & 0x7fff) - 0x3fa0 u<= 0x45f)
    uint64_t xmm2_2[0x2] = _mm_cmpeq_sd(xmm2_1, xmm0, 6)
    double xmm3_2[0x2] = _mm_min_sd(xmm3_1, xmm7_1)
    double xmm5 = _mm_and_pd(0x3ff0000000000000, xmm2_2)
    double xmm0_3 = (_mm_and_pd(xmm0, xmm2_2) f- xmm3_2) / (xmm1 f* xmm3_2 + xmm5)
    int32_t edx_4 = _mm_extract_epi16(xmm3_2, 3) - 0x3f9f
    uint32_t eax_1 = edx & 0x8000
    int32_t xmm7_2[0x4] = _mm_insert_epi16(xmm7_1, eax_1, 3)
    int32_t edx_5 = edx_4 * 2
    uint64_t xmm6[0x2] = *((edx_5 << 3) + &data_79bc58)
    _mm_xor_pd(*(((edx_5 + 1) << 3) + &data_79bc58), xmm7_2)
    _mm_xor_pd(xmm6, xmm7_2)
    _mm_xor_pd(xmm0_3, xmm7_2)
    return eax_1

if ((edx & 0x7fff) - 0x3bf0 u<= 0x80f)
    return edx

if ((edx & 0x7fff) u< 0x43f0)
    return edx

int32_t eax_2 = xmm1
int32_t xmm1_11 = _mm_srli_epi64(xmm1, 0x20)

if (xmm1_11 u>= 0x7ff00000)
    eax_2 |= xmm1_11 - 0x7ff00000
    
    if (eax_2 != 0)
        return eax_2

uint64_t xmm0_9[0x2] = _mm_andnot_pd(0x7fffffffffffffff, arg1)
_mm_or_pd(0x3ff921fb54442d18, xmm0_9)
_mm_or_pd(xmm0_9, 0x3c91a62633145c07)
return eax_2
