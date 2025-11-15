// 函数: sub_63d040
// 地址: 0x63d040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (data_7fcbbc != 0 && arg1 != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    char* var_3c_1 = &var_2c
    int32_t ebx
    
    if (sub_63c990() != 0)
        char* edx_1 = &var_2c
        
        if (var_18_1 u>= 0x10)
            edx_1 = var_2c.d
        
        (*(*arg1 + 4))(edx_1)
        ebx.b = 1
    else
        ebx.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
