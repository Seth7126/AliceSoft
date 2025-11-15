// 函数: sub_498f00
// 地址: 0x498f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* const result

if ((**arg1)(arg2) != 0)
    void* var_2c
    sub_403360(&var_2c, arg2)
    int32_t var_8_1 = 0
    void** eax_6 = sub_432330(&arg1[1], &var_2c)
    char eax_8
    
    if (eax_6 != arg1[1])
        eax_8 = sub_412ca0(&var_2c, &eax_6[4])
    
    if (eax_6 == arg1[1] || eax_8 != 0)
        sub_6d0947("invalid map<K, T> key")
        noreturn
    
    void* result_1 = &eax_6[0xa]
    
    if (*(result_1 + 0x14) u>= 0x10)
        result_1 = *result_1
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result = result_1
else
    result = &data_75cec6

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
