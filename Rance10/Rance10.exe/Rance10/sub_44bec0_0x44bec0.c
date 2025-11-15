// 函数: sub_44bec0
// 地址: 0x44bec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72abf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0x4c) != 0 && *(arg1 + 0x48) != 0)
    void* var_2c
    sub_403360(&var_2c, arg2)
    int32_t var_8_1 = 0
    int32_t* var_5c_2 = &var_2c
    int32_t var_8_2 = 0xffffffff
    int32_t* result_2 = sub_44b6b0(*(arg1 + 0x4c))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    if (result_2 == 0)
        sub_403360(&var_2c, arg2)
        int32_t var_8_3 = 1
        int32_t* eax_5 = sub_44c030(arg1, arg1 + 0x50, arg2)
        
        if (eax_5 != 0)
            result_2 = sub_44b4e0(*(arg1 + 0x4c), &var_2c, eax_5)
            (*(*eax_5 + 4))(eax_2)
        else
            result_2 = nullptr
        
        int32_t var_8_4 = 0xffffffff
        sub_403320(&var_2c)
        
        if (result_2 != 0)
            result = result_2
        else
            sub_403360(&var_2c, arg2)
            int32_t var_8_5 = 2
            int32_t var_8_6 = 0xffffffff
            result_2 = sub_44be90(arg1, &var_2c, sub_44c0f0(arg1, arg2))
            sub_403320(&var_2c)
            
            if (result_2 != 0)
                result = result_2
            else
                void var_44
                sub_403360(&var_44, arg2)
                int32_t var_8_7 = 3
                int32_t* result_1 = sub_44be90(arg1, &var_44, sub_44c030(arg1, arg1 + 0x60, arg2))
                sub_403320(&var_44)
                result = result_1
    else
        result = result_2
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
