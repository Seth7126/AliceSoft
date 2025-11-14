// 函数: sub_698000
// 地址: 0x698000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HMENU hMenu = arg1[1]
*arg1 = &win32only::CMenu::`vftable'

if (hMenu != 0)
    if (arg1[2].b != 0)
        DestroyMenu(hMenu)
    
    arg1[1] = 0

arg1[2].b = 1

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
