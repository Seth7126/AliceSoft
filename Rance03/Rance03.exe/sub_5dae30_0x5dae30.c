// 函数: sub_5dae30
// 地址: 0x5dae30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca83b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_188
int32_t eax_2 = __security_cookie ^ &var_188
int32_t __saved_edi
int32_t var_19c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE hFindFile

if (sub_5db290(arg1, arg3) == 0)
    int32_t var_168
    char* eax_10 = sub_4028a0(&var_168, arg2)
    int32_t var_4 = 0
    char var_180
    char* lpFileName = sub_410ad0(eax_10, eax_10, &var_180, arg3)
    
    if (*(lpFileName + 0x14) u>= 0x10)
        lpFileName = *lpFileName
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    void* ebx
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        ebx.b = findFileData.dwFileAttributes.b
        ebx.b u>>= 4
        ebx.b = not.b(ebx.b)
        ebx.b &= 1
    else
        ebx.b = 0
    
    int32_t var_16c
    
    if (var_16c u>= 0x10)
        j__free(var_180.d)
    
    int32_t var_16c_1 = 0xf
    int32_t var_170_1 = 0
    var_180 = 0
    int32_t var_154
    
    if (var_154 u>= 0x10)
        j__free(var_168)
    
    hFindFile.b = ebx.b
else
    int32_t edi_1 = *(arg1 + 0x1c)
    void** eax_6 = sub_417ed0(arg1 + 0x1c, arg3)
    char eax_8
    
    if (eax_6 != *(arg1 + 0x1c))
        eax_8 = sub_40c3a0(arg3, &eax_6[4])
    
    if (eax_6 == *(arg1 + 0x1c) || eax_8 != 0)
        hFindFile.b = *(arg1 + 0x1c) != edi_1
    else
        hFindFile.b = eax_6 != edi_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_188)
return hFindFile
