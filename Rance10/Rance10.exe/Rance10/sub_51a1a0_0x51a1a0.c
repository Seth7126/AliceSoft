// 函数: sub_51a1a0
// 地址: 0x51a1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738b6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != *(arg1 + 8))
    void** var_94 = arg2
    int32_t var_90_1 = arg3
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_8_1 = 0
    int32_t* i = *(arg1 + 4)
    void* var_8c
    int32_t var_78
    char var_2c[0x10]
    int32_t var_18
    
    for (int32_t edi_1 = *(arg1 + 8); i != edi_1; i = &i[1])
        int32_t var_a8_1 = *i
        var_8_1.b = 1
        char* eax_6 = sub_4b6410(&var_2c, sub_4faf00(arg4, &var_8c))
        var_8_1.b = 2
        char var_74
        char* eax_7 = sub_41a330(eax_6.b, U""]%", &var_74, eax_6)
        var_8_1.b = 3
        var_8_1.b = 4
        char var_5c[0x10]
        sub_4055a0(&var_44, sub_4176f0(eax_7.b, eax_7, &var_5c, "", "), 0, 0xffffffff)
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c[0].d, var_48 + 1, 1)
        
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c[0] = 0
        int32_t var_60
        
        if (var_60 u>= 0x10)
            sub_403160(var_74.d, var_60 + 1, 1)
        
        var_60 = 0xf
        int32_t var_64_1 = 0
        var_74 = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c[0].d, var_18 + 1, 1)
        
        var_8_1.b = 0
        var_18 = 0xf
        int32_t var_1c_1 = 0
        var_2c[0] = 0
        
        if (var_78 u>= 0x10)
            sub_403160(var_8c, var_78 + 1, 1)
    
    int32_t* eax_18 = sub_419600(&var_44, 0x766920, &var_8c, &var_44)
    var_8_1.b = 5
    var_8_1.b = 6
    sub_4abfc0(&var_94, sub_4176f0(eax_18.b, eax_18, &var_2c, U"]%"))
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c[0].d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_2 = 0
    var_2c[0] = 0
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c, var_78 + 1, 1)
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
