// 函数: sub_562820
// 地址: 0x562820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
int32_t eax_6 = *(arg2 + 0x24)
int32_t result
void* const var_5c_1
void* var_58_1

if (eax_6 == 0)
    var_58_1 = 4
    var_5c_1 = &data_6e4b84
label_5628a8:
    sub_402110(&var_40, var_5c_1, var_58_1)
    char* eax_9 = &var_40
    
    if (var_2c u>= 0x10)
        eax_9 = var_40.d
    
    char* var_58_2 = eax_9
    int32_t var_28
    void** ecx_2 = sub_4691f0(&var_28, 0x6e4b68)
    var_4.b = 1
    int32_t edx_1 = ecx_2[5]
    int32_t edi_1 = ecx_2[4]
    void** eax_11
    
    if (edx_1 u< 0x10)
        eax_11 = ecx_2
    else
        eax_11 = *ecx_2
    
    if (edx_1 u>= 0x10)
        ecx_2 = *ecx_2
    
    int32_t var_58_3 = var_44
    sub_468ff0(arg1 + 4, *(arg1 + 8), ecx_2, eax_11 + edi_1)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    result.b = 1
else
    if (eax_6 == 1)
        var_58_1 = 2
        var_5c_1 = &data_6e4b8c
        goto label_5628a8
    
    if (eax_6 == 2)
        var_58_1 = 6
        var_5c_1 = &data_6e4b60
        goto label_5628a8
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
