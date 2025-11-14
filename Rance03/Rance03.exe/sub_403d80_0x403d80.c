// 函数: sub_403d80
// 地址: 0x403d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2cd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(*(arg1 + 8) + 0x18) = LoadIconA(arg2, 0x75)
int32_t var_38 = 0xf
*(*(arg1 + 8) + 0x80) = LoadMenuA(arg2, 0x7b)
int32_t var_3c = 0
char var_4c = 0
sub_402110(&var_4c, "Sys40DPAnalysisClass", 0x14)
int32_t var_c_1 = 0
char* ecx_4 = *(arg1 + 8) + 0x30

if (ecx_4 != &var_4c)
    sub_401ff0(ecx_4, &var_4c, 0, 0xffffffff)

int32_t var_c_2 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
sub_402110(&var_34, 0x6da014, 0x12)
int32_t var_c_3 = 1
char* ecx_7 = *(arg1 + 8) + 0x48

if (ecx_7 != &var_34)
    sub_401ff0(ecx_7, &var_34, 0, 0xffffffff)

if (var_20 u>= 0x10)
    j__free(var_34.d)

int32_t data_1 = 0x80000000
int32_t data_2 = 0x80000000
int32_t data_3 = 0x320
int32_t data = 0x258
struct win32only::CRegistry::VTable* const var_80 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_c_4 = 2
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
sub_402110(&var_64, "Software\Alicesoft\Sys42IDE\DPAnalysis", 0x26)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &var_64

if (var_50 u>= 0x10)
    lpSubKey = var_64.d

enum WIN32_ERROR eax_7
eax_7.b = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
char var_81 = eax_7.b

if (var_50 u>= 0x10)
    j__free(var_64.d)
    eax_7.b = var_81

if (eax_7.b != 0)
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    sub_402110(&var_64, "WindowX", 7)
    HKEY hKey_2 = phkResult
    enum REG_VALUE_TYPE var_88
    
    if (hKey_2 != 0)
        var_88 = REG_DWORD
        var_8c = 4
        char* lpValueName = &var_64
        
        if (var_50_1 u>= 0x10)
            lpValueName = var_64.d
        
        RegQueryValueExA(hKey_2, lpValueName, nullptr, &var_88, &data_1, &var_8c)
    
    if (var_50_1 u>= 0x10)
        j__free(var_64.d)
    
    int32_t var_50_2 = 0xf
    int32_t var_54_2 = 0
    var_64 = 0
    sub_402110(&var_64, "WindowY", 7)
    HKEY hKey_3 = phkResult
    
    if (hKey_3 != 0)
        var_8c = 4
        var_88 = REG_DWORD
        char* lpValueName_1 = &var_64
        
        if (var_50_2 u>= 0x10)
            lpValueName_1 = var_64.d
        
        RegQueryValueExA(hKey_3, lpValueName_1, nullptr, &var_8c, &data_2, &var_88)
    
    if (var_50_2 u>= 0x10)
        j__free(var_64.d)
    
    int32_t var_50_3 = 0xf
    int32_t var_54_3 = 0
    var_64 = 0
    sub_402110(&var_64, "WindowWidth", 0xb)
    HKEY hKey_4 = phkResult
    
    if (hKey_4 != 0)
        var_8c = 4
        var_88 = REG_DWORD
        PSTR lpValueName_2 = &var_64
        
        if (var_50_3 u>= 0x10)
            lpValueName_2 = var_64.d
        
        RegQueryValueExA(hKey_4, lpValueName_2, nullptr, &var_8c, &data_3, &var_88)
    
    if (var_50_3 u>= 0x10)
        j__free(var_64.d)
    
    int32_t var_50_4 = 0xf
    int32_t var_54_4 = 0
    var_64 = 0
    sub_402110(&var_64, "WindowHeight", 0xc)
    HKEY hKey_5 = phkResult
    
    if (hKey_5 != 0)
        var_8c = 4
        var_88 = REG_DWORD
        PSTR lpValueName_3 = &var_64
        
        if (var_50_4 u>= 0x10)
            lpValueName_3 = var_64.d
        
        RegQueryValueExA(hKey_5, lpValueName_3, nullptr, &var_8c, &data, &var_88)
    
    if (var_50_4 u>= 0x10)
        j__free(var_64.d)

void* edx = *(arg1 + 8)
int32_t data_4 = data_1
int32_t data_6 = data
int32_t data_5 = data_3
*(edx + 0x70) = data_2
*(edx + 0x6c) = data_4
*(edx + 0x74) = data_5
*(edx + 0x78) = data_6
*(*(arg1 + 8) + 0x68) = 0xcf0000
sub_41c5c0(arg1)
*(*(arg1 + 8) + 0x60) = arg2
*(*(arg1 + 8) + 0x84) = arg1
void* ebx

if (sub_698a60(*(arg1 + 8)) == 0)
    ebx.b = 0
else
    *(arg1 + 0xc) = **(arg1 + 8)
    ebx.b = 1

HKEY hKey_1 = phkResult
struct win32only::CRegistry::VTable* const var_80_1 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    RegCloseKey(hKey_1)

hKey_1.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_8c)
return hKey_1
