// 函数: sub_568630
// 地址: 0x568630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5f08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
int32_t var_4 = 0
int32_t eax_5 = arg2[1]
int32_t result
void* const var_78_1
void* var_74_1

if (eax_5 == 0)
    var_74_1 = 4
    var_78_1 = &data_6e4cd8
label_5686ba:
    sub_402110(&var_5c, var_78_1, var_74_1)
    int32_t var_2c
    void** eax_9 = sub_5636b0(&var_2c, &arg2[2])
    var_4.b = 1
    char* ecx_2 = &var_5c
    
    if (var_48 u>= 0x10)
        ecx_2 = var_5c.d
    
    if (eax_9[5] u>= 0x10)
        eax_9 = *eax_9
    
    char* var_74_3 = ecx_2
    void** var_78_3 = eax_9
    int32_t var_7c_1 = *arg2
    char var_44
    void** ecx_3 = sub_4691f0(&var_44, "\t\t{ %d, %s, %s }")
    var_4.b = 2
    int32_t edx_1 = ecx_3[5]
    int32_t esi_1 = ecx_3[4]
    void** eax_11
    
    if (edx_1 u< 0x10)
        eax_11 = ecx_3
    else
        eax_11 = *ecx_3
    
    if (edx_1 u>= 0x10)
        ecx_3 = *ecx_3
    
    int32_t var_74_4 = var_60
    sub_468ff0(arg1 + 4, *(arg1 + 8), ecx_3, eax_11 + esi_1)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44.d)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    if (var_48 u>= 0x10)
        j__free(var_5c.d)
    
    result.b = 1
else
    if (eax_5 == 1)
        var_74_1 = 4
        var_78_1 = &data_6e4cbc
        goto label_5686ba
    
    if (eax_5 == 2)
        var_74_1 = 8
        var_78_1 = &data_6e4cc4
        goto label_5686ba
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
