// 函数: sub_581a80
// 地址: 0x581a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c71e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_40
sub_581e30(arg1, &var_40, 8)
int32_t var_4 = 0
int32_t var_30
char* result
void* ebx

if (var_30 != 0)
    char var_70[0x10]
    char* eax_5 = sub_4028a0(&var_70, arg2)
    var_4.b = 1
    int32_t* var_88
    sub_410ad0(eax_5, eax_5, &var_88, &var_40)
    var_4.b = 3
    int32_t var_5c
    
    if (var_5c u>= 0x10)
        j__free(var_70[0].d)
    
    int32_t var_5c_1 = 0xf
    int32_t var_60_1 = 0
    var_70[0] = 0
    char var_58
    sub_581e30(arg1, &var_58, 0xb)
    int32_t var_8c_1 = 0xf
    int32_t var_90_1 = 0
    char var_a0 = 0
    var_4.b = 5
    int32_t var_48
    
    if (var_48 != 0)
        int32_t var_28
        char* eax_6 = sub_4028a0(&var_28, arg2)
        var_4.b = 6
        char* eax_7 = sub_410ad0(eax_6, eax_6, &var_70, &var_58)
        
        if (&var_a0 != eax_7)
            if (var_8c_1 u>= 0x10)
                j__free(var_a0.d)
            
            var_8c_1 = 0xf
            var_90_1 = 0
            var_a0 = 0
            sub_4030b0(&var_a0, eax_7)
        
        if (var_5c_1 u>= 0x10)
            j__free(var_70[0].d)
        
        var_4.b = 5
        int32_t var_5c_2 = 0xf
        int32_t var_60_2 = 0
        var_70[0] = 0
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28)
    
    int32_t ecx_7
    int32_t edx_5
    result, ecx_7, edx_5 = sub_53b970(arg3, &var_88, &var_a0)
    *(arg1 + 0x40) = result
    int32_t var_74
    
    if (result != 0)
        ebx.b = 1
    else
        int32_t* eax_8 = &var_88
        
        if (var_90_1 == 0)
            if (var_74 u>= 0x10)
                eax_8 = var_88
            
            sub_59f4e0(eax_8, edx_5, ecx_7, 0x6e5470, eax_8)
            ebx.b = 0
        else
            char* ecx_8 = &var_a0
            
            if (var_8c_1 u>= 0x10)
                ecx_8 = var_a0.d
            
            char* var_b8_9 = ecx_8
            
            if (var_74 u>= 0x10)
                eax_8 = var_88
            
            sub_59f4e0(eax_8, edx_5, ecx_8, 0x6e54a0, eax_8)
            ebx.b = 0
    
    if (var_8c_1 u>= 0x10)
        j__free(var_a0.d)
    
    int32_t var_8c_2 = 0xf
    int32_t var_90_2 = 0
    var_a0 = 0
    int32_t var_44
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
    
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    var_58 = 0
    
    if (var_74 u>= 0x10)
        j__free(var_88)
    
    int32_t var_74_1 = 0xf
    int32_t var_78_1 = 0
    var_88.b = 0
else
    ebx.b = 1

int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return result
