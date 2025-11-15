// 函数: sub_5f4e30
// 地址: 0x5f4e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = (*(**arg1 + 0xc))(arg2)
int32_t result

if (eax_4 != 0)
    arg1[1]
    int32_t eax_7 = sub_602ff0()
    result = *eax_4 - eax_7
else
    int32_t var_18_1 = 0xf
    int32_t* var_1c_1 = eax_4
    char var_2c = eax_4.b
    sub_403490(&var_2c, 0x797e58, 0x1c)
    int32_t* var_8_1 = eax_4
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
