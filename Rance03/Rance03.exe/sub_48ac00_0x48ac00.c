// 函数: sub_48ac00
// 地址: 0x48ac00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float esi = arg3
float edi = arg2
float xmm4 = *(edi i+ 0xe0)
*(esi i+ 4) += 1

if (*(esi i+ 4) s>= 0x209)
    sub_47cac0(esi)
    *(esi i+ 4) = 0

int32_t ecx_2 = *(esi i+ 4)
double xmm1 = 2.3283064370807974e-10
int32_t eax = *(esi i+ (ecx_2 << 2) + 8)
float xmm3_2 = (
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_709480)) * xmm1)
    - 0.5f) * xmm4
float xmm4_1 = *(edi i+ 0xe8)
*(esi i+ 4) = ecx_2 + 1

if (ecx_2 + 1 s>= 0x209)
    sub_47cac0(esi)
    *(esi i+ 4) = 0

int32_t ecx_4 = *(esi i+ 4)
float xmm5 = *(edi i+ 0xf0)
int32_t eax_3 = *(esi i+ (ecx_4 << 2) + 8)
double xmm0_6 = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_709480)
*(esi i+ 4) = ecx_4 + 1
arg2 = (_mm_cvtpd_ps(xmm0_6 * xmm1) - 0.5f) * xmm4_1

if (ecx_4 + 1 s>= 0x209)
    sub_47cac0(esi)
    *(esi i+ 4) = 0

int32_t ecx_6 = *(esi i+ 4)
int32_t eax_6 = *(esi i+ (ecx_6 << 2) + 8)
float xmm4_4 = (
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_6)) f+ *((eax_6 u>> 0x1f << 3) + &data_709480)) * xmm1)
    - 0.5f) * xmm5
float xmm5_1 = *(edi i+ 0xf8)
*(esi i+ 4) = ecx_6 + 1

if (ecx_6 + 1 s>= 0x209)
    sub_47cac0(esi)
    *(esi i+ 4) = 0

int32_t ecx_8 = *(esi i+ 4)
float xmm6 = *(edi i+ 0x100)
int32_t eax_9 = *(esi i+ (ecx_8 << 2) + 8)
double xmm0_17 = _mm_cvtepi32_pd(zx.q(eax_9)) f+ *((eax_9 u>> 0x1f << 3) + &data_709480)
*(esi i+ 4) = ecx_8 + 1
arg3 = (_mm_cvtpd_ps(xmm0_17 * xmm1) - 0.5f) * xmm5_1

if (ecx_8 + 1 s>= 0x209)
    sub_47cac0(esi)
    *(esi i+ 4) = 0

int32_t ecx_10 = *(esi i+ 4)
int32_t eax_12 = *(esi i+ (ecx_10 << 2) + 8)
float xmm5_4 = (
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_12)) f+ *((eax_12 u>> 0x1f << 3) + &data_709480)) * xmm1)
    - 0.5f) * xmm6
float xmm6_1 = *(edi i+ 0x108)
*(esi i+ 4) = ecx_10 + 1

if (ecx_10 + 1 s>= 0x209)
    sub_47cac0(esi)
    *(esi i+ 4) = 0

int32_t eax_16 = *(esi i+ (*(esi i+ 4) << 2) + 8)
double xmm0_27 = _mm_cvtepi32_pd(zx.q(eax_16))
bool cond:0 = *(edi i+ 0x10c) == 0
float xmm7_2 =
    (_mm_cvtpd_ps((xmm0_27 f+ *((eax_16 u>> 0x1f << 3) + &data_709480)) * xmm1) - 0.5f) * xmm6_1

if (not(cond:0))
    arg2 = xmm3_2
    xmm7_2 = xmm5_4
    arg3 = xmm4_4

float xmm2_1 = *(edi i+ 0xdc) + xmm3_2
float xmm5_6 = *(edi i+ 0xec) + xmm4_4
float xmm6_3 = *(edi i+ 0xfc) + xmm5_4
float xmm1_2 = *(edi i+ 0x38) * arg1
float xmm3_7 = (*(edi i+ 0xf4) + arg3 - xmm5_6) * xmm1_2 + xmm5_6
float xmm4_9 = (*(edi i+ 0x104) + xmm7_2 - xmm6_3) * xmm1_2 + xmm6_3
*arg4 = (*(edi i+ 0xe4) + arg2 - xmm2_1) * xmm1_2 + xmm2_1
arg4[1] = xmm3_7
arg4[2] = xmm4_9
return arg4
