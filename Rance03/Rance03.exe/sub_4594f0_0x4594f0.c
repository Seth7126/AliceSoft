// 函数: sub_4594f0
// 地址: 0x4594f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7e57
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_180
int32_t eax_2 = __security_cookie ^ &var_180
int32_t __saved_edi
int32_t var_194 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpFileName_1 = arg3
sub_402110(arg1 + 4, 0x6da15a, nullptr)
sub_402110(arg1 + 0x1c, 0x6da15f, nullptr)
sub_402110(arg1 + 0x34, 0x6da15b, nullptr)
PSTR lpFileName

if (lpFileName_1[5] u< 0x10)
    lpFileName = lpFileName_1
else
    lpFileName = *lpFileName_1

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile == 0xffffffff)
label_4596e7:
    
    if (arg1 + 4 != lpFileName_1)
        sub_401ff0(arg1 + 4, lpFileName_1, 0, 0xffffffff)
    
    hFindFile.b = 1
else
    FindClose(hFindFile)
    
    if ((findFileData.dwFileAttributes.b & 0x10) != 0)
        goto label_4596e7
    
    HANDLE hFindFile_1 = nullptr
    int32_t var_170_1 = 0
    int32_t var_16c_1 = 0
    int32_t var_4 = 0
    struct filesystem::CFile::VTable* const var_168 = &filesystem::CFile::`vftable'
    int32_t var_164_1 = 0xffffffff
    int32_t var_160_1 = 0
    int32_t var_15c_1 = 0
    var_4.b = 1
    var_4.b = 0
    int32_t var_154
    
    if (sub_604a80(lpFileName_1, &hFindFile_1) != 0)
        struct exfile::CEXBinaryAnalyser::VTable* const var_17c =
            &exfile::CEXBinaryAnalyser::`vftable'
        void* var_178_1 = arg1 + 0x4c
        int32_t var_198_5 = arg2
        var_4.b = 3
        
        if (sub_459f10(&var_17c, &hFindFile_1) != 0)
            int32_t var_4_1 = 0xffffffff
            hFindFile = hFindFile_1
            var_17c = &exfile::CEXBinaryAnalyser::`vftable'
            
            if (hFindFile != 0)
                j__free(hFindFile)
            
            goto label_4596e7
        
        sub_401f60(&var_168, 0x6db9e8)
        var_4.b = 4
        sub_456a00(arg1 + 0x4c, &var_168)
        
        if (var_154 u>= 0x10)
            j__free(var_168)
        
        var_17c = &exfile::CEXBinaryAnalyser::`vftable'
    else
        if (lpFileName_1[5] u>= 0x10)
            lpFileName_1 = *lpFileName_1
        
        int32_t* lpFileName_2 = lpFileName_1
        var_4.b = 2
        sub_456a00(arg1 + 0x4c, sub_4691f0(&var_168, 0x6dba18))
        
        if (var_154 u>= 0x10)
            j__free(var_168)
    hFindFile = hFindFile_1
    
    if (hFindFile != 0)
        j__free(hFindFile)
    
    hFindFile.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_180)
return hFindFile
