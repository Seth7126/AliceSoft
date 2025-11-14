// 函数: sub_6703b0
// 地址: 0x6703b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cfbb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CRegistry::VTable* const var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_3c = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_c_1 = 0
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
sub_402110(&var_34, "Software\AliceSoft\DPParts", 0x1a)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

PSTR lpSubKey = &var_34

if (var_20 u>= 0x10)
    lpSubKey = var_34.d

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_20 u>= 0x10)
    j__free(var_34.d)

HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    RegCloseKey(hKey_1)
    hKey_1 = nullptr
    phkResult = nullptr

var_3c = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return hKey_1
