// 函数: sub_6ce0f0
// 地址: 0x6ce0f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMENU hMenu = arg1[1]
*arg1 = &win32only::CMenu::`vftable'

if (hMenu != 0)
    if (arg1[2].b != 0)
        DestroyMenu(hMenu)
    
    arg1[1] = 0

arg1[2].b = 1

if ((arg2 & 1) != 0)
    int32_t var_8_2 = 0xc
    operator new(arg1)

return arg1
