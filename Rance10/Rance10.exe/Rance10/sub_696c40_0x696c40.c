// 函数: sub_696c40
// 地址: 0x696c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747ef0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t var_8_1 = 0
void* arg_10

if (arg2 != 0)
    sub_407430(&arg_10, ": ", 2)

var_8_1.b = 1
void* var_30
void arg_8
sub_4055a0(&arg_10, sub_696b90(&arg_8, &var_30), 0, 0xffffffff)
int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30, var_1c + 1, 1)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_4056a0(arg1, &arg_10)

if (arg3 u>= 0x10)
    sub_403160(arg_10, arg3 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
