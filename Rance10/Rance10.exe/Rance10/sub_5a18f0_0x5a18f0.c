// 函数: sub_5a18f0
// 地址: 0x5a18f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
int32_t result = *(arg2 + 0x38)

if (result u> 4)
    result.b = 0
else
    void* const var_78_1
    
    switch (result)
        case 0
            var_78_1 = &data_769a5c
        case 1
            var_78_1 = &data_769a50
        case 2
            var_78_1 = &data_769a40
        case 3
            var_78_1 = &data_769930
        case 4
            var_78_1 = &data_769920
    
    sub_403450(var_78_1)
    char* eax_3 = &var_2c
    
    if (var_18 u>= 0x10)
        eax_3 = var_2c.d
    
    char* var_60 = eax_3
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, 0x769904, 0x1b)
    var_8_1.b = 1
    char var_5c
    char* ecx_2 = sub_409240(&var_60, &var_44, &var_5c, &var_60)
    var_8_1.b = 2
    int32_t edx_1 = *(ecx_2 + 0x14)
    int32_t edi_1 = *(ecx_2 + 0x10)
    char* eax_6
    
    if (edx_1 u< 0x10)
        eax_6 = ecx_2
    else
        eax_6 = *ecx_2
    
    if (edx_1 u>= 0x10)
        ecx_2 = *ecx_2
    
    int32_t var_78_3 = 0.d
    sub_6ca200(arg1 + 4, *(arg1 + 8), ecx_2, &eax_6[edi_1])
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
