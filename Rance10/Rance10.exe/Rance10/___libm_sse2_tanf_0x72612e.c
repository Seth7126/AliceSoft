// 函数: ___libm_sse2_tanf
// 地址: 0x72612e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t eax = (_mm_extract_epi16(arg1, 1) & 0x7fff) - 0x80

if (eax u> 0x46ff)
    if (eax s<= 0x46ff)
        return eax
    
    int32_t eax_4 = arg1 & 0x7f800000
    
    if (eax_4 == 0x7f800000)
        return eax_4
    
    double var_8
    var_8.d = fconvert.s(arg2)
    int32_t mxcsr
    int16_t x87control
    return _tan(mxcsr, x87control, fconvert.d(arg1))

float xmm1_1 = 10.1859159f f* arg1
uint64_t xmm7_1[0x2] = _mm_and_pd(data_79f710, arg1)
uint64_t xmm7_3[0x2] = _mm_xor_pd(_mm_slli_epi64(xmm7_1, 0x20), _mm_slli_epi64(xmm7_1, 0x1d))
_mm_xor_pd(-0x846de04abbc0000, xmm7_3)
double xmm2_1 = _mm_xor_pd(-0x846de04abb80000, xmm7_3)
_mm_xor_pd(-0xab973dcb3b399d7, xmm7_3)
double xmm3_1 = _mm_xor_pd(0x758e973dcb3b399d, xmm7_3)
int32_t edx_3 = ((int.d(xmm1_1) + 0x1c7600) & 0x1f) << 3
_mm_slli_epi64(201326592f + xmm1_1 - 201326592f, 0x1d)
double xmm1_4 = _mm_slli_epi64(xmm1_1 + 12582912f - 12582912f, 0x1d)
double xmm2_4 = xmm2_1 * xmm1_4 + fconvert.d(arg1) + xmm3_1 * xmm1_4
double xmm2_5 = xmm2_4 * xmm2_4
((*(edx_3 * 9 + 0x79ee48) * xmm2_4 f+ *(edx_3 * 9 + 0x79ee40)) * xmm2_5
    + *(edx_3 * 9 + 0x79ee38) * xmm2_4 f+ *(edx_3 * 9 + 0x79ee30)) * xmm2_5 * xmm2_5
    + (*(edx_3 * 9 + 0x79ee28) * xmm2_4 f+ *(edx_3 * 9 + 0x79ee20)) * xmm2_5
    + *(edx_3 * 9 + 0x79ee18) * xmm2_4 + *(edx_3 * 9 + 0x79ee10)
*(edx_3 * 9 + 0x79ee50)
return edx_3 * 9 + 0x79ee10
