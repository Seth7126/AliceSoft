// 函数: sub_557000
// 地址: 0x557000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

long double x87_r0
double xmm0_3 = ___libm_sse2_tan(_mm_cvtps_pd(arg5) * 0.5 * 0.017453292519943295, x87_r0)
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0
arg3[4] = 0
arg3[6] = 0
arg3[7] = 0
arg3[8] = 0
arg3[9] = 0
arg3[0xa] = 0x3fc00000
arg3[0xb] = 0x3f800000
arg3[0xc] = 0
arg3[0xd] = 0
arg3[0xe] = 0xc1700000
arg3[0xf] = 0
int32_t xmm1_2 = _mm_cvtpd_ps(1.0 / xmm0_3)
double xmm0_5 = _mm_cvtepi32_pd(zx.q(arg4))
*arg3 = xmm1_2
arg3[5] = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg2)) / (xmm0_5 * xmm0_3))
return arg3
