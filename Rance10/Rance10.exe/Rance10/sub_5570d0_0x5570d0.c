// 函数: sub_5570d0
// 地址: 0x5570d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm2[0x2] = arg5
double xmm1_1 = _mm_cvtepi32_pd(zx.q(arg2))
(*arg3)[1] = 0f
arg3[1][0] = 0f
(*arg3)[3] = 0f
arg3[2][0] = 0f
arg3[3][0] = 0f
double xmm0 = _mm_cvtps_pd(xmm2)
(*arg3)[7] = 0f
arg3[4][0] = 0f
(*arg3)[9] = 0f
arg3[5][0] = 0.0500000007f
(*arg3)[0xb] = 0f
*arg3 = xmm2
arg3[6][0] = 0f
double xmm0_2 = _mm_cvtepi32_pd(zx.q(arg4))
(*arg3)[0xd] = 0f
arg3[7][0] = 0f
(*arg3)[0xf] = 1f
(*arg3)[5] = _mm_cvtpd_ps(xmm1_1 * xmm0 / xmm0_2)
return arg3
