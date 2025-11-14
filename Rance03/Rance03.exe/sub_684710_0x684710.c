// 函数: sub_684710
// 地址: 0x684710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0f28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CRegistry::VTable* const var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t var_40 = arg2
int32_t var_44 = __security_cookie ^ &var_40
fsbase->NtTib.ExceptionList = &ExceptionList
bool c = SendMessageA(*(arg1 + 0x140), 0x40a, 0x9c97, 1) != 0
LRESULT eax_7 = SendMessageA(*(arg1 + 0x140), 0x40a, 0x9c98, 1)
int32_t eax_8 = neg.d(eax_7)
LRESULT eax_11 = SendMessageA(*(arg1 + 0x140), 0x40a, 0x9ca0, 1)
int32_t eax_12 = neg.d(eax_11)
var_34 = &win32only::CRegistry::`vftable'
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
sub_402110(&var_28, "CViewWindowDrawType", 0x13)
HKEY hKey_1 = phkResult
enum WIN32_ERROR data = neg.d(sbb.d(arg2, arg2, c)) | (sbb.d(eax_8, eax_8, eax_7 != 0) & 2)
    | (sbb.d(eax_12, eax_12, eax_11 != 0) & 4)

if (hKey_1 != 0)
    char* lpValueName = &var_28
    
    if (var_14_1 u>= 0x10)
        lpValueName = var_28.d
    
    RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)

if (var_14_1 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_2 = 0xf
int32_t var_18_2 = 0
var_28 = 0
sub_402110(&var_28, "CViewWindowBGColor", 0x12)
HKEY hKey_2 = phkResult
enum WIN32_ERROR result = *(arg1 + 0x1b8)
data = result

if (hKey_2 != 0)
    PSTR lpValueName_1 = &var_28
    
    if (var_14_2 u>= 0x10)
        lpValueName_1 = var_28.d
    
    result = RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)
    hKey_2 = phkResult

if (var_14_2 u>= 0x10)
    result = j__free(var_28.d)
    hKey_2 = phkResult

if (hKey_2 != 0)
    result = RegCloseKey(hKey_2)
    hKey_2 = nullptr
    phkResult = nullptr

var_34 = &win32only::CRegistry::`vftable'

if (hKey_2 != 0)
    result = RegCloseKey(hKey_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
