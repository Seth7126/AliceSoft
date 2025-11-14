// 函数: sub_64ead0
// 地址: 0x64ead0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ceba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_60 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_402110(&var_58, "Software\Alicesoft\Sys42IDE\DPLogViewer", 0x27)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &var_58

if (var_44 u>= 0x10)
    lpSubKey = var_58.d

enum WIN32_ERROR eax_5
eax_5.b = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, 
    nullptr, &phkResult, nullptr) == NO_ERROR
char var_65 = eax_5.b

if (var_44 u>= 0x10)
    j__free(var_58.d)
    eax_5.b = var_65

WINDOWPLACEMENT lpwndpl
BOOL eax_6

if (eax_5.b != 0)
    lpwndpl.length = 0x2c
    eax_6 = GetWindowPlacement(arg2, &lpwndpl)

HKEY hKey_4

if (eax_5.b == 0 || eax_6 == 0)
    hKey_4 = phkResult
else
    sub_401f60(&var_58, "WindowX")
    HKEY hKey_1 = phkResult
    int32_t data = lpwndpl.rcNormalPosition.left
    
    if (hKey_1 != 0)
        char* lpValueName = &var_58
        
        if (var_44 u>= 0x10)
            lpValueName = var_58.d
        
        RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
    
    sub_401f60(&var_58, "WindowY")
    HKEY hKey_2 = phkResult
    data = lpwndpl.rcNormalPosition.top
    
    if (hKey_2 != 0)
        char* lpValueName_1 = &var_58
        
        if (var_44 u>= 0x10)
            lpValueName_1 = var_58.d
        
        RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
    
    sub_401f60(&var_58, "WindowWidth")
    HKEY hKey_3 = phkResult
    data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
    
    if (hKey_3 != 0)
        char* lpValueName_2 = &var_58
        
        if (var_44 u>= 0x10)
            lpValueName_2 = var_58.d
        
        RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
    
    sub_401f60(&var_58, "WindowHeight")
    hKey_4 = phkResult
    data = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
    
    if (hKey_4 != 0)
        PSTR lpValueName_3 = &var_58
        
        if (var_44 u>= 0x10)
            lpValueName_3 = var_58.d
        
        RegSetValueExA(hKey_4, lpValueName_3, 0, REG_DWORD, &data, 4)
        hKey_4 = phkResult
    
    if (var_44 u>= 0x10)
        j__free(var_58.d)
        hKey_4 = phkResult
    
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    var_58 = 0

int32_t var_4_1 = 0xffffffff
struct win32only::CRegistry::VTable* const var_60_1 = &win32only::CRegistry::`vftable'

if (hKey_4 != 0)
    RegCloseKey(hKey_4)
    phkResult = nullptr

for (int32_t* i = *(arg1 + 0x140); i != *(arg1 + 0x144); i = &i[1])
    void* edi_1 = *i
    sub_64b990(edi_1 + 0x50)
    int32_t* edi_2 = *(edi_1 + 8)
    HWND hWnd = *edi_2
    
    if (hWnd != 0 && DestroyWindow(hWnd) != 0)
        *edi_2 = 0
    
    if (edi_2[0xb].b != 0 && UnregisterClassA(edi_2[0xa], edi_2[0x18]) != 0)
        edi_2[0xb].b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return 0
