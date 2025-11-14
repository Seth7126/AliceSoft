// 函数: sub_64e1f0
// 地址: 0x64e1f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ceaf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t var_94 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = *(arg1 + 0xc)
BOOL hKey

if (*eax_5 == 0)
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    sub_402110(&var_4c, 0x700890, 0xc)
    int32_t var_c_1 = 0
    char* ecx_2 = *(arg1 + 0xc) + 0x48
    
    if (ecx_2 != &var_4c)
        sub_401ff0(ecx_2, &var_4c, 0, 0xffffffff)
    
    int32_t var_c_2 = 0xffffffff
    
    if (var_38_1 u>= 0x10)
        j__free(var_4c.d)
    
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    sub_402110(&var_34, "DPLogViewerClass", 0x10)
    int32_t var_c_3 = 1
    char* ecx_5 = *(arg1 + 0xc) + 0x30
    
    if (ecx_5 != &var_34)
        sub_401ff0(ecx_5, &var_34, 0, 0xffffffff)
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    *(*(arg1 + 0xc) + 0x60) = *(arg1 + 0x10)
    *(*(arg1 + 0xc) + 0x68) = 0x2cf0000
    *(*(arg1 + 0xc) + 0x18) = LoadIconA(*(arg1 + 0x10), 0x66)
    *(*(arg1 + 0xc) + 0x80) = LoadMenuA(*(arg1 + 0x10), 0x9c92)
    int32_t var_78 = 0
    int32_t var_70 = 0
    int32_t var_74 = 0x320
    int32_t var_6c = 0x258
    struct win32only::CRegistry::VTable* const var_80 = &win32only::CRegistry::`vftable'
    HKEY phkResult = nullptr
    int32_t var_c_4 = 2
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    sub_402110(&var_64, "Software\Alicesoft\Sys42IDE\DPLogViewer", 0x27)
    HKEY hKey_1 = phkResult
    
    if (hKey_1 != 0)
        RegCloseKey(hKey_1)
        phkResult = nullptr
    
    char* lpSubKey = &var_64
    
    if (var_50_1 u>= 0x10)
        lpSubKey = var_64.d
    
    enum WIN32_ERROR eax_10
    eax_10.b = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
    char var_81_1 = eax_10.b
    
    if (var_50_1 u>= 0x10)
        j__free(var_64.d)
        eax_10.b = var_81_1
    
    if (eax_10.b != 0)
        sub_401f60(&var_64, "WindowX")
        sub_698380(&var_80, &var_64, &var_78)
        
        if (var_50_1 u>= 0x10)
            j__free(var_64.d)
        
        sub_401f60(&var_64, "WindowY")
        sub_698380(&var_80, &var_64, &var_70)
        
        if (var_50_1 u>= 0x10)
            j__free(var_64.d)
        
        sub_401f60(&var_64, "WindowWidth")
        sub_698380(&var_80, &var_64, &var_74)
        
        if (var_50_1 u>= 0x10)
            j__free(var_64.d)
        
        sub_401f60(&var_64, "WindowHeight")
        sub_698380(&var_80, &var_64, &var_6c)
        
        if (var_50_1 u>= 0x10)
            j__free(var_64.d)
    
    void* edx_1 = *(arg1 + 0xc)
    int32_t eax_11 = var_78
    int32_t edi_1 = var_6c
    int32_t esi_1 = var_74
    *(edx_1 + 0x70) = var_70
    *(edx_1 + 0x6c) = eax_11
    *(edx_1 + 0x74) = esi_1
    *(edx_1 + 0x78) = edi_1
    *(*(arg1 + 0xc) + 0x84) = arg1 - 4
    void* ebx
    
    if (sub_698a60(*(arg1 + 0xc)) == 0)
    label_64e585:
        ebx.b = 0
    else
        HWND hWnd = **(arg1 + 0xc)
        
        if (hWnd != 0)
            ShowWindow(hWnd, SW_SHOW)
        
        SetForegroundWindow(**(arg1 + 0xc))
        
        for (void** i = *(arg1 + 0x13c); i != *(arg1 + 0x140); i = &i[1])
            void* ecx_21 = *i
            
            if (**(ecx_21 + 8) == 0)
                char* edi_2 = ecx_21 + 0xc8
                char eax_18
                int32_t ecx_22
                eax_18, ecx_22 = sub_650740(ecx_21, **(arg1 + 0x1c), *(arg1 + 0x10))
                
                if (eax_18 == 0)
                    goto label_64e585
                
                if (*(edi_2 + 0x14) u>= 0x10)
                    edi_2 = *edi_2
                
                int32_t var_98_17 = ecx_22
                sub_6502c0(arg1 + 0x14, **(ecx_21 + 8), edi_2)
        
        ebx.b = 1
    
    hKey = phkResult
    var_80 = &win32only::CRegistry::`vftable'
    
    if (hKey != 0)
        RegCloseKey(hKey)
    
    hKey.b = ebx.b
else
    SetForegroundWindow(*eax_5)
    hKey.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return hKey
