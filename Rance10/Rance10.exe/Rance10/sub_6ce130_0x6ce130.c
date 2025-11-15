// 函数: sub_6ce130
// 地址: 0x6ce130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hMenu = arg1[1]
*arg1 = &win32only::CMenu::`vftable'

if (hMenu != 0)
    if (arg1[2].b != 0)
        hMenu = DestroyMenu(hMenu)
    
    arg1[1] = 0

arg1[2].b = 1
return hMenu
