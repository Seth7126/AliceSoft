// 函数: sub_698320
// 地址: 0x698320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

enum WIN32_ERROR hKey = arg1[1]
*arg1 = &win32only::CRegistry::`vftable'

if (hKey != NO_ERROR)
    hKey = RegCloseKey(hKey)
    arg1[1] = 0

return hKey
