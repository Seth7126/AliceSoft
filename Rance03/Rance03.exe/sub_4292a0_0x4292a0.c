// 函数: sub_4292a0
// 地址: 0x4292a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b50f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_15c
int32_t eax_2 = __security_cookie ^ &var_15c
int32_t __saved_edi
int32_t var_16c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CRegistry::VTable* const var_158 = &win32only::CRegistry::`vftable'
HKEY phkResult = nullptr
int32_t var_c_1 = 0
int32_t var_13c = 0xf
int32_t var_140 = 0
char var_150 = 0
sub_402110(&var_150, "Software\Alicesoft\Sys42IDE\DPVariable", 0x26)
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = &var_150

if (var_13c u>= 0x10)
    lpSubKey = var_150.d

RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult)

if (var_13c u>= 0x10)
    j__free(var_150.d)

for (WPARAM wParam = 0; wParam s< 0x10; wParam += 1)
    WPARAM wParam_1 = wParam
    char var_120
    __swprintf_c(&var_120, 0x100, "Search%02d")
    int32_t var_13c_1 = 0xf
    int32_t var_140_1 = 0
    var_150 = 0
    var_c_1.b = 1
    bool cond:3_1 = var_120 != 0
    int32_t var_124_1 = 0xf
    int32_t var_128_1 = 0
    char var_138 = 0
    void* ecx_1
    
    if (cond:3_1)
        char* ecx_2 = &var_120
        char j
        
        do
            j = *ecx_2
            ecx_2 = &ecx_2[1]
        while (j != 0)
        void var_11f
        ecx_1 = ecx_2 - &var_11f
    else
        ecx_1 = nullptr
    
    sub_402110(&var_138, &var_120, ecx_1)
    var_c_1.b = 2
    sub_6983d0(&var_138, &var_150)
    
    if (var_124_1 u>= 0x10)
        j__free(var_138.d)
    
    if (var_140_1 != 0)
        char* lParam = &var_150
        
        if (var_13c_1 u>= 0x10)
            lParam = var_150.d
        
        SendMessageA(*(arg1 + 0xc), 0x143, 0, lParam)
        
        if (wParam == 0)
            char* lpString = &var_150
            
            if (var_13c_1 u>= 0x10)
                lpString = var_150.d
            
            SetWindowTextA(*(arg1 + 0xc), lpString)
            SendMessageA(*(arg1 + 0xc), 0x142, wParam, 0xffffffff)
    
    var_c_1.b = 0
    
    if (var_13c_1 u>= 0x10)
        j__free(var_150.d)

HKEY hKey_1 = phkResult
struct win32only::CRegistry::VTable* const var_158_1 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    hKey_1 = RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_15c)
return hKey_1
