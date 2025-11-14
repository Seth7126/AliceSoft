// 函数: sub_56df40
// 地址: 0x56df40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6543
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_19c
int32_t eax_2 = __security_cookie ^ &var_19c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = 0x13
int32_t var_fc
int32_t* eax_6 = &var_fc
int32_t temp1_1

do
    temp1_1 = ecx
    ecx -= 1
    eax_6[-2] = 0
    eax_6[-1] = 0
    eax_6 = &eax_6[3]
    eax_6[-3] = 0
while (temp1_1 - 1 s>= 0)
int64_t var_104
int64_t* ebx = &var_104
int32_t i = 0
float xmm7 = *arg5
float xmm1 = arg5[1]
float xmm3 = arg5[2]
float xmm0 = arg5[3]
float xmm4_1 = xmm7 * xmm1
float xmm5_1 = xmm7 * xmm7
float xmm2_1 = xmm3 * xmm3
float xmm4_3 = xmm0 * xmm7
float xmm6_1 = xmm1 * xmm1
float xmm3_1 = xmm3 * xmm7
float xmm7_1 = arg5[2]
float xmm5_3 = xmm7_1 * xmm1
float xmm5_5 = xmm0 * xmm1
float xmm1_2 = xmm7_1 * xmm0

do
    float xmm0_10 = _mm_cvtepi32_ps(zx.o(i)) * 6.28318548f * 0.0500000007f
    float xmm0_11 = ___libm_sse2_sinf(xmm0_10, eax_4)
    double* eax_7
    float xmm0_13
    eax_7, xmm0_13 = ___libm_sse2_cosf(xmm0_10)
    int16_t top = top + 2
    float xmm1_10 = xmm0_13 * 0.125f
    *(ebx + 4) = 0
    float xmm2_11 = xmm0_11 * 0.125f
    ebx[1].d = xmm2_11
    *ebx = xmm1_10
    float xmm5_17 = xmm1_10 * (1f - (xmm2_1 + xmm6_1) * 2f) + (xmm4_1 - xmm1_2) * 2f * 0f
        + xmm2_11 * (xmm5_5 + xmm3_1) * 2f
    float xmm4_7 = xmm1_10 * (xmm1_2 + xmm4_1) * 2f + (1f - (xmm2_1 + xmm5_1) * 2f) * 0f
        + xmm2_11 * (xmm5_3 - xmm4_3) * 2f
    float xmm3_5 = xmm1_10 * (xmm3_1 - xmm5_5) * 2f + (xmm5_3 + xmm4_3) * 2f * 0f
        + xmm2_11 * (1f - (xmm6_1 + xmm5_1) * 2f)
    float xmm2_14 = (xmm2_11 + xmm1_10) * 0f + 1f
    xmm2_14 - 1f
    eax_7:1.b = (xmm2_14 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_14, 1f) ? 1 : 0) << 2
        | (xmm2_14 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm2_14 f- 0
        eax_7:1.b = (xmm2_14 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_14, 0f) ? 1 : 0) << 2
            | (xmm2_14 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm1_11 = 1f / xmm2_14
            xmm3_5 = xmm3_5 * xmm1_11
            xmm5_17 = xmm5_17 * xmm1_11
            xmm4_7 = xmm4_7 * xmm1_11
    
    i += 1
    float xmm3_6 = xmm3_5 f+ arg2[2]
    *ebx = _mm_unpacklo_ps(*arg2 + xmm5_17, xmm4_7 f+ arg2[1])
    ebx[1].d = xmm3_6
    ebx += 0xc
while (i s< 0x14)

float xmm0_30 = *arg5
float xmm4_9 = arg5[2]
float xmm6_8 = xmm0_30 * xmm0_30
float xmm3_7 = arg5[1]
float xmm5_19 = xmm4_9 * xmm0_30
float xmm2_16 = xmm3_7 * xmm0_30
float xmm1_13 = xmm4_9 * xmm4_9
float xmm6_9 = arg5[3]
float xmm7_3 = xmm3_7 * xmm3_7
float xmm4_11 = xmm6_9 * xmm0_30
float xmm0_32 = arg5[2] f* xmm3_7
float xmm6_10 = xmm6_9 * xmm3
float xmm3_9 = xmm6_9 f* arg5[1]
float var_18c_2 = (1f - (xmm1_13 + xmm7_3) * 2f) * 0f + (xmm2_16 - xmm6_10) * 2f * arg3
    + (xmm3_9 + xmm5_19) * 2f * 0f
float xmm6_16 = (1f - (xmm1_13 + xmm6_8) * 2f) * arg3 + (xmm6_10 + xmm2_16) * 2f * 0f
    + (xmm0_32 - xmm4_11) * 2f * 0f
float var_198_3 = xmm6_16
float xmm4_16 = (xmm0_32 + xmm4_11) * 2f * arg3 + (xmm5_19 - xmm3_9) * 2f * 0f
    + (1f - (xmm7_3 + xmm6_8) * 2f) * 0f
float xmm0_55 = arg3 * 0f + 1f
xmm0_55 - 1f
float eax_8
eax_8:1.b = (xmm0_55 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_55, 1f) ? 1 : 0) << 2
    | (xmm0_55 < 1f ? 1 : 0)
bool p_6 = unimplemented  {test ah, 0x44}

if (p_6)
    xmm0_55 f- 0
    eax_8:1.b = (xmm0_55 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_55, 0f) ? 1 : 0) << 2
        | (xmm0_55 < 0f ? 1 : 0)
    bool p_8 = unimplemented  {test ah, 0x44}
    
    if (p_8)
        float xmm1_22 = 1f / xmm0_55
        var_18c_2 = xmm1_22 * var_18c_2
        var_198_3 = xmm1_22 * xmm6_16
        xmm4_16 = xmm1_22 * xmm4_16

float xmm0_61 = var_18c_2 f+ *arg2
float xmm4_17 = xmm4_16 f+ arg2[2]
float var_174 = var_198_3 f+ arg2[1]
int32_t eax_9 = sub_59f850(arg4)
int64_t* edi_1 = &var_104
int32_t i_3 = 0x13
struct sealengine::CLine::VTable* const var_130
void var_12c
int32_t i_1

do
    struct sealengine::CPoint::VTable* const var_158_1 = &sealengine::CPoint::`vftable'
    int64_t var_154_1 = *(edi_1 + 0xc)
    int32_t var_14c_1 = *(edi_1 + 0x14)
    int32_t var_148_1 = eax_9
    int32_t var_4 = 0
    struct sealengine::CPoint::VTable* const var_16c_1 = &sealengine::CPoint::`vftable'
    int64_t var_168_1 = *edi_1
    int32_t var_160_1 = edi_1[1].d
    int32_t var_15c_1 = eax_9
    int32_t (__fastcall* var_1b4_1)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
    var_4.b = 1
    var_130 = &sealengine::CLine::`vftable'
    sub_69b2ba(&var_12c, 0x14, 2, sub_576570)
    int64_t var_128_1 = *edi_1
    int32_t var_120_1 = edi_1[1].d
    int32_t var_11c_1 = eax_9
    int64_t var_114_1 = *(edi_1 + 0xc)
    int32_t var_10c_1 = *(edi_1 + 0x14)
    int32_t var_108_1 = eax_9
    var_4.b = 2
    sub_5336c0(arg1, &var_130)
    var_4.b = 1
    var_130 = &sealengine::CLine::`vftable'
    `eh vector vbase constructor iterator'(&var_12c, 0x14, 2, sub_5765a0)
    edi_1 += 0xc
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int32_t edi_2 = var_fc
struct sealengine::CPoint::VTable* const var_16c_2 = &sealengine::CPoint::`vftable'
int64_t var_168_2 = var_104
int32_t var_160_2 = edi_2
int32_t var_15c_2 = eax_9
int32_t var_4_1 = 3
struct sealengine::CPoint::VTable* const var_158_2 = &sealengine::CPoint::`vftable'
int64_t var_20
int64_t var_154_2 = var_20
int32_t var_18
int32_t var_14c_2 = var_18
int32_t var_148_2 = eax_9
int32_t (__fastcall* var_1b4_3)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_1.b = 4
var_130 = &sealengine::CLine::`vftable'
sub_69b2ba(&var_12c, 0x14, 2, sub_576570)
int64_t var_128_2 = var_20
int32_t var_120_2 = var_18
int32_t var_11c_2 = eax_9
int64_t var_114_2 = var_104
int32_t var_10c_2 = edi_2
int32_t var_108_2 = eax_9
var_4_1.b = 5
sub_5336c0(arg1, &var_130)
var_4_1.b = 4
var_130 = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_12c, 0x14, 2, sub_5765a0)
int32_t i_4 = i_3 + 0x14
int64_t* esi_2 = &var_104
int32_t result
int32_t i_2

do
    struct sealengine::CPoint::VTable* const var_16c_3 = &sealengine::CPoint::`vftable'
    int64_t var_168_3 = *esi_2
    int32_t var_160_3 = esi_2[1].d
    int32_t var_15c_3 = eax_9
    int32_t var_4_2 = 6
    struct sealengine::CPoint::VTable* const var_158_3 = &sealengine::CPoint::`vftable'
    int64_t var_154_3 = xmm0_61.q
    float var_14c_3 = xmm4_17
    int32_t var_148_3 = eax_9
    int32_t (__fastcall* var_1b4_5)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
    var_4_2.b = 7
    var_130 = &sealengine::CLine::`vftable'
    sub_69b2ba(&var_12c, 0x14, 2, sub_576570)
    int64_t var_128_3 = xmm0_61.q
    float var_120_3 = xmm4_17
    int32_t var_11c_3 = eax_9
    int64_t var_114_3 = *esi_2
    int32_t var_10c_3 = esi_2[1].d
    int32_t var_108_3 = eax_9
    var_4_2.b = 8
    sub_5336c0(arg1, &var_130)
    var_4_2.b = 7
    var_130 = &sealengine::CLine::`vftable'
    result = `eh vector vbase constructor iterator'(&var_12c, 0x14, 2, sub_5765a0)
    int32_t var_4_3 = 0xffffffff
    esi_2 += 0xc
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_19c)
return result
