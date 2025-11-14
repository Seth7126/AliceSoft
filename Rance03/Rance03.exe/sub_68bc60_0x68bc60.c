// 函数: sub_68bc60
// 地址: 0x68bc60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t data = 1
bool cond:0 = *(arg1 + 0x54) u< 0x10
int32_t* lpSubKey = arg1 + 0x40
struct win32only::CRegistry::VTable* const var_c = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr

if (not(cond:0))
    lpSubKey = *lpSubKey

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)
HKEY hKey = phkResult
int32_t* lpValueName = arg1 + 0xb8
uint32_t var_14
enum REG_VALUE_TYPE var_10

if (hKey != 0)
    bool cond:1_1 = lpValueName[5] u< 0x10
    var_10 = REG_DWORD
    var_14 = 4
    
    if (not(cond:1_1))
        lpValueName = *lpValueName
    
    RegQueryValueExA(hKey, lpValueName, nullptr, &var_10, &data, &var_14)
    hKey = phkResult

int32_t data_1 = data
lpValueName.b = data_1 == 1
*(arg1 + 0x240) = lpValueName.b
void* lpValueName_1 = arg1 + 0xd0

if (hKey != 0)
    bool cond:2_1 = *(lpValueName_1 + 0x14) u< 0x10
    var_14 = 4
    var_10 = REG_DWORD
    
    if (not(cond:2_1))
        lpValueName_1 = *lpValueName_1
    
    RegQueryValueExA(hKey, lpValueName_1, nullptr, &var_14, &data, &var_10)
    data_1 = data
    hKey = phkResult

lpValueName_1.b = data_1 == 1
*(arg1 + 0x241) = lpValueName_1.b
void* lpValueName_2 = arg1 + 0xe8

if (hKey != 0)
    bool cond:3_1 = *(lpValueName_2 + 0x14) u< 0x10
    var_14 = 4
    var_10 = REG_DWORD
    
    if (not(cond:3_1))
        lpValueName_2 = *lpValueName_2
    
    RegQueryValueExA(hKey, lpValueName_2, nullptr, &var_14, &data, &var_10)
    data_1 = data
    hKey = phkResult

lpValueName_2.b = data_1 == 1
*(arg1 + 0x242) = lpValueName_2.b
void* lpValueName_3 = arg1 + 0x100

if (hKey != 0)
    bool cond:4_1 = *(lpValueName_3 + 0x14) u< 0x10
    var_14 = 4
    var_10 = REG_DWORD
    
    if (not(cond:4_1))
        lpValueName_3 = *lpValueName_3
    
    RegQueryValueExA(hKey, lpValueName_3, nullptr, &var_14, &data, &var_10)
    data_1 = data
    hKey = phkResult

lpValueName_3.b = data_1 == 1
*(arg1 + 0x243) = lpValueName_3.b
enum WIN32_ERROR lpValueName_4 = arg1 + 0x118

if (hKey != 0)
    bool cond:5_1 = *(lpValueName_4 + 0x14) u< 0x10
    var_14 = 4
    var_10 = REG_DWORD
    
    if (not(cond:5_1))
        lpValueName_4 = *lpValueName_4
    
    RegQueryValueExA(hKey, lpValueName_4, nullptr, &var_14, &data, &var_10)
    data_1 = data
    hKey = phkResult

lpValueName_4.b = data_1 == 1
*(arg1 + 0x244) = lpValueName_4.b
enum WIN32_ERROR lpValueName_5 = arg1 + 0x130

if (hKey != 0)
    bool cond:6_1 = *(lpValueName_5 + 0x14) u< 0x10
    var_14 = 4
    var_10 = REG_DWORD
    
    if (not(cond:6_1))
        lpValueName_5 = *lpValueName_5
    
    RegQueryValueExA(hKey, lpValueName_5, nullptr, &var_14, &data, &var_10)
    data_1 = data
    hKey = phkResult

lpValueName_5.b = data_1 == 1
*(arg1 + 0x245) = lpValueName_5.b

if (hKey != 0)
    lpValueName_5 = RegCloseKey(hKey)
    hKey = nullptr
    phkResult = nullptr

struct win32only::CRegistry::VTable* const var_c_1 = &win32only::CRegistry::`vftable'

if (hKey == 0)
    return lpValueName_5

return RegCloseKey(hKey)
