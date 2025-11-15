// 函数: sub_67da50
// 地址: 0x67da50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7468c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (*(arg1 + 0xc8) != 0)
    struct filesystem::CFile::VTable* const var_70 = &filesystem::CFile::`vftable'
    BOOL hObject = 0xffffffff
    int32_t var_68_1 = 0
    int32_t var_64_1 = 0
    int32_t var_8_1 = 0
    void* var_5c
    char* eax_3 = sub_404f20(&var_5c, arg1 + 0xb8)
    var_8_1.b = 1
    char var_44[0x10]
    bool cond:1_1 =
        sub_67ed50(&var_70, sub_4176f0(eax_3.b, eax_3, &var_44, "LogViewerWindowPos.sav")) == 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44[0].d, var_30 + 1, 1)
    
    var_8_1.b = 0
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44[0] = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    uint8_t* ebx
    
    if (cond:1_1 == 0)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        var_8_1.b = 2
        
        if (sub_67f200(&var_70, &var_2c) == 0)
            ebx.b = 0
        else
            int32_t var_74
            
            if (sub_407560(&var_2c, 0x76edf4) == 0)
                ebx.b = 0
            else if (sub_67f1b0(&var_70, &var_74) == 0 || var_74 != 0)
                ebx.b = 0
            else if (sub_67f1b0(&var_70, arg2) == 0)
                ebx.b = 0
            else if (sub_67f1b0(&var_70, arg3) == 0)
                ebx.b = 0
            else if (sub_67f1b0(&var_70, arg4) == 0)
                ebx.b = 0
            else if (sub_67f1b0(&var_70, arg5) == 0)
                ebx.b = 0
            else if (sub_67edc0(&var_70) == 0)
                ebx.b = 0
            else
                ebx.b = 1
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
    else
        ebx.b = 0
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
