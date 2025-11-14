// 函数: sub_514240
// 地址: 0x514240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2230
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IString::common::CStringWrapper::VTable* const var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_ebx
int32_t eax_4 = __security_cookie ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
var_44 = &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_401ff0(&var_40, arg2, 0, 0xffffffff)
int32_t var_4 = 0
int32_t var_28
sub_401f60(&var_28, var_44->data(eax_4))
var_4.b = 1
int32_t result
result.b = sub_44d790(arg1, &var_28) != 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

var_44 = &common::CStringWrapper::`vftable'{for `IString'}

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
