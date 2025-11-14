// 函数: sub_57b9d0
// 地址: 0x57b9d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_4c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_34 = data_7091d0
struct sealengine::CPOLData::VTable* const var_3c = &sealengine::CPOLData::`vftable'
int32_t var_38 = 0x3cd013a9
int128_t var_24
__builtin_memset(&var_24, 0, 0x18)
int32_t var_4 = 0
int32_t ebx

if (sub_576700(&var_3c, arg2, arg3) == 0)
    ebx.b = 0
else if (sub_57bda0(arg1, &var_3c) == 0)
    ebx.b = 0
else if (sub_57bf00(arg1, &var_3c) == 0)
    ebx.b = 0
else
    struct sealengine::CPOLData::VTable* const* var_50_3 = &var_3c
    
    if (sub_57bfd0(arg1) == 0)
        ebx.b = 0
    else
        *(arg1 + 0x88) = sub_57e540(arg1)
        ebx.b = 1

int32_t var_4_1 = 0xffffffff
sub_576630(&var_3c)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
