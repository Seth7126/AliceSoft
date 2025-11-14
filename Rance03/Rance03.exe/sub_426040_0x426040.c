// 函数: sub_426040
// 地址: 0x426040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4e38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CRegistry::VTable* const var_44
int32_t eax_2 = __security_cookie ^ &var_44
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t eax_6 = (**(arg1 - 0x84))(__security_cookie ^ &__saved_edi)
BOOL eax_9

if (eax_6 != 0)
    eax_9 = IsWindow((**(arg1 - 0x84))())

char result

if (eax_6 == 0 || eax_9 == 0)
    result = sub_42c830(arg1 + 0x8c0, arg1 + 0xc)
    
    if (result != 0)
        sub_402110(arg1 - 0x64, 0x6da9dc, 0xc)
        sub_402110(arg1 - 0x7c, "DPVariableClass", 0xf)
        *(*(arg1 - 0x80) + 0x14) = LoadIconA(*(arg1 + 8), 0x80)
        *(arg1 - 0x30) = LoadMenuA(*(arg1 + 8), 0x7f)
        *(arg1 - 0x34) = 0
        *(arg1 - 0x48) = 0x2cf0000
        *(arg1 - 0x14) = 0x400
        *(arg1 - 0x10) = 0x300
        var_44 = &win32only::CRegistry::`vftable'
        HKEY phkResult = nullptr
        int32_t var_c_1 = 0
        void** lpSubKey_1
        sub_401f60(&lpSubKey_1, "Software\Alicesoft\Sys42IDE\DPVariable")
        HKEY hKey = phkResult
        
        if (hKey != 0)
            RegCloseKey(hKey)
            phkResult = nullptr
        
        void** lpSubKey = &lpSubKey_1
        int32_t var_20
        
        if (var_20 u>= 0x10)
            lpSubKey = lpSubKey_1
        
        int32_t ebx
        ebx.b = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
        
        if (var_20 u>= 0x10)
            j__free(lpSubKey_1)
        
        if (ebx.b != 0)
            int32_t var_38 = 0x400
            int32_t var_3c = 0x300
            sub_401f60(&lpSubKey_1, "WindowX")
            sub_698380(&var_44, &lpSubKey_1, arg1 - 0x44)
            
            if (var_20 u>= 0x10)
                j__free(lpSubKey_1)
            
            sub_401f60(&lpSubKey_1, "WindowY")
            sub_698380(&var_44, &lpSubKey_1, arg1 - 0x40)
            
            if (var_20 u>= 0x10)
                j__free(lpSubKey_1)
            
            sub_401f60(&lpSubKey_1, "WindowWidth")
            sub_698380(&var_44, &lpSubKey_1, &var_38)
            
            if (var_20 u>= 0x10)
                j__free(lpSubKey_1)
            
            sub_401f60(&lpSubKey_1, "WindowHeight")
            sub_698380(&var_44, &lpSubKey_1, &var_3c)
            
            if (var_20 u>= 0x10)
                j__free(lpSubKey_1)
            
            *(arg1 - 0x14) = var_38
            *(arg1 - 0x10) = var_3c
        
        if (sub_431d40(arg1 - 0x84, *(arg1 + 8)) != 0)
            sub_432470(arg1 - 0x84)
            ShowWindow(*(arg1 - 0x28), SW_SHOW)
            UpdateWindow(*(arg1 - 0x28))
            SetForegroundWindow(*(arg1 - 0x28))
            ebx.b = 1
        else
            ebx.b = 0
        
        HKEY hKey_1 = phkResult
        var_44 = &win32only::CRegistry::`vftable'
        
        if (hKey_1 != 0)
            RegCloseKey(hKey_1)
        
        result = ebx.b
else
    SetActiveWindow((**(arg1 - 0x84))())
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
