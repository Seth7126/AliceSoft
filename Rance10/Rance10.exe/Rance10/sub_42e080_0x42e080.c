// 函数: sub_42e080
// 地址: 0x42e080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729f38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_34 = arg3
int32_t var_38 = 0
struct IString::common::CStringWrapper::VTable* const var_30 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
(*(*(*(*data_7fcb40 + 0x10))(arg2) + 0x2c))(&var_30, arg4)
char* edx_1 = &var_2c
*(arg3 + 0x14) = 0xf

if (var_18 u>= 0x10)
    edx_1 = var_2c.d

*(arg3 + 0x10) = 0
*arg3 = 0
void* eax_5

if (*edx_1 != 0)
    char* eax_6 = edx_1
    char i
    
    do
        i = *eax_6
        eax_6 = &eax_6[1]
    while (i != 0)
    eax_5 = eax_6 - &eax_6[1]
else
    eax_5 = nullptr

sub_403490(arg3, edx_1, eax_5)
var_30 = &common::CStringWrapper::`vftable'{for `IString'}

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
