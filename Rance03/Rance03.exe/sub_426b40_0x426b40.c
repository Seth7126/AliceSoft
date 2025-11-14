// 函数: sub_426b40
// 地址: 0x426b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4e98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL phkResult_1 = IsIconic(arg2)

if (phkResult_1 == 0)
    struct win32only::CRegistry::VTable* const var_54_1 = &win32only::CRegistry::`vftable'
    HKEY phkResult = phkResult_1
    BOOL phkResult_3 = phkResult_1
    int32_t var_20_1 = 0xf
    BOOL phkResult_2 = phkResult_1
    char rect = phkResult_1.b
    sub_402110(&rect, "Software\Alicesoft\Sys42IDE\DPVariable", 0x26)
    HKEY hKey = phkResult
    
    if (hKey != 0)
        RegCloseKey(hKey)
        phkResult = nullptr
    
    char* lpSubKey = &rect
    
    if (var_20_1 u>= 0x10)
        lpSubKey = rect.d
    
    enum WIN32_ERROR eax_5
    eax_5.b = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, 
        KEY_ALL_ACCESS, nullptr, &phkResult, nullptr) == NO_ERROR
    char var_59_1 = eax_5.b
    
    if (var_20_1 u>= 0x10)
        j__free(rect.d)
        eax_5.b = var_59_1
    
    HKEY hKey_4
    
    if (eax_5.b == 0)
        hKey_4 = phkResult
    else
        GetWindowRect(arg2, &rect)
        int32_t* lpValueName_4
        sub_401f60(&lpValueName_4, "WindowX")
        HKEY hKey_1 = phkResult
        int32_t data = rect.d
        int32_t var_38
        
        if (hKey_1 != 0)
            int32_t* lpValueName = &lpValueName_4
            
            if (var_38 u>= 0x10)
                lpValueName = lpValueName_4
            
            RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)
        
        if (var_38 u>= 0x10)
            j__free(lpValueName_4)
        
        sub_401f60(&lpValueName_4, "WindowY")
        HKEY hKey_2 = phkResult
        int32_t data_1
        data = data_1
        
        if (hKey_2 != 0)
            int32_t** lpValueName_1 = &lpValueName_4
            
            if (var_38 u>= 0x10)
                lpValueName_1 = lpValueName_4
            
            RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)
        
        if (var_38 u>= 0x10)
            j__free(lpValueName_4)
        
        GetClientRect(arg2, &rect)
        sub_401f60(&lpValueName_4, "WindowWidth")
        HKEY hKey_3 = phkResult
        int32_t var_2c
        data = var_2c - rect.d
        
        if (hKey_3 != 0)
            int32_t** lpValueName_2 = &lpValueName_4
            
            if (var_38 u>= 0x10)
                lpValueName_2 = lpValueName_4
            
            RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)
        
        if (var_38 u>= 0x10)
            j__free(lpValueName_4)
        
        sub_401f60(&lpValueName_4, "WindowHeight")
        hKey_4 = phkResult
        int32_t var_28
        data = var_28 - data_1
        
        if (hKey_4 != 0)
            int32_t* lpValueName_3 = &lpValueName_4
            
            if (var_38 u>= 0x10)
                lpValueName_3 = lpValueName_4
            
            RegSetValueExA(hKey_4, lpValueName_3, 0, REG_DWORD, &data, 4)
            hKey_4 = phkResult
        
        if (var_38 u>= 0x10)
            j__free(lpValueName_4)
            hKey_4 = phkResult
    
    struct win32only::CRegistry::VTable* const var_54_2 = &win32only::CRegistry::`vftable'
    
    if (hKey_4 != 0)
        RegCloseKey(hKey_4)

*(arg1 + 0x5c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return 0
