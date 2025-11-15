// 函数: sub_5a7100
// 地址: 0x5a7100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ef90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
int32_t eax_3 = arg2[1]
int32_t result
void* const var_94_1
void* var_90_1

if (eax_3 == 0)
    var_90_1 = 4
    var_94_1 = &data_769944
label_5a717d:
    sub_403490(&var_2c, var_94_1, var_90_1)
    int32_t var_78 = *arg2
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, "\t\t{ %d, %s, %s }", 0x10)
    var_8_1.b = 1
    char var_74
    char* eax_8 = sub_5a2470(&var_74, &arg2[2])
    var_8_1.b = 2
    char* ecx_2 = &var_2c
    
    if (var_18 u>= 0x10)
        ecx_2 = var_2c.d
    
    if (*(eax_8 + 0x14) u>= 0x10)
        eax_8 = *eax_8
    
    char var_5c
    char* ecx_4 = sub_45ef70(&var_78, &var_44, &var_5c, &var_78, eax_8, ecx_2)
    var_8_1.b = 3
    int32_t edx_1 = *(ecx_4 + 0x14)
    int32_t esi_1 = *(ecx_4 + 0x10)
    char* eax_11
    
    if (edx_1 u< 0x10)
        eax_11 = ecx_4
    else
        eax_11 = *ecx_4
    
    if (edx_1 u>= 0x10)
        ecx_4 = *ecx_4
    
    int32_t var_90_4 = 0.d
    sub_6ca200(arg1 + 4, *(arg1 + 8), ecx_4, &eax_11[esi_1])
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74.d, var_60 + 1, 1)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    result.b = 1
else
    if (eax_3 == 1)
        var_90_1 = 4
        var_94_1 = &data_76993c
        goto label_5a717d
    
    if (eax_3 == 2)
        var_90_1 = 8
        var_94_1 = &data_769988
        goto label_5a717d
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
