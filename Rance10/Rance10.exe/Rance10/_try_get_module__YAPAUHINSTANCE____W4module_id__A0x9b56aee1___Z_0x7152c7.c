// 函数: ?try_get_module@@YAPAUHINSTANCE__@@W4module_id@?A0x9b56aee1@@@Z
// 地址: 0x7152c7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
int32_t ecx = *((arg1 << 2) + &data_7fc920)

if (ecx != 0)
    int32_t eax_2 = neg.d(ecx + 1)
    return sbb.d(eax_2, eax_2, ecx != 0xffffffff) & ecx

PWSTR lpLibFileName = (&data_755a58)[arg1]
HMODULE result = LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)

if (result == 0)
    if (GetLastError() != ERROR_INVALID_PARAMETER)
        result = nullptr
    else
        result = LoadLibraryExW(lpLibFileName, result, result)
    
    if (result == 0)
        *((arg1 << 2) + &data_7fc920) = 0xffffffff
        return nullptr

int32_t temp0_1 = *((arg1 << 2) + &data_7fc920)
*((arg1 << 2) + &data_7fc920) = result

if (temp0_1 != 0)
    FreeLibrary(result)

return result
