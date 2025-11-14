// 函数: sub_4e5f00
// 地址: 0x4e5f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c06ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct filesystem::CFile::VTable* const var_198
int32_t eax_2 = __security_cookie ^ &var_198
int32_t ebx
int32_t var_19c = ebx
int32_t __saved_edi
int32_t var_1ac = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
arg3[1] = *arg3

if (*(arg1 + 0x38) != 0)
    char* lpFileName = sub_4e59c0(arg1, &var_198, esi)
    
    if (*(lpFileName + 0x14) u>= 0x10)
        lpFileName = *lpFileName
    
    WIN32_FIND_DATAA findFileData
    HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        ebx.b = findFileData.dwFileAttributes.b
        ebx.b u>>= 4
        ebx.b = not.b(ebx.b)
        ebx.b &= 1
    else
        ebx.b = 0
    
    int32_t var_184
    
    if (var_184 u>= 0x10)
        j__free(var_198)

char result
int32_t var_180
int32_t var_16c

if (*(arg1 + 0x38) == 0 || ebx.b == 0)
    if (sub_4e6110(arg1, esi, arg3) == 0)
        if (*(arg1 + 0x38) != 0)
            ebx.b = sub_605500(sub_4e5b60(arg1, &var_180, esi))
            
            if (var_16c u>= 0x10)
                j__free(var_180)
        
        if (*(arg1 + 0x38) == 0 || ebx.b == 0)
            if (esi[5] u>= 0x10)
                esi = *esi
            
            int32_t* var_1b0_14 = esi
            sub_455910(0x6e1efc)
            result = 0
        else
            int32_t var_168
            char* eax_9 = sub_4e5b60(arg1, &var_168, esi)
            int32_t var_4_1 = 2
            var_198 = &filesystem::CFile::`vftable'
            int32_t var_194_2 = 0xffffffff
            int32_t var_190_2 = 0
            int32_t var_18c_2 = 0
            var_4_1.b = 3
            ebx.b = sub_604a80(eax_9, arg3)
            int32_t var_154
            
            if (var_154 u< 0x10)
                result = ebx.b
            else
                j__free(var_168)
                result = ebx.b
    else
        result = 1
else
    char* eax_6 = sub_4e59c0(arg1, &var_180, esi)
    int32_t var_4 = 0
    var_198 = &filesystem::CFile::`vftable'
    int32_t var_194_1 = 0xffffffff
    int32_t var_190_1 = 0
    int32_t var_18c_1 = 0
    var_4.b = 1
    ebx.b = sub_604a80(eax_6, arg3)
    
    if (var_16c u>= 0x10)
        j__free(var_180)
    
    result = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_198)
return result
