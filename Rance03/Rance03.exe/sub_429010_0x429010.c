// 函数: sub_429010
// 地址: 0x429010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b50a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_164
int32_t eax_2 = __security_cookie ^ &var_164
int32_t __saved_edi
int32_t var_174 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_160 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_144 = 0xf
int32_t var_148 = 0
char var_158 = 0
sub_402110(&var_158, "Software\Alicesoft\Sys42IDE\DPVariable", 0x26)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &var_158

if (var_144 u>= 0x10)
    lpSubKey = var_158.d

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_144 u>= 0x10)
    j__free(var_158.d)

int32_t* result

for (WPARAM i = 0; i s< 0x10; i += 1)
    int32_t var_114_1 = 0xf
    int32_t var_118_1 = 0
    char var_128 = 0
    var_4.b = 1
    sub_427970(arg1 + 8, i, &var_128)
    WPARAM i_1 = i
    char var_110
    __swprintf_c(&var_110, 0x100, "Search%02d")
    int32_t var_144_1 = 0xf
    char* edx_1 = &var_128
    int32_t var_148_1 = 0
    
    if (var_114_1 u>= 0x10)
        edx_1 = var_128.d
    
    var_158 = 0
    void* ecx_2
    
    if (*edx_1 != 0)
        char* ecx_3 = edx_1
        char j
        
        do
            j = *ecx_3
            ecx_3 = &ecx_3[1]
        while (j != 0)
        ecx_2 = ecx_3 - &ecx_3[1]
    else
        ecx_2 = nullptr
    
    sub_402110(&var_158, edx_1, ecx_2)
    var_4.b = 2
    bool cond:1_1 = var_110 != 0
    int32_t var_12c_1 = 0xf
    int32_t var_130_1 = 0
    char var_140 = 0
    void* eax_5
    
    if (cond:1_1)
        char* eax_6 = &var_110
        char j_1
        
        do
            j_1 = *eax_6
            eax_6 = &eax_6[1]
        while (j_1 != 0)
        void var_10f
        eax_5 = eax_6 - &var_10f
    else
        eax_5 = nullptr
    
    result = sub_402110(&var_140, &var_110, eax_5)
    HKEY hKey_1 = phkResult
    
    if (hKey_1 != 0)
        char* lpData = &var_158
        char* lpValueName = &var_140
        
        if (var_144_1 u>= 0x10)
            lpData = var_158.d
        
        if (var_12c_1 u>= 0x10)
            lpValueName = var_140.d
        
        result = RegSetValueExA(hKey_1, lpValueName, 0, REG_SZ, lpData, var_148_1 + 1)
    
    if (var_12c_1 u>= 0x10)
        result = j__free(var_140.d)
    
    int32_t var_12c_2 = 0xf
    int32_t var_130_2 = 0
    var_140 = 0
    
    if (var_144_1 u>= 0x10)
        result = j__free(var_158.d)
    
    var_4.b = 0
    
    if (var_114_1 u>= 0x10)
        result = j__free(var_128.d)

HKEY hKey_2 = phkResult
struct win32only::CRegistry::VTable* const var_160_1 = &win32only::CRegistry::`vftable'

if (hKey_2 != 0)
    result = RegCloseKey(hKey_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_164)
return result
