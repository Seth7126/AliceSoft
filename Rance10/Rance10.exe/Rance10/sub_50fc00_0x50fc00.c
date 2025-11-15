// 函数: sub_50fc00
// 地址: 0x50fc00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737e08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_1 = arg1
int32_t ebx = result_1[4]

if (ebx != 0)
    if (result_1[5] u< 0x10)
        result = result_1
    else
        result = *result_1
    
    if (*(result + ebx - 1) != 0xa)
        int32_t ecx
        int32_t var_78_1 = ecx
        char var_60 = 0xa
        void* eax_3 = sub_510160(result_1, &var_60, 0xffffffff)
        
        if (eax_3 != 0xffffffff)
            void* ebx_1 = ebx - (eax_3 + 1)
            void var_5c
            int32_t* eax_5 = sub_405480(result_1, &var_5c, eax_3 + 1, ebx_1)
            int32_t var_8_1 = 0
            void var_44
            sub_409670(arg2, sub_417750(eax_5, eax_5, &var_44, arg2))
            sub_403320(&var_44)
            int32_t var_8_2 = 0xffffffff
            sub_403320(&var_5c)
            result = sub_403750(result_1, eax_3 + 1, ebx_1)
        else
            void var_2c
            sub_409670(arg2, sub_4079d0(eax_3, result_1, &var_2c, arg2))
            result = sub_403320(&var_2c)
            bool cond:0_1 = result_1[5] u< 0x10
            result_1[4] = 0
            
            if (not(cond:0_1))
                result_1 = *result_1
            
            *result_1 = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
