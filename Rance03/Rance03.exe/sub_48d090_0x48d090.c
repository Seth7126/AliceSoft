// 函数: sub_48d090
// 地址: 0x48d090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bafac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_194
int32_t eax_2 = __security_cookie ^ &var_194
int32_t __saved_edi
int32_t var_1a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result = *arg3
arg3[1] = result

if (*(arg1 + 8) != 0)
    int32_t* lpFileName_1
    sub_410930(result, arg2, &lpFileName_1, ".wav")
    int32_t var_4 = 0
    int32_t* lpFileName = &lpFileName_1
    int32_t var_154
    
    if (var_154 u>= 0x10)
        lpFileName = lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
    int32_t ebx
    
    if (hFindFile == 0xffffffff)
    label_48d17a:
        char var_180
        sub_410930(hFindFile, arg2, &var_180, ".ogg")
        var_4.b = 2
        
        if (sub_605500(&var_180).b == 0)
            ebx.b = 0
        else
            struct filesystem::CFile::VTable* const var_190_2 = &filesystem::CFile::`vftable'
            int32_t var_18c_2 = 0xffffffff
            int32_t var_188_2 = 0
            int32_t var_184_2 = 0
            var_4.b = 3
            ebx.b = sub_604a80(&var_180, arg3).b
        
        int32_t var_16c
        
        if (var_16c u>= 0x10)
            j__free(var_180.d)
        
        int32_t var_16c_1 = 0xf
        int32_t var_170_1 = 0
        var_180 = 0
    else
        hFindFile = FindClose(hFindFile)
        
        if ((findFileData.dwFileAttributes.b & 0x10) != 0)
            goto label_48d17a
        
        struct filesystem::CFile::VTable* const var_190_1 = &filesystem::CFile::`vftable'
        int32_t var_18c_1 = 0xffffffff
        int32_t var_188_1 = 0
        int32_t var_184_1 = 0
        var_4.b = 1
        ebx.b = sub_604a80(&lpFileName_1, arg3).b
    
    if (var_154 u>= 0x10)
        j__free(lpFileName_1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_194)
return result
