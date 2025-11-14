// 函数: sub_6885e0
// 地址: 0x6885e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
int32_t* ebp = arg3
bool cond:0 = *(arg1 + 0x44) u< 0x10
arg2 = *ebx
arg3 = *ebp
struct win32only::CRegistry::VTable* const var_c = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t data = *arg4
enum WIN32_ERROR data_1 = *arg5
int32_t* lpSubKey = arg1 + 0x30

if (not(cond:0))
    lpSubKey = *lpSubKey

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)
HKEY hKey = phkResult
int32_t* lpValueName = arg1 + 0x48
uint32_t var_14
enum REG_VALUE_TYPE var_10

if (hKey != 0)
    bool cond:1_1 = lpValueName[5] u< 0x10
    var_10 = REG_DWORD
    var_14 = 4
    
    if (not(cond:1_1))
        lpValueName = *lpValueName
    
    RegQueryValueExA(hKey, lpValueName, nullptr, &var_10, &arg2, &var_14)
    hKey = phkResult

int32_t* lpValueName_1 = arg1 + 0x60

if (hKey != 0)
    bool cond:2_1 = lpValueName_1[5] u< 0x10
    var_14 = 4
    var_10 = REG_DWORD
    
    if (not(cond:2_1))
        lpValueName_1 = *lpValueName_1
    
    RegQueryValueExA(hKey, lpValueName_1, nullptr, &var_14, &arg3, &var_10)
    hKey = phkResult

PSTR lpValueName_2 = arg1 + 0x78

if (hKey != 0)
    bool cond:3_1 = *(lpValueName_2 + 0x14) u< 0x10
    var_14 = 4
    var_10 = REG_DWORD
    
    if (not(cond:3_1))
        lpValueName_2 = *lpValueName_2
    
    RegQueryValueExA(hKey, lpValueName_2, nullptr, &var_14, &data, &var_10)
    hKey = phkResult

void* lpValueName_3 = arg1 + 0x90

if (hKey != 0)
    bool cond:4_1 = *(lpValueName_3 + 0x14) u< 0x10
    var_14 = 4
    var_10 = REG_DWORD
    
    if (not(cond:4_1))
        lpValueName_3 = *lpValueName_3
    
    RegQueryValueExA(hKey, lpValueName_3, nullptr, &var_14, &data_1, &var_10)
    hKey = phkResult
    
    if (hKey != 0)
        RegCloseKey(hKey)
        hKey = nullptr
        phkResult = nullptr

*ebx = arg2
*ebp = arg3
*arg4 = data
enum WIN32_ERROR result = data_1
struct win32only::CRegistry::VTable* const var_c_1 = &win32only::CRegistry::`vftable'
*arg5 = result

if (hKey == 0)
    return result

return RegCloseKey(hKey)
