// 函数: ___libm_sse2_log
// 地址: 0x6af0ff
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = 0
double var_8 = arg1
void* eax_2
uint32_t ecx_1
double xmm0_4[0x2]
double xmm0_5[0x2]
double xmm6_4[0x2]
int64_t xmm7_1

while (true)
    double xmm0[0x2] = _mm_unpacklo_pd(arg1, arg1)
    ecx_1 = _mm_extract_epi16(_mm_srli_epi64(arg1, 0x34), 0)
    uint64_t xmm3_1[0x2] = data_70d270
    double xmm4_1[0x2] = data_70d220
    uint64_t xmm6_1[0x2] = data_70d230
    uint64_t xmm0_2[0x2] = _mm_or_pd(_mm_and_pd(xmm0, data_70d210), xmm3_1)
    eax_2 = _mm_extract_epi16(_mm_add_pd(xmm4_1, xmm0_2), 0) & 0x7f0
    double xmm4_3[0x2] = *(eax_2 + 0x70d2e0)
    xmm7_1 = (*(eax_2 + 0x70d6f0)).q
    uint64_t xmm6_2[0x2] = _mm_and_pd(xmm6_1, xmm0_2)
    double xmm0_3[0x2] = _mm_sub_pd(xmm0_2, xmm6_2)
    xmm6_4 = _mm_sub_pd(_mm_mul_pd(xmm6_2, xmm4_3), xmm3_1)
    xmm0_4 = _mm_mul_pd(xmm0_3, xmm4_3)
    xmm0_5 = _mm_add_pd(xmm0_4, xmm6_4)
    
    if ((ecx_1 & 0xfff) - 1 u<= 0x7fd)
        break
    
    double xmm0_10[0x2] = var_8
    uint32_t eax_4 = _mm_extract_epi16(_mm_cmpeq_sd((data_70d280).q, xmm0_10, 0), 0)
    
    if (eax_4 u> 0)
        return eax_4
    
    if ((ecx_1 & 0xfff) != 0)
        if ((ecx_1 & 0xfff) - 1 u<= 0x7fe)
            uint64_t xmm2_3[0x2] = data_70d270
            return _mm_extract_epi16(
                _mm_cmpeq_sd(xmm2_3, _mm_or_pd(_mm_and_pd(var_8, data_70d210), xmm2_3), 0), 0)
        
        if ((ecx_1 & 0x7ff) u>= 0x7ff)
            uint64_t xmm2_6[0x2] = var_8
            xmm0_10 = var_8
            eax_4 = xmm2_6 | (_mm_srli_epi64(xmm2_6, 0x20) & 0xfffff)
            
            if (eax_4 != 0)
                return eax_4
        
        _mm_xor_pd(xmm0_10, xmm0_10)
        return eax_4
    
    arg1 = xmm0_10 f* 4503599627370496.0
    edx = 0xffffffcc

int32_t ecx_5 = (ecx_1 & 0xfff) - 0x3ff + edx
double xmm6_5[0x2] = float.d(ecx_5)
double xmm6_6[0x2] = _mm_unpacklo_pd(xmm6_5, xmm6_5)
void* eax_3 = eax_2 + (ecx_5 << 0xa)
void* const edx_1 = nullptr

if (eax_3 == 0)
    edx_1 = 0x10

double xmm2_1[0x2] = data_70d2c0
double xmm1_3[0x2] = _mm_mul_pd(data_70d2b0, xmm0_5)
double xmm3_3 = _mm_mul_pd(xmm0_5, xmm0_5)
double xmm1_4[0x2] = _mm_add_pd(xmm1_3, xmm2_1)
double xmm2_2[0x2] = data_70d2d0
double xmm6_7[0x2] = _mm_mul_pd(xmm6_6, data_70d240)
uint64_t xmm4_5[0x2] = _mm_and_pd(xmm0_4, *(edx_1 + 0x70d250))
double xmm7_4[0x2] = _mm_add_pd(_mm_add_pd(xmm7_1 f+ xmm6_4, xmm6_7), xmm4_5)
double xmm1_6[0x2] = _mm_add_pd(_mm_mul_pd(xmm1_4, xmm0_5), xmm2_2)
_mm_unpackhi_pd(xmm7_4, xmm7_4)
double xmm1_7[0x2] = _mm_mul_pd(xmm1_6, xmm3_3 * xmm3_3 f* xmm0_5)
xmm1_7[0]
_mm_unpackhi_pd(xmm1_7, xmm1_7)
return eax_3
