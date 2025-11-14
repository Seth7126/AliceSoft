// 函数: sub_5daf90
// 地址: 0x5daf90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca87b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** hFindFile_1
int32_t eax_2 = __security_cookie ^ &hFindFile_1
int32_t __saved_edi
int32_t var_194 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* hFindFile

if (sub_5db290(arg1, arg3) == 0)
    int32_t var_168
    int32_t* eax_9 = sub_4028a0(&var_168, arg2)
    int32_t var_4 = 0
    PSTR lpFileName_2
    sub_410ad0(eax_9, eax_9, &lpFileName_2, arg3)
    int32_t var_154
    
    if (var_154 u>= 0x10)
        j__free(var_168)
    
    PSTR lpFileName = &lpFileName_2
    int32_t var_16c
    
    if (var_16c u>= 0x10)
        lpFileName = lpFileName_2
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile == 0xffffffff)
    label_5db0c6:
        
        if (var_16c u< 0x10)
            hFindFile.b = 1
        else
            j__free(lpFileName_2)
            hFindFile.b = 1
    else
        FindClose(hFindFile)
        
        if ((findFileData.dwFileAttributes.b & 0x10) != 0)
            goto label_5db0c6
        
        PSTR lpFileName_1 = &lpFileName_2
        
        if (var_16c u>= 0x10)
            lpFileName_1 = lpFileName_2
        
        if (DeleteFileA(lpFileName_1) != 0)
            goto label_5db0c6
        
        if (var_16c u>= 0x10)
            j__free(lpFileName_2)
        
        hFindFile.b = 0
else
    void** hFindFile_2 = sub_417ed0(arg1 + 0x1c, arg3)
    char eax_7
    
    if (hFindFile_2 != *(arg1 + 0x1c))
        eax_7 = sub_40c3a0(arg3, &hFindFile_2[4])
    
    if (hFindFile_2 == *(arg1 + 0x1c) || eax_7 != 0)
        hFindFile_1 = *(arg1 + 0x1c)
    else
        hFindFile_1 = hFindFile_2
    
    hFindFile = hFindFile_1
    
    if (hFindFile != *(arg1 + 0x1c))
        sub_4580f0(arg1 + 0x1c, &hFindFile_1, hFindFile)
    
    hFindFile.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &hFindFile_1)
return hFindFile
