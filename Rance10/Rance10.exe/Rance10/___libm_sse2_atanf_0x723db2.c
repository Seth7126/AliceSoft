// 函数: ___libm_sse2_atanf
// 地址: 0x723db2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint64_t xmm4[0x2] = _mm_xor_pd(arg3, arg3)
uint64_t xmm2_1[0x2] = _mm_slli_epi64(0x1c0, 0x18)
uint32_t xmm3[0x4] = _mm_and_ps(0x7ff80000, arg1)
uint32_t edx = _mm_extract_epi16(arg1, 1)
int32_t xmm7[0x4] = _mm_and_ps(0x7fffffff, arg1)
uint64_t xmm1[0x2] = _mm_xor_pd(arg2, arg2)

if ((edx & 0x7ff8) - 0x3d00 u<= 0x22f8)
    int32_t xmm3_1[0x4] = _mm_add_epi64(xmm3, xmm2_1)
    int64_t xmm4_1 = _mm_insert_epi16(xmm4, 0x4050, 3)
    int32_t xmm7_1[0x4] = _mm_add_epi64(xmm7, xmm2_1)
    uint64_t xmm3_2[0x2] = _mm_slli_epi64(xmm3_1, 0x1d)
    int32_t xmm1_1[0x4] = _mm_insert_epi16(xmm1, 0x4050, 3)
    double xmm7_2 = _mm_slli_epi64(xmm7_1, 0x1d)
    double xmm4_2[0x2] = _mm_cmpeq_sd(xmm4_1, xmm3_2, 6)
    double xmm3_4[0x2] = _mm_min_sd(_mm_or_pd(xmm3_2, 0x800000000000), xmm1_1)
    uint64_t xmm0_3[0x2] = (_mm_and_pd(xmm7_2, xmm4_2) f- xmm3_4)
        / (xmm7_2 f* xmm3_4 + _mm_and_pd(0x3ff0000000000000, xmm4_2))
    int32_t edx_4 = _mm_extract_epi16(xmm3_4, 3) - 0x3f9f
    uint32_t eax_1 = edx & 0x8000
    int32_t xmm1_2[0x4] = _mm_insert_epi16(xmm1_1, eax_1, 3)
    double xmm6_1 = _mm_xor_pd(*((edx_4 << 3) + &data_79d288), xmm1_2)
    double xmm1_3 = _mm_xor_pd(xmm1_2, xmm0_3)
    _mm_cvtpd_ps(xmm0_3 f* xmm0_3 * -0.33333333333333331 * xmm1_3 + xmm1_3 + xmm6_1)
    return eax_1

if ((edx & 0x7ff8) - 0x1f80 u<= 0x407f)
    return edx

if ((edx & 0x7ff8) u< 0x5f80)
    if ((edx & 0x7ff8) u< 0x80)
        return arg1
    
    return 1.00000012f

if ((edx & 0x7ff8) u> 0x7f7f && (arg1 & 0x7fffffff) != 0x7f800000)
    return edx

uint32_t eax_3 = edx & 0x8000
int32_t xmm0_10[0x4] = _mm_insert_epi16(_mm_xor_pd(arg1, arg1), eax_3, 1)
_mm_or_ps(0x3fc90fda, xmm0_10)
_mm_or_ps(xmm0_10, 0x33a22168)
return eax_3
