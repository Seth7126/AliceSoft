// 函数: sub_6825e0
// 地址: 0x6825e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0e28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_3c = &win32only::CRegistry::`vftable'
uint32_t data_2 = (zx.d(*(arg1 + 0x32)) << 8 | zx.d(*(arg1 + 0x31))) << 8 | zx.d(*(arg1 + 0x30))
HKEY phkResult = nullptr
uint32_t data = data_2
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
sub_402110(&var_28, "CThumbnailWindowBGColor", 0x17)
HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    enum REG_VALUE_TYPE type = REG_DWORD
    uint32_t lpcbData = 4
    char* lpValueName = &var_28
    
    if (var_14_1 u>= 0x10)
        lpValueName = var_28.d
    
    RegQueryValueExA(hKey_1, lpValueName, nullptr, &type, &data, &lpcbData)
    hKey_1 = phkResult

if (var_14_1 u>= 0x10)
    j__free(var_28.d)
    hKey_1 = phkResult

if (hKey_1 != 0)
    RegCloseKey(hKey_1)
    hKey_1 = nullptr
    phkResult = nullptr

uint32_t data_1 = data
struct win32only::CRegistry::VTable* const var_3c_1 = &win32only::CRegistry::`vftable'
uint32_t result = zx.d(data_1.b)
*(arg1 + 0x30) = (zx.d((data_1 u>> 0x10).b) << 8 | zx.d((data_1 u>> 8).b)) << 8 | result

if (hKey_1 != 0)
    result = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
