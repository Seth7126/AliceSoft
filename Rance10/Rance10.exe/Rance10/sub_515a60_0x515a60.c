// 函数: sub_515a60
// 地址: 0x515a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result = sub_432330(arg1, arg2)
void** result_2 = *arg1
void** result_1 = result

if (result_1 != result_2)
    result = sub_412ca0(arg2, &result_1[4])

if (result_1 == result_2 || result.b != 0)
    result_1 = result_2

if (result_1 == result_2 || result_1 == 0xffffffc0)
    result.b = 0
else
    int32_t var_18_1 = 0xf
    BOOL var_1c_1 = 0
    char var_2c = 0
    int32_t var_50_2 = arg4
    int32_t var_8_1 = 0
    int32_t* ebx
    
    if (sub_5122b0(&result_1[0x10], &var_2c, &result_1[0x10]).b == 0)
        ebx.b = 0
    else
        result = arg1[2]
        
        if (result[0xe].b == 0)
            ebx.b = 0
        else
            char* edx_1 = &var_2c
            
            if (var_18_1 u>= 0x10)
                edx_1 = var_2c.d
            
            if (sub_67efe0(result, edx_1, arg3, var_1c_1).b == 0)
                ebx.b = 0
            else
                void** var_3c
                sub_5167d0(arg1, &var_3c, arg2)
                
                if (&var_3c[0xa] != arg3)
                    sub_403590(&var_3c[0xa], arg3, 0, 0xffffffff)
                
                ebx.b = 1
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
