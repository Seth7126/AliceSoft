// 函数: sub_698040
// 地址: 0x698040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hMenu = arg1[1]
*arg1 = &win32only::CMenu::`vftable'

if (hMenu != 0)
    if (arg1[2].b != 0)
        hMenu = DestroyMenu(hMenu)
    
    arg1[1] = 0

arg1[2].b = 1
return hMenu
