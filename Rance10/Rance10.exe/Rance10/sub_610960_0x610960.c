// 函数: sub_610960
// 地址: 0x610960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1[0x284] - 4)
int32_t result_1 = result

if (result != 0xffffffff)
    result = sub_622720(&arg1[0x52], result)
    arg1[0x489] = result
    
    if (result != 0)
        result.b = 1
    else
        void* var_44
        sub_403360(&var_44, 0x76b45c)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_2c
        int32_t ebx
        ebx.b = sub_612320(arg1, sub_409350(&result_1, &var_44, &var_2c, &result_1))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = ebx.b
else
    arg1[0x489] = 0
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
