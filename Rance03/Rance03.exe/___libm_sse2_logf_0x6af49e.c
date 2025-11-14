// 函数: ___libm_sse2_logf
// 地址: 0x6af49e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint128_t xmm0 = zx.o(arg1)
uint32_t eax = _mm_extract_epi16(xmm0, 1)
uint128_t xmm4 = xmm0
double xmm1_1 =
    _mm_or_pd(_mm_and_pd(0xfffffffffffff, _mm_slli_epi64(xmm0, 0x1d)), 0x3ff0000000000000)
int32_t ecx_1

if (((eax - 0x80) | (0x7f7f - eax)) u>= 0x8000)
    if (arg1 u>= 0x80000000)
        return eax
    
    if (arg1 u>= 0x7f800000)
        return eax
    
    if (arg1 == 0)
        return eax
    
    xmm4 = xmm4 f* 1.84467441e+19f
    eax = _mm_extract_epi16(xmm4, 1)
    xmm1_1 = _mm_or_pd(_mm_and_pd(0xfffffffffffff, _mm_cvtps_pd(xmm4)), 0x3ff0000000000000)
    ecx_1 = 0x5f3f
else
    ecx_1 = 0x3f3f

void* eax_5 = (((eax & 0x7f) + 1) & 0xfe) * 4
double xmm7_1 = *(eax_5 + &data_70e1a0)
double xmm4_4 =
    _mm_cvtepi32_pd(_mm_srai_epi32(_mm_sub_epi32(_mm_srli_epi64(xmm4, 0x10), zx.o(ecx_1)), 7))
double xmm1_3 = xmm1_1 * xmm7_1 - 1.0
double xmm1_4 = xmm1_3 * xmm1_3
_mm_cvtpd_ps(*(eax_5 + 0x70df90) + xmm4_4 * 0.69314718055994529 + -0.5 * xmm1_4 + xmm1_3
    + xmm1_3 * xmm1_4 * (-0.25 * xmm1_3 + 0.33333333333333331))
return eax_5
