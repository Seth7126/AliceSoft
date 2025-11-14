// 函数: sub_43ac70
// 地址: 0x43ac70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b61cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1c8
int32_t eax_2 = __security_cookie ^ &var_1c8
int32_t __saved_esi
int32_t var_1d4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFilePath::VTable* const var_1c4 = &filesystem::CFilePath::`vftable'
int32_t var_1ac = 0xf
int32_t var_1b0 = 0
char var_1c0 = 0
int32_t var_c_1 = 0
sub_401ff0(&var_1c0, &data_74f9b4, 0, 0xffffffff)
sub_6047d0(&var_1c4)
bool cond:0 = *arg1 != 0
int32_t var_194 = 0xf
int32_t var_198 = 0
char var_1a8 = 0
void* ecx_2

if (cond:0)
    int32_t* ecx_3 = arg1
    void* edx_1 = ecx_3 + 1
    char i
    
    do
        i = *ecx_3
        ecx_3 += 1
    while (i != 0)
    ecx_2 = ecx_3 - edx_1
else
    ecx_2 = nullptr

sub_402110(&var_1a8, arg1, ecx_2)
var_c_1.b = 1
char var_190
char* eax_5 = sub_402a20(&var_190, &var_1a8)
var_c_1.b = 2
char var_178
char* eax_6 = sub_410a80(eax_5.b, eax_5, &var_178, ".afa")
var_c_1.b = 3
sub_604730(&var_1c4)
sub_403110(&var_1c0, eax_6, nullptr, 0xffffffff)
int32_t var_164

if (var_164 u>= 0x10)
    j__free(var_178.d)

int32_t var_164_1 = 0xf
int32_t var_168 = 0
var_178 = 0
int32_t var_17c

if (var_17c u>= 0x10)
    j__free(var_190.d)

int32_t var_17c_1 = 0xf
int32_t var_180 = 0
var_190 = 0

if (var_194 u>= 0x10)
    j__free(var_1a8.d)

char* lpFileName = &var_1c0

if (var_1ac u>= 0x10)
    lpFileName = var_1c0.d

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
int32_t ebx

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    ebx.b = findFileData.dwFileAttributes.b
    ebx.b u>>= 4
    ebx.b = not.b(ebx.b)
    ebx.b &= 1
else
    ebx.b = 0

var_1c4 = &filesystem::CFilePath::`vftable'

if (var_1ac u>= 0x10)
    j__free(var_1c0.d)

hFindFile.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1c8)
return hFindFile
