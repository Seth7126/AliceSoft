// 函数: sub_4275e0
// 地址: 0x4275e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4f38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x8c) = *(arg1 + 0x88)
*(arg1 + 0x5c) = 0
struct win32only::CRegistry::VTable* const var_40 = &win32only::CRegistry::`vftable'
HKEY hKey_2 = nullptr
int32_t var_c_1 = 0
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
sub_402110(&var_34, "Software\Alicesoft\Sys42IDE\DPVariable", 0x26)
HKEY hKey = hKey_2

if (hKey != 0)
    RegCloseKey(hKey)
    hKey_2 = nullptr

char* lpSubKey = &var_34

if (var_20 u>= 0x10)
    lpSubKey = var_34.d

int32_t ebx
ebx.b = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, KEY_ALL_ACCESS, 
    nullptr, &hKey_2, nullptr) == NO_ERROR

if (var_20 u>= 0x10)
    j__free(var_34.d)

if (ebx.b != 0)
    void* eax_7 = *(arg1 + 0x84)
    int32_t i = 0
    int32_t eax_8
    int32_t edx_1
    edx_1:eax_8 = muls.dp.d(0x2aaaaaab, *(eax_7 + 0x40) - *(eax_7 + 0x3c))
    int32_t edx_2 = edx_1 s>> 2
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        int32_t edx_4
        
        do
            void* ecx_3 = *(arg1 + 0x84)
            
            if (i s< 0 || i u> (*(ecx_3 + 0x4c) - *(ecx_3 + 0x48)) s>> 2)
                ebx.b = 0
            else
                ebx.b = *(*(ecx_3 + 0x48) + (i << 2)) == 1
            
            char* lpValueName = sub_42e3b0(ecx_3, &var_34, i)
            int32_t data_1
            data_1.b = ebx.b != 0
            bool cond:1_1 = hKey_2 == 0
            int32_t data = data_1
            
            if (not(cond:1_1))
                if (*(lpValueName + 0x14) u>= 0x10)
                    lpValueName = *lpValueName
                
                RegSetValueExA(hKey_2, lpValueName, 0, REG_DWORD, &data, 4)
            
            if (var_20 u>= 0x10)
                j__free(var_34.d)
            
            void* eax_16 = *(arg1 + 0x84)
            i += 1
            int32_t eax_17
            int32_t edx_3
            edx_3:eax_17 = muls.dp.d(0x2aaaaaab, *(eax_16 + 0x40) - *(eax_16 + 0x3c))
            edx_4 = edx_3 s>> 2
        while (i s< (edx_4 u>> 0x1f) + edx_4)

HKEY hKey_1 = hKey_2
struct win32only::CRegistry::VTable* const var_40_1 = &win32only::CRegistry::`vftable'

if (hKey_1 != 0)
    RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return 0
