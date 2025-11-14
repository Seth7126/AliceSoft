// 函数: sub_68b9b0
// 地址: 0x68b9b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t data
int32_t eax_1 = __security_cookie ^ &data
struct win32only::CRegistry::VTable* const var_3c = &win32only::CRegistry::`vftable'
bool cond:0 = *(arg1 + 0x54) u< 0x10
int32_t* lpSubKey = arg1 + 0x40
HKEY phkResult = nullptr

if (not(cond:0))
    lpSubKey = *lpSubKey

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey = phkResult
data = lpwndpl.rcNormalPosition.left
void* lpValueName = arg1 + 0x58

if (hKey != 0)
    if (*(lpValueName + 0x14) u>= 0x10)
        lpValueName = *lpValueName
    
    RegSetValueExA(hKey, lpValueName, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_1 = phkResult
data = lpwndpl.rcNormalPosition.top
void* lpValueName_1 = arg1 + 0x70

if (hKey_1 != 0)
    if (*(lpValueName_1 + 0x14) u>= 0x10)
        lpValueName_1 = *lpValueName_1
    
    RegSetValueExA(hKey_1, lpValueName_1, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_2 = phkResult
data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
void* lpValueName_2 = arg1 + 0x88

if (hKey_2 != 0)
    if (*(lpValueName_2 + 0x14) u>= 0x10)
        lpValueName_2 = *lpValueName_2
    
    RegSetValueExA(hKey_2, lpValueName_2, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_3 = phkResult
data = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
void* lpValueName_3 = arg1 + 0xa0

if (hKey_3 != 0)
    if (*(lpValueName_3 + 0x14) u>= 0x10)
        lpValueName_3 = *lpValueName_3
    
    RegSetValueExA(hKey_3, lpValueName_3, 0, REG_DWORD, &data, 4)
    hKey_3 = phkResult

int32_t data_1
data_1.b = *(arg1 + 0x240) != 0
data = data_1
void* lpValueName_4 = arg1 + 0xb8

if (hKey_3 != 0)
    if (*(lpValueName_4 + 0x14) u>= 0x10)
        lpValueName_4 = *lpValueName_4
    
    RegSetValueExA(hKey_3, lpValueName_4, 0, REG_DWORD, &data, 4)
    hKey_3 = phkResult

int32_t data_2
data_2.b = *(arg1 + 0x241) != 0
data = data_2
void* lpValueName_5 = arg1 + 0xd0

if (hKey_3 != 0)
    if (*(lpValueName_5 + 0x14) u>= 0x10)
        lpValueName_5 = *lpValueName_5
    
    RegSetValueExA(hKey_3, lpValueName_5, 0, REG_DWORD, &data, 4)
    hKey_3 = phkResult

int32_t data_3
data_3.b = *(arg1 + 0x242) != 0
data = data_3
void* lpValueName_6 = arg1 + 0xe8

if (hKey_3 != 0)
    if (*(lpValueName_6 + 0x14) u>= 0x10)
        lpValueName_6 = *lpValueName_6
    
    RegSetValueExA(hKey_3, lpValueName_6, 0, REG_DWORD, &data, 4)
    hKey_3 = phkResult

int32_t data_4
data_4.b = *(arg1 + 0x243) != 0
data = data_4
void* lpValueName_7 = arg1 + 0x100

if (hKey_3 != 0)
    if (*(lpValueName_7 + 0x14) u>= 0x10)
        lpValueName_7 = *lpValueName_7
    
    RegSetValueExA(hKey_3, lpValueName_7, 0, REG_DWORD, &data, 4)
    hKey_3 = phkResult

int32_t data_5
data_5.b = *(arg1 + 0x244) != 0
data = data_5
void* lpValueName_8 = arg1 + 0x118

if (hKey_3 != 0)
    if (*(lpValueName_8 + 0x14) u>= 0x10)
        lpValueName_8 = *lpValueName_8
    
    RegSetValueExA(hKey_3, lpValueName_8, 0, REG_DWORD, &data, 4)
    hKey_3 = phkResult

enum WIN32_ERROR result
result.b = *(arg1 + 0x245) != 0
void* lpValueName_9 = arg1 + 0x130
data = result

if (hKey_3 != 0)
    if (*(lpValueName_9 + 0x14) u>= 0x10)
        lpValueName_9 = *lpValueName_9
    
    result = RegSetValueExA(hKey_3, lpValueName_9, 0, REG_DWORD, &data, 4)
    hKey_3 = phkResult
    
    if (hKey_3 != 0)
        result = RegCloseKey(hKey_3)
        hKey_3 = nullptr
        phkResult = nullptr

struct win32only::CRegistry::VTable* const var_3c_1 = &win32only::CRegistry::`vftable'

if (hKey_3 != 0)
    result = RegCloseKey(hKey_3)

sub_69a5bc(eax_1 ^ &data)
return result
