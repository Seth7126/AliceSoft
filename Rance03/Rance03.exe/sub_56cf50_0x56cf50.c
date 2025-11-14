// 函数: sub_56cf50
// 地址: 0x56cf50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f0
int32_t eax_2 = __security_cookie ^ &var_f0
int32_t __saved_edi
int32_t var_104 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_56c0c0(arg1, arg2, arg3, arg4)
float xmm7 = *arg4
float xmm1 = arg4[1]
float xmm4 = arg4[2]
int128_t var_70
__builtin_memcpy(&var_70, 
    "\xcd\xcc\x4c\xbd\xcd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\x"
"cd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\x9a"
"99\x99\xbd\x9a\x99\x99\xbd\x9a\x99\x99\x3d\x9a\x99\x99\x3d\x9a\x99\x99\xbd\x9a\x99\x99\x3d\x9a\x99"
"99\xbd\x9a\x99\x99\x3d\x9a\x99\x99\x3d\x9a\x99\x99\x3d\x9a\x99\x99\x3d\x9a\x99\x99\x3d", 
    0x60)
float xmm5_1 = xmm7 * xmm7
float xmm0 = arg4[3]
float xmm5_3 = xmm1 * xmm4
float xmm2_1 = xmm4 * xmm4
float xmm3_1 = xmm7 * xmm1
float xmm6_1 = xmm1 * xmm1
float xmm1_1 = xmm1 * xmm0
float xmm7_1 = xmm7 * xmm0
float xmm3_3 = xmm7 * xmm4
float xmm4_1 = xmm4 * xmm0
float xmm4_4 = (xmm1_1 + xmm3_3) * 2f
float var_ec_1 = xmm4_4
void* ecx = &var_70:8
int32_t i_1 = 8
int32_t i

do
    float xmm2_7 = *(ecx - 4)
    float xmm3_4 = *(ecx - 8)
    float xmm1_2 = *ecx
    float xmm6_7 =
        xmm2_7 * (xmm3_1 - xmm4_1) * 2f + xmm3_4 * (1f - (xmm2_1 + xmm6_1) * 2f) + xmm1_2 * xmm4_4
    float xmm5_15 = xmm2_7 * (1f - (xmm2_1 + xmm5_1) * 2f) + xmm3_4 * (xmm4_1 + xmm3_1) * 2f
        + xmm1_2 * (xmm5_3 - xmm7_1) * 2f
    float xmm4_8 = xmm2_7 * (xmm5_3 + xmm7_1) * 2f + xmm3_4 * (xmm3_3 - xmm1_1) * 2f
        + xmm1_2 * (1f - (xmm6_1 + xmm5_1) * 2f)
    float xmm3_8 = (xmm3_4 + xmm2_7 + xmm1_2) * 0f + 1f
    xmm3_8 - 1f
    float eax_5
    eax_5:1.b = (xmm3_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_8, 1f) ? 1 : 0) << 2
        | (xmm3_8 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm3_8 f- 0
        eax_5:1.b = (xmm3_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_8, 0f) ? 1 : 0) << 2
            | (xmm3_8 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm1_3 = 1f / xmm3_8
            xmm6_7 = xmm6_7 * xmm1_3
            xmm5_15 = xmm5_15 * xmm1_3
            xmm4_8 = xmm1_3 * xmm4_8
    
    float xmm4_9 = xmm4_8 + arg2[2]
    xmm4_4 = var_ec_1
    *(ecx - 8) = _mm_unpacklo_ps(*arg2 + xmm6_7, xmm5_15 + arg2[1])
    *ecx = xmm4_9
    ecx += 0xc
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t eax_6 = sub_59f850(arg3)
int128_t var_40
int32_t edi_2 = var_40:8.d
struct sealengine::CPoint::VTable* const var_e4 = &sealengine::CPoint::`vftable'
int64_t var_e0 = var_40.q
int32_t var_d8 = edi_2
int32_t var_d4 = eax_6
int32_t var_4 = 0
int32_t esi_1 = var_70:8.d
struct sealengine::CPoint::VTable* const var_d0 = &sealengine::CPoint::`vftable'
int64_t var_cc = var_70.q
int32_t var_c4 = esi_1
int32_t var_c0 = eax_6
int32_t (__fastcall* var_108_1)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4.b = 1
struct sealengine::CLine::VTable* const var_9c = &sealengine::CLine::`vftable'
void var_98
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94 = var_70.q
int32_t var_8c = esi_1
int32_t var_88 = eax_6
int64_t var_80 = var_40.q
int32_t var_78 = edi_2
int32_t var_74 = eax_6
var_4.b = 2
sub_5336c0(arg1, &var_9c)
var_4.b = 1
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
int128_t var_30
int32_t ebp_1 = var_30:4.d
struct sealengine::CPoint::VTable* const var_d0_1 = &sealengine::CPoint::`vftable'
int64_t var_cc_1 = var_40:0xc.q
int32_t var_c4_1 = ebp_1
int32_t var_c0_1 = eax_6
int32_t var_4_1 = 3
int128_t var_60
int32_t esi_2 = var_60:4.d
struct sealengine::CPoint::VTable* const var_e4_1 = &sealengine::CPoint::`vftable'
int64_t var_e0_1 = var_70:0xc.q
int32_t var_d8_1 = esi_2
int32_t var_d4_1 = eax_6
int32_t (__fastcall* var_108_3)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_1.b = 4
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_1 = var_70:0xc.q
int32_t var_8c_1 = esi_2
int32_t var_88_1 = eax_6
int64_t var_80_1 = var_40:0xc.q
int32_t var_78_1 = ebp_1
int32_t var_74_1 = eax_6
var_4_1.b = 5
sub_5336c0(arg1, &var_9c)
var_4_1.b = 4
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
int128_t var_20
int32_t ebx_2 = var_20.d
struct sealengine::CPoint::VTable* const var_d0_2 = &sealengine::CPoint::`vftable'
int64_t var_cc_2 = var_30:8.q
int32_t var_c4_2 = ebx_2
int32_t var_c0_2 = eax_6
int32_t var_4_2 = 6
int128_t var_50
int32_t esi_3 = var_50.d
struct sealengine::CPoint::VTable* const var_e4_2 = &sealengine::CPoint::`vftable'
int64_t var_e0_2 = var_60:8.q
int32_t var_d8_2 = esi_3
int32_t var_d4_2 = eax_6
int32_t (__fastcall* var_108_5)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_2.b = 7
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_2 = var_60:8.q
int32_t var_8c_2 = esi_3
int32_t var_88_2 = eax_6
int64_t var_80_2 = var_30:8.q
int32_t var_78_2 = ebx_2
int32_t var_74_2 = eax_6
var_4_2.b = 8
sub_5336c0(arg1, &var_9c)
var_4_2.b = 7
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
int32_t edi_4 = var_20:0xc.d
struct sealengine::CPoint::VTable* const var_d0_3 = &sealengine::CPoint::`vftable'
int64_t var_cc_3 = var_20:4.q
int32_t var_c4_3 = edi_4
int32_t var_c0_3 = eax_6
int32_t var_4_3 = 9
int32_t esi_4 = var_50:0xc.d
struct sealengine::CPoint::VTable* const var_e4_3 = &sealengine::CPoint::`vftable'
int64_t var_e0_3 = var_50:4.q
int32_t var_d8_3 = esi_4
int32_t var_d4_3 = eax_6
var_4_3.b = 0xa
var_9c = &sealengine::CLine::`vftable'
int32_t (__fastcall* var_108_7)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_3 = var_50:4.q
int32_t var_8c_3 = esi_4
int32_t var_88_3 = eax_6
int64_t var_80_3 = var_20:4.q
int32_t var_78_3 = edi_4
int32_t var_74_3 = eax_6
var_4_3.b = 0xb
sub_5336c0(arg1, &var_9c)
var_4_3.b = 0xa
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_4 = &sealengine::CPoint::`vftable'
int64_t var_cc_4 = var_40:0xc.q
int32_t var_c4_4 = ebp_1
int32_t var_c0_4 = eax_6
int32_t var_4_4 = 0xc
int32_t esi_6 = var_40:8.d
struct sealengine::CPoint::VTable* const var_e4_4 = &sealengine::CPoint::`vftable'
int64_t var_e0_4 = var_40.q
int32_t var_d8_4 = esi_6
int32_t var_d4_4 = eax_6
int32_t (__fastcall* var_108_9)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_4.b = 0xd
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_4 = var_40.q
int32_t var_8c_4 = esi_6
int32_t var_88_4 = eax_6
int64_t var_80_4 = var_40:0xc.q
int32_t var_78_4 = ebp_1
int32_t var_74_4 = eax_6
var_4_4.b = 0xe
sub_5336c0(arg1, &var_9c)
var_4_4.b = 0xd
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_5 = &sealengine::CPoint::`vftable'
int64_t var_cc_5 = var_20:4.q
int32_t var_c4_5 = edi_4
int32_t var_c0_5 = eax_6
int32_t var_4_5 = 0xf
struct sealengine::CPoint::VTable* const var_e4_5 = &sealengine::CPoint::`vftable'
int64_t var_e0_5 = var_30:8.q
int32_t var_d8_5 = ebx_2
int32_t var_d4_5 = eax_6
int32_t (__fastcall* var_108_11)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_5.b = 0x10
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_5 = var_30:8.q
int32_t var_8c_5 = ebx_2
int32_t var_88_5 = eax_6
int64_t var_80_5 = var_20:4.q
int32_t var_78_5 = edi_4
int32_t var_74_5 = eax_6
var_4_5.b = 0x11
sub_5336c0(arg1, &var_9c)
var_4_5.b = 0x10
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_6 = &sealengine::CPoint::`vftable'
int64_t var_cc_6 = var_30:8.q
int32_t var_c4_6 = ebx_2
int32_t var_c0_6 = eax_6
int32_t var_4_6 = 0x12
struct sealengine::CPoint::VTable* const var_e4_6 = &sealengine::CPoint::`vftable'
int64_t var_e0_6 = var_40.q
int32_t var_d8_6 = esi_6
int32_t var_d4_6 = eax_6
int32_t (__fastcall* var_108_13)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_6.b = 0x13
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_6 = var_40.q
int32_t var_8c_6 = esi_6
int32_t var_88_6 = eax_6
int64_t var_80_6 = var_30:8.q
int32_t var_78_6 = ebx_2
int32_t var_74_6 = eax_6
var_4_6.b = 0x14
sub_5336c0(arg1, &var_9c)
var_4_6.b = 0x13
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_7 = &sealengine::CPoint::`vftable'
int64_t var_cc_7 = var_20:4.q
int32_t var_c4_7 = edi_4
int32_t var_c0_7 = eax_6
int32_t var_4_7 = 0x15
struct sealengine::CPoint::VTable* const var_e4_7 = &sealengine::CPoint::`vftable'
int64_t var_e0_7 = var_40:0xc.q
int32_t var_d8_7 = ebp_1
int32_t var_d4_7 = eax_6
int32_t (__fastcall* var_108_15)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_7.b = 0x16
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_7 = var_40:0xc.q
int32_t var_8c_7 = ebp_1
int32_t var_88_7 = eax_6
int64_t var_80_7 = var_20:4.q
int32_t var_78_7 = edi_4
int32_t var_74_7 = eax_6
var_4_7.b = 0x17
sub_5336c0(arg1, &var_9c)
var_4_7.b = 0x16
var_9c = &sealengine::CLine::`vftable'
int32_t result = `eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f0)
return result
