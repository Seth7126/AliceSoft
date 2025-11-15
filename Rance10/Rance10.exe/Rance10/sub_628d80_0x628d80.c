// 函数: sub_628d80
// 地址: 0x628d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d0a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (sub_628e90(arg1 - 0x20, arg2).b == 0)
    result.b = 0
else
    int32_t eax_6 = *(arg2 * 0x70 + **(arg1 + 8) + 0x34)
    
    if (eax_6 == 0xc)
        int32_t eax_13
        
        if (*(arg1 - 0xc) != 0)
            eax_13 = *(arg1 - 0x10)
        else
            eax_13 = 0
        
        result = sub_6227b0(*(arg1 + 4), *(eax_13 + (arg2 << 2)))
        
        if (result == 0)
            result.b = 0
        else
            void var_44
            sub_403360(&var_44, arg3)
            int32_t ebx
            ebx.b = sub_625800(result, &var_44)
            sub_403320(&var_44)
            result.b = ebx.b
    else if (eax_6 == 0xd || eax_6 == 0x4f)
        void* var_2c
        sub_403360(&var_2c, 0x76d830)
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        int32_t* var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result.b = 0
    else if (arg2 u>= *(arg1 - 0xc) u>> 2)
        result.b = 0
    else
        *(*(arg1 - 0x10) + (arg2 << 2)) = *arg3
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
