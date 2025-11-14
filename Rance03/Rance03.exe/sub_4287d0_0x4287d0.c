// 函数: sub_4287d0
// 地址: 0x4287d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpvariable::CIncSearchWnd::`vftable'
BOOL ho = arg1[3]
arg1[2] = &win32only::CFont::`vftable'

if (ho != 0)
    ho = DeleteObject(ho)
    arg1[3] = 0

if (arg1[0xa] u>= 0x10)
    ho = j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
return ho
