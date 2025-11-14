// 函数: ___libm_sse2_cosf
// 地址: 0x6aec45
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t eax = (_mm_extract_epi16(arg1, 1) & 0x7fff) - 0x80

if (eax u> 0x457f)
    if (eax s<= 0x457f)
        return eax
    
    int32_t eax_3 = arg1 & 0x7f800000
    
    if (eax_3 == 0x7f800000)
        return eax_3
    
    double var_8
    var_8.d = fconvert.s(arg2)
    int32_t mxcsr
    int16_t x87control
    return _cos(mxcsr, x87control, fconvert.d(arg1))

float xmm1_1 = 10.1859159f f* arg1
uint64_t xmm3_1[0x2] = _mm_and_pd(data_70ca50, arg1)
uint64_t xmm3_3[0x2] = _mm_xor_pd(_mm_slli_epi64(xmm3_1, 0x20), _mm_slli_epi64(xmm3_1, 0x1d))
double xmm2_1 = _mm_xor_pd(0x77b921fb54444000, xmm3_3)
double xmm3_4 = __xorpd_xmmxuq_memxuq(xmm3_3, data_70ca60)
double xmm1_4 = _mm_slli_epi64(xmm1_1 + 12582912f - 12582912f, 0x1d)
double xmm0_1 = fconvert.d(arg1) - xmm2_1 * xmm1_4
double xmm0_2 = xmm0_1 * xmm0_1
double xmm0_3 = xmm0_2 * xmm0_2
*(0x70c650 + (((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 4))
    * (-0.5 * xmm0_2 + 1.0 + 0.041666666666666664 * xmm0_3) + (xmm3_4 * xmm1_4 + xmm0_1) f*
    *((((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 4) + 0x70c658)
    * (-0.16666666666666666 * xmm0_2 + 1.0 + 0.0083333333333333332 * xmm0_3)
return 0x70c650 + (((int.d(xmm1_1) + 0x1c7610) & 0x3f) << 4)
