// 函数: sub_613590
// 地址: 0x613590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7438b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t eax_4 = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t eax_7 = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
int32_t edi = *(arg1[0x7e] + ((ecx - 2) << 2) - 4)
arg1[0x7f] = ecx - 3
int32_t edx = *(arg1[0x7e] + ((ecx - 3) << 2) - 4)
int32_t var_78 = edx
arg1[0x7f] = ecx - 4
char* result

if (edx == 0xffffffff)
    sub_405d30(&arg1[0x7d], eax_7)
    result = sub_405d30(&arg1[0x7d], eax_4)
else
    void* eax_13 = sub_621720(&arg1[0x52], edx)
    
    if (eax_13 == 0 || edi u>= *(eax_13 + 0x14) u>> 2)
        void* var_44
        sub_403360(&var_44, 0x76bc58)
        int32_t var_8_2 = 0
        var_8_2.b = 1
        char var_2c
        sub_612230(arg1, "R_ASSIGN", sub_417810(&var_78, &var_44, &var_2c, &var_78, edi))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        char* result_1
        result = result_1
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (result u>= 0x10)
            result = sub_403160(var_44, &result[1], 1)
    else
        *(*(eax_13 + 0x10) + (edi << 2)) = eax_7
        void* eax_15 = sub_621720(&arg1[0x52], var_78)
        
        if (eax_15 == 0 || edi + 1 u>= *(eax_15 + 0x14) u>> 2)
            void var_5c
            sub_403360(&var_5c, 0x76bc28)
            int32_t var_8_1 = 2
            var_8_1.b = 3
            void var_74
            sub_612230(arg1, "R_ASSIGN", sub_417810(&var_78, &var_5c, &var_74, &var_78, edi + 1))
            sub_403320(&var_74)
            result = sub_403320(&var_5c)
        else
            *(*(eax_15 + 0x10) + ((edi + 1) << 2)) = eax_4
            sub_405d30(&arg1[0x7d], eax_7)
            result = sub_405d30(&arg1[0x7d], eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
