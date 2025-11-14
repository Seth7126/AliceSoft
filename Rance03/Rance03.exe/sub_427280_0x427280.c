// 函数: sub_427280
// 地址: 0x427280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4f08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(*(arg1 + 4) + 0x1c) = GetStockObject(GRAY_BRUSH)
*(arg1 + 0x3c) = 0x52000000
*(arg1 + 0x50) = arg3
*(arg1 + 0x84) = arg4
sub_402110(arg1 + 8, "DPVariable__CCheckBoxWindow__", 0x1d)
HWND hKey = sub_431d40(arg1, arg2)

if (hKey.b != 0)
    *(arg1 + 0x84) = arg4
    struct win32only::CRegistry::VTable* const var_40_1 = &win32only::CRegistry::`vftable'
    HKEY phkResult = nullptr
    int32_t var_4 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_402110(&var_2c, "Software\Alicesoft\Sys42IDE\DPVariable", 0x26)
    HKEY hKey_1 = phkResult
    
    if (hKey_1 != 0)
        RegCloseKey(hKey_1)
        phkResult = nullptr
    
    char* lpSubKey = &var_2c
    
    if (var_18_1 u>= 0x10)
        lpSubKey = var_2c.d
    
    enum WIN32_ERROR eax_7
    eax_7.b = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
    int32_t ebx
    ebx.b = eax_7.b == 0
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    if (ebx.b == 0)
        void* eax_8 = *(arg1 + 0x84)
        int32_t i = 0
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = muls.dp.d(0x2aaaaaab, *(eax_8 + 0x40) - *(eax_8 + 0x3c))
        int32_t edx_2 = edx_1 s>> 2
        
        if ((edx_2 u>> 0x1f) + edx_2 s> 0)
            int32_t X = 0
            int32_t edx_5
            
            do
                void* ecx_5 = *(arg1 + 0x84)
                int32_t data = 1
                enum WIN32_ERROR lpValueName = sub_42e3b0(ecx_5, &var_2c, i)
                HKEY hKey_2 = phkResult
                int32_t type
                
                if (hKey_2 != 0)
                    bool cond:1_1 = *(lpValueName + 0x14) u< 0x10
                    type = 4
                    uint32_t lpcbData = 4
                    
                    if (not(cond:1_1))
                        lpValueName = *lpValueName
                    
                    lpValueName.b =
                        RegQueryValueExA(hKey_2, lpValueName, nullptr, &type, &data, &lpcbData)
                        == NO_ERROR
                else
                    lpValueName.b = 0
                
                ebx.b = lpValueName.b == 0
                
                if (var_18_1 u>= 0x10)
                    j__free(var_2c.d)
                
                int32_t data_1 = data
                
                if (ebx.b != 0)
                    data_1 = 1
                
                void* ecx_6 = *(arg1 + 0x84)
                data = data_1
                ebx.b = data_1 != 0
                char var_41_1 = ebx.b
                
                if (i s>= 0 && i u<= (*(ecx_6 + 0x4c) - *(ecx_6 + 0x48)) s>> 2)
                    int32_t edx_3
                    edx_3.b = ebx.b != 0
                    *(*(ecx_6 + 0x48) + (i << 2)) = edx_3
                    sub_42e0d0(ecx_6, nullptr)
                
                PSTR lpWindowName = sub_42e3b0(*(arg1 + 0x84), &var_2c, i)
                
                if (*(lpWindowName + 0x14) u>= 0x10)
                    lpWindowName = *lpWindowName
                
                int32_t hWnd = CreateWindowExA(WS_EX_LEFT, "BUTTON", lpWindowName, 0x50000002, X, 
                    0, 0x96, 0x14, *(arg1 + 0x5c), i + 0x190, *(arg1 + 0x58), nullptr)
                type = hWnd
                
                if (var_18_1 u>= 0x10)
                    j__free(var_2c.d)
                
                WPARAM wParam
                wParam.b = var_41_1 != 0
                SendMessageA(hWnd, 0xf1, wParam, 0)
                sub_412de0(arg1 + 0x88, &type)
                void* eax_19 = *(arg1 + 0x84)
                i += 1
                X += 0x96
                int32_t eax_20
                int32_t edx_4
                edx_4:eax_20 = muls.dp.d(0x2aaaaaab, *(eax_19 + 0x40) - *(eax_19 + 0x3c))
                edx_5 = edx_4 s>> 2
            while (i s< (edx_5 u>> 0x1f) + edx_5)
        
        hKey = phkResult
        
        if (hKey != 0)
            RegCloseKey(hKey)
            hKey = nullptr
            phkResult = nullptr
        
        ebx.b = 1
    else
        hKey = phkResult
        ebx.b = 0
    
    struct win32only::CRegistry::VTable* const var_40_2 = &win32only::CRegistry::`vftable'
    
    if (hKey != 0)
        RegCloseKey(hKey)
    
    hKey.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return hKey
