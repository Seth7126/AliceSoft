// 函数: sub_506660
// 地址: 0x506660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
void* var_2c
int32_t* eax_4 = sub_419600(arg2, U""", &var_2c, arg2)
int32_t var_8_1 = 0
sub_4176f0(eax_4.b, eax_4, arg1, U""")
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
