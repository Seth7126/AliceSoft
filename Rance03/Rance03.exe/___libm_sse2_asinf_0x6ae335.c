// 函数: ___libm_sse2_asinf
// 地址: 0x6ae335
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx

if (((0x3f5db3d7 - (0x7fffffff & arg1)) | (edx - 0x3d800000)) s>= 0)
    int32_t xmm7[0x4] = _mm_insert_epi16(zx.o(0), 1, 1)
    float xmm3 = 1f - arg1 * arg1
    _mm_sqrt_ss(xmm3, xmm3)
    int32_t edx_3 = (edx - 0x3d800000) u>> 0x10 & 0x1fe
    *((edx_3 << 1) + &data_70a930)
    int128_t xmm4 = *((edx_3 << 2) + &data_70a130)
    _mm_or_ps(_mm_and_ps(0xfffe0000, arg1), xmm7)
    int32_t eax = arg1 & 0x80000000
    _mm_shuffle_epi32(xmm4 ^ zx.o(eax), 0x55)
    return eax

if (((0x1feffff - (edx - 0x3d800000)) | (edx - 0x3d800000)) s>= 0)
    char xmm1_2[0x10] = arg1
    float xmm3_3 = 1f - arg1 * arg1
    uint32_t xmm3_4[0x4] = _mm_sqrt_ss(xmm3_3, xmm3_3)
    uint32_t eax_1 = _mm_movemask_epi8(xmm1_2)
    float xmm1_3 = __andps_xmmxud_memxud(xmm1_2, data_70ad30)
    float xmm7_5 = __andps_xmmxud_memxud(xmm1_2, data_70ad40)
    float xmm1_4 = xmm1_3 - xmm7_5
    uint32_t xmm2_4[0x4] = _mm_and_ps(0xfffe0000, xmm3_4)
    uint32_t edx_4 = _mm_extract_epi16(xmm3_4, 1)
    float xmm2_5 = _mm_or_ps(xmm2_4, 0x10000)
    int32_t edx_6 = (edx_4 - 0x3d80) & 0xfffe
    float xmm3_5 = xmm3_4 f* *((edx_6 << 1) + &data_70a930)
    float xmm6_7 = xmm7_5 * xmm2_5 - xmm3_5 + xmm1_4 * xmm2_5
    float xmm4_7 = (1f - xmm7_5 * xmm7_5 - xmm2_5 * xmm2_5 - (xmm1_3 + xmm7_5) * xmm1_4)
        / (xmm3_5 + xmm3_5 + xmm6_7)
    int32_t eax_3 = (eax_1 & 8) << 0xc
    float xmm7_8[0x4] = _mm_sub_ps(data_70ad60, *((edx_6 << 2) + &data_70a130))
    int32_t xmm0_11[0x4] = _mm_insert_epi16(zx.o(0), eax_3, 1)
    float xmm3_8 = _mm_shuffle_epi32(xmm7_8, 0x55)
    float xmm4_8 = xmm4_7 - xmm3_8
    _mm_or_ps(xmm0_11, 
        0.166666672f * xmm6_7 * xmm6_7 * xmm6_7 f+ xmm7_8 - (xmm4_7 - (xmm3_8 + xmm4_8)) - xmm4_8)
    return eax_3

if (edx - 0x3d800000 s< 0)
    return arg1

if (edx - 0x3d800000 s>= 0x2000000)
    if (0x3f800000 == (arg1 & 0x7fffffff))
        _mm_or_ps(_mm_and_ps(arg1, 0x80000000), 1.57079637f + -4.37113883e-08f)
    
    return 0x3f800000

float xmm3_12 = 1f - arg1 * arg1
int32_t xmm7_9[0x4] = arg1
float xmm3_13[0x4] = _mm_sqrt_ss(xmm3_12, xmm3_12)
uint32_t eax_4 = _mm_extract_epi16(xmm7_9, 1)
float xmm7_10 = __andps_xmmxud_memxud(xmm7_9, data_70ad50)
float xmm5_10 = _mm_shuffle_epi32(xmm3_13, 0)
float xmm3_14 = __andps_xmmxud_memxud(xmm3_13, data_70ad50)
float xmm1_12 = arg1 - xmm7_10
float xmm6_10 = xmm3_14 - xmm5_10
uint32_t xmm5_11[0x4] = xmm5_10 + xmm5_10
uint32_t xmm3_16[0x4] = _mm_shuffle_epi32(xmm5_11, 0x55)
uint32_t xmm7_12[0x4] = _mm_shuffle_epi32(xmm3_16, 0x55)
float xmm6_11 = _mm_shuffle_epi32(xmm7_12, 0)
float xmm1_14 = _mm_shuffle_epi32(xmm7_12, 0)
float xmm6_12 = xmm6_11 * xmm6_11
uint32_t eax_5 = eax_4 & 0x8000
uint32_t xmm0_23[0x4] = data_70ad60
float xmm6_14 = _mm_shuffle_epi32(xmm0_23, 0x55)
float xmm1_15 = xmm1_14 - xmm6_14
float xmm0_25 =
    xmm0_23 f- (xmm5_10 * 0.166666672f * xmm6_12 + xmm7_12 f* 0.075000003f * xmm6_12 * xmm6_12) - (
    1f - xmm7_10 * xmm7_10 - (xmm7_10 + xmm7_10) * xmm1_12 - xmm3_14 * xmm3_14 - xmm1_12 * xmm1_12
    + (xmm5_11 f+ xmm6_10) * xmm6_10) / (xmm3_16 f+ xmm3_16)
_mm_or_pd(xmm0_25 - (xmm1_14 - (xmm6_14 + xmm1_15)) - xmm1_15, _mm_insert_epi16(zx.o(0), eax_5, 1))
return eax_5
