// 函数: sub_6192a0
// 地址: 0x6192a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7442e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t i = *eax_3
arg1[0x74] = &eax_3[1]
int32_t ecx = arg1[0x7f]
int32_t edx = *(arg1[0x7e] + (ecx << 2) - 4)
int32_t var_78 = edx
arg1[0x7f] = ecx - 1
char* result

if (edx s< 0)
label_61942f:
    sub_405d30(&arg1[0x7d], 0xffffffff)
    sub_405d30(&arg1[0x7d], 0)
    result = sub_405d30(&arg1[0x7d], 0xffffffff)
else
    void* eax_7 = sub_6228d0(&arg1[0x52], edx)
    
    if (eax_7 != 0)
        void* esi_1 = *(eax_7 + 0x38)
        
        if (esi_1 != 0)
            if (i != sub_629d00(eax_7))
                int32_t* esi_2 = *(esi_1 + 0x18)
                int32_t eax_17 = *(*(eax_7 + 0x38) + 0x1c)
                
                if (esi_2 == eax_17)
                    goto label_61942f
                
                while (i != *esi_2)
                    esi_2 = &esi_2[2]
                    
                    if (esi_2 == eax_17)
                        goto label_61942f
                
                sub_405d30(&arg1[0x7d], edx)
                sub_405d30(&arg1[0x7d], esi_2[1])
                result = sub_405d30(&arg1[0x7d], 0)
            else
                sub_405d30(&arg1[0x7d], edx)
                sub_405d30(&arg1[0x7d], 0)
                result = sub_405d30(&arg1[0x7d], 0)
        else
            void var_5c
            sub_403360(&var_5c, 0x76cc74)
            int32_t var_8_2 = 2
            var_8_2.b = 3
            void var_74
            sub_612230(arg1, 0x76cc9c, sub_409350(&var_78, &var_5c, &var_74, &var_78))
            sub_403320(&var_74)
            result = sub_403320(&var_5c)
    else
        void* var_44
        sub_403360(&var_44, 0x76cca0)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_2c
        sub_612230(arg1, 0x76ccc4, sub_409350(&var_78, &var_44, &var_2c, &var_78))
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

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
