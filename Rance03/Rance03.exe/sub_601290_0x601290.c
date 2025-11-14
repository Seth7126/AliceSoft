// 函数: sub_601290
// 地址: 0x601290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cc823
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct filesystem::CFile::VTable* const var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
WINDOWPLACEMENT lpwndpl
BOOL result

if (*(arg1 + 0xc4) != 0)
    lpwndpl.length = 0x2c
    result = GetWindowPlacement(arg2, &lpwndpl)

if (*(arg1 + 0xc4) == 0 || result == 0)
    result.b = 0
else
    int32_t left = lpwndpl.rcNormalPosition.left
    int32_t top = lpwndpl.rcNormalPosition.top
    int32_t eax_6 = lpwndpl.rcNormalPosition.right - left
    int32_t edi_2 = lpwndpl.rcNormalPosition.bottom - top
    var_94 = &filesystem::CFile::`vftable'
    BOOL hObject = 0xffffffff
    int32_t var_8c_1 = 0
    int32_t var_88_1 = 0
    int32_t var_c_1 = 0
    int32_t var_34
    char* eax_7 = sub_4028a0(&var_34, arg1 + 0xb4)
    var_c_1.b = 1
    char var_78
    int32_t ebx
    ebx.b = sub_604970(&var_94, sub_410a80(eax_7.b, eax_7, &var_78, "LogViewerWindowPos.sav")) == 0
    int32_t var_64
    
    if (var_64 u>= 0x10)
        j__free(var_78.d)
    
    var_c_1.b = 0
    int32_t var_64_1 = 0xf
    int32_t var_68_1 = 0
    var_78 = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    if (ebx.b != 0)
        ebx.b = 0
    else
        sub_401f60(&var_78, "CFL")
        int32_t var_a8_5 = 1
        ebx.b = sub_605320(&var_94, &var_78) == 0
        
        if (var_64_1 u>= 0x10)
            j__free(var_78.d)
        
        if (ebx.b != 0)
            ebx.b = 0
        else
            int32_t var_a8_7 = 0
            
            if (sub_604e50(&var_94) == 0)
                ebx.b = 0
            else
                int32_t left_1 = left
                
                if (sub_604e50(&var_94) == 0)
                    ebx.b = 0
                else
                    int32_t top_1 = top
                    
                    if (sub_604e50(&var_94) == 0)
                        ebx.b = 0
                    else
                        int32_t var_a8_8 = eax_6
                        
                        if (sub_604e50(&var_94) == 0)
                            ebx.b = 0
                        else
                            int32_t var_a8_9 = edi_2
                            
                            if (sub_604e50(&var_94) == 0)
                                ebx.b = 0
                            else if (sub_604a50(&var_94) == 0)
                                ebx.b = 0
                            else
                                ebx.b = 1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
