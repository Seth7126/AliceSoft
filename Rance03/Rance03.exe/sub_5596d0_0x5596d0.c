// 函数: sub_5596d0
// 地址: 0x5596d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5168
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPoint::VTable* const var_cc
int32_t eax_2 = __security_cookie ^ &var_cc
int32_t __saved_edi
int32_t var_e0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* edx = *(arg1 + 0x24)
int32_t eax_5 = *(arg1 + 0x30)
int32_t xmm0 = *(edx + 8)
float xmm5[0x4] = *(edx + (eax_5 << 2))
int64_t xmm2 = *(edx + (eax_5 << 2) + 4)
int32_t xmm0_1 = *(edx + (eax_5 << 2) + 8)
float xmm4[0x4] = *edx
int64_t xmm3 = *(edx + 4)
int64_t xmm0_2 = *(edx + (eax_5 << 3))
int32_t xmm0_3 = *(edx + (eax_5 << 3) + 4)
int32_t xmm0_4 = *(edx + (eax_5 << 3) + 8)
int32_t eax_6 = eax_5 * 2
int64_t xmm0_5 = *(edx + (eax_6 << 3))
int32_t xmm0_6 = *(edx + (eax_6 << 3) + 4)
int32_t xmm0_7 = *(edx + (eax_6 << 3) + 8)
int128_t var_74 = data_709450
int32_t eax_7 = sub_59f850(&var_74)
int64_t xmm5_1 = _mm_unpacklo_ps(xmm5, xmm2)
var_cc = &sealengine::CPoint::`vftable'
var_74.q = xmm5_1
int64_t var_c8 = xmm5_1
int32_t var_c0 = xmm0_1
int32_t var_bc = eax_7
int32_t var_4 = 0
int64_t xmm4_1 = _mm_unpacklo_ps(xmm4, xmm3)
struct sealengine::CPoint::VTable* const var_b8 = &sealengine::CPoint::`vftable'
int64_t var_b4 = xmm4_1
int32_t var_ac = xmm0
int32_t var_a8 = eax_7
int32_t (__fastcall* var_e4)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4.b = 1
struct sealengine::CLine::VTable* const var_40 = &sealengine::CLine::`vftable'
void var_3c
sub_69b2ba(&var_3c, 0x14, 2, sub_576570)
int64_t var_38 = xmm4_1
int32_t var_30 = xmm0
int32_t var_2c = eax_7
int64_t var_24 = var_74.q
int32_t var_1c = xmm0_1
int32_t var_18 = eax_7
var_4.b = 2
sub_5336c0(arg2, &var_40)
var_4.b = 1
var_40 = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_3c, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_b8_1 = &sealengine::CPoint::`vftable'
int64_t xmm1_1 = _mm_unpacklo_ps(zx.o(xmm0_2), xmm0_3)
int64_t var_b4_1 = xmm1_1
int32_t var_ac_1 = xmm0_4
int32_t var_a8_1 = eax_7
int32_t var_4_1 = 3
var_cc = &sealengine::CPoint::`vftable'
int64_t var_c8_1 = xmm4_1
int32_t var_c0_1 = xmm0
int32_t var_bc_1 = eax_7
int32_t (__fastcall* var_e4_2)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_1.b = 4
var_40 = &sealengine::CLine::`vftable'
sub_69b2ba(&var_3c, 0x14, 2, sub_576570)
int64_t var_38_1 = xmm4_1
int32_t var_30_1 = xmm0
int32_t var_2c_1 = eax_7
int64_t var_24_1 = xmm1_1
int32_t var_1c_1 = xmm0_4
int32_t var_18_1 = eax_7
var_4_1.b = 5
sub_5336c0(arg2, &var_40)
var_4_1.b = 4
var_40 = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_3c, 0x14, 2, sub_5765a0)
int64_t xmm1_3 = _mm_unpacklo_ps(zx.o(xmm0_5), xmm0_6)
struct sealengine::CPoint::VTable* const var_b8_2 = &sealengine::CPoint::`vftable'
int64_t var_b4_2 = xmm1_3
int32_t var_ac_2 = xmm0_7
int32_t var_a8_2 = eax_7
int32_t var_4_2 = 6
int64_t xmm0_16 = var_74.q
var_cc = &sealengine::CPoint::`vftable'
int64_t var_c8_2 = xmm0_16
int32_t var_c0_2 = xmm0_1
int32_t var_bc_2 = eax_7
int32_t (__fastcall* var_e4_4)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_2.b = 7
var_40 = &sealengine::CLine::`vftable'
sub_69b2ba(&var_3c, 0x14, 2, sub_576570)
int64_t var_38_2 = var_74.q
int32_t var_30_2 = xmm0_1
int32_t var_2c_2 = eax_7
int64_t var_24_2 = xmm1_3
int32_t var_1c_2 = xmm0_7
int32_t var_18_2 = eax_7
var_4_2.b = 8
sub_5336c0(arg2, &var_40)
var_4_2.b = 7
var_40 = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_3c, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_b8_3 = &sealengine::CPoint::`vftable'
int64_t var_b4_3 = xmm1_3
int32_t var_ac_3 = xmm0_7
int32_t var_a8_3 = eax_7
int32_t var_4_3 = 9
var_cc = &sealengine::CPoint::`vftable'
int64_t var_c8_3 = xmm1_1
int32_t var_c0_3 = xmm0_4
int32_t var_bc_3 = eax_7
int32_t (__fastcall* var_e4_6)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_3.b = 0xa
var_40 = &sealengine::CLine::`vftable'
sub_69b2ba(&var_3c, 0x14, 2, sub_576570)
int64_t var_38_3 = xmm1_1
int32_t var_30_3 = xmm0_4
int32_t var_2c_3 = eax_7
int64_t var_24_3 = xmm1_3
int32_t var_1c_3 = xmm0_7
int32_t var_18_3 = eax_7
var_4_3.b = 0xb
sub_5336c0(arg2, &var_40)
var_4_3.b = 0xa
var_40 = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_3c, 0x14, 2, sub_5765a0)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_cc)
return result
