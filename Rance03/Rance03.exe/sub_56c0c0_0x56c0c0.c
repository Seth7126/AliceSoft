// 函数: sub_56c0c0
// 地址: 0x56c0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_11 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c62fc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f0
int32_t eax_2 = __security_cookie ^ &var_f0
int32_t __saved_edi
int32_t var_104 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_70
__builtin_memcpy(&var_70, 
    "\xcd\xcc\x4c\xbd\xcd\xcc\x4c\xbd\xcd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc\x4c\xbd\xcd\xcc\x4c\xbd\x"
"cd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\xbd\xcd"
"cc\x4c\xbd\xcd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc"
"4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x3d", 
    0x60)
float xmm7 = *arg4
float xmm1 = arg4[1]
float xmm4 = arg4[2]
float xmm0 = arg4[3]
float xmm5_1 = xmm7 * xmm7
float xmm3_1 = xmm7 * xmm1
float xmm2_1 = xmm4 * xmm4
float xmm5_3 = xmm1 * xmm4
float xmm7_1 = xmm7 * xmm0
float xmm6_1 = xmm1 * xmm1
float xmm1_1 = xmm1 * xmm0
float xmm3_3 = xmm7 * xmm4
float xmm4_1 = xmm4 * xmm0
int32_t i_1 = 8
int32_t** edx = &var_70:8
int32_t i

do
    float xmm2_7 = edx[-1]
    float xmm3_4 = edx[-2]
    int32_t* xmm1_2 = *edx
    float xmm4_7 = (1f - (xmm2_1 + xmm6_1) * 2f) * xmm3_4 + (xmm3_1 - xmm4_1) * 2f * xmm2_7
        + (xmm1_1 + xmm3_3) * 2f f* xmm1_2
    float xmm5_12 = (xmm4_1 + xmm3_1) * 2f * xmm3_4 + (1f - (xmm2_1 + xmm5_1) * 2f) * xmm2_7
        + (xmm5_3 - xmm7_1) * 2f f* xmm1_2
    float xmm6_7 = (xmm3_3 - xmm1_1) * 2f * xmm3_4 + (xmm5_3 + xmm7_1) * 2f * xmm2_7
        + (1f - (xmm6_1 + xmm5_1) * 2f) f* xmm1_2
    float xmm3_8 = (xmm3_4 + xmm2_7 f+ xmm1_2) * 0f + 1f
    xmm3_8 - 1f
    int32_t* eax_6
    eax_6:1.b = (xmm3_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_8, 1f) ? 1 : 0) << 2
        | (xmm3_8 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm3_8 f- 0
        eax_6:1.b = (xmm3_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_8, 0f) ? 1 : 0) << 2
            | (xmm3_8 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm1_3 = 1f / xmm3_8
            xmm4_7 = xmm1_3 * xmm4_7
            xmm5_12 = xmm1_3 * xmm5_12
            xmm6_7 = xmm1_3 * xmm6_7
    
    float xmm0_34 = arg2[2] f+ xmm6_7
    *(edx - 8) = _mm_unpacklo_ps(*arg2 + xmm4_7, arg2[1] f+ xmm5_12)
    *edx = xmm0_34
    edx = &edx[3]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t eax_7 = sub_59f850(arg3)
int128_t var_60
int32_t ebx = var_60:4.d
struct sealengine::CPoint::VTable* const var_e4 = &sealengine::CPoint::`vftable'
int64_t var_e0 = var_70:0xc.q
int32_t var_d8 = ebx
int32_t var_d4 = eax_7
int32_t i_2 = i_1
int32_t ebp = var_70:8.d
struct sealengine::CPoint::VTable* const var_d0 = &sealengine::CPoint::`vftable'
int64_t var_cc = var_70.q
int32_t var_c4 = ebp
int32_t var_c0 = eax_7
int32_t (__fastcall* var_108)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
i_2.b = 1
struct sealengine::CLine::VTable* const var_9c = &sealengine::CLine::`vftable'
void var_98
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94 = var_70.q
int32_t var_8c = ebp
int32_t var_88 = eax_7
int64_t var_80 = var_70:0xc.q
int32_t var_78 = ebx
int32_t var_74 = eax_7
i_2.b = 2
sub_5336c0(arg1, &var_9c)
i_2.b = 1
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
int128_t var_50
int32_t esi = var_50:0xc.d
struct sealengine::CPoint::VTable* const var_d0_1 = &sealengine::CPoint::`vftable'
int64_t var_cc_1 = var_50:4.q
int32_t var_c4_1 = esi
int32_t var_c0_1 = eax_7
int32_t var_4 = 3
int32_t ebx_1 = var_50.d
struct sealengine::CPoint::VTable* const var_e4_1 = &sealengine::CPoint::`vftable'
int64_t var_e0_1 = var_60:8.q
int32_t var_d8_1 = ebx_1
int32_t var_d4_1 = eax_7
int32_t (__fastcall* var_108_2)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4.b = 4
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_1 = var_60:8.q
int32_t var_8c_1 = ebx_1
int32_t var_88_1 = eax_7
int64_t var_80_1 = var_50:4.q
int32_t var_78_1 = esi
int32_t var_74_1 = eax_7
var_4.b = 5
sub_5336c0(arg1, &var_9c)
var_4.b = 4
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
int128_t var_30
int32_t ebx_2 = var_30:4.d
struct sealengine::CPoint::VTable* const var_d0_2 = &sealengine::CPoint::`vftable'
int128_t var_40
int64_t var_cc_2 = var_40:0xc.q
int32_t var_c4_2 = ebx_2
int32_t var_c0_2 = eax_7
int32_t var_4_1 = 6
int32_t esi_1 = var_40:8.d
struct sealengine::CPoint::VTable* const var_e4_2 = &sealengine::CPoint::`vftable'
int64_t var_e0_2 = var_40.q
int32_t var_d8_2 = esi_1
int32_t var_d4_2 = eax_7
int32_t (__fastcall* var_108_4)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_1.b = 7
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_2 = var_40.q
int32_t var_8c_2 = esi_1
int32_t var_88_2 = eax_7
int64_t var_80_2 = var_40:0xc.q
int32_t var_78_2 = ebx_2
int32_t var_74_2 = eax_7
var_4_1.b = 8
sub_5336c0(arg1, &var_9c)
var_4_1.b = 7
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_3 = &sealengine::CPoint::`vftable'
int128_t var_20
int64_t var_cc_3 = var_20:4.q
int32_t var_c4_3 = var_20:0xc.d
int32_t var_c0_3 = eax_7
int32_t var_4_2 = 9
int32_t edi_1 = var_20.d
struct sealengine::CPoint::VTable* const var_e4_3 = &sealengine::CPoint::`vftable'
int64_t var_e0_3 = var_30:8.q
int32_t var_d8_3 = edi_1
int32_t var_d4_3 = eax_7
int32_t (__fastcall* var_108_6)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_2.b = 0xa
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_3 = var_30:8.q
int32_t var_8c_3 = edi_1
int32_t var_88_3 = eax_7
int64_t var_80_3 = var_20:4.q
int32_t var_78_3 = var_20:0xc.d
int32_t var_74_3 = eax_7
var_4_2.b = 0xb
sub_5336c0(arg1, &var_9c)
var_4_2.b = 0xa
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
int32_t var_c4_4 = var_50.d
struct sealengine::CPoint::VTable* const var_d0_4 = &sealengine::CPoint::`vftable'
int64_t var_cc_4 = var_60:8.q
int32_t var_c0_4 = eax_7
int32_t var_4_3 = 0xc
struct sealengine::CPoint::VTable* const var_e4_4 = &sealengine::CPoint::`vftable'
int64_t var_e0_4 = var_70.q
int32_t var_d8_4 = ebp
int32_t var_d4_4 = eax_7
int32_t (__fastcall* var_108_8)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_3.b = 0xd
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_4 = var_70.q
int32_t var_8c_4 = ebp
int32_t var_88_4 = eax_7
int64_t var_80_4 = var_60:8.q
int32_t var_78_4 = var_50.d
int32_t var_74_4 = eax_7
var_4_3.b = 0xe
sub_5336c0(arg1, &var_9c)
var_4_3.b = 0xd
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_5 = &sealengine::CPoint::`vftable'
int64_t var_cc_5 = var_50:4.q
int32_t var_c4_5 = var_50:0xc.d
int32_t var_c0_5 = eax_7
int32_t var_4_4 = 0xf
struct sealengine::CPoint::VTable* const var_e4_5 = &sealengine::CPoint::`vftable'
int64_t var_e0_5 = var_70:0xc.q
int32_t var_d8_5 = var_60:4.d
int32_t var_d4_5 = eax_7
int32_t (__fastcall* var_108_10)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_4.b = 0x10
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_5 = var_70:0xc.q
int32_t var_8c_5 = var_60:4.d
int32_t var_88_5 = eax_7
int64_t var_80_5 = var_50:4.q
int32_t var_78_5 = var_50:0xc.d
int32_t var_74_5 = eax_7
var_4_4.b = 0x11
sub_5336c0(arg1, &var_9c)
var_4_4.b = 0x10
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_6 = &sealengine::CPoint::`vftable'
int64_t var_cc_6 = var_30:8.q
int32_t var_c4_6 = edi_1
int32_t var_c0_6 = eax_7
int32_t var_4_5 = 0x12
struct sealengine::CPoint::VTable* const var_e4_6 = &sealengine::CPoint::`vftable'
int64_t var_e0_6 = var_40.q
int32_t var_d8_6 = esi_1
int32_t var_d4_6 = eax_7
int32_t (__fastcall* var_108_12)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_5.b = 0x13
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_6 = var_40.q
int32_t var_8c_6 = esi_1
int32_t var_88_6 = eax_7
int64_t var_80_6 = var_30:8.q
int32_t var_78_6 = edi_1
int32_t var_74_6 = eax_7
var_4_5.b = 0x14
sub_5336c0(arg1, &var_9c)
var_4_5.b = 0x13
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
int32_t var_c4_7 = var_20:0xc.d
struct sealengine::CPoint::VTable* const var_d0_7 = &sealengine::CPoint::`vftable'
int64_t var_cc_7 = var_20:4.q
int32_t var_c0_7 = eax_7
int32_t var_4_6 = 0x15
struct sealengine::CPoint::VTable* const var_e4_7 = &sealengine::CPoint::`vftable'
int64_t var_e0_7 = var_40:0xc.q
int32_t var_d8_7 = ebx_2
int32_t var_d4_7 = eax_7
int32_t (__fastcall* var_108_14)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_6.b = 0x16
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_7 = var_40:0xc.q
int32_t var_8c_7 = ebx_2
int32_t var_88_7 = eax_7
int64_t var_80_7 = var_20:4.q
int32_t var_78_7 = var_20:0xc.d
int32_t var_74_7 = eax_7
var_4_6.b = 0x17
sub_5336c0(arg1, &var_9c)
var_4_6.b = 0x16
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_8 = &sealengine::CPoint::`vftable'
int64_t var_cc_8 = var_40.q
int32_t var_c4_8 = esi_1
int32_t var_c0_8 = eax_7
int32_t var_4_7 = 0x18
struct sealengine::CPoint::VTable* const var_e4_8 = &sealengine::CPoint::`vftable'
int64_t var_e0_8 = var_70.q
int32_t var_d8_8 = ebp
int32_t var_d4_8 = eax_7
int32_t (__fastcall* var_108_16)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_7.b = 0x19
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_8 = var_70.q
int32_t var_78_8 = esi_1
int32_t var_8c_8 = ebp
int32_t var_88_8 = eax_7
int64_t var_80_8 = var_40.q
int32_t var_74_8 = eax_7
var_4_7.b = 0x1a
sub_5336c0(arg1, &var_9c)
var_4_7.b = 0x19
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_9 = &sealengine::CPoint::`vftable'
int64_t var_cc_9 = var_40:0xc.q
int32_t var_c4_9 = ebx_2
int32_t var_c0_9 = eax_7
int32_t var_4_8 = 0x1b
int32_t ebp_1 = var_60:4.d
struct sealengine::CPoint::VTable* const var_e4_9 = &sealengine::CPoint::`vftable'
int64_t var_e0_9 = var_70:0xc.q
int32_t var_d8_9 = ebp_1
int32_t var_d4_9 = eax_7
int32_t (__fastcall* var_108_18)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_8.b = 0x1c
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_9 = var_70:0xc.q
int32_t var_8c_9 = ebp_1
int32_t var_88_9 = eax_7
int64_t var_80_9 = var_40:0xc.q
int32_t var_78_9 = ebx_2
int32_t var_74_9 = eax_7
var_4_8.b = 0x1d
sub_5336c0(arg1, &var_9c)
var_4_8.b = 0x1c
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
struct sealengine::CPoint::VTable* const var_d0_10 = &sealengine::CPoint::`vftable'
int64_t var_cc_10 = var_30:8.q
int32_t var_c4_10 = edi_1
int32_t var_c0_10 = eax_7
int32_t var_4_9 = 0x1e
int32_t ebx_3 = var_50.d
struct sealengine::CPoint::VTable* const var_e4_10 = &sealengine::CPoint::`vftable'
int64_t var_e0_10 = var_60:8.q
int32_t var_d8_10 = ebx_3
int32_t var_d4_10 = eax_7
int32_t (__fastcall* var_108_20)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_9.b = 0x1f
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_10 = var_60:8.q
int32_t var_8c_10 = ebx_3
int32_t var_88_10 = eax_7
int64_t var_80_10 = var_30:8.q
int32_t var_78_10 = edi_1
int32_t var_74_10 = eax_7
var_4_9.b = 0x20
sub_5336c0(arg1, &var_9c)
var_4_9.b = 0x1f
var_9c = &sealengine::CLine::`vftable'
`eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
int32_t ebx_4 = var_20:0xc.d
struct sealengine::CPoint::VTable* const var_d0_11 = &sealengine::CPoint::`vftable'
int64_t var_cc_11 = var_20:4.q
int32_t var_c4_11 = ebx_4
int32_t var_c0_11 = eax_7
int32_t var_4_10 = 0x21
int32_t ebp_2 = var_50:0xc.d
struct sealengine::CPoint::VTable* const var_e4_11 = &sealengine::CPoint::`vftable'
int64_t var_e0_11 = var_50:4.q
int32_t var_d8_11 = ebp_2
int32_t var_d4_11 = eax_7
int32_t (__fastcall* var_108_22)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4_10.b = 0x22
var_9c = &sealengine::CLine::`vftable'
sub_69b2ba(&var_98, 0x14, 2, sub_576570)
int64_t var_94_11 = var_50:4.q
int32_t var_8c_11 = ebp_2
int32_t var_88_11 = eax_7
int64_t var_80_11 = var_20:4.q
int32_t var_78_11 = ebx_4
int32_t var_74_11 = eax_7
var_4_10.b = 0x23
sub_5336c0(arg1, &var_9c)
var_4_10.b = 0x22
var_9c = &sealengine::CLine::`vftable'
int32_t result = `eh vector vbase constructor iterator'(&var_98, 0x14, 2, sub_5765a0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f0)
return result
