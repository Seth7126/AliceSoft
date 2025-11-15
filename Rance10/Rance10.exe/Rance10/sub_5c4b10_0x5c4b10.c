// 函数: sub_5c4b10
// 地址: 0x5c4b10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x1e5) != 0)
    result.b = 1
else
    result = *(arg1 + 0x1c0)
    
    if (result == 0)
        result.b = 1
    else
        float var_38_1 = *(arg1 + 0x1d8)
        data_7e1d50 = 0
        
        if (sub_5c79c0(result, var_38_1).b != 0)
            data_7e1d50 = 1
            result.b = 1
        else
            void var_2c
            sub_403360(&var_2c, 0x76a3bc)
            int32_t var_8_1 = 0
            sub_5e01e0(&var_2c)
            int32_t var_8_2 = 0xffffffff
            sub_403320(&var_2c)
            sub_5e02a0()
            data_7e1d50 = 1
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
