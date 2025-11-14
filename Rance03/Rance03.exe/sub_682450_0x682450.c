// 函数: sub_682450
// 地址: 0x682450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4f38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_40 = &win32only::CRegistry::`vftable'
uint32_t data_1 = (zx.d(*(arg1 + 0x32)) << 8 | zx.d(*(arg1 + 0x31))) << 8 | zx.d(*(arg1 + 0x30))
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

int32_t var_20_1 = 0xf
int32_t var_24_1 = 0
var_34 = 0
enum WIN32_ERROR result = sub_402110(&var_34, "CThumbnailWindowBGColor", 0x17)
HKEY hKey_1 = phkResult
uint32_t data = data_1

if (hKey_1 != 0)
    char* lpValueName = &var_34
    
    if (var_20_1 u>= 0x10)
        lpValueName = var_34.d
    
    result = RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)
    hKey_1 = phkResult

if (var_20_1 u>= 0x10)
    result = j__free(var_34.d)
    hKey_1 = phkResult

if (hKey_1 != 0)
    result = RegCloseKey(hKey_1)
    hKey_1 = nullptr
    phkResult = nullptr

struct win32only::CRegistry::VTable* const var_40_1 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    result = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
