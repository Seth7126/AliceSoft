// 函数: sub_48a970
// 地址: 0x48a970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float edi = arg2
float xmm4 = *(edi i+ 0x40)
*(arg3 i+ 4) += 1

if (*(arg3 i+ 4) s>= 0x209)
    sub_47cac0(arg3)
    *(arg3 i+ 4) = 0

int32_t ecx_2 = *(arg3 i+ 4)
double xmm1 = 2.3283064370807974e-10
int32_t eax = *(arg3 i+ (ecx_2 << 2) + 8)
float xmm3_2 = (
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_709480)) * xmm1)
    - 0.5f) * xmm4
float xmm4_1 = *(edi i+ 0x48)
*(arg3 i+ 4) = ecx_2 + 1

if (ecx_2 + 1 s>= 0x209)
    sub_47cac0(arg3)
    *(arg3 i+ 4) = 0

int32_t ecx_4 = *(arg3 i+ 4)
float xmm5 = *(edi i+ 0x50)
int32_t eax_3 = *(arg3 i+ (ecx_4 << 2) + 8)
double xmm0_6 = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_709480)
*(arg3 i+ 4) = ecx_4 + 1
float xmm7_2 = (_mm_cvtpd_ps(xmm0_6 * xmm1) - 0.5f) * xmm4_1

if (ecx_4 + 1 s>= 0x209)
    sub_47cac0(arg3)
    *(arg3 i+ 4) = 0

int32_t ecx_6 = *(arg3 i+ 4)
int32_t eax_6 = *(arg3 i+ (ecx_6 << 2) + 8)
float xmm4_4 = (
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_6)) f+ *((eax_6 u>> 0x1f << 3) + &data_709480)) * xmm1)
    - 0.5f) * xmm5
float xmm5_1 = *(edi i+ 0x58)
*(arg3 i+ 4) = ecx_6 + 1

if (ecx_6 + 1 s>= 0x209)
    sub_47cac0(arg3)
    *(arg3 i+ 4) = 0

int32_t ecx_8 = *(arg3 i+ 4)
float xmm6 = *(edi i+ 0x60)
int32_t eax_9 = *(arg3 i+ (ecx_8 << 2) + 8)
double xmm0_14 = _mm_cvtepi32_pd(zx.q(eax_9)) f+ *((eax_9 u>> 0x1f << 3) + &data_709480)
*(arg3 i+ 4) = ecx_8 + 1
arg2 = (_mm_cvtpd_ps(xmm0_14 * xmm1) - 0.5f) * xmm5_1

if (ecx_8 + 1 s>= 0x209)
    sub_47cac0(arg3)
    *(arg3 i+ 4) = 0

int32_t ecx_10 = *(arg3 i+ 4)
int32_t eax_12 = *(arg3 i+ (ecx_10 << 2) + 8)
float xmm5_2 =
    _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_12)) f+ *((eax_12 u>> 0x1f << 3) + &data_709480)) * xmm1)
float xmm0_23 = *(edi i+ 0x68)
*(arg3 i+ 4) = ecx_10 + 1
float xmm5_4 = (xmm5_2 - 0.5f) * xmm6

if (ecx_10 + 1 s>= 0x209)
    sub_47cac0(arg3)
    *(arg3 i+ 4) = 0

int32_t eax_16 = *(arg3 i+ (*(arg3 i+ 4) << 2) + 8)
double xmm0_25 = _mm_cvtepi32_pd(zx.q(eax_16))
bool cond:0 = *(edi i+ 0x6c) == 0
float xmm6_3 =
    (_mm_cvtpd_ps((xmm0_25 f+ *((eax_16 u>> 0x1f << 3) + &data_709480)) * xmm1) - 0.5f) * xmm0_23

if (not(cond:0))
    xmm7_2 = xmm3_2
    arg2 = xmm4_4
    xmm6_3 = xmm5_4

float xmm0_29 = *(edi i+ 0x3c) + xmm3_2
float xmm2_1 = *(edi i+ 0x38) * arg1
float xmm3_4 = *(edi i+ 0x4c) + xmm4_4
float xmm5_6 = *(edi i+ 0x5c) + xmm5_4
float xmm1_5 = (*(edi i+ 0x44) + xmm7_2 - xmm0_29) * xmm2_1 + xmm0_29
float xmm0_34 = (*(edi i+ 0x54) + arg2 - xmm3_4) * xmm2_1 + xmm3_4
arg4[1] = ((*(edi i+ 0x64) + xmm6_3 - xmm5_6) * xmm2_1 + xmm5_6) * xmm1_5
*arg4 = xmm0_34 * xmm1_5
return arg4
