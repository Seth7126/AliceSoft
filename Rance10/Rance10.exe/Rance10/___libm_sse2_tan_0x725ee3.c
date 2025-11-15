// 函数: ___libm_sse2_tan
// 地址: 0x725ee3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint16_t result = (_mm_extract_epi16(arg1, 3) & 0x7fff) - 0x3820

if (result u> 0x8a8)
    if (result s<= 0x8a8)
        return result u>> 4
    
    if (_mm_xor_pd(_mm_and_pd(-0x8000000000000000, arg1), arg1) f== inf.0)
        return result
    
    double var_8_1 = fconvert.d(arg2)
    int32_t mxcsr
    int16_t x87control
    return _tan(mxcsr, x87control, arg1)

double xmm0[0x2] = _mm_unpacklo_pd(arg1, arg1)
double xmm1_1[0x2] = _mm_mul_pd(data_79ed80, xmm0)
double xmm2[0x2] = data_79ed90
double xmm1_2[0x2] = _mm_add_pd(xmm1_1, xmm2)
double xmm3_1[0x2] = data_79eda0
double xmm1_3[0x2] = _mm_sub_pd(xmm1_2, xmm2)
double xmm4[0x2] = data_79edb0
double xmm3_2[0x2] = _mm_mul_pd(xmm3_1, xmm1_3)
int32_t edx_2 = (int.d(xmm1_1) + 0x72900) & 0x1f
double xmm4_1[0x2] = _mm_mul_pd(xmm4, xmm1_3)
int32_t ecx_1 = edx_2 << 1
double xmm0_1[0x2] = _mm_sub_pd(xmm0, xmm3_2)
double xmm1_4[0x2] = __mulpd_xmmpd_mempd(xmm1_3, data_79edc0)
double xmm0_2[0x2] = _mm_sub_pd(xmm0_1, xmm4_1)
double xmm5_3 = __andpd_xmmxuq_memxuq(6.7164665968574641e-14 f* xmm1_3 f+ xmm0_1, data_79edf0)
double xmm3_3 = xmm0_2[0]
double xmm2_2[0x2] = _mm_sub_pd(xmm0_1, xmm0_2)
double xmm0_3[0x2] = _mm_unpackhi_pd(xmm0_2, xmm0_2)
double xmm2_3[0x2] = _mm_sub_pd(xmm2_2, xmm4_1)
double xmm7_1[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x7a1060), xmm0_3)
double xmm2_4 = _mm_sub_pd(xmm2_3, xmm1_4)
double xmm1_6[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x7a1080), xmm0_3)
double xmm4_3[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x7a10b0), xmm0_3)
double xmm2_5[0x2] = xmm2_4 + xmm3_3 - xmm5_3
double xmm0_4[0x2] = _mm_mul_pd(xmm0_3, xmm0_3)
double xmm7_2[0x2] = __addpd_xmmpd_mempd(xmm7_1, *(0x7a1050 + ((ecx_1 * 5 + edx_2) << 4)))
double xmm1_8[0x2] =
    _mm_mul_pd(__addpd_xmmpd_mempd(xmm1_6, *(((ecx_1 * 5 + edx_2) << 4) + 0x7a1070)), xmm0_4)
double xmm4_4[0x2] = __addpd_xmmpd_mempd(xmm4_3, *(((ecx_1 * 5 + edx_2) << 4) + 0x7a10a0))
double xmm7_3[0x2] = _mm_add_pd(xmm7_2, xmm1_8)
double xmm1_10[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x7a10c0), xmm0_4)
double xmm0_5[0x2] = _mm_mul_pd(xmm0_4, xmm0_4)
double xmm4_5[0x2] = _mm_add_pd(xmm4_4, xmm1_10)
double xmm7_4[0x2] =
    _mm_add_pd(xmm7_3, _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x7a1090), xmm0_5))
double xmm3_6[0x2] = _mm_mul_pd(xmm0_3, xmm0_5)
double xmm1_14[0x2] = __mulpd_xmmpd_mempd(xmm0_3, *(((ecx_1 * 5 + edx_2) << 4) + 0x7a10e0))
double xmm7_5[0x2] = _mm_add_pd(xmm7_4, _mm_mul_pd(xmm4_5, xmm3_6))
_mm_unpackhi_pd(xmm7_5, xmm7_5)
_mm_unpackhi_pd(xmm1_14, xmm1_14)
double xmm7_7 = *(((ecx_1 * 5 + edx_2) << 4) + 0x7a10e0)
double xmm2_6 = _mm_unpackhi_pd(xmm2_5, xmm2_5)
(xmm7_7 + *(((ecx_1 * 5 + edx_2) << 4) + 0x7a10e8)) * xmm2_6
    + *(((ecx_1 * 5 + edx_2) << 4) + 0x7a10d8)
_mm_and_pd(zx.o(*(((ecx_1 * 5 + edx_2) << 4) + 0x7a10f8)), 1.0 / xmm5_3)
    - *(((ecx_1 * 5 + edx_2) << 4) + 0x7a10d0)
*(((ecx_1 * 5 + edx_2) << 4) + 0x7a10f0)
return 0x7a1050 + ((ecx_1 * 5 + edx_2) << 4)
