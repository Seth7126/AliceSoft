// 函数: ___libm_sse2_exp
// 地址: 0x6aed92
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

double xmm0[0x2] = _mm_unpacklo_pd(arg2, arg2)
double xmm1[0x2] = data_70caf0
double xmm6[0x2] = data_70cae0
double var_8 = xmm0
double xmm2[0x2] = data_70cb00
double xmm3[0x2] = data_70cb10
int32_t eax_1 = _mm_extract_epi16(xmm0, 3) & 0x7fff

if (((0x408f - eax_1) | (eax_1 - 0x3c90)) u>= 0x80000000)
    int32_t eax_10 = var_8:4.d & 0x7fffffff
    
    if (eax_10 u< 0x40900000)
        return eax_10
    
    if (eax_10 u< 0x7ff00000)
        return var_8:4.d
    
    if (eax_10 u> 0x7ff00000 || var_8.d != 0)
        return eax_10
    
    return var_8:4.d

double xmm1_2[0x2] = _mm_add_pd(_mm_mul_pd(xmm1, xmm0), xmm6)
double xmm1_3[0x2] = _mm_sub_pd(xmm1_2, xmm6)
double xmm2_1[0x2] = _mm_mul_pd(xmm2, xmm1_3)
double xmm4[0x2] = data_70cb20
double xmm3_1[0x2] = _mm_mul_pd(xmm3, xmm1_3)
double xmm5[0x2] = data_70cb30
int32_t eax_3 = xmm1_2
int32_t eax_4 = eax_3 s>> 6
double xmm0_2[0x2] = _mm_sub_pd(_mm_sub_pd(xmm0, xmm2_1), xmm3_1)
double xmm2_2[0x2] = *(((eax_3 & 0x3f) << 4) + 0x70cb40)
double xmm4_1[0x2] = _mm_mul_pd(xmm4, xmm0_2)
double xmm1_4 = xmm0_2[0]
double xmm0_3 = _mm_mul_pd(xmm0_2, xmm0_2)
double xmm5_1[0x2] = _mm_add_pd(xmm5, xmm4_1)
double xmm2_3[0x2] = _mm_unpackhi_pd(xmm2_2, xmm2_2)
uint64_t xmm7_3[0x2] = _mm_slli_epi64(_mm_add_epi64(xmm1_2 & data_70cac0, data_70cad0), 0x2e)
double xmm0_5[0x2] = _mm_mul_pd(xmm0_3 * xmm0_3, xmm5_1)
uint64_t xmm2_4[0x2] = _mm_or_pd(xmm2_3, xmm7_3)
double xmm0_7 = _mm_unpackhi_pd(xmm0_5, xmm0_5) + xmm1_4 f+ xmm2_2 f+ xmm0_5

if (eax_4 + 0x37e u<= 0x77c)
    return eax_4

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
int32_t edx_3
edx_3.w = temp0
edx_3.w |= 0x300
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(edx_3.w)
int32_t eax_5 = eax_4 s>> 1
int16_t var_1e
var_1e.q = xmm0_7
long double x87_r6 =
    fconvert.t(_mm_or_pd(data_70cab0 & not.o(xmm2_4), _mm_slli_epi64(zx.o(eax_5 + 0x3ff), 0x34)))
long double x87_r7_2 = fconvert.t(var_1e.q) * x87_r6 + x87_r6
var_1e.q = _mm_slli_epi64(zx.o(eax_4 - eax_5 + 0x3ff), 0x34)
var_1e.q = fconvert.d(x87_r7_2 * fconvert.t(var_1e.q))
int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(temp0)
return eax_5 + 0x3ff
