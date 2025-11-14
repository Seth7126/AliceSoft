// 函数: sub_404c20
// 地址: 0x404c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2d88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_41a9c0(arg1 + 0x224, arg2)
sub_41a9c0(arg1 + 0x2e0, arg2)
struct win32only::CRegistry::VTable* const var_38 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, "Software\Alicesoft\Sys42IDE\DPAnalysis", 0x26)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &var_2c

if (var_18 u>= 0x10)
    lpSubKey = var_2c.d

enum WIN32_ERROR eax_5
eax_5.b = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, 
    nullptr, &phkResult, nullptr) == NO_ERROR
char var_39 = eax_5.b

if (var_18 u>= 0x10)
    j__free(var_2c.d)
    eax_5.b = var_39

if (eax_5.b != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_402110(&var_2c, "FontSize", 8)
    HKEY hKey_2 = phkResult
    int32_t data = arg2
    
    if (hKey_2 != 0)
        char* lpValueName = &var_2c
        
        if (var_18_1 u>= 0x10)
            lpValueName = var_2c.d
        
        RegSetValueExA(hKey_2, lpValueName, 0, REG_DWORD, &data, 4)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)

if (arg2 == 0xc)
    int32_t var_4c_7 = 0
    CheckMenuRadioItem(*(*(arg1 + 8) + 0x80), 0x9c77, 0x9c79, 0x9c79, 0)
else if (arg2 == 0x10)
    int32_t var_4c_6 = 0
    CheckMenuRadioItem(*(*(arg1 + 8) + 0x80), 0x9c77, 0x9c79, 0x9c78, 0)
else if (arg2 == 0x14)
    int32_t var_4c_5 = 0
    CheckMenuRadioItem(*(*(arg1 + 8) + 0x80), 0x9c77, 0x9c79, 0x9c77, 0)

InvalidateRect(*(arg1 + 0xc), nullptr, 1)
HKEY hKey_1 = phkResult
struct win32only::CRegistry::VTable* const var_38_1 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return hKey_1
