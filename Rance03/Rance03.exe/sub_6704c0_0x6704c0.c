// 函数: sub_6704c0
// 地址: 0x6704c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfbe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_30 = &win32only::CRegistry::`vftable'
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

HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    RegCloseKey(hKey_1)
    hKey_1 = nullptr
    phkResult = nullptr

struct win32only::CRegistry::VTable* const var_30_1 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return hKey_1
