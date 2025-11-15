// 函数: sub_5259f0
// 地址: 0x5259f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0x1dc)
int32_t mxcsr
int32_t mxcsr_1
float xmm0
mxcsr_1, xmm0 = ___libm_sse2_powf(mxcsr, 0x3f7f3b64, _mm_cvtepi32_ps(zx.o(esi + 1)))
int32_t eax_2 = arg2 + esi
*(arg1 + 0x1dc) = eax_2
float xmm0_2 = (xmm0 - 1f) * -333.330994f
float xmm2_2 =
    (___libm_sse2_powf(mxcsr_1, 0x3f7f3b64, _mm_cvtepi32_ps(zx.o(eax_2 + 1))) - 1f) * -333.330994f
float eax_5 = int.d(*(arg1 + 0x1d8) * xmm2_2) + *(arg1 + 0x1c8)
float esi_2 = int.d(*(arg1 + 0x1d4) * xmm2_2) + *(arg1 + 0x1c4)
long double x87_r0
long double x87_r1
float eax_6 = sub_63cd60(arg3, x87_r0, x87_r1)
long double x87_r2
float eax_7 = sub_63cd60(arg4, x87_r1, x87_r2)
long double x87_r3
float var_14 = sub_63cd60(esi_2, x87_r2, x87_r3)
long double x87_r4
float var_10 = sub_63cd60(eax_5, x87_r3, x87_r4)
struct partsengine::IEventArgs::partsengine::SSwipingEventArgs::VTable* const var_20 =
    &partsengine::SSwipingEventArgs::`vftable'{for `partsengine::IEventArgs'}
float var_1c = eax_6
float var_18 = eax_7
char var_c = 1
sub_4cbd50(arg1 + 0x1e4, &var_20, 0)
float xmm1_6 = *(arg1 + 0x1d4)
int32_t result

if (int.d(xmm1_6 * xmm0_2) == int.d(xmm1_6 * xmm2_2))
    float xmm1_8 = *(arg1 + 0x1d8)
    
    if (int.d(xmm1_8 * xmm0_2) == int.d(xmm1_8 * xmm2_2))
        result.b = 0
        return result

result.b = 1
return result
