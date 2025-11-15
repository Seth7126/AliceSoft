// 函数: sub_5894f0
// 地址: 0x5894f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x4c) == 0)
    result.b = 1
else
    result.b = *(arg1 + 0x50)
    
    if (result.b != 0)
        result.b = 1
    else
        struct _EXCEPTION_REGISTRATION_RECORD** var_50_1 = arg9
        
        if (sub_5a8ab0(*(arg1 + 0x4c), arg2[0x5e], arg2, arg2[0x5d], arg3, arg4, arg5, arg6, arg7, 
                arg8).b != 0)
            result.b = 1
        else
            void var_2c
            sub_403360(&var_2c, 0x768454)
            int32_t var_8_1 = 0
            sub_5e01e0(&var_2c)
            sub_403320(&var_2c)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
