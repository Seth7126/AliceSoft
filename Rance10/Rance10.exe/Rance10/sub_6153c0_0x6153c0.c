// 函数: sub_6153c0
// 地址: 0x6153c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743bf0
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

if (sub_619a10(arg1, &var_44, "S_ADD") != 0)
    int32_t ecx = arg1[0x7f]
    int32_t edx_1 = *(arg1[0x7e] + (ecx << 2) - 4)
    arg1[0x7f] = ecx - 1
    void* eax_6 = sub_6227b0(&arg1[0x52], edx_1)
    void* var_5c
    
    if (eax_6 != 0)
        char* edx_2
        
        if (*(eax_6 + 0x14) != 0)
            edx_2 = *(eax_6 + 0x10)
        else
            edx_2 = nullptr
        
        char var_2c
        sub_419600(&var_44, edx_2, &var_2c, &var_44)
        var_8_1.b = 2
        
        if (sub_625800(eax_6, &var_2c) != 0)
            sub_405d30(&arg1[0x7d], edx_1)
        else
            sub_403360(&var_5c, 0x76be78)
            var_8_1.b = 3
            sub_612320(arg1, &var_5c)
            sub_403320(&var_5c)
        
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
    else
        sub_403360(&var_5c, 0x76be4c)
        var_8_1.b = 1
        sub_612320(arg1, &var_5c)
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
