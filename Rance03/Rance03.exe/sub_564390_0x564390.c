// 函数: sub_564390
// 地址: 0x564390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5ab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = 0xf
void* var_48 = nullptr
char var_58 = 0
sub_402110(&var_58, 0x6e4e18, 0x11)
int32_t var_4 = 0
char* esi = &var_58
char* edx = &var_58
int32_t var_5c
int32_t var_78 = var_5c

if (var_44 u>= 0x10)
    esi = var_58.d

if (var_44 u>= 0x10)
    edx = var_58.d

sub_468ff0(arg1 + 4, *(arg1 + 8), edx, var_48 + esi)
int32_t var_4_1 = 0xffffffff

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t eax_7 = *(arg2 + 0x214)
int32_t result
int32_t var_78_4

if (eax_7 == 0)
    sub_401f60(&var_58, 0x6e4e2c)
    int32_t var_4_4 = 1
    char* esi_2 = &var_58
    int32_t* edx_2 = &var_58
    int32_t var_78_5 = var_5c
    
    if (var_44 u>= 0x10)
        esi_2 = var_58.d
    
    if (var_44 u>= 0x10)
        edx_2 = var_58.d
    
    sub_468ff0(arg1 + 4, *(arg1 + 8), edx_2, var_48 + esi_2)
    int32_t var_4_5 = 0xffffffff
    
    if (var_44 u< 0x10)
        goto label_564523
    
    var_78_4 = var_58.d
label_564510:
    j__free(var_78_4)
label_564523:
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    sub_402110(&var_40, 0x6e4e14, 2)
    int32_t var_4_6 = 3
    char* esi_3 = &var_40
    int32_t* edx_3 = &var_40
    int32_t var_78_6 = var_5c
    
    if (var_2c_1 u>= 0x10)
        esi_3 = var_40.d
    
    if (var_2c_1 u>= 0x10)
        edx_3 = var_40.d
    
    sub_468ff0(arg1 + 4, *(arg1 + 8), edx_3, &esi_3[var_30_1])
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    result.b = 1
else
    if (eax_7 == 1)
        int32_t var_78_2 = **(arg2 + 0x218)
        int32_t var_28
        int32_t* ecx_2 = sub_4691f0(&var_28, 0x6e4e00)
        int32_t var_4_2 = 2
        int32_t edx_1 = ecx_2[5]
        int32_t esi_1 = ecx_2[4]
        int32_t* eax_11
        
        if (edx_1 u< 0x10)
            eax_11 = ecx_2
        else
            eax_11 = *ecx_2
        
        if (edx_1 u>= 0x10)
            ecx_2 = *ecx_2
        
        int32_t var_78_3 = var_5c
        sub_468ff0(arg1 + 4, *(arg1 + 8), ecx_2, eax_11 + esi_1)
        int32_t var_4_3 = 0xffffffff
        int32_t var_14
        
        if (var_14 u< 0x10)
            goto label_564523
        
        var_78_4 = var_28
        goto label_564510
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
