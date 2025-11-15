// 函数: sub_4d5e60
// 地址: 0x4d5e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
arg3[1] = *arg3
char result

if (*(arg1 + 0x3c) != 0)
    int32_t var_8_1 = 0
    void* var_2c
    result = sub_4d6080(arg1, sub_4d55d0(&var_2c, arg2), arg3)
    int32_t var_8_2 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

if (*(arg1 + 0x3c) == 0 || result == 0)
    result = sub_4d5f40(arg1, arg2, arg3)
    
    if (result != 0)
        result = 1
    else
        int32_t* ebx
        
        if (*(arg1 + 0x3c) != result)
            int32_t var_8_3 = 1
            void var_44
            ebx.b = sub_4d6080(arg1, sub_4d5470(&var_44, arg2), arg3)
            sub_403320(&var_44)
        
        if (*(arg1 + 0x3c) != result && ebx.b != 0)
            result = 1
        else
            result = 0
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
