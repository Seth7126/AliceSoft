// 函数: sub_404810
// 地址: 0x404810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2d58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t uIDEvent = *(arg1 + 0x4f4)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x4f8), uIDEvent)
    *(arg1 + 0x4f4) = 0

sub_41d100(arg1 + 0x414)
struct win32only::CRegistry::VTable* const var_68 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_c_1 = 0
int32_t var_4c = 0xf
int32_t var_50 = 0
char var_60 = 0
sub_402110(&var_60, "Software\Alicesoft\Sys42IDE\DPAnalysis", 0x26)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &var_60

if (var_4c u>= 0x10)
    lpSubKey = var_60.d

enum WIN32_ERROR eax_5
eax_5.b = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, 
    nullptr, &phkResult, nullptr) == NO_ERROR
char var_6d = eax_5.b

if (var_4c u>= 0x10)
    j__free(var_60.d)
    eax_5.b = var_6d

HKEY hKey_4

if (eax_5.b == 0)
    hKey_4 = phkResult
else
    WINDOWPLACEMENT lpwndpl
    lpwndpl.length = 0x2c
    
    if (GetWindowPlacement(arg2, &lpwndpl) == 0)
        hKey_4 = phkResult
    else
        sub_401f60(&var_60, "WindowX")
        HKEY hKey_1 = phkResult
        int32_t data = lpwndpl.rcNormalPosition.left
        
        if (hKey_1 != 0)
            char* lpValueName = &var_60
            
            if (var_4c u>= 0x10)
                lpValueName = var_60.d
            
            RegSetValueExA(hKey_1, lpValueName, 0, REG_DWORD, &data, 4)
        
        if (var_4c u>= 0x10)
            j__free(var_60.d)
        
        sub_401f60(&var_60, "WindowY")
        HKEY hKey_2 = phkResult
        data = lpwndpl.rcNormalPosition.top
        
        if (hKey_2 != 0)
            char* lpValueName_1 = &var_60
            
            if (var_4c u>= 0x10)
                lpValueName_1 = var_60.d
            
            RegSetValueExA(hKey_2, lpValueName_1, 0, REG_DWORD, &data, 4)
        
        if (var_4c u>= 0x10)
            j__free(var_60.d)
        
        sub_401f60(&var_60, "WindowWidth")
        HKEY hKey_3 = phkResult
        data = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
        
        if (hKey_3 != 0)
            char* lpValueName_2 = &var_60
            
            if (var_4c u>= 0x10)
                lpValueName_2 = var_60.d
            
            RegSetValueExA(hKey_3, lpValueName_2, 0, REG_DWORD, &data, 4)
        
        if (var_4c u>= 0x10)
            j__free(var_60.d)
        
        sub_401f60(&var_60, "WindowHeight")
        hKey_4 = phkResult
        data = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
        
        if (hKey_4 != 0)
            PSTR lpValueName_3 = &var_60
            
            if (var_4c u>= 0x10)
                lpValueName_3 = var_60.d
            
            RegSetValueExA(hKey_4, lpValueName_3, 0, REG_DWORD, &data, 4)
            hKey_4 = phkResult
        
        if (var_4c u>= 0x10)
            j__free(var_60.d)
            hKey_4 = phkResult

struct win32only::CRegistry::VTable* const var_68_1 = &win32only::CRegistry::`vftable'

if (hKey_4 != 0)
    RegCloseKey(hKey_4)

sub_41c5c0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return 0
