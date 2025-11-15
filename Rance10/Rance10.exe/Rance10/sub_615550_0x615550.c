// 函数: sub_615550
// 地址: 0x615550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743c40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t edx = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t eax_6 = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
int32_t var_64 = eax_6
arg1[0x7f] = ecx - 2
void* eax_8 = sub_6227b0(&arg1[0x52], edx)
char* result
char var_2c

if (eax_8 != 0)
    void* eax_10 = sub_6227b0(&arg1[0x52], eax_6)
    void* var_44
    char* result_1
    
    if (eax_10 != 0)
        char* eax_16
        
        if (*(eax_8 + 0x14) != 0)
            eax_16 = *(eax_8 + 0x10)
        else
            eax_16 = nullptr
        
        sub_403360(&var_44, eax_16)
        void* ebx
        ebx.b = sub_625800(eax_10, &var_44) == 0
        
        if (result_1 u>= 0x10)
            sub_403160(var_44, &result_1[1], 1)
        
        if (ebx.b == 0)
            result = sub_405d30(&arg1[0x7d], edx)
        else
            void var_5c
            sub_403360(&var_5c, 0x76bfd0)
            int32_t var_8_3 = 3
            sub_612230(arg1, "S_ASSIGN", &var_5c)
            result = sub_403320(&var_5c)
    else
        sub_403360(&var_44, 0x76c030)
        int32_t var_8_2 = 1
        var_8_2.b = 2
        sub_612320(arg1, sub_409350(&var_64, &var_44, &var_2c, &var_64))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        result = result_1
        int32_t var_18_1 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (result u>= 0x10)
            result = sub_403160(var_44, &result[1], 1)
else
    char* result_2 = 0xf
    void* var_1c_1 = eax_8
    var_2c = eax_8.b
    sub_403490(&var_2c, 0x76c000, 0x2e)
    void* var_8_1 = eax_8
    sub_612320(arg1, &var_2c)
    result = result_2
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, &result[1], 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
