// 函数: sub_5b0690
// 地址: 0x5b0690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg2 += 1

if (*arg2 s>= 0x209)
    sub_4a7690(arg2)
    *arg2 = 0

int32_t ecx_1 = *arg2
double xmm1 = 2.3283064370807974e-10
int32_t eax = arg2[ecx_1 + 1]
double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_79aa70)
*arg2 = ecx_1 + 1
float xmm3_1 = _mm_cvtpd_ps(xmm0_2 * xmm1) - 0.5f

if (ecx_1 + 1 s>= 0x209)
    sub_4a7690(arg2)
    *arg2 = 0

int32_t ecx_3 = *arg2
int32_t eax_3 = arg2[ecx_3 + 1]
double xmm0_6 = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_79aa70)
*arg2 = ecx_3 + 1
float xmm4_1 = _mm_cvtpd_ps(xmm0_6 * xmm1) - 0.5f

if (ecx_3 + 1 s>= 0x209)
    sub_4a7690(arg2)
    *arg2 = 0

float var_8 = xmm4_1
int32_t eax_7 = arg2[*arg2 + 1]
float xmm2_1 =
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_7)) f+ *((eax_7 u>> 0x1f << 3) + &data_79aa70)) * xmm1)
    - 0.5f
float xmm0_16 = sub_484cc0(xmm4_1 * xmm4_1 + xmm3_1 * xmm3_1 + xmm2_1 * xmm2_1)
xmm0_16 - 0f
uint32_t eax_8
eax_8:1.b = (xmm0_16 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_16, 0f) ? 1 : 0) << 2
    | (xmm0_16 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    *arg1 = xmm3_1.q
    arg1[2] = xmm2_1
    return arg1

float xmm1_5 = 1f / xmm0_16
arg1[2] = xmm2_1 * xmm1_5
*arg1 = xmm1_5 * xmm3_1
arg1[1] = xmm1_5 * xmm4_1
return arg1
