// 函数: sub_42a3b0
// 地址: 0x42a3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CRegistry::VTable* const var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_esi
int32_t var_64 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND var_50 = arg2
var_58 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_c_1 = 0
int32_t var_38 = 0xf
int32_t var_3c = 0
char rect = 0
sub_402110(&rect, "Software\Alicesoft\Sys42IDE\DPVariable", 0x26)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &rect

if (var_38 u>= 0x10)
    lpSubKey = rect.d

int32_t ebx
ebx.b = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, 
    nullptr, &phkResult, nullptr) == NO_ERROR

if (var_38 u>= 0x10)
    j__free(rect.d)

if (ebx.b != 0)
    GetWindowRect(var_50, &rect)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    sub_402110(&var_34, "TabWndWidth", 0xb)
    HKEY hKey_1 = phkResult
    int32_t var_44
    var_50 = var_44 - rect.d
    
    if (hKey_1 != 0)
        char* lpValueName = &var_34
        
        if (var_20_1 u>= 0x10)
            lpValueName = var_34.d
        
        RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &var_50, 4)
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)

uint32_t uIDEvent = *(arg1 + 0x198)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x19c), uIDEvent)
    *(arg1 + 0x198) = 0

HKEY hKey_2 = phkResult
*(arg1 + 0x1a4) = 0
var_58 = &win32only::CRegistry::`vftable'

if (hKey_2 != 0)
    RegCloseKey(hKey_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return 0
