// 函数: sub_5375a0
// 地址: 0x5375a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0xf
int32_t var_1c = 0
int32_t var_18 = 0xf
char var_2c = 0
int32_t var_8_1 = 0
void* eax_4 = data_7fcba4 + 0xf4
void** result = sub_432330(eax_4 + 0x24, arg2)
void** result_2 = *(eax_4 + 0x24)
void** result_1 = result

if (result_1 != result_2)
    result = sub_412ca0(arg2, &result_1[4])

if (result_1 == result_2 || result.b != 0)
    result_1 = result_2

if (result_1 == result_2 || result_1 == 0xffffffc0)
    result.b = 0
else
    void* var_50_2 = eax_4
    
    if (sub_5122b0(&result_1[0x10], &var_2c, &result_1[0x10]).b == 0)
        ebx = var_18
        result.b = 0
    else
        char* edx = &var_2c
        
        if (var_18 u>= 0x10)
            edx = var_2c.d
        
        (*(*arg1 + 4))(edx)
        ebx = var_18
        result.b = 1

if (ebx u>= 0x10)
    sub_403160(var_2c.d, ebx + 1, 1)
    result.b = result.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
