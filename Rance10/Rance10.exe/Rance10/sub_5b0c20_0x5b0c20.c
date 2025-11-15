// 函数: sub_5b0c20
// 地址: 0x5b0c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg2 += 1

if (*arg2 s>= 0x209)
    sub_4a7690(arg2)
    *arg2 = 0

int32_t ecx_1 = *arg2
double xmm2 = 2.3283064370807974e-10
int32_t eax = arg2[ecx_1 + 1]
double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_79aa70)
*arg2 = ecx_1 + 1
float xmm1 = _mm_cvtpd_ps(xmm0_2 * xmm2)
float xmm1_2 = xmm1 + xmm1 - 1f

if (ecx_1 + 1 s>= 0x209)
    sub_4a7690(arg2)
    *arg2 = 0

int32_t ecx_3 = *arg2
int32_t eax_3 = arg2[ecx_3 + 1]
double xmm0_6 = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_79aa70)
*arg2 = ecx_3 + 1
float xmm6 = _mm_cvtpd_ps(xmm0_6 * xmm2)
float xmm6_2 = xmm6 + xmm6 - 1f

if (ecx_3 + 1 s>= 0x209)
    sub_4a7690(arg2)
    *arg2 = 0

int32_t eax_6 = *arg2
float var_24 = xmm1_2
int32_t eax_7 = arg2[eax_6 + 1]
int32_t var_20 = 0
int32_t var_1c = 0
double xmm0_9 = _mm_cvtepi32_pd(zx.q(eax_7))
uint32_t eax_8 = eax_7 u>> 0x1f
int32_t var_18 = 0
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0
float xmm5 = _mm_cvtpd_ps((xmm0_9 f+ *((eax_8 << 3) + &data_79aa70)) * xmm2)
float xmm5_2 = xmm5 + xmm5 - 1f
sub_5b09b0(
    sub_5b09b0(sub_5b09b0(eax_8, arg2, &var_24, xmm1_2 * xmm1_2, arg5), arg2, &var_18, 
        xmm6_2 * xmm6_2, arg5), 
    arg2, &var_c, xmm5_2 * xmm5_2, arg5)
*arg3 = *arg4 * var_24 * 0.5f
arg3[1] = arg4[1] f* xmm6_2 * 0.5f
arg3[2] = arg4[2] f* xmm5_2 * 0.5f
return arg3
