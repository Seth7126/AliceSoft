// 函数: sub_5147e0
// 地址: 0x5147e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_esi
int32_t var_48 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_2c =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_401ff0(&var_28, arg1, 0, 0xffffffff)
int32_t var_4 = 0
__builtin_memset(&result_1, 0, 0x14)
int32_t var_3c
int32_t var_38
int32_t var_34
int32_t var_30
char eax_7 = sub_44bfb0(&result_1, &var_34, &var_2c, &result_1, &var_38, &var_3c, &var_30)
int32_t result = result_1
var_2c = &common::CStringWrapper::`vftable'{for `IString'}

if (eax_7 == 0)
    result = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
