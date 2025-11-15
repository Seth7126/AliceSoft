// 函数: sub_48ca40
// 地址: 0x48ca40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct kiwi::CBiquadFilterProcess::kiwi::CBandPassFilterProcess::VTable** result = arg1
sub_48cb70(arg1)
*result = &kiwi::CBandPassFilterProcess::`vftable'{for `kiwi::CBiquadFilterProcess'}
int32_t xmm1_1[0x4] = arg2 * 6.28318548f
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg4)) f+ *((arg4 u>> 0x1f << 3) + &data_79aa70))
float var_14 = xmm1_1
int80_t x87_r0
float xmm0_5 = ___libm_sse2_sinf(xmm1_1, x87_r0)
sub_722ed8()
float xmm0_7 = fconvert.s(fconvert.t(arg3 * 0.346573591f * var_14 / xmm0_5)) * xmm0_5
float xmm2 = 1f / (xmm0_7 + 1f)
int80_t x87_r1
float xmm0_10 = ___libm_sse2_cosf(var_14, x87_r1) * -2f
result[5] = 0
result[2] = xmm0_10 * xmm2
float xmm2_2 = xmm2 * xmm0_7
result[3] = (1f - xmm0_7) * xmm2
result[4] = xmm2_2
result[6] = xmm2_2 ^ (data_79aad0).d
return result
