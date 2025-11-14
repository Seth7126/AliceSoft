// 函数: sub_5143e0
// 地址: 0x5143e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c21f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IString::common::CStringWrapper::VTable* const var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_ebx
int32_t var_34 = __security_cookie ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
var_2c = &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
char eax_7 =
    sub_44c9c0(sub_401ff0(&var_28, arg2, 0, 0xffffffff), &var_2c, arg1, arg3, arg4, arg5, arg6)
var_2c = &common::CStringWrapper::`vftable'{for `IString'}
int32_t ebx
ebx.b = eax_7

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return ebx.b
