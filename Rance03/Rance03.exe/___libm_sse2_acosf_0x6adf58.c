// 函数: ___libm_sse2_acosf
// 地址: 0x6adf58
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm3 = 1f
uint128_t xmm2 = 0xfffe0000

if ((0x7fffffff & arg1) - 0x3d800000 u< 0x1ddb3d7)
    uint32_t xmm1[0x4] = arg1
    int32_t xmm7[0x4] = _mm_insert_epi16(zx.o(0), 1, 1)
    float xmm3_1 = xmm3 - arg1 * arg1
    _mm_sqrt_ss(xmm3_1, xmm3_1)
    int32_t edx_3 = ((0x7fffffff & arg1) - 0x3d800000) u>> 0x10 & 0x1fe
    *((edx_3 << 1) + &data_709d00)
    int128_t xmm4 = *((edx_3 << 2) + &data_709500)
    _mm_or_ps(_mm_and_ps(xmm2, xmm1), xmm7)
    _mm_shuffle_epi32(xmm1, 0)
    _mm_shuffle_epi32(xmm1, 0)
    int32_t eax = arg1 & 0x80000000
    float xmm1_3[0x4] = _mm_sub_ps(data_70a100, xmm4 ^ _mm_shuffle_epi32(zx.o(eax), 0))
    _mm_shuffle_epi32(xmm1_3, 0x55)
    _mm_shuffle_epi32(xmm1_3, 0x55)
    return eax

if ((0x7fffffff & arg1) - 0x3f5db3d7 u< 0x204c29)
    uint64_t xmm7_8[0x2] = _mm_slli_epi64(_mm_srli_epi64(_mm_shuffle_epi32(arg1, 0), 0xc), 0xc)
    int32_t eax_1 = arg1 & 0x80000000
    float xmm6_4 = _mm_shuffle_epi32(xmm7_8, 0)
    uint32_t xmm3_5[0x4] = xmm3 - xmm7_8 f* xmm7_8
    _mm_shuffle_epi32(xmm3_5, 0)
    float xmm3_6 = xmm3_5 f- (arg1 + xmm6_4) * (arg1 f- xmm7_8)
    uint32_t xmm3_7[0x4] = _mm_sqrt_ss(xmm3_6, xmm3_6)
    uint32_t xmm2_6[0x4] = _mm_and_ps(xmm2, xmm3_7)
    uint32_t edx_5 = _mm_extract_epi16(xmm3_7, 1)
    _mm_or_ps(xmm2_6, 0x10000 | zx.o(eax_1))
    int32_t eax_6 = neg.d((neg.d(eax_1 u>> 0x1f) & 8) u>> 3)
    uint32_t xmm7_11[0x4] = _mm_shuffle_epi32(zx.o(eax_6), 0)
    int32_t edx_7 = (edx_5 - 0x3d80) & 0xfffe
    *((edx_7 << 1) + &data_709d00)
    _mm_shuffle_epi32(
        _mm_add_ps(__andps_xmmxud_memxud(xmm7_11, data_70a110), *((edx_7 << 2) + &data_709500)), 
        0x55)
    return eax_6 & 0x80000000

if ((0x7fffffff & arg1) - 0x37800000 u< 0x6000000)
    _mm_shuffle_epi32(_mm_shuffle_epi32(arg1, 0), 0)
    _mm_shuffle_epi32(arg1 * arg1, 0)
    return arg1

if ((0x7fffffff & arg1) - 0x3f7e0000 u< 0x20000)
    float xmm4_8 = 0.5f
    uint32_t xmm4_9[0x4] = xmm4_8 - _mm_and_ps(0x7fffffff, arg1) * xmm4_8
    uint32_t xmm7_18[0x4] = _mm_shuffle_epi32(xmm4_9, 0)
    float xmm4_10[0x4] = _mm_sqrt_ss(xmm4_9, xmm4_9)
    _mm_shuffle_epi32(xmm7_18, 0)
    int32_t eax_10 = neg.d((arg1 & 0x80000000) u>> 0x1f)
    uint32_t xmm0_19[0x4] = __andps_xmmxud_memxud(_mm_shuffle_epi32(zx.o(eax_10), 0), data_70a120)
    float xmm1_14 = _mm_and_ps(0xfffff000, xmm4_10)
    float xmm3_15 = _mm_shuffle_epi32(xmm4_10, 0)
    _mm_shuffle_epi32(xmm3_15 + xmm3_15 - (xmm4_10 f- xmm1_14), 0x55)
    _mm_shuffle_epi32(xmm0_19, 0x55)
    return (eax_10 & 0x80000000) ^ 0x80000000

if ((0x7fffffff & arg1) u< 0x37800000)
    _mm_shuffle_epi32(arg1, 0)
    _mm_shuffle_epi32(arg1, 0)
    return arg1

if ((0x7fffffff & arg1) == 0x3f800000)
    int32_t eax_15 = neg.d((arg1 & 0x80000000) u>> 0x1f)
    uint128_t xmm0_27 = zx.o(eax_15)
    _mm_and_ps(0xb3bbbd2e, xmm0_27)
    _mm_and_ps(xmm0_27, 0x40490fdb)
    return eax_15

return arg1
