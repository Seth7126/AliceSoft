// 函数: sub_48b670
// 地址: 0x48b670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 4) += 1

if (*(arg1 + 4) s>= 0x209)
    sub_47cac0(arg1)
    *(arg1 + 4) = 0

int32_t ecx_2 = *(arg1 + 4)
double xmm1 = 2.3283064370807974e-10
int32_t eax = *(arg1 + (ecx_2 << 2) + 8)
double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_709480)
*(arg1 + 4) = ecx_2 + 1
float xmm4 = _mm_cvtpd_ps(xmm0_2 * xmm1)

if (ecx_2 + 1 s>= 0x209)
    sub_47cac0(arg1)
    *(arg1 + 4) = 0

int32_t ecx_4 = *(arg1 + 4)
int32_t eax_3 = *(arg1 + (ecx_4 << 2) + 8)
double xmm0_6 = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_709480)
*(arg1 + 4) = ecx_4 + 1
float xmm6 = _mm_cvtpd_ps(xmm0_6 * xmm1)

if (ecx_4 + 1 s>= 0x209)
    sub_47cac0(arg1)
    *(arg1 + 4) = 0

int32_t ecx_6 = *(arg1 + 4)
int32_t eax_6 = *(arg1 + (ecx_6 << 2) + 8)
double xmm0_10 = _mm_cvtepi32_pd(zx.q(eax_6)) f+ *((eax_6 u>> 0x1f << 3) + &data_709480)
*(arg1 + 4) = ecx_6 + 1
float xmm3 = _mm_cvtpd_ps(xmm0_10 * xmm1)

if (ecx_6 + 1 s>= 0x209)
    sub_47cac0(arg1)
    *(arg1 + 4) = 0

int32_t ecx_8 = *(arg1 + 4)
int32_t eax_9 = *(arg1 + (ecx_8 << 2) + 8)
double xmm0_14 = _mm_cvtepi32_pd(zx.q(eax_9)) f+ *((eax_9 u>> 0x1f << 3) + &data_709480)
*(arg1 + 4) = ecx_8 + 1
float xmm5 = _mm_cvtpd_ps(xmm0_14 * xmm1)

if (ecx_8 + 1 s>= 0x209)
    sub_47cac0(arg1)
    *(arg1 + 4) = 0

int32_t ecx_10 = *(arg1 + 4)
int32_t eax_12 = *(arg1 + (ecx_10 << 2) + 8)
double xmm0_18 = _mm_cvtepi32_pd(zx.q(eax_12)) f+ *((eax_12 u>> 0x1f << 3) + &data_709480)
*(arg1 + 4) = ecx_10 + 1
float xmm2 = _mm_cvtpd_ps(xmm0_18 * xmm1)

if (ecx_10 + 1 s>= 0x209)
    sub_47cac0(arg1)
    *(arg1 + 4) = 0

float xmm4_1 = xmm4 - xmm6
float xmm3_1 = xmm3 - xmm5
int32_t eax_16 = *(arg1 + (*(arg1 + 4) << 2) + 8)
*arg2 = xmm4_1
arg2[1] = xmm3_1
float xmm2_1 = xmm2 -
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_16)) f+ *((eax_16 u>> 0x1f << 3) + &data_709480)) * xmm1)
arg2[2] = xmm2_1
float xmm1_4 = xmm3_1 * xmm3_1 + xmm4_1 * xmm4_1 + xmm2_1 * xmm2_1
float xmm1_5 = _mm_sqrt_ss(xmm1_4, xmm1_4)
xmm1_5 - 0f
uint32_t result
result:1.b =
    (xmm1_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_5, 0f) ? 1 : 0) << 2 | (xmm1_5 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    float xmm0_29 = 1f / xmm1_5
    *arg2 = xmm4_1 * xmm0_29
    arg2[1] = xmm3_1 * xmm0_29
    arg2[2] = xmm2_1 * xmm0_29

return result
