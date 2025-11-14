// 函数: sub_4df9f0
// 地址: 0x4df9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0120
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x98) != 0xffffffff)
    struct partsengine::CClipboardWrapper::VTable* eax_6 = sub_4c75f0(arg1 + 0xa8)
    struct partsengine::CClipboardWrapper::VTable* const var_2c
    int32_t* ecx = &var_2c
    bool cond:1_1 = eax_6 s>= *(arg1 + 0x98)
    int32_t* eax_7 = &var_2c
    var_2c = eax_6
    
    if (cond:1_1)
        ecx = arg1 + 0x98
    
    if (*(arg1 + 0x98) s>= eax_6)
        eax_7 = arg1 + 0x98
    
    int32_t var_40_2 = *eax_7
    int32_t var_44_1 = *ecx
    void* var_28
    sub_4df4b0(arg1, &var_28)
    int32_t var_4 = 0
    var_2c = &partsengine::CClipboardWrapper::`vftable'
    var_4.b = 1
    result = sub_47e4a0(&var_28)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
