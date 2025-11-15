// 函数: sub_537800
// 地址: 0x537800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg5 != 0)
    result = sub_4f6480(arg2)
    
    if (result == 0)
        result.b = 0
    else
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_8_1 = 0
        void* ebx
        
        if (sub_510cb0(result, arg3, &var_2c, arg5).b != 0)
            char* edx = &var_2c
            
            if (var_18_1 u>= 0x10)
                edx = var_2c.d
            
            (*(*arg4 + 4))(edx)
            ebx.b = 1
        else
            ebx.b = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
