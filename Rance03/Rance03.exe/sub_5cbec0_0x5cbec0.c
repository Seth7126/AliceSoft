// 函数: sub_5cbec0
// 地址: 0x5cbec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9ea3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_70 = 0xf
int32_t var_74 = 0
var_84 = 0
int32_t var_4 = 0
int32_t var_58 = 0xf
int32_t var_5c = 0
int32_t var_6c[0x4]
var_6c[0].b = 0
var_4.b = 1
char result = sub_5cea10(arg1, &var_84, "system.ResumeLoad")

if (result != 0)
    result = sub_5cea10(arg1, &var_6c, "system.ResumeLoad")
    
    if (result != 0)
        char var_28
        sub_5c0db0(arg1, &var_28)
        struct sys43vm::CResume::VTable* var_54 = &sys43vm::CResume::`vftable'
        int32_t var_50
        __builtin_memset(&var_50, 0, 0x11)
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        var_4.b = 3
        char eax_6
        int32_t* ecx_2
        int32_t edx_1
        eax_6, ecx_2, edx_1 = sub_5d8530(&var_28, &var_84, arg1, &var_6c, arg1 + 0x1e0)
        int32_t var_44
        
        if (eax_6 != 0)
            sub_5ddf10(arg1 + 0x220, 0)
            sub_5d76e0(arg1 + 0x16c)
        else if (var_44 == 1)
            int32_t* ecx_5 = *(arg1 + 0x2c)
            
            if (ecx_5 == 0)
            label_5cc057:
                char* eax_12 = &var_84
                
                if (var_70 u>= 0x10)
                    eax_12 = var_84.d
                
                char* var_90_5 = eax_12
                sub_5c28d0(eax_12, edx_1, ecx_5, arg1, 0x6e90f0)
            else
                char eax_10
                eax_10, edx_1, ecx_5 = (**ecx_5)(eax_4)
                
                if (eax_10 == 0)
                    goto label_5cc057
                
                char var_40
                char* ecx_6 = &var_40
                char* eax_11 = &var_84
                
                if (var_2c_1 u>= 0x10)
                    ecx_6 = var_40.d
                
                char* var_90_4 = ecx_6
                
                if (var_70 u>= 0x10)
                    eax_11 = var_84.d
                
                char* var_94_3 = eax_11
                sub_5c28d0(eax_11, edx_1, ecx_6, arg1, 0x6e9048)
        else
            char* eax_7 = &var_84
            
            if (var_70 u>= 0x10)
                eax_7 = var_84.d
            
            char* var_90_3 = eax_7
            sub_5c24e0(eax_7, edx_1, ecx_2, arg1, 0x6e9098)
        result = sub_5d7ba0(&var_54)
        int32_t var_14
        
        if (var_14 u>= 0x10)
            result = j__free(var_28.d)
        
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        var_28 = 0

if (var_58 u>= 0x10)
    result = j__free(var_6c[0])

int32_t var_58_1 = 0xf
int32_t var_5c_1 = 0
__builtin_memset(&var_6c, 0, 1)

if (var_70 u>= 0x10)
    result = j__free(var_84.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return result
