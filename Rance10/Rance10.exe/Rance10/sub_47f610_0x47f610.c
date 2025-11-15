// 函数: sub_47f610
// 地址: 0x47f610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct win32only::CRegistry::VTable* const var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
void* var_24
int32_t* lpSubKey = sub_419600(eax_1, "SOFTWARE\AliceSoftGames\", &var_24, arg1)
var_2c = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr

if (lpSubKey[5] u>= 0x10)
    lpSubKey = *lpSubKey

bool cond:0 = RegOpenKeyExA(0x80000002, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
HKEY hKey = phkResult
int32_t ebx
ebx.b = cond:0
var_2c = &win32only::CRegistry::`vftable'

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

int32_t var_10
int32_t eax_4 = var_10

if (eax_4 u>= 0x10)
    eax_4 = sub_403160(var_24, eax_4 + 1, 1)

if (ebx.b == 0)
    int32_t* lpSubKey_1 = sub_419600(eax_4, "SOFTWARE\AliceSoft\", &var_24, arg1)
    var_2c = &win32only::CRegistry::`vftable'
    phkResult = nullptr
    
    if (lpSubKey_1[5] u>= 0x10)
        lpSubKey_1 = *lpSubKey_1
    
    bool cond:1_1 = RegOpenKeyExA(0x80000002, lpSubKey_1, 0, KEY_READ, &phkResult) == NO_ERROR
    var_2c = &win32only::CRegistry::`vftable'
    HKEY hKey_1 = phkResult
    ebx.b = cond:1_1
    
    if (hKey_1 != 0)
        RegCloseKey(hKey_1)
        phkResult = nullptr
    
    eax_4 = var_10
    
    if (eax_4 u>= 0x10)
        eax_4 = sub_403160(var_24, eax_4 + 1, 1)
    
    if (ebx.b == 0)
        int32_t* lpSubKey_2 = sub_419600(eax_4, "SOFTWARE\AliceSoftGames\", &var_24, arg1)
        var_2c = &win32only::CRegistry::`vftable'
        phkResult = nullptr
        
        if (lpSubKey_2[5] u>= 0x10)
            lpSubKey_2 = *lpSubKey_2
        
        bool cond:2_1 = RegOpenKeyExA(0x80000001, lpSubKey_2, 0, KEY_READ, &phkResult) == NO_ERROR
        var_2c = &win32only::CRegistry::`vftable'
        HKEY hKey_2 = phkResult
        ebx.b = cond:2_1
        
        if (hKey_2 != 0)
            RegCloseKey(hKey_2)
            phkResult = nullptr
        
        eax_4 = var_10
        
        if (eax_4 u>= 0x10)
            eax_4 = sub_403160(var_24, eax_4 + 1, 1)
        
        if (ebx.b == 0)
            void** eax_9 = sub_419600(eax_4, "SOFTWARE\AliceSoft\", &var_24, arg1)
            var_2c = &win32only::CRegistry::`vftable'
            phkResult = nullptr
            char eax_10 = sub_6ce5e0(&var_2c, 0x80000001, eax_9)
            HKEY hKey_3 = phkResult
            ebx.b = eax_10
            var_2c = &win32only::CRegistry::`vftable'
            
            if (hKey_3 != 0)
                RegCloseKey(hKey_3)
                phkResult = nullptr
            
            sub_403320(&var_24)
            char* eax_11
            eax_11.b = ebx.b != 0
            @__security_check_cookie@4(eax_1 ^ &var_2c)
            return eax_11

eax_4.b = 1
@__security_check_cookie@4(eax_1 ^ &var_2c)
return eax_4
