// 函数: sub_4c6ac0
// 地址: 0x4c6ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733650
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *arg1
char result

if (ecx == 0)
    result = 0
else
    int32_t* ecx_1 = *(ecx + 0x118)
    char eax_5
    
    if (ecx_1 != 0)
        eax_5 = (*(*ecx_1 + 0x28))(eax_2)
    
    int32_t var_78
    void* var_44
    char var_2c
    char eax_13
    
    if (ecx_1 == 0 || eax_5 == 0)
        var_78 = *(arg2 + 0x1c)
        sub_403360(&var_44, 0x762ca0)
        int32_t var_8_1 = 0
        char* eax_8 = sub_4cb560(&var_78, &var_44, &var_2c, &var_78, *(arg2 + 0x20), 
            *(arg2 + 0x2c), *(arg2 + 0x30), *(arg2 + 0x34), *(arg2 + 0x38), *(arg2 + 0x3c), 
            *(arg2 + 0x40))
        var_8_1.b = 1
        sub_45aae0(eax_8)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        int32_t var_90_2 = *(arg2 + 0x3c)
        int32_t var_94_4 = *(arg2 + 0x38)
        int32_t var_98_4 = *(arg2 + 0x34)
        int32_t var_9c_2 = *(arg2 + 0x30)
        eax_13 = sub_54f290(arg1, *(arg2 + 0x1c), *(arg2 + 0x20), *(arg2 + 0x2c))
    
    if ((ecx_1 != 0 && eax_5 != 0) || eax_13 != 0)
        int32_t var_90_4 = *(arg2 + 0x40)
        int32_t var_94_6 = *(arg2 + 0x3c)
        int32_t var_98_6 = *(arg2 + 0x38)
        int32_t var_9c_4 = *(arg2 + 0x34)
        
        if (sub_54f4c0(arg1, *(arg2 + 0x1c), *(arg2 + 0x20), *(arg2 + 0x2c), *(arg2 + 0x30)) != 0)
            result = 1
        else
            int32_t var_7c = *(arg2 + 0x1c)
            void var_5c
            sub_403360(&var_5c, 0x762e88)
            int32_t var_8_4 = 4
            void var_74
            char* eax_19 = sub_4cb560(&var_7c, &var_5c, &var_74, &var_7c, *(arg2 + 0x20), 
                *(arg2 + 0x2c), *(arg2 + 0x30), *(arg2 + 0x34), *(arg2 + 0x38), *(arg2 + 0x3c), 
                *(arg2 + 0x40))
            var_8_4.b = 5
            sub_45aae0(eax_19)
            sub_403320(&var_74)
            sub_403320(&var_5c)
            result = 0
    else
        var_78 = *(arg2 + 0x1c)
        sub_403360(&var_44, 0x762c30)
        int32_t var_8_3 = 2
        char* eax_16 = sub_4cb560(&var_78, &var_44, &var_2c, &var_78, *(arg2 + 0x20), 
            *(arg2 + 0x2c), *(arg2 + 0x30), *(arg2 + 0x34), *(arg2 + 0x38), *(arg2 + 0x3c), 
            *(arg2 + 0x40))
        var_8_3.b = 3
        sub_45aae0(eax_16)
        sub_403320(&var_2c)
        sub_403320(&var_44)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
