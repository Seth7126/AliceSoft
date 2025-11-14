// 函数: ___libm_sse2_cos
// 地址: 0x6aeaa4
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t eax = (_mm_extract_epi16(arg1, 3) & 0x7fff) - 0x3030

if (eax u> 0x10c5)
    if (eax s<= 0x10c5)
        uint32_t eax_2
        eax_2.w = _mm_extract_epi16(arg1, 3).w & 0x7fff
        _mm_insert_epi16(arg1, eax_2, 3)
        return eax_2
    
    int32_t eax_4 = _mm_extract_epi16(arg1, 3) & 0x7ff0
    
    if (eax_4 == 0x7ff0)
        return eax_4
    
    double var_8_1 = fconvert.d(arg2)
    int32_t mxcsr
    int16_t x87control
    return _cos(mxcsr, x87control, arg1)

double xmm1_1 = 10.185916357881302 f* arg1
double xmm2 = 6755399441055744.0
double xmm1_3[0x2] = xmm1_1 + xmm2 - xmm2
double xmm2_1[0x2] = data_70c600
double xmm3_1 = 0.098174770420882851 f* xmm1_3
double xmm1_4[0x2] = _mm_unpacklo_pd(xmm1_3, xmm1_3)
double xmm5[0x2] = data_70c5f0
double xmm2_2[0x2] = _mm_mul_pd(xmm2_1, xmm1_4)
double xmm0[0x2] = arg1 f- xmm3_1
double xmm4_1 = arg1.q f- xmm3_1
double xmm7 = *((((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 5) + 0x70bdc8)
double xmm0_1[0x2] = _mm_unpacklo_pd(xmm0, xmm0)
double xmm4_2 = xmm4_1 f- xmm2_2
double xmm5_1[0x2] = _mm_mul_pd(xmm5, xmm0_1)
double xmm0_2[0x2] = _mm_sub_pd(xmm0_1, xmm2_2)
double xmm6[0x2] = data_70c5d0
double xmm5_2[0x2] = _mm_mul_pd(xmm5_1, xmm0_2)
double xmm0_3[0x2] = _mm_mul_pd(xmm0_2, xmm0_2)
double xmm2_4 = (*(0x70bdc0 + (((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 5))).q f+
    *((((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 5) + 0x70bdd8)
double xmm6_1[0x2] = _mm_mul_pd(xmm6, xmm0_3)
double xmm2_6[0x2] = _mm_mul_pd(xmm2_4 * xmm4_2, xmm0_3)
double xmm0_4[0x2] = _mm_mul_pd(xmm0_3, xmm0_3)
double xmm5_3[0x2] = __addpd_xmmpd_mempd(xmm5_2, data_70c5e0)
*(0x70bdc0 + (((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 5))
double xmm6_2[0x2] = __addpd_xmmpd_mempd(xmm6_1, *"UUUUUU")
double xmm5_4[0x2] = _mm_mul_pd(xmm5_3, xmm0_4)
*((((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 5) + 0x70bdc8)
_mm_mul_pd(xmm1_4 f* 1.2639164054974691e-22 - (xmm4_1 - xmm4_2 f- xmm2_2), xmm7 * xmm4_2 - xmm2_4)
double xmm6_3[0x2] = _mm_add_pd(xmm6_2, xmm5_4)
*((((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 5) + 0x70bdc8)
*((((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 5) + 0x70bdd0)
double xmm6_4[0x2] = _mm_mul_pd(xmm6_3, xmm2_6)
_mm_unpackhi_pd(xmm6_4, xmm6_4)
return 0x70bdc0 + (((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 5)
