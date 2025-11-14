// 函数: sub_56eb60
// 地址: 0x56eb60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_78 = arg1
int32_t eax_6 = sub_59f850(arg4)
struct sealengine::CPoint::VTable* const var_64 = &sealengine::CPoint::`vftable'
int32_t var_54 = eax_6
int64_t xmm0 = *arg3
int32_t ebx = arg3[1].d
int64_t var_60 = xmm0
int32_t var_58 = ebx
int32_t var_4 = 0
int32_t eax_7 = sub_59f850(arg4)
struct sealengine::CPoint::VTable* const var_50 = &sealengine::CPoint::`vftable'
int32_t var_40 = eax_7
int64_t xmm0_1 = *arg2
int32_t esi = arg2[1].d
int64_t var_4c = xmm0_1
int32_t var_44 = esi
int32_t (__fastcall* var_90)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4.b = 1
struct sealengine::CLine::VTable* const var_3c = &sealengine::CLine::`vftable'
void var_38
sub_69b2ba(&var_38, 0x14, 2, sub_576570)
int64_t var_34 = xmm0_1
int32_t var_2c = esi
int32_t var_28 = eax_7
int64_t var_20 = xmm0
int32_t var_18 = ebx
int32_t var_14 = eax_6
var_4.b = 2
sub_5336c0(var_78, &var_3c)
var_4.b = 1
var_3c = &sealengine::CLine::`vftable'
int32_t result = `eh vector vbase constructor iterator'(&var_38, 0x14, 2, sub_5765a0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
