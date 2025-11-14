// 函数: sub_698340
// 地址: 0x698340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
