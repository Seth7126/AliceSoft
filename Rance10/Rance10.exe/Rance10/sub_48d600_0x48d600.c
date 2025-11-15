// 函数: sub_48d600
// 地址: 0x48d600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CBiquadFilterProcess::VTable** 
    var_4_2 = arg1
struct kiwi::CBiquadFilterProcess::kiwi::CHighPassFilterProcess::VTable** result = arg1
sub_48cb70(arg1)
*result = &kiwi::CHighPassFilterProcess::`vftable'{for `kiwi::CBiquadFilterProcess'}
arg4 = arg2 * 6.28318548f
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg4)) f+ *((arg4 u>> 0x1f << 3) + &data_79aa70))
float xmm0_5 = sub_484cb0() / (arg3 + arg3)
float xmm0_7 = sub_48ca30()
float xmm3 = 1f / (xmm0_5 + 1f)
result[3] = (1f - xmm0_5) * xmm3
result[2] = xmm0_7 * -2f * xmm3
float xmm0_13 = (xmm0_7 + 1f) * 0.5f * xmm3
result[5] = ((xmm0_7 + 1f) * xmm3) ^ (data_79aad0).d
result[4] = xmm0_13
result[6] = xmm0_13
return result
