// 函数: sub_498520
// 地址: 0x498520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (sub_5f2400(arg2).b != 0)
    struct storage::CStorageFile::VTable* const var_4c = &storage::CStorageFile::`vftable'
    struct filesystem::CFile::VTable* const var_48 = &filesystem::CFile::`vftable'
    BOOL hObject = 0xffffffff
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_8_1 = 0
    int32_t ebx
    
    if (sub_5f21b0(&var_4c, arg2) != 0)
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        int32_t var_64_2 = 4
        var_8_1.b = 1
        
        if (sub_67f3c0(&var_48, &var_30) == 0)
            ebx.b = 0
        else
            int32_t var_34
            
            if (sub_407560(&var_30, "SFSF") == 0)
                ebx.b = 0
            else
                int32_t var_38
                
                if (sub_5f2370(&var_4c, &var_34) == 0 || var_34 != 0)
                    ebx.b = 0
                else if (sub_5f2370(&var_4c, &var_38) == 0)
                    ebx.b = 0
                else
                    int32_t eax_8 = var_38
                    
                    if (eax_8 u> 2)
                        ebx.b = 0
                    else
                        *(arg1 + 4) = eax_8
                        ebx.b = 1
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        int32_t var_1c_2 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
    else
        ebx.b = 0
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    result.b = ebx.b
else
    *(arg1 + 4) = 0
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
