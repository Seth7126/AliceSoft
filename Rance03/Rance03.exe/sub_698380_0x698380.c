// 函数: sub_698380
// 地址: 0x698380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HKEY hKey = *(arg1 + 4)

if (hKey == 0)
    int32_t eax
    eax.b = 0
    return eax

void** lpValueName = arg2
enum REG_VALUE_TYPE type = REG_DWORD
uint32_t lpcbData = 4

if (lpValueName[5] u>= 0x10)
    lpValueName = *lpValueName

enum WIN32_ERROR eax_1
eax_1.b = RegQueryValueExA(hKey, lpValueName, nullptr, &type, arg3, &lpcbData) == NO_ERROR
return eax_1
