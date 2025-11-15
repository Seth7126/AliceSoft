// 函数: sub_48da20
// 地址: 0x48da20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct kiwi::CBiquadFilterProcess::kiwi::CEqualizerProcess::VTable** result = arg1
sub_48cb70(arg1)
*result = &kiwi::CEqualizerProcess::`vftable'{for `kiwi::CBiquadFilterProcess'}
float xmm0_1 = sub_484cc0(arg4)
int32_t xmm2_2[0x4] = arg2 * 6.28318548f
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg5)) f+ *((arg5 u>> 0x1f << 3) + &data_79aa70))
float var_1c = xmm2_2
int80_t x87_r0
float xmm0_4 = ___libm_sse2_sinf(xmm2_2, x87_r0)
sub_722ed8()
float xmm0_6 = fconvert.s(fconvert.t(arg3 * 0.346573591f * var_1c / xmm0_4)) * xmm0_4
float xmm0_7 = xmm0_6 / xmm0_1
float xmm0_8 = 1f / (xmm0_7 + 1f)
int80_t x87_r1
float xmm2_5 = ___libm_sse2_cosf(var_1c, x87_r1) * -2f * xmm0_8
result[3] = (1f - xmm0_7) * xmm0_8
float xmm1_12 = xmm0_6 * xmm0_1
result[2] = xmm2_5
result[5] = xmm2_5
result[4] = (xmm1_12 + 1f) * xmm0_8
result[6] = (1f - xmm1_12) * xmm0_8
return result
