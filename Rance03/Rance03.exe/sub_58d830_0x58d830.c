// 函数: sub_58d830
// 地址: 0x58d830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7db6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_180
int32_t eax_2 = __security_cookie ^ &var_180
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_58d9d0(arg1)
sub_5255b0(arg1 + 0x30)
int32_t* ecx_1 = *(arg1 + 0x2c)
*(arg1 + 4) = 0

if (ecx_1 != 0)
    *(arg1 + 4) = (**ecx_1)(eax_4)

char* eax_8 = sub_4028a0(&var_180, arg3)

if (arg1 + 8 != eax_8)
    if (*(arg1 + 0x1c) u>= 0x10)
        j__free(*(arg1 + 8))
    
    *(arg1 + 0x1c) = 0xf
    *(arg1 + 0x18) = 0
    *(arg1 + 8) = 0
    sub_4030b0(arg1 + 8, eax_8)

int32_t var_16c

if (var_16c u>= 0x10)
    j__free(var_180)

char* eax_9 = sub_4028a0(&var_180, arg2)
int32_t var_4 = 0
int32_t* lpFileName_1
sub_410a80(eax_9.b, eax_9, &lpFileName_1, "Data\3DData.red")
var_4.b = 2

if (var_16c u>= 0x10)
    j__free(var_180)

int32_t* lpFileName = &lpFileName_1
int32_t var_16c_1 = 0xf
int32_t var_154

if (var_154 u>= 0x10)
    lpFileName = lpFileName_1

int32_t var_170 = 0
var_180.b = 0
WIN32_FIND_DATAA findFileData
struct IDecompressor::nutria::CZlibDecompressor::VTable** hFindFile =
    FindFirstFileA(lpFileName, &findFileData)
void* ebx

if (hFindFile == 0xffffffff)
    ebx.b = 1
else
    FindClose(hFindFile)
    
    if ((findFileData.dwFileAttributes.b & 0x10) != 0)
        ebx.b = 1
    else if (sub_5251b0(arg1 + 0x30, &lpFileName_1).b != 0)
        ebx.b = 1
    else
        ebx.b = 0

if (var_154 u>= 0x10)
    j__free(lpFileName_1)

hFindFile.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_180)
return hFindFile
