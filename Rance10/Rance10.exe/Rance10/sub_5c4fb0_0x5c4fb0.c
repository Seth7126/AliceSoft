// 函数: sub_5c4fb0
// 地址: 0x5c4fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b290
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x1e5) == 0)
    result.b = 1
else
    result = sub_5c4e60(arg1)
    
    if (result.b == 0)
        if (*(arg1 + 0x134) s>= 1)
            result = sub_5c4c80(arg1)
        
        if (*(arg1 + 0x134) s< 1 || result.b != 0)
            *(arg1 + 0x1d4) = 0
            *(arg1 + 0x1e5) = 0
            result.b = 1
        else
            void var_44
            sub_403360(&var_44, 0x76a364)
            int32_t var_8_2 = 1
            sub_5e01e0(&var_44)
            sub_403320(&var_44)
            result.b = 0
    else
        void* var_2c
        sub_403360(&var_2c, 0x76a334)
        int32_t var_8_1 = 0
        sub_5e01e0(&var_2c)
        struct _EXCEPTION_REGISTRATION_RECORD** var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
