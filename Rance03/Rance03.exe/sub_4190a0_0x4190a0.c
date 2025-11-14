// 函数: sub_4190a0
// 地址: 0x4190a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4200
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_esi
int32_t var_64 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
enum REG_VALUE_TYPE type
enum REG_VALUE_TYPE type_1 = type
void* var_6c = arg1
sub_41a5c0(*(arg1 + 0x84), *(arg1 + 0x88))
*(arg1 + 0x88) = *(arg1 + 0x84)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "DPAnalysis_TabWindow", 0x14)
int32_t var_4 = 0
char* ecx_3 = *(arg1 + 8) + 0x30

if (ecx_3 != &var_28)
    sub_401ff0(ecx_3, &var_28, 0, 0xffffffff)

if (var_14 u>= 0x10)
    j__free(var_28.d)

*(*(arg1 + 8) + 0x64) = 0
*(*(arg1 + 8) + 0x68) = 0x52000000
*(*(arg1 + 8) + 0x7c) = arg2
int32_t data = 0xa0
struct win32only::CRegistry::VTable* const var_54 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_4_1 = 1
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, "Software\Alicesoft\Sys42IDE\DPAnalysis", 0x26)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &var_40

if (var_2c u>= 0x10)
    lpSubKey = var_40.d

int32_t ebx
ebx.b = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR

if (var_2c u>= 0x10)
    j__free(var_40.d)

if (ebx.b != 0)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    sub_402110(&var_40, "TabWndWidth", 0xb)
    HKEY hKey_2 = phkResult
    
    if (hKey_2 != 0)
        type = REG_DWORD
        uint32_t lpcbData = 4
        char* lpValueName = &var_40
        
        if (var_2c_1 u>= 0x10)
            lpValueName = var_40.d
        
        RegQueryValueExA(hKey_2, lpValueName, nullptr, &type, &data, &lpcbData)
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)

void* ecx_7 = *(arg1 + 8)
int32_t data_1 = data
*(ecx_7 + 0x6c) = 0
*(ecx_7 + 0x70) = 0
*(ecx_7 + 0x74) = data_1
*(ecx_7 + 0x78) = 0x190
sub_41c5c0(arg1)
*(*(arg1 + 8) + 0x60) = arg3
*(*(arg1 + 8) + 0x84) = arg1

if (sub_698a60(*(arg1 + 8)) != 0)
    ebx.b = 1
    *(arg1 + 0xc) = **(arg1 + 8)
else
    ebx.b = 0

HKEY hKey_1 = phkResult
struct win32only::CRegistry::VTable* const var_54_1 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    RegCloseKey(hKey_1)

hKey_1.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return hKey_1
