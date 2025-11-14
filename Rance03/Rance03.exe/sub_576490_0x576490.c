// 函数: sub_576490
// 地址: 0x576490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c66d4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDrawD3DPlugin::sealengine::CPlugin::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDrawD3DPlugin::sealengine::CPlugin::VTable** var_10_1 = arg1
*arg1 = &sealengine::CPlugin::`vftable'{for `IDrawD3DPlugin'}
int32_t var_4 = 0
sub_586f40(&arg1[4])
void* var_10_2 = &arg1[4]
arg1[4] = &sealengine::CReignEngine::`vftable'
int32_t var_4_1 = 2
sub_586f40(&arg1[4])
arg1[0x8d] = &sealengine::CTimer::`vftable'
int32_t var_4_2 = 0xffffffff
int32_t result = sub_5879d0(&arg1[5])
fsbase->NtTib.ExceptionList = ExceptionList
return result
