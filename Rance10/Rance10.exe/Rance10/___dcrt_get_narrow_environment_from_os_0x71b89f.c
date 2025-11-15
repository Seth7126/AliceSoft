// 函数: ___dcrt_get_narrow_environment_from_os
// 地址: 0x71b89f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
PWSTR eax = GetEnvironmentStringsW()
int32_t cbMultiByte
int32_t cchWideChar

if (eax != 0)
    cchWideChar = (find_end_of_double_null_terminated_sequence(eax) - eax) s>> 1
    cbMultiByte = WideCharToMultiByte(0, 0, eax, cchWideChar, nullptr, 0, nullptr, nullptr)

PSTR result

if (eax == 0 || cbMultiByte == 0)
    result = nullptr
else
    PSTR lpMultiByteStr = __malloc_base(cbMultiByte)
    int32_t eax_3
    
    if (lpMultiByteStr != 0)
        eax_3 = WideCharToMultiByte(0, 0, eax, cchWideChar, lpMultiByteStr, cbMultiByte, nullptr, 
            nullptr)
    
    if (lpMultiByteStr == 0 || eax_3 == 0)
        result = nullptr
    else
        result = lpMultiByteStr
        lpMultiByteStr = nullptr
    
    __free_base(lpMultiByteStr)

if (eax != 0)
    FreeEnvironmentStringsW(eax)

return result
