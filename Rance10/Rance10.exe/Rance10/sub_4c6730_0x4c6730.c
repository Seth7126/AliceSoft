// 函数: sub_4c6730
// 地址: 0x4c6730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*arg1 == 0)
    result.b = 0
else
    int32_t var_58_1 = *(arg2 + 0x3c)
    int32_t var_5c_1 = *(arg2 + 0x38)
    int32_t var_60_1 = *(arg2 + 0x34)
    int32_t var_64_1 = *(arg2 + 0x30)
    
    if (sub_54f290(arg1, *(arg2 + 0x1c), *(arg2 + 0x20), *(arg2 + 0x2c)).b != 0)
        result.b = 1
    else
        int32_t var_48 = *(arg2 + 0x1c)
        void* var_44
        sub_403360(&var_44, 0x762928)
        int32_t var_8_1 = 0
        char var_2c
        char* eax_5 = sub_4cb440(&var_48, &var_44, &var_2c, &var_48, *(arg2 + 0x20), 
            *(arg2 + 0x2c), *(arg2 + 0x30), *(arg2 + 0x34), *(arg2 + 0x38), *(arg2 + 0x3c))
        var_8_1.b = 1
        sub_45aae0(eax_5)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
