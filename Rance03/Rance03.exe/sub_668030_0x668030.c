// 函数: sub_668030
// 地址: 0x668030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfe78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_34 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "Software\AliceSoft\DPParts", 0x1a)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

PSTR lpSubKey = &var_28

if (var_14 u>= 0x10)
    lpSubKey = var_28.d

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18_1 = 0
var_28 = 0
sub_402110(&var_28, "CDPSpriteListWindowIsShowVisibleItem", 0x24)
HKEY hKey_1 = phkResult
enum WIN32_ERROR result
result.b = *(arg1 + 0x12c) != 0
enum WIN32_ERROR data = result

if (hKey_1 != 0)
    PSTR lpValueName = &var_28
    
    if (var_14_1 u>= 0x10)
        lpValueName = var_28.d
    
    result = RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)
    hKey_1 = phkResult

if (var_14_1 u>= 0x10)
    result = j__free(var_28.d)
    hKey_1 = phkResult

if (hKey_1 != 0)
    result = RegCloseKey(hKey_1)
    hKey_1 = nullptr
    phkResult = nullptr

struct win32only::CRegistry::VTable* const var_34_1 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    result = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
