// 函数: sub_56d9e0
// 地址: 0x56d9e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c64b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_188
int32_t eax_2 = __security_cookie ^ &var_188
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = 0x13
int32_t var_f8
int32_t* eax_6 = &var_f8
int32_t temp1_1

do
    temp1_1 = ecx
    ecx -= 1
    eax_6[-2] = 0
    eax_6[-1] = 0
    eax_6 = &eax_6[3]
    eax_6[-3] = 0
while (temp1_1 - 1 s>= 0)
int64_t var_100
int64_t* edi = &var_100
int32_t i = 0
float xmm7 = *arg5
float xmm1 = arg5[1]
float xmm4 = arg5[2]
float xmm0 = arg5[3]
float xmm5_1 = xmm7 * xmm7
float xmm2_1 = xmm4 * xmm4
float xmm5_3 = xmm1 * xmm4
float xmm3_1 = xmm7 * xmm1
float xmm6_1 = xmm1 * xmm1
float xmm7_1 = xmm7 * xmm0
float xmm3_3 = xmm7 * xmm4
float xmm4_1 = xmm4 * xmm0
var_188 = xmm1 * xmm0
float xmm5_10 = (xmm3_3 - var_188) * 2f
var_188 = (var_188 + xmm3_3) * 2f

do
    float xmm0_11 = _mm_cvtepi32_ps(zx.o(i)) * 6.28318548f * 0.0500000007f
    float xmm0_12 = ___libm_sse2_sinf(xmm0_11, eax_4)
    double* eax_8
    float xmm0_14
    eax_8, xmm0_14 = ___libm_sse2_cosf(xmm0_11)
    int16_t top = top + 2
    float xmm1_3 = xmm0_14 * arg1
    *(edi + 4) = 0
    float xmm2_11 = xmm0_12 * arg1
    edi[1].d = xmm2_11
    float xmm0_18 = xmm2_11 * var_188
    *edi = xmm1_3
    float xmm3_7 = (1f - (xmm2_1 + xmm6_1) * 2f) * xmm1_3 + (xmm3_1 - xmm4_1) * 2f * 0f + xmm0_18
    float xmm4_9 = (xmm4_1 + xmm3_1) * 2f * xmm1_3 + (1f - (xmm2_1 + xmm5_1) * 2f) * 0f
        + xmm2_11 * (xmm5_3 - xmm7_1) * 2f
    float xmm5_14 =
        xmm5_10 * xmm1_3 + (xmm5_3 + xmm7_1) * 2f * 0f + xmm2_11 * (1f - (xmm6_1 + xmm5_1) * 2f)
    float xmm2_14 = (xmm2_11 + xmm1_3) * 0f + 1f
    xmm2_14 - 1f
    eax_8:1.b = (xmm2_14 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_14, 1f) ? 1 : 0) << 2
        | (xmm2_14 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm2_14 f- 0
        eax_8:1.b = (xmm2_14 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_14, 0f) ? 1 : 0) << 2
            | (xmm2_14 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm1_4 = 1f / xmm2_14
            xmm5_14 = xmm5_14 * xmm1_4
            xmm3_7 = xmm1_4 * xmm3_7
            xmm4_9 = xmm1_4 * xmm4_9
    
    i += 1
    float xmm0_32 = arg3[2] f+ xmm5_14
    *edi = _mm_unpacklo_ps(*arg3 + xmm3_7, arg3[1] f+ xmm4_9)
    edi[1].d = xmm0_32
    edi += 0xc
while (i s< 0x14)

int32_t eax_10 = sub_59f850(arg4)
int64_t* edi_1 = &var_100
int32_t i_2 = 0x13
struct sealengine::CLine::VTable* const var_12c
void var_128
int32_t i_1

do
    struct sealengine::CPoint::VTable* const var_160_1 = &sealengine::CPoint::`vftable'
    int64_t var_15c_1 = *(edi_1 + 0xc)
    int32_t var_154_1 = *(edi_1 + 0x14)
    int32_t var_150_1 = eax_10
    int32_t var_4 = 0
    struct sealengine::CPoint::VTable* const var_140_1 = &sealengine::CPoint::`vftable'
    int64_t var_13c_1 = *edi_1
    int32_t var_134_1 = edi_1[1].d
    int32_t var_130_1 = eax_10
    int32_t (__fastcall* var_1a0_1)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
    var_4.b = 1
    var_12c = &sealengine::CLine::`vftable'
    sub_69b2ba(&var_128, 0x14, 2, sub_576570)
    int64_t var_124_1 = *edi_1
    int32_t var_11c_1 = edi_1[1].d
    int32_t var_118_1 = eax_10
    int64_t var_110_1 = *(edi_1 + 0xc)
    int32_t var_108_1 = *(edi_1 + 0x14)
    int32_t var_104_1 = eax_10
    var_4.b = 2
    sub_5336c0(arg2, &var_12c)
    var_4.b = 1
    var_12c = &sealengine::CLine::`vftable'
    `eh vector vbase constructor iterator'(&var_128, 0x14, 2, sub_5765a0)
    edi_1 += 0xc
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
int32_t edi_2 = var_f8
struct sealengine::CPoint::VTable* const var_140_2 = &sealengine::CPoint::`vftable'
int64_t var_13c_2 = var_100
int32_t var_134_2 = edi_2
int32_t var_130_2 = eax_10
int32_t var_4_1 = 3
struct sealengine::CPoint::VTable* const var_160_2 = &sealengine::CPoint::`vftable'
int64_t var_1c
int64_t var_15c_2 = var_1c
int32_t var_14
int32_t var_154_2 = var_14
int32_t var_150_2 = eax_10
int32_t (__fastcall* var_1a0_3)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_1.b = 4
var_12c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_128, 0x14, 2, sub_576570)
int64_t var_124_2 = var_1c
int32_t var_11c_2 = var_14
int32_t var_118_2 = eax_10
int64_t var_110_2 = var_100
int32_t var_108_2 = edi_2
int32_t var_104_2 = eax_10
var_4_1.b = 5
sub_5336c0(arg2, &var_12c)
var_4_1.b = 4
var_12c = &sealengine::CLine::`vftable'
int32_t result = `eh vector vbase constructor iterator'(&var_128, 0x14, 2, sub_5765a0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_188)
return result
