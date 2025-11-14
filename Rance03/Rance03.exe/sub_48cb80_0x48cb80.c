// 函数: sub_48cb80
// 地址: 0x48cb80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baecf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_188
int32_t eax_2 = __security_cookie ^ &var_188
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpFileName_1
sub_410930(&ExceptionList, arg1, &lpFileName_1, ".flat")
int32_t var_4 = 0
int32_t* lpFileName = &lpFileName_1
int32_t var_154

if (var_154 u>= 0x10)
    lpFileName = lpFileName_1

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

struct IInterface::partsengine::CFlatData::VTable** result

if (hFindFile == 0xffffffff || (findFileData.dwFileAttributes.b & 0x10) != 0)
    result = nullptr
else
    var_188 = nullptr
    int32_t var_184_1 = 0
    int32_t var_180_1 = 0
    struct filesystem::CFile::VTable* const var_17c_1 = &filesystem::CFile::`vftable'
    int32_t var_178_1 = 0xffffffff
    int32_t var_174_1 = 0
    int32_t var_170_1 = 0
    var_4.b = 2
    bool cond:1_1 = sub_604a80(&lpFileName_1, &var_188) == 0
    var_4.b = 1
    struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = var_188
    
    if (cond:1_1 != 0)
        result = nullptr
    else
        struct IInterface::partsengine::CFlatData::VTable** eax_7 = sub_69adc6(0x88)
        struct IInterface::partsengine::CFlatData::VTable** var_16c_1 = eax_7
        var_4.b = 3
        
        if (eax_7 == 0)
            result = nullptr
        else
            result = sub_485e60(eax_7)
        
        var_4.b = 1
        
        if (sub_486450(result, edi_1, var_184_1 - edi_1) == 0)
            (*result)->__offset(0x4).d(eax_4)
            result = nullptr
    
    if (edi_1 != 0)
        j__free(edi_1)

if (var_154 u>= 0x10)
    j__free(lpFileName_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_188)
return result
