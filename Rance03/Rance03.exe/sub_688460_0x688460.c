// 函数: sub_688460
// 地址: 0x688460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t data
int32_t eax_1 = __security_cookie ^ &data
struct win32only::CRegistry::VTable* const var_40 = &win32only::CRegistry::`vftable'
bool cond:0 = *(arg1 + 0x44) u< 0x10
int32_t* lpSubKey = arg1 + 0x30
HKEY phkResult = nullptr

if (not(cond:0))
    lpSubKey = *lpSubKey

RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, nullptr, 
    &phkResult, nullptr)
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_1 = phkResult
data = lpwndpl.rcNormalPosition.left
void* lpValueName = arg1 + 0x48

if (hKey_1 != 0)
    if (*(lpValueName + 0x14) u>= 0x10)
        lpValueName = *lpValueName
    
    RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_2 = phkResult
data = lpwndpl.rcNormalPosition.top
void* lpValueName_1 = arg1 + 0x60

if (hKey_2 != 0)
    if (*(lpValueName_1 + 0x14) u>= 0x10)
        lpValueName_1 = *lpValueName_1
    
    RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 8), &lpwndpl)
HKEY hKey_3 = phkResult
data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
void* lpValueName_2 = arg1 + 0x78

if (hKey_3 != 0)
    if (*(lpValueName_2 + 0x14) u>= 0x10)
        lpValueName_2 = *lpValueName_2
    
    RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)

GetWindowPlacement(*(arg1 + 8), &lpwndpl)
void* lpValueName_3 = arg1 + 0x90
data = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
HKEY hKey = phkResult

if (hKey != 0)
    if (*(lpValueName_3 + 0x14) u>= 0x10)
        lpValueName_3 = *lpValueName_3
    
    RegSetValueExA(hKey, lpValueName_3, 0, REG_DWORD, &data, 4)
    hKey = phkResult
    
    if (hKey != 0)
        RegCloseKey(hKey)
        hKey = nullptr
        phkResult = nullptr

struct win32only::CRegistry::VTable* const var_40_1 = &win32only::CRegistry::`vftable'

if (hKey != 0)
    hKey = RegCloseKey(hKey)

sub_69a5bc(eax_1 ^ &data)
return hKey
