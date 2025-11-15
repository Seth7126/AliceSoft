// 函数: sub_615730
// 地址: 0x615730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743ca0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_8_1 = 0

if (sub_619a10(arg1, &var_44, "S_PLUSA2") != 0)
    int32_t ecx = arg1[0x7f]
    int32_t edx_1 = *(arg1[0x7e] + (ecx << 2) - 4)
    int32_t var_64 = edx_1
    arg1[0x7f] = ecx - 1
    void* eax_6 = sub_6227b0(&arg1[0x52], edx_1)
    void* var_2c
    int32_t var_18
    
    if (eax_6 != 0)
        char* edx_3
        
        if (*(eax_6 + 0x14) != 0)
            edx_3 = *(eax_6 + 0x10)
        else
            edx_3 = nullptr
        
        bool cond:0_1 = sub_625800(eax_6, sub_419600(&var_44, edx_3, &var_2c, &var_44)) == 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        if (cond:0_1 == 0)
            char* eax_18
            
            if (*(eax_6 + 0x14) != 0)
                eax_18 = *(eax_6 + 0x10)
            else
                eax_18 = nullptr
            
            sub_403360(&var_2c, eax_18)
            var_8_1.b = 4
            void** var_78_8 = &var_2c
            int32_t eax_19 = sub_621930(&arg1[0x52])
            var_8_1.b = 0
            sub_403320(&var_2c)
            
            if (eax_19 s>= 0)
                sub_405d30(&arg1[0x7d], eax_19)
            else
                sub_403360(&var_2c, 0x76c3f4)
                var_8_1.b = 5
                sub_612230(arg1, "S_PLUSA2", &var_2c)
                sub_403320(&var_2c)
        else
            sub_403360(&var_2c, 0x76bf7c)
            var_8_1.b = 3
            sub_612230(arg1, "S_PLUSA2", &var_2c)
            sub_403320(&var_2c)
    else
        sub_403360(&var_2c, 0x76bfac)
        var_8_1.b = 1
        var_8_1.b = 2
        char var_5c
        sub_612230(arg1, "S_PLUSA2", sub_409350(&var_64, &var_2c, &var_5c, &var_64))
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
