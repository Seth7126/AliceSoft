// 函数: sub_4c8490
// 地址: 0x4c8490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be9a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xa8) != 0xffffffff)
    struct partsengine::CClipboardWrapper::VTable* eax_6 = sub_4c75f0(arg1 + 0xb8)
    struct partsengine::CClipboardWrapper::VTable* const var_44
    int32_t* ecx = &var_44
    bool cond:1_1 = eax_6 s>= *(arg1 + 0xa8)
    int32_t* eax_7 = &var_44
    var_44 = eax_6
    
    if (cond:1_1)
        ecx = arg1 + 0xa8
    
    if (*(arg1 + 0xa8) s>= eax_6)
        eax_7 = arg1 + 0xa8
    
    int32_t var_58_2 = *eax_7
    int32_t var_5c_1 = *ecx
    char var_40
    sub_4c6fe0(arg1, &var_40)
    int32_t var_4 = 0
    int32_t var_28
    char* eax_8 = sub_4c82e0(&var_28, &var_40)
    int32_t var_2c
    
    if (&var_40 != eax_8)
        if (var_2c u>= 0x10)
            j__free(var_40.d)
        
        var_2c = 0xf
        int32_t var_30_1 = 0
        var_40 = 0
        sub_4030b0(&var_40, eax_8)
    
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    var_44 = &partsengine::CClipboardWrapper::`vftable'
    var_4.b = 1
    result = sub_47e4a0(&var_40)
    
    if (var_2c u>= 0x10)
        result = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
