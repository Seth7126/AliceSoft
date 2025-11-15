// 函数: sub_67d870
// 地址: 0x67d870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746880
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
WINDOWPLACEMENT lpwndpl
BOOL result

if (*(arg1 + 0xc8) != 0)
    lpwndpl.length = 0x2c
    result = GetWindowPlacement(arg2, &lpwndpl)

if (*(arg1 + 0xc8) == 0 || result == 0)
    result.b = 0
else
    int32_t left = lpwndpl.rcNormalPosition.left
    int32_t top = lpwndpl.rcNormalPosition.top
    int32_t eax_4 = lpwndpl.rcNormalPosition.right - left
    int32_t edi_2 = lpwndpl.rcNormalPosition.bottom - top
    struct filesystem::CFile::VTable* const var_80 = &filesystem::CFile::`vftable'
    BOOL hObject = 0xffffffff
    int32_t var_78_1 = 0
    int32_t var_74_1 = 0
    int32_t var_8_1 = 0
    void* var_44
    char* eax_5 = sub_404f20(&var_44, arg1 + 0xb8)
    var_8_1.b = 1
    char var_2c[0x10]
    int32_t ebx
    ebx.b = sub_67ece0(&var_80, sub_4176f0(eax_5.b, eax_5, &var_2c, "LogViewerWindowPos.sav")) == 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c[0].d, var_18 + 1, 1)
    
    var_8_1.b = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c[0] = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    if (ebx.b != 0)
        ebx.b = 0
    else
        sub_403360(&var_44, "CFL")
        int32_t var_a0_3 = 1
        ebx.b = sub_67f5c0(&var_80, &var_44) == 0
        sub_403320(&var_44)
        
        if (ebx.b != 0)
            ebx.b = 0
        else
            int32_t var_a0_4 = 0
            
            if (sub_67f120(&var_80) == 0)
                ebx.b = 0
            else
                int32_t left_1 = left
                
                if (sub_67f120(&var_80) == 0)
                    ebx.b = 0
                else
                    int32_t top_1 = top
                    
                    if (sub_67f120(&var_80) == 0)
                        ebx.b = 0
                    else
                        int32_t var_a0_5 = eax_4
                        
                        if (sub_67f120(&var_80) == 0)
                            ebx.b = 0
                        else
                            int32_t var_a0_6 = edi_2
                            
                            if (sub_67f120(&var_80) == 0)
                                ebx.b = 0
                            else if (sub_67edc0(&var_80) == 0)
                                ebx.b = 0
                            else
                                ebx.b = 1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
