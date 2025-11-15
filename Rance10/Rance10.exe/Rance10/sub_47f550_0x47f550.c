// 函数: sub_47f550
// 地址: 0x47f550
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

if (arg2 == 0)
    *arg3
    int32_t var_8_1 = 0
    void* var_2c
    char eax_8 = sub_47f610(sub_603290(&var_2c))
    *arg1 = 0x2f
    int32_t ecx_4
    ecx_4.b = eax_8 != 0
    arg1[1] = ecx_4
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
else if (arg2 == 1)
    int32_t eax_6 = sub_47f840(arg1)
    *arg1 = 0xa
    arg1[1] = eax_6
else
    sub_602420(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
