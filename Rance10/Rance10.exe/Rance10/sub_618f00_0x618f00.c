// 函数: sub_618f00
// 地址: 0x618f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t eax_4 = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t edx = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
int32_t esi = *(arg1[0x7e] + ((ecx - 2) << 2) - 4)
arg1[0x7f] = ecx - 3
int32_t eax_10 = arg1[0x7e]
int32_t var_78 = esi
int32_t eax_11 = *(eax_10 + ((ecx - 3) << 2) - 4)
arg1[0x7f] = ecx - 4
void* eax_13 = sub_6227b0(&arg1[0x52], edx)
int32_t result
char var_44
int32_t result_2
char var_2c[0x10]
int32_t var_18
char* eax_15

if (eax_13 != 0)
    void* eax_19 = sub_6227b0(&arg1[0x52], esi)
    
    if (eax_19 == 0)
        sub_403360(&var_44, 0x76cc00)
        int32_t var_8_2 = 2
        eax_15 = sub_409350(&var_78, &var_44, &var_2c, &var_78)
        var_8_2.b = 3
        goto label_618fe7
    
    int32_t result_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c = 0
    int32_t var_8_3 = 4
    sub_403490(&var_5c, 0x76cbc8, 3)
    char* edx_4
    
    if (*(eax_13 + 0x14) != 0)
        edx_4 = *(eax_13 + 0x10)
    else
        edx_4 = nullptr
    
    void* ecx_12
    
    if (*edx_4 != 0)
        char* ecx_13 = edx_4
        void* eax_21
        
        do
            eax_21.b = *ecx_13
            ecx_13 = &ecx_13[1]
        while (eax_21.b != 0)
        ecx_12 = ecx_13 - &ecx_13[1]
    else
        ecx_12 = nullptr
    
    sub_407430(&var_5c, edx_4, ecx_12)
    void* var_74
    int32_t* eax_22 = sub_6ca3a0(&var_74, eax_4)
    var_8_3.b = 5
    int32_t* eax_23 = sub_41a330(eax_22.b, U"(", &var_44, eax_22)
    var_8_3.b = 6
    var_8_3.b = 7
    sub_4055a0(&var_5c, sub_4176f0(eax_23.b, eax_23, &var_2c, U")"), 0, 0xffffffff)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c[0].d, var_18 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_1 = 0
    var_2c[0] = 0
    
    if (result_2 u>= 0x10)
        sub_403160(var_44.d, result_2 + 1, 1)
    
    var_8_3.b = 4
    int32_t var_30 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74, var_60 + 1, 1)
    
    sub_407430(&var_5c, 0x76cbc0, 5)
    int32_t* ecx_20 = arg1[9]
    
    if (ecx_20 != 0 && (**ecx_20)(eax_2) != 0)
        char* eax_34
        
        if (*(eax_19 + 0x14) != 0)
            eax_34 = *(eax_19 + 0x10)
        else
            eax_34 = nullptr
        
        sub_4073f0(eax_34)
        sub_4073f0("\n\n")
    
    sub_407430(&var_5c, 0x76cd5c, 0x14)
    
    if (sub_621db0(&arg1[0x52], edx) != 0)
        if (sub_621db0(&arg1[0x52], var_78) == 0)
            sub_403360(&var_74, 0x76cd10)
            var_8_3.b = 9
            sub_612320(arg1, &var_74)
            sub_403320(&var_74)
        else if (eax_11 == 0)
            char* eax_37 = &var_5c
            
            if (result_1 u>= 0x10)
                eax_37 = var_5c.d
            
            sub_403360(&var_74, eax_37)
            var_8_3.b = 0xa
            enum MESSAGEBOX_RESULT eax_38 = sub_6c54a0(&var_74)
            sub_403320(&var_74)
            
            if (eax_38 != IDOK)
                sub_611050(arg1)
    else
        sub_403360(&var_74, 0x76ccc8)
        var_8_3.b = 8
        sub_612320(arg1, &var_74)
        sub_403320(&var_74)
    
    result = result_1
    
    if (result u>= 0x10)
        int32_t var_a0_13 = 1
        result = sub_403160(var_5c.d, result + 1, 1)
else
    result_2 = 0xf
    void* var_34_1 = eax_13
    var_44 = eax_13.b
    sub_403490(&var_44, 0x76cbd0, 0x2f)
    int32_t var_8_1 = 0
    eax_15 = sub_409350(&var_78, &var_44, &var_2c, &var_78)
    var_8_1.b = 1
label_618fe7:
    sub_612320(arg1, eax_15)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c[0].d, var_18 + 1, 1)
    
    result = result_2
    int32_t var_18_1 = 0xf
    int32_t var_1c = 0
    var_2c[0] = 0
    
    if (result u>= 0x10)
        int32_t var_a0_3 = 1
        result = sub_403160(var_44.d, result + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
