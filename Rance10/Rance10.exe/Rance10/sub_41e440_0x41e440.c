// 函数: sub_41e440
// 地址: 0x41e440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s< 0)
    result.b = 0
else if (arg3 s>= (***(*(arg1 + 4) + 8))(eax_2))
    result.b = 0
else
    result = (*(**(*(arg1 + 4) + 8) + 0x10))(arg3)
    
    if (result != 2)
        result.b = 0
    else
        sub_6ca100(arg2, result)
        result = (*(**(*(arg1 + 4) + 8) + 4))(arg3)
        
        if (result == 0)
            result.b = 0
        else
            result = (*result)->__offset(0x18).d()
            
            if (result == 0)
                result.b = 0
            else
                int32_t var_8_1 = 0
                void var_2c
                sub_6ca1a0(arg2, sub_403360(&var_2c, result))
                sub_403320(&var_2c)
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
