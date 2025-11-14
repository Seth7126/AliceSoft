// 函数: sub_673120
// 地址: 0x673120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t data_3 = *arg1
int32_t data = *arg2
int32_t data_1 = *arg3
enum WIN32_ERROR data_2 = *arg4
struct win32only::CRegistry::VTable* const var_48 = &win32only::CRegistry::`vftable'
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

char* lpSubKey = &var_28

if (var_14 u>= 0x10)
    lpSubKey = var_28.d

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18_1 = 0
var_28 = 0
sub_402110(&var_28, "CMainWindowWindowPosX", 0x15)
HKEY hKey_1 = phkResult
enum REG_VALUE_TYPE var_4c

if (hKey_1 != 0)
    var_4c = REG_DWORD
    var_50 = 4
    char* lpValueName = &var_28
    
    if (var_14_1 u>= 0x10)
        lpValueName = var_28.d
    
    RegQueryValueExA(hKey_1, lpValueName, nullptr, &var_4c, &data_3, &var_50)

if (var_14_1 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_2 = 0xf
int32_t var_18_2 = 0
var_28 = 0
sub_402110(&var_28, "CMainWindowWindowPosY", 0x15)
HKEY hKey_2 = phkResult

if (hKey_2 != 0)
    var_50 = 4
    var_4c = REG_DWORD
    char* lpValueName_1 = &var_28
    
    if (var_14_2 u>= 0x10)
        lpValueName_1 = var_28.d
    
    RegQueryValueExA(hKey_2, lpValueName_1, nullptr, &var_50, &data, &var_4c)

if (var_14_2 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_3 = 0xf
int32_t var_18_3 = 0
var_28 = 0
sub_402110(&var_28, "CMainWindowWindowWidth", 0x16)
HKEY hKey_3 = phkResult

if (hKey_3 != 0)
    var_50 = 4
    var_4c = REG_DWORD
    PSTR lpValueName_2 = &var_28
    
    if (var_14_3 u>= 0x10)
        lpValueName_2 = var_28.d
    
    RegQueryValueExA(hKey_3, lpValueName_2, nullptr, &var_50, &data_1, &var_4c)

if (var_14_3 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_4 = 0xf
int32_t var_18_4 = 0
var_28 = 0
sub_402110(&var_28, "CMainWindowWindowHeight", 0x17)
HKEY hKey_4 = phkResult

if (hKey_4 != 0)
    var_50 = 4
    var_4c = REG_DWORD
    PSTR lpValueName_3 = &var_28
    
    if (var_14_4 u>= 0x10)
        lpValueName_3 = var_28.d
    
    RegQueryValueExA(hKey_4, lpValueName_3, nullptr, &var_50, &data_2, &var_4c)
    hKey_4 = phkResult

if (var_14_4 u>= 0x10)
    j__free(var_28.d)
    hKey_4 = phkResult

if (hKey_4 != 0)
    RegCloseKey(hKey_4)
    hKey_4 = nullptr
    phkResult = nullptr

*arg1 = data_3
*arg2 = data
*arg3 = data_1
enum WIN32_ERROR result = data_2
struct win32only::CRegistry::VTable* const var_48_1 = &win32only::CRegistry::`vftable'
*arg4 = result

if (hKey_4 != 0)
    result = RegCloseKey(hKey_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
