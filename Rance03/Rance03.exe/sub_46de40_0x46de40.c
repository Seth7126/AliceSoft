// 函数: sub_46de40
// 地址: 0x46de40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b949e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1a8
int32_t eax_2 = __security_cookie ^ &var_1a8
uint32_t ebx
uint32_t var_1ac = ebx
int32_t __saved_edi
int32_t var_1b8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_1a4 = 0
void** lpFileName_1
sub_40d1c0(arg1 + 8, arg2, &lpFileName_1, arg1 + 8)
int32_t var_4 = 0
int32_t* lpFileName = &lpFileName_1
int32_t var_170

if (var_170 u>= 0x10)
    lpFileName = lpFileName_1

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

if (hFindFile == 0xffffffff || (findFileData.dwFileAttributes.b & 0x10) != 0)
    ebx.b = 1
else
    struct filesystem::CFile::VTable* const var_1a0 = &filesystem::CFile::`vftable'
    int32_t var_19c_1 = 0xffffffff
    int32_t var_198_1
    __builtin_memset(&var_198_1, 0, 0x14)
    var_4.b = 2
    var_1a4 = 1
    int32_t var_190
    char eax_6 = sub_604a80(&lpFileName_1, &var_190)
    int32_t esi_1 = var_190
    int32_t var_18c
    char ecx_1
    
    if (eax_6 == 0 || esi_1 == var_18c)
        ecx_1 = 1
    else
        ecx_1 = 0
    
    int32_t var_4_1 = 1
    
    if (ecx_1 == 0)
        var_1a0 = &fileimage::CFileImageAnalyser::`vftable'
        int32_t var_19c_2 = esi_1
        int32_t var_198_2 = var_18c
        int32_t var_158_1 = 0xf
        int32_t var_15c_1 = 0
        char var_16c = 0
        var_4_1.b = 4
        
        if (sub_468d00(&var_1a0, &var_16c).b == 0)
            ebx.b = 0
        else if (sub_40c250(&var_16c, 0x6dd374).b == 0)
            ebx.b = 0
        else if (sub_468b20(&var_1a0, &var_1a4).b == 0)
            ebx.b = 0
        else
            ebx = var_1a4
            
            if (ebx u> 2)
                ebx.b = 0
            else if (sub_468b20(&var_1a0, &var_1a4).b == 0)
                ebx.b = 0
            else
                hFindFile.b = var_1a4 != 0
                *(arg1 + 4) = hFindFile.b
                
                if (ebx s< 1)
                    *(arg1 + 0x38) = 0
                label_46e037:
                    
                    if (ebx s< 2)
                        *(arg1 + 6) = 0
                        ebx.b = 1
                    else if (sub_468b20(&var_1a0, &var_1a4).b == 0)
                        ebx.b = 0
                    else
                        ebx.b = 1
                        hFindFile.b = var_1a4 != 0
                        *(arg1 + 6) = hFindFile.b
                else
                    if (sub_468b20(&var_1a0, &var_1a4).b != 0)
                        hFindFile.b = var_1a4 != 0
                        *(arg1 + 5) = hFindFile.b
                        goto label_46e037
                    
                    ebx.b = 0
        
        if (var_158_1 u>= 0x10)
            j__free(var_16c.d)
        
        int32_t var_158_2 = 0xf
        int32_t var_15c_2 = 0
        var_16c = 0
    else
        void** lpFileName_2 = &lpFileName_1
        
        if (var_170 u>= 0x10)
            lpFileName_2 = lpFileName_1
        
        void** lpFileName_3 = lpFileName_2
        sub_64b530(0x6dd348)
        ebx.b = 0
    
    if (esi_1 != 0)
        j__free(esi_1)

if (var_170 u>= 0x10)
    j__free(lpFileName_1)

hFindFile.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1a8)
return hFindFile
