// 函数: sub_5e8dd0
// 地址: 0x5e8dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb666
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_188
int32_t eax_2 = __security_cookie ^ &var_188
int32_t __saved_edi
int32_t var_198 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
PSTR lpFileName

if (arg2[5] u< 0x10)
    lpFileName = arg2
else
    lpFileName = *arg2

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

if (hFindFile == 0xffffffff || (findFileData.dwFileAttributes.b & 0x10) != 0)
    *(arg1 + 4) = 0
    hFindFile.b = 1
else
    struct filesystem::CFile::VTable* const var_184 = &filesystem::CFile::`vftable'
    HANDLE hObject = 0xffffffff
    int32_t var_17c_1 = 0
    int32_t var_178_1 = 0
    int32_t var_4 = 0
    int32_t ebx
    
    if (sub_6049e0(&var_184, arg2) != 0)
        int32_t var_158_1 = 0xf
        int32_t var_15c_1 = 0
        char var_16c = 0
        var_4.b = 1
        
        if (sub_605120(&var_184, &var_16c, 4) == 0)
            ebx.b = 0
        else
            int32_t var_174
            
            if (sub_40c250(&var_16c, "SFSF") == 0)
                ebx.b = 0
            else
                int32_t var_170
                
                if (sub_604ee0(&var_184, &var_174) == 0 || var_174 != 0)
                    ebx.b = 0
                else if (sub_604ee0(&var_184, &var_170) == 0)
                    ebx.b = 0
                else
                    int32_t eax_10 = var_170
                    
                    if (eax_10 u> 2)
                        ebx.b = 0
                    else
                        *(arg1 + 4) = eax_10
                        ebx.b = 1
        
        if (var_158_1 u>= 0x10)
            j__free(var_16c.d)
        
        int32_t var_158_2 = 0xf
        int32_t var_15c_2 = 0
        var_16c = 0
    else
        ebx.b = 0
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hFindFile.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_188)
return hFindFile
