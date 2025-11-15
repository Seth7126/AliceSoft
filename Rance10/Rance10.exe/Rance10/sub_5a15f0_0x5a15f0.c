// 函数: sub_5a15f0
// 地址: 0x5a15f0
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
int32_t eax_3 = *(arg2 + 0x20)
int32_t result
void* const var_7c_1
void* var_78_1

if (eax_3 == 0)
    var_78_1 = 4
    var_7c_1 = &data_769a1c
label_5a165d:
    sub_403490(&var_2c, var_7c_1, var_78_1)
    char* eax_5 = &var_2c
    
    if (var_18 u>= 0x10)
        eax_5 = var_2c.d
    
    char* var_60 = eax_5
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, 0x7699fc, 0x17)
    var_8_1.b = 1
    char var_5c
    char* ecx_3 = sub_409240(&var_60, &var_44, &var_5c, &var_60)
    var_8_1.b = 2
    int32_t edx_1 = *(ecx_3 + 0x14)
    int32_t edi_1 = *(ecx_3 + 0x10)
    char* eax_8
    
    if (edx_1 u< 0x10)
        eax_8 = ecx_3
    else
        eax_8 = *ecx_3
    
    if (edx_1 u>= 0x10)
        ecx_3 = *ecx_3
    
    int32_t var_78_3 = 0.d
    sub_6ca200(arg1 + 4, *(arg1 + 8), ecx_3, &eax_8[edi_1])
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
else
    if (eax_3 == 1)
        var_78_1 = 6
        var_7c_1 = &data_769a14
        goto label_5a165d
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
