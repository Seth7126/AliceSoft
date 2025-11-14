// 函数: sub_42b6e0
// 地址: 0x42b6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpvariable::CTextChildWnd::`vftable'{for `dpvariable::CWindow'}
HGDIOBJ ho = arg1[0x22]
arg1[0x21] = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[0x22] = 0

if (arg1[0x29] u>= 0x10)
    j__free(arg1[0x24])

arg1[0x29] = 0xf
arg1[0x28] = 0
arg1[0x24].b = 0
return sub_431cd0(arg1) __tailcall
