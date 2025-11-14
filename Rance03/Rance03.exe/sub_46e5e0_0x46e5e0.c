// 函数: sub_46e5e0
// 地址: 0x46e5e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b94d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CRegistry::VTable* const var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, "SOFTWARE\AliceSoftGames\", 0x18)
int32_t var_4 = 0
char* eax_6 = (**arg1)(eax_4)
int32_t* lpSubKey_1
sub_410a80(eax_6.b, &var_40, &lpSubKey_1, eax_6)

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t* lpSubKey = &lpSubKey_1
var_48 = &win32only::CRegistry::`vftable'
int32_t var_14

if (var_14 u>= 0x10)
    lpSubKey = lpSubKey_1

HKEY phkResult = nullptr
bool cond:1 = RegOpenKeyExA(0x80000002, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
var_48 = &win32only::CRegistry::`vftable'
HKEY hKey = phkResult
int32_t ebx
ebx.b = cond:1

if (hKey != 0)
    RegCloseKey(hKey)

ebx.b = ebx.b != 0

if (var_14 u>= 0x10)
    j__free(lpSubKey_1)

hKey.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return hKey
