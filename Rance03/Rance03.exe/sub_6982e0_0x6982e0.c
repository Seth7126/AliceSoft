// 函数: sub_6982e0
// 地址: 0x6982e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HKEY hKey = arg1[1]
*arg1 = &win32only::CRegistry::`vftable'

if (hKey != 0)
    RegCloseKey(hKey)
    arg1[1] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
