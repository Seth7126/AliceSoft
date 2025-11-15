// 函数: sub_616270
// 地址: 0x616270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743db8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t eax_4 = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t eax_7 = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
int32_t var_70 = eax_7
arg1[0x7f] = ecx - 2
int32_t ebx = *(arg1[0x7e] + ((ecx - 2) << 2) - 4)
arg1[0x7f] = ecx - 3
int32_t edx = *(arg1[0x7e] + ((ecx - 3) << 2) - 4)
int32_t var_74 = edx
arg1[0x7f] = ecx - 4
void* eax_13 = sub_621720(&arg1[0x52], edx)
char* result
char var_44
char var_2c
char* result_2

if (eax_13 == 0 || ebx u>= *(eax_13 + 0x14) u>> 2)
    char* result_1 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    sub_403490(&var_44, 0x76c374, 0x2e)
    int32_t var_8_8 = 0
    var_8_8.b = 1
    sub_612230(arg1, "OBJSWAP", sub_417810(&var_74, &var_44, &var_2c, &var_74, ebx))
    
    if (result_2 u>= 0x10)
        sub_403160(var_2c.d, &result_2[1], 1)
    
    result = result_1
    int32_t var_18 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (result u>= 0x10)
        int32_t var_90_23 = 1
        result = sub_403160(var_44.d, &result[1], 1)
else
    int32_t eax_15 = *(*(eax_13 + 0x10) + (ebx << 2))
    int32_t var_64 = eax_15
    void* eax_16 = sub_621720(&arg1[0x52], eax_7)
    
    if (eax_16 == 0 || eax_4 u>= *(eax_16 + 0x14) u>> 2)
        sub_403360(&var_2c, 0x76c33c)
        int32_t var_8_7 = 2
        var_8_7.b = 3
        sub_612230(arg1, "OBJSWAP", sub_417810(&var_70, &var_2c, &var_44, &var_70, eax_4))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        result = result_2
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (result u>= 0x10)
            int32_t var_90_20 = 1
            result = sub_403160(var_2c.d, &result[1], 1)
    else
        int32_t ebx_1 = *(*(eax_16 + 0x10) + (eax_4 << 2))
        int32_t* eax_18 = arg1[0x74]
        int32_t ecx_11 = *eax_18 - 0xa
        arg1[0x74] = &eax_18[1]
        char const* const var_94_3
        void** var_90_4
        void* eax_27
        
        switch (ecx_11)
            case 0, 1, 0x25, 0x52
                if (sub_621ea0(edx, ebx, ebx_1) != 0)
                    result = sub_621ea0(var_70, eax_4, var_64)
                    
                    if (result.b == 0)
                        sub_403360(&var_2c, 0x76c2cc)
                        int32_t var_8_2 = 6
                        var_90_4 = sub_417810(&var_70, &var_2c, &var_44, &var_70, eax_4)
                        var_8_2.b = 7
                        var_94_3 = "OBJSWAP"
                        goto label_6163d1
                else
                    sub_403360(&var_2c, 0x76c304)
                    int32_t var_8_1 = 4
                    var_90_4 = sub_417810(&var_74, &var_2c, &var_44, &var_74, ebx)
                    var_8_1.b = 5
                    var_94_3 = "OBJSWAP"
                label_6163d1:
                    sub_612230(arg1, var_94_3, var_90_4)
                    sub_403320(&var_44)
                    result = sub_403320(&var_2c)
            case 2
                void* eax_26 = sub_6227b0(&arg1[0x52], eax_15)
                eax_27 = sub_6227b0(&arg1[0x52], ebx_1)
                
                if (eax_26 == 0 || eax_27 == 0)
                    sub_403360(&var_2c, 0x76c6c4)
                    int32_t var_8_3 = 8
                    var_90_4 = sub_417810(&var_64, &var_2c, &var_44, &var_64, ebx_1)
                    var_8_3.b = 9
                    var_94_3 = "OBJSWAP"
                    goto label_6163d1
                
                result = sub_625a00(eax_26 + 0xc, eax_27 + 0xc)
            case 3
                void* eax_30 = sub_6228d0(&arg1[0x52], eax_15)
                eax_27 = sub_6228d0(&arg1[0x52], ebx_1)
                
                if (eax_30 == 0 || eax_27 == 0)
                    sub_403360(&var_2c, 0x76c684)
                    int32_t var_8_4 = 0xa
                    var_90_4 = sub_417810(&var_64, &var_2c, &var_44, &var_64, ebx_1)
                    var_8_4.b = 0xb
                    var_94_3 = "OBJSWAP"
                    goto label_6163d1
                
                result = sub_625a00(eax_30 + 0xc, eax_27 + 0xc)
            case 0x45
                void* eax_33 = sub_622840(&arg1[0x52], eax_15)
                void* eax_34 = sub_622840(&arg1[0x52], ebx_1)
                
                if (eax_33 == 0 || eax_34 == 0)
                    sub_403360(&var_2c, 0x76c644)
                    int32_t var_8_5 = 0xc
                    var_90_4 = sub_417810(&var_64, &var_2c, &var_44, &var_64, ebx_1)
                    var_8_5.b = 0xd
                    var_94_3 = "OBJSWAP"
                    goto label_6163d1
                
                result = sub_628160(eax_33, eax_34)
            default
                void var_5c
                sub_403360(&var_5c, 0x76c62c)
                int32_t var_8_6 = 0xe
                sub_612230(arg1, "OBJSWAP", &var_5c)
                result = sub_403320(&var_5c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
