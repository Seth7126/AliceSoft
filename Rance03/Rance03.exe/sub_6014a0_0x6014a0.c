// 函数: sub_6014a0
// 地址: 0x6014a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc878
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0xc4) != 0)
    struct filesystem::CFile::VTable* const var_6c = &filesystem::CFile::`vftable'
    struct _EXCEPTION_REGISTRATION_RECORD** hObject = 0xffffffff
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0
    int32_t var_4 = 0
    int32_t var_28
    char* eax_5 = sub_4028a0(&var_28, arg1 + 0xb4)
    var_4.b = 1
    char var_40
    bool var_6d_1 =
        sub_6049e0(&var_6c, sub_410a80(eax_5.b, eax_5, &var_40, "LogViewerWindowPos.sav")) == 0
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    var_4.b = 0
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    uint8_t* ebx
    
    if (var_6d_1 == 0)
        int32_t var_44_1 = 0xf
        int32_t var_48_1 = 0
        char var_58 = 0
        var_4.b = 2
        
        if (sub_604f30(&var_6c, &var_58) == 0)
            ebx.b = 0
        else
            int32_t var_5c
            
            if (sub_40c250(&var_58, 0x6ebb88) == 0)
                ebx.b = 0
            else if (sub_604ee0(&var_6c, &var_5c) == 0 || var_5c != 0)
                ebx.b = 0
            else if (sub_604ee0(&var_6c, arg2) == 0)
                ebx.b = 0
            else if (sub_604ee0(&var_6c, arg3) == 0)
                ebx.b = 0
            else if (sub_604ee0(&var_6c, arg4) == 0)
                ebx.b = 0
            else if (sub_604ee0(&var_6c, arg5) == 0)
                ebx.b = 0
            else if (sub_604a50(&var_6c) == 0)
                ebx.b = 0
            else
                ebx.b = 1
        
        if (var_44_1 u>= 0x10)
            j__free(var_58.d)
        
        int32_t var_44_2 = 0xf
        int32_t var_48_2 = 0
        var_58 = 0
    else
        ebx.b = 0
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return result
