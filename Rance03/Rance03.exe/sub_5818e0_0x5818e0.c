// 函数: sub_5818e0
// 地址: 0x5818e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7180
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_28
sub_581e30(arg1, &var_28, 7)
int32_t var_4 = 0
int32_t var_18
char* result
void** ebx

if (var_18 != 0)
    char var_40[0x10]
    char* eax_5 = sub_4028a0(&var_40, arg2)
    var_4.b = 1
    int32_t* var_70
    sub_410ad0(eax_5, eax_5, &var_70, &var_28)
    var_4.b = 3
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40[0].d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40[0] = 0
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    char var_58 = 0
    sub_402110(&var_58, 0x6da713, nullptr)
    var_4.b = 4
    int32_t ecx_4
    int32_t edx_3
    result, ecx_4, edx_3 = sub_53b690(arg3, &var_70, &var_58, 1)
    var_4.b = 3
    *(arg1 + 0x3c) = result
    
    if (var_44_1 u>= 0x10)
        result, ecx_4, edx_3 = j__free(var_58.d)
    
    int32_t var_5c
    
    if (*(arg1 + 0x3c) != 0)
        ebx.b = 1
    else
        int32_t* eax_6 = &var_70
        
        if (var_5c u>= 0x10)
            eax_6 = var_70
        
        sub_59f4e0(eax_6, edx_3, ecx_4, 0x6e54d8, eax_6)
        ebx.b = 0
    
    if (var_5c u>= 0x10)
        j__free(var_70)
    
    int32_t var_5c_1 = 0xf
    int32_t var_60_1 = 0
    var_70.b = 0
else
    ebx.b = 1

int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
