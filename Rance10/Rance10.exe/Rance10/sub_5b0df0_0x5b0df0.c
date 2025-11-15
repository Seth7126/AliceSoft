// 函数: sub_5b0df0
// 地址: 0x5b0df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg2 += 1

if (*arg2 s>= 0x209)
    sub_4a7690(arg2)
    *arg2 = 0

int32_t eax = *arg2
float var_c = 0f
float var_4 = 0f
int32_t eax_1 = arg2[eax + 1]
uint32_t eax_2 = eax_1 u>> 0x1f
float xmm1 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_1)) f+ *((eax_2 << 3) + &data_79aa70))
    * 2.3283064370807974e-10)
float xmm1_2 = xmm1 + xmm1 - 1f
uint32_t eax_3 = sub_5b09b0(eax_2, arg2, &var_c, xmm1_2 * xmm1_2, arg6)
float xmm2_2 = var_c * 0.5f * arg5
float* eax_4 = sub_5b0ac0(eax_3, arg2, &var_c, arg4, arg6)
float xmm7_3 = xmm1_2 * 0.5f * arg5 + eax_4[1] + arg5 * 0.5f
float xmm0_7 = var_4 * 0.5f * arg5 + eax_4[2]
*arg3 = xmm2_2 + *eax_4
arg3[1] = xmm7_3
arg3[2] = xmm0_7
return arg3
