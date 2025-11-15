// 函数: sub_63d110
// 地址: 0x63d110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72eea0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* result = arg4

if (arg3 != 0 && arg5 != 0 && arg2 != 0 && result != 0)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_8_1 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_8_1.b = 1
    sub_6cf9d0(result, arg2, &var_44, result, &var_2c)
    char* edx = &var_44
    
    if (var_30_1 u>= 0x10)
        edx = var_44.d
    
    (*(*arg3 + 4))(edx)
    char* edx_1 = &var_2c
    
    if (var_18_1 u>= 0x10)
        edx_1 = var_2c.d
    
    (*(*arg5 + 4))(edx_1)
    sub_403320(&var_2c)
    result = sub_403320(&var_44)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
