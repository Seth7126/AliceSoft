// 函数: sub_5cbc60
// 地址: 0x5cbc60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9e4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x234) -= 4
int32_t ebp = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
var_88 = **(arg1 + 0x234)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t var_58 = 0xf
int32_t var_5c = 0
int32_t var_6c[0x4]
__builtin_memset(&var_6c, 0, 1)
var_4.b = 1
char result = sub_5cea10(arg1, &var_28, "system.ResumeSave")

if (result != 0)
    result = sub_5cea10(arg1, &var_6c, "system.ResumeSave")
    
    if (result != 0)
        int32_t* var_84
        sub_5c0db0(arg1, &var_84)
        var_4.b = 2
        int32_t var_70
        struct sys43vm::CResume::VTable* const var_54
        
        if (sub_605570(&var_84) == 0)
            int32_t* eax_9 = &var_84
            
            if (var_70 u>= 0x10)
                eax_9 = var_84
            
            sub_401f60(&var_54, eax_9)
            var_4.b = 3
            sub_607ce0(&var_54)
            char var_40
            
            if (var_40.d u>= 0x10)
                j__free(var_54)
        
        var_54 = &sys43vm::CResume::`vftable'
        int32_t var_50
        __builtin_memset(&var_50, 0, 0x11)
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        var_4.b = 4
        var_4.b = 2
        int32_t ebx
        ebx.b = sub_5d7c00(&var_54, &var_84, &var_28, arg1, &var_6c, arg1 + 0x1e0) == 0
        int32_t var_a0_5 = sub_5d7ba0(&var_54)
        int32_t eax_12
        eax_12.b = ebx.b == 0
        result = sub_5cead0(arg1, var_88, ebp, eax_12)
        
        if (result != 0)
            result = sub_5ddf10(arg1 + 0x220, 1)
        
        if (var_70 u>= 0x10)
            result = j__free(var_84)
        
        int32_t var_70_1 = 0xf
        int32_t var_74_1 = 0
        var_84.b = 0

if (var_58 u>= 0x10)
    result = j__free(var_6c[0])

int32_t var_58_1 = 0xf
int32_t var_5c_1 = 0
__builtin_memset(&var_6c, 0, 1)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return result
