// 函数: sub_699f10
// 地址: 0x699f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_69c
int32_t eax_1 = __security_cookie ^ &var_69c
HINSTANCE ebx = arg1
int32_t edi
int32_t var_6a8 = edi
HINSTANCE var_694 = ebx

if (data_75d549 == 0)
    if (CoInitializeEx(nullptr, 0) s< 0)
        sub_64b530(0x703c80)
    else
        data_75d549 = 1

int32_t var_5f4 = 0xf
int32_t var_5f8 = 0
char var_608 = 0
sub_402110(&var_608, "4aluoi@64sdfg354di87sd6f5g4s8e46zd5f4gs987gas.2f1", 0x31)
sub_401ff0(&data_74f994, &var_608, 0, 0xffffffff)
char var_5d8 = 0
char var_5d7[0x13f]
_memset(&var_5d7, 0, 0x104)
GetCurrentDirectoryA(0x104, &var_5d8)
bool cond:1 = var_5d8 != 0
int32_t var_5dc = 0xf
int32_t var_5e0 = 0
char var_5f0 = 0
void* ecx_1

if (cond:1)
    char* ecx_2 = &var_5d8
    char i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    ecx_1 = ecx_2 - &var_5d7
else
    ecx_1 = nullptr

sub_402110(&var_5f0, &var_5d8, ecx_1)
sub_401ff0(&data_74f9b4, &var_5f0, 0, 0xffffffff)

if (var_5dc u>= 0x10)
    j__free(var_5f0.d)

struct filesystem::CFilePath::VTable* const var_674 = &filesystem::CFilePath::`vftable'
int32_t var_65c = 0xf
int32_t var_660 = 0
char var_670 = 0
sub_401ff0(&var_670, &data_74f9b4, 0, 0xffffffff)
sub_6047d0(&var_674)
int32_t var_678 = 0xf
int32_t var_67c = 0
char var_68c = 0
sub_402110(&var_68c, "AliceStart.ini", 0xe)
sub_604730(&var_674)
sub_403110(&var_670, &var_68c, nullptr, 0xffffffff)

if (var_678 u>= 0x10)
    j__free(var_68c.d)

char* lpFileName = &var_670

if (var_65c u>= 0x10)
    lpFileName = var_670.d

HANDLE hFindFile = FindFirstFileA(lpFileName, &var_5d8)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

if (hFindFile == 0xffffffff || (var_5d8 & 0x10) != 0)
    struct filesystem::CFilePath::VTable* const var_658 = &filesystem::CFilePath::`vftable'
    int32_t var_640_1 = 0xf
    int32_t var_644_1 = 0
    char var_654_1 = 0
    sub_604190(&var_658)
    int32_t var_620
    char* eax_5 = sub_604600(&var_658, &var_620)
    char* lpFileName_1 = sub_410a80(eax_5.b, eax_5, &var_68c, "\AliceStart.ini")
    
    if (*(lpFileName_1 + 0x14) u>= 0x10)
        lpFileName_1 = *lpFileName_1
    
    HANDLE hFindFile_1 = FindFirstFileA(lpFileName_1, &var_5d8)
    
    if (hFindFile_1 != 0xffffffff)
        FindClose(hFindFile_1)
        ebx.b = var_5d8
        ebx.b u>>= 4
        ebx.b = not.b(ebx.b)
        ebx.b &= 1
    else
        ebx.b = 0
    
    if (var_678 u>= 0x10)
        j__free(var_68c.d)
    
    int32_t var_678_1 = 0xf
    int32_t var_67c_1 = 0
    var_68c = 0
    int32_t var_60c
    
    if (var_60c u>= 0x10)
        j__free(var_620)
    
    if (ebx.b != 0)
        char* lpPathName = sub_604600(&var_658, &var_620)
        
        if (*(lpPathName + 0x14) u>= 0x10)
            lpPathName = *lpPathName
        
        SetCurrentDirectoryA(lpPathName)
        
        if (var_60c u>= 0x10)
            j__free(var_620)
        
        char* eax_6 = sub_604600(&var_658, &var_620)
        
        if (eax_6 != &data_74f9b4)
            sub_401ff0(&data_74f9b4, eax_6, 0, 0xffffffff)
        
        if (var_60c u>= 0x10)
            j__free(var_620)
    
    var_658 = &filesystem::CFilePath::`vftable'
    
    if (var_640_1 u>= 0x10)
        j__free(var_654_1.d)
    
    ebx = var_694

var_674 = &filesystem::CFilePath::`vftable'

if (var_65c u>= 0x10)
    j__free(var_670.d)

struct win32only::CAliceRunPatch::VTable* var_63c
sub_696d30(&var_63c)
int32_t* lpFileName_3
int32_t* lpFileName_2 = &lpFileName_3
int32_t var_624

if (var_624 u>= 0x10)
    lpFileName_2 = lpFileName_3

HANDLE hFindFile_2 = FindFirstFileA(lpFileName_2, &var_5d8)

if (hFindFile_2 != 0xffffffff)
    FindClose(hFindFile_2)

HMODULE result

if (hFindFile_2 == 0xffffffff || (var_5d8 & 0x10) != 0)
    void var_498
    int32_t var_6ac_20 = sub_5e2c30(&var_498)
    void* ecx_19 = &var_498
    
    if (sub_5e3070(&var_498, ebx, arg3) != 0)
        result = sub_5e4030(ecx_19)
        sub_5e2e70(&var_498)
        goto label_69a34c
    
    sub_5e3fa0(ecx_19)
    sub_5e2e70(&var_498)
    result = nullptr
else
    result = sub_696ec0(&var_63c, ebx, arg2, arg3, arg4, &var_608)
label_69a34c:
    
    if (data_75d549 != 0)
        CoUninitialize()
        data_75d549 = 0

var_63c = &win32only::CAliceRunPatch::`vftable'

if (var_624 u>= 0x10)
    j__free(lpFileName_3)

int32_t var_624_1 = 0xf
int32_t var_628 = 0
lpFileName_3.b = 0

if (var_5f4 u>= 0x10)
    j__free(var_608.d)

sub_69a5bc(eax_1 ^ &var_69c)
return result
