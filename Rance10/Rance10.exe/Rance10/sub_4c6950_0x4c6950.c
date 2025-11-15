// 函数: sub_4c6950
// 地址: 0x4c6950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7335f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0)
    result.b = 0
else
    int32_t* ecx_1 = *(ecx + 0x118)
    char eax_5
    
    if (ecx_1 != 0)
        eax_5 = (*(*ecx_1 + 0x28))(eax_2)
    
    if (ecx_1 == 0 || eax_5 == 0)
        int32_t var_7c = *(arg2 + 0x1c)
        void* var_44
        sub_403360(&var_44, 0x762da8)
        int32_t var_8_2 = 0
        var_8_2.b = 1
        char var_2c
        sub_45aae0(sub_4cb680(&var_7c, &var_44, &var_2c, &var_7c, *(arg2 + 0x20), *(arg2 + 0x2c), 
            *(arg2 + 0x30), *(arg2 + 0x40)))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 1
    else
        int32_t var_90_1 = *(arg2 + 0x40)
        int32_t var_94_1 = *(arg2 + 0x30)
        int32_t var_98_1 = *(arg2 + 0x2c)
        int32_t var_9c_1 = *(arg2 + 0x20)
        
        if (sub_54f360(arg1, *(arg2 + 0x1c)).b != 0)
            result.b = 1
        else
            int32_t var_78 = *(arg2 + 0x1c)
            void var_5c
            sub_403360(&var_5c, 0x762d50)
            int32_t var_8_1 = 2
            var_8_1.b = 3
            void var_74
            sub_45aae0(sub_4cb680(&var_78, &var_5c, &var_74, &var_78, *(arg2 + 0x20), 
                *(arg2 + 0x2c), *(arg2 + 0x30), *(arg2 + 0x40)))
            sub_403320(&var_74)
            sub_403320(&var_5c)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
