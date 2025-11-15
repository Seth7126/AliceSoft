// 函数: sub_6ce5a0
// 地址: 0x6ce5a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HKEY hKey = arg1[1]
*arg1 = &win32only::CRegistry::`vftable'

if (hKey != 0)
    RegCloseKey(hKey)
    arg1[1] = 0

if ((arg2 & 1) != 0)
    int32_t var_8_2 = 8
    operator new(arg1)

return arg1
