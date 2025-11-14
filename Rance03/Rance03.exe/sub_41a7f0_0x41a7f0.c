// 函数: sub_41a7f0
// 地址: 0x41a7f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CTextChildWnd::`vftable'{for `dpanalysis::CWindow'}
HGDIOBJ ho = arg1[6]
arg1[5] = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[6] = 0

if (arg1[0xd] u>= 0x10)
    j__free(arg1[8])

arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
return sub_41c560(arg1) __tailcall
