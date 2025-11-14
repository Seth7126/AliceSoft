// 函数: sub_5434e0
// 地址: 0x5434e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_78 = arg1
struct sealengine::CPoint::VTable* const var_64 = &sealengine::CPoint::`vftable'
int32_t var_54 = arg5
int64_t xmm0 = *arg4
int32_t ebp = arg4[1].d
int64_t var_60 = xmm0
int32_t var_58 = ebp
int32_t var_4 = 0
struct sealengine::CPoint::VTable* const var_50 = &sealengine::CPoint::`vftable'
int64_t xmm0_1 = *arg2
int32_t edi = arg2[1].d
int64_t var_4c = xmm0_1
int32_t var_44 = edi
int32_t var_40 = arg3
int32_t (__fastcall* var_90)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4.b = 1
struct sealengine::CLine::VTable* const var_3c = &sealengine::CLine::`vftable'
void var_38
sub_69b2ba(&var_38, 0x14, 2, sub_576570)
int64_t var_34 = xmm0_1
int32_t var_2c = edi
int32_t var_28 = arg3
int64_t var_20 = xmm0
int32_t var_18 = ebp
int32_t var_14 = arg5
var_4.b = 2
sub_5336c0(var_78 + 0x1e0, &var_3c)
var_4.b = 1
var_3c = &sealengine::CLine::`vftable'
int32_t result = `eh vector vbase constructor iterator'(&var_38, 0x14, 2, sub_5765a0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
