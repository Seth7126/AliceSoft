// 函数: sub_6ce5e0
// 地址: 0x6ce5e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HKEY hKey = *(arg1 + 4)

if (hKey != 0)
    RegCloseKey(hKey)
    *(arg1 + 4) = 0

void** lpSubKey = arg3

if (lpSubKey[5] u>= 0x10)
    lpSubKey = *lpSubKey

enum WIN32_ERROR result
result.b = RegOpenKeyExA(arg2, lpSubKey, 0, KEY_READ, arg1 + 4) == NO_ERROR
return result
