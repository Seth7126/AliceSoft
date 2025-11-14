// 函数: sub_684950
// 地址: 0x684950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0f58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
enum WIN32_ERROR data_2 = *(arg1 + 0x1b8)
int32_t data = 3
enum WIN32_ERROR data_1 = data_2
struct win32only::CRegistry::VTable* const var_40 = &win32only::CRegistry::`vftable'
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
sub_402110(&var_28, "CViewWindowDrawType", 0x13)
HKEY hKey_1 = phkResult
uint32_t var_34
enum REG_VALUE_TYPE var_30

if (hKey_1 != 0)
    var_30 = REG_DWORD
    var_34 = 4
    char* lpValueName = &var_28
    
    if (var_14_1 u>= 0x10)
        lpValueName = var_28.d
    
    RegQueryValueExA(hKey_1, lpValueName, nullptr, &var_30, &data, &var_34)

if (var_14_1 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_2 = 0xf
int32_t var_18_2 = 0
var_28 = 0
sub_402110(&var_28, "CViewWindowBGColor", 0x12)
HKEY hKey_2 = phkResult

if (hKey_2 != 0)
    var_34 = 4
    var_30 = REG_DWORD
    PSTR lpValueName_1 = &var_28
    
    if (var_14_2 u>= 0x10)
        lpValueName_1 = var_28.d
    
    RegQueryValueExA(hKey_2, lpValueName_1, nullptr, &var_34, &data_1, &var_30)
    hKey_2 = phkResult

if (var_14_2 u>= 0x10)
    j__free(var_28.d)
    hKey_2 = phkResult

if (hKey_2 != 0)
    RegCloseKey(hKey_2)
    hKey_2 = nullptr
    phkResult = nullptr

char data_3 = data.b

if ((data_3 & 1) == 0)
    HWND hWnd = *(arg1 + 0x140)
    *(arg1 + 0x154) = 1
    SendMessageA(hWnd, 0x402, 0x9c97, 0)
    data_3 = data.b
    hKey_2 = phkResult

if ((data_3 & 2) == 0)
    HWND hWnd_1 = *(arg1 + 0x140)
    *(arg1 + 0x154) = 1
    SendMessageA(hWnd_1, 0x402, 0x9c98, 0)
    data_3 = data.b
    hKey_2 = phkResult

if ((data_3 & 4) == 0)
    HWND hWnd_2 = *(arg1 + 0x140)
    *(arg1 + 0x154) = 1
    SendMessageA(hWnd_2, 0x402, 0x9ca0, 0)
    hKey_2 = phkResult

enum WIN32_ERROR result = data_1
*(arg1 + 0x1b8) = result
struct win32only::CRegistry::VTable* const var_40_1 = &win32only::CRegistry::`vftable'

if (hKey_2 != 0)
    result = RegCloseKey(hKey_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
