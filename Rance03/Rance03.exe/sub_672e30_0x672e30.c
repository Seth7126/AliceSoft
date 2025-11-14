// 函数: sub_672e30
// 地址: 0x672e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6d0238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t data
int32_t eax_2 = __security_cookie ^ &data
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_68 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_c_1 = 0
int32_t var_4c = 0xf
int32_t var_50 = 0
char var_60 = 0
sub_402110(&var_60, "Software\AliceSoft\DPParts", 0x1a)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

PSTR lpSubKey = &var_60

if (var_4c u>= 0x10)
    lpSubKey = var_60.d

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)

if (var_4c u>= 0x10)
    j__free(var_60.d)

int32_t var_4c_1 = 0xf
int32_t var_50_1 = 0
var_60 = 0
sub_402110(&var_60, "CMainWindowWindowPosX", 0x15)
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_1 = phkResult
data = lpwndpl.rcNormalPosition.left

if (hKey_1 != 0)
    char* lpValueName = &var_60
    
    if (var_4c_1 u>= 0x10)
        lpValueName = var_60.d
    
    RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)

if (var_4c_1 u>= 0x10)
    j__free(var_60.d)

int32_t var_4c_2 = 0xf
int32_t var_50_2 = 0
var_60 = 0
sub_402110(&var_60, "CMainWindowWindowPosY", 0x15)
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_2 = phkResult
data = lpwndpl.rcNormalPosition.top

if (hKey_2 != 0)
    char* lpValueName_1 = &var_60
    
    if (var_4c_2 u>= 0x10)
        lpValueName_1 = var_60.d
    
    RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)

if (var_4c_2 u>= 0x10)
    j__free(var_60.d)

int32_t var_4c_3 = 0xf
int32_t var_50_3 = 0
var_60 = 0
sub_402110(&var_60, "CMainWindowWindowWidth", 0x16)
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_3 = phkResult
data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left

if (hKey_3 != 0)
    char* lpValueName_2 = &var_60
    
    if (var_4c_3 u>= 0x10)
        lpValueName_2 = var_60.d
    
    RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)

if (var_4c_3 u>= 0x10)
    j__free(var_60.d)

int32_t var_4c_4 = 0xf
int32_t var_50_4 = 0
var_60 = 0
sub_402110(&var_60, "CMainWindowWindowHeight", 0x17)
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
enum WIN32_ERROR result = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
HKEY hKey_4 = phkResult
data = result

if (hKey_4 != 0)
    char* lpValueName_3 = &var_60
    
    if (var_4c_4 u>= 0x10)
        lpValueName_3 = var_60.d
    
    result = RegSetValueExA(hKey_4, lpValueName_3, 0, REG_DWORD, &data, 4)
    hKey_4 = phkResult

if (var_4c_4 u>= 0x10)
    result = j__free(var_60.d)
    hKey_4 = phkResult

if (hKey_4 != 0)
    result = RegCloseKey(hKey_4)
    hKey_4 = nullptr
    phkResult = nullptr

struct win32only::CRegistry::VTable* const var_68_1 = &win32only::CRegistry::`vftable'

if (hKey_4 != 0)
    result = RegCloseKey(hKey_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &data)
return result
