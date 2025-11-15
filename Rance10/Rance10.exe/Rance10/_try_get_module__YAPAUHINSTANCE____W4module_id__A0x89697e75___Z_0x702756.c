// 函数: ?try_get_module@@YAPAUHINSTANCE__@@W4module_id@?A0x89697e75@@@Z
// 地址: 0x702756
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = 0

if (0 == *((arg1 << 2) + &data_7fc3ac))
    *((arg1 << 2) + &data_7fc3ac) = 0
else
    eax = *((arg1 << 2) + &data_7fc3ac)

if (eax != 0)
    int32_t eax_2 = neg.d(eax + 1)
    return sbb.d(eax_2, eax_2, eax != 0xffffffff) & eax

PWSTR lpLibFileName = (&data_75383c)[arg1]
HMODULE result = LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)

if (result == 0)
    if (GetLastError() != ERROR_INVALID_PARAMETER)
        result = nullptr
    else
        result = LoadLibraryExW(lpLibFileName, result, result)
    
    if (result == 0)
        *((arg1 << 2) + &data_7fc3ac) = 0xffffffff
        return nullptr

int32_t temp0_1 = *((arg1 << 2) + &data_7fc3ac)
*((arg1 << 2) + &data_7fc3ac) = result

if (temp0_1 != 0)
    FreeLibrary(result)

return result
