// 函数: sub_42a110
// 地址: 0x42a110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b51c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CRegistry::VTable* const var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_esi
int32_t var_4c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
HINSTANCE var_50 = arg3
void* var_54 = arg1
sub_41a5c0(*(arg1 + 0xf4), *(arg1 + 0xf8))
*(arg1 + 0xf8) = *(arg1 + 0xf4)
sub_402110(arg1 + 8, "DPVariable_TabWindow", 0x14)
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0x52000000
*(arg1 + 0x50) = arg2
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x48) = 0x258
*(arg1 + 0x4c) = 0x190
var_3c = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "Software\Alicesoft\Sys42IDE\DPVariable", 0x26)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &var_28

if (var_14 u>= 0x10)
    lpSubKey = var_28.d

int32_t ebx
ebx.b = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR

if (var_14 u>= 0x10)
    j__free(var_28.d)

if (ebx.b != 0)
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    sub_402110(&var_28, "TabWndWidth", 0xb)
    HKEY hKey_2 = phkResult
    
    if (hKey_2 != 0)
        enum REG_VALUE_TYPE type = REG_DWORD
        char* lpValueName = &var_28
        uint32_t lpcbData = 4
        
        if (var_14_1 u>= 0x10)
            lpValueName = var_28.d
        
        RegQueryValueExA(hKey_2, lpValueName, nullptr, &type, arg1 + 0x48, &lpcbData)
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)

int32_t edx_1 = *(arg1 + 0x4c)
*(arg1 + 0x70) = *(arg1 + 0x48)
*(arg1 + 0x74) = edx_1
ebx.b = sub_431d40(arg1, arg3)
var_3c = &win32only::CRegistry::`vftable'
HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    RegCloseKey(hKey_1)

hKey_1.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return hKey_1
