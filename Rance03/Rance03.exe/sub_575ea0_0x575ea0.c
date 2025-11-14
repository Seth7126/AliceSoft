// 函数: sub_575ea0
// 地址: 0x575ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg2 + 4) += 1

if (*(arg2 + 4) s>= 0x209)
    sub_47cac0(arg2)
    *(arg2 + 4) = 0

int32_t ecx_2 = *(arg2 + 4)
double xmm1 = 2.3283064370807974e-10
int32_t eax = *(arg2 + (ecx_2 << 2) + 8)
double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_709480)
*(arg2 + 4) = ecx_2 + 1
float xmm3_1 = _mm_cvtpd_ps(xmm0_2 * xmm1) - 0.5f

if (ecx_2 + 1 s>= 0x209)
    sub_47cac0(arg2)
    *(arg2 + 4) = 0

int32_t ecx_4 = *(arg2 + 4)
int32_t eax_3 = *(arg2 + (ecx_4 << 2) + 8)
double xmm0_6 = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_709480)
*(arg2 + 4) = ecx_4 + 1
float xmm4_1 = _mm_cvtpd_ps(xmm0_6 * xmm1) - 0.5f

if (ecx_4 + 1 s>= 0x209)
    sub_47cac0(arg2)
    *(arg2 + 4) = 0

float var_8 = xmm4_1
int32_t eax_7 = *(arg2 + (*(arg2 + 4) << 2) + 8)
float xmm2_1 =
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_7)) f+ *((eax_7 u>> 0x1f << 3) + &data_709480)) * xmm1)
    - 0.5f
float xmm0_16 = _mm_sqrt_ss(0, xmm4_1 * xmm4_1 + xmm3_1 * xmm3_1 + xmm2_1 * xmm2_1)
xmm0_16 - 0f
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    *arg1 = xmm3_1.q
    arg1[2] = xmm2_1
    return arg1

float xmm1_5 = 1f / xmm0_16
arg1[2] = xmm2_1 * xmm1_5
*arg1 = xmm1_5 * xmm3_1
arg1[1] = xmm1_5 * xmm4_1
return arg1
