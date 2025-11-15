// 函数: sub_50fd10
// 地址: 0x50fd10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_1 = arg3

if (result_1[4] != 0)
    if (result_1[5] u< 0x10)
        result = result_1
    else
        result = *result_1
    
    if (*result != 0xa)
        int32_t var_48_1 = 1
        char var_30 = 0xa
        void* eax_3 = sub_42cb30(result_1, &var_30, arg1)
        
        if (eax_3 != 0xffffffff)
            int32_t var_8_1 = 0
            void var_2c
            sub_4055a0(arg2, sub_405480(result_1, &var_2c, 0, eax_3), 0, 0xffffffff)
            int32_t var_8_2 = 0xffffffff
            sub_403320(&var_2c)
            result = sub_403750(result_1, 0, eax_3)
        else
            result = sub_4055a0(arg2, result_1, 0, eax_3)
            bool cond:0_1 = result_1[5] u< 0x10
            result_1[4] = 0
            
            if (not(cond:0_1))
                result_1 = *result_1
            
            *result_1 = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
