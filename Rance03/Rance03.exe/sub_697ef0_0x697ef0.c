// 函数: sub_697ef0
// 地址: 0x697ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL ho = arg1[1]
*arg1 = &win32only::CFont::`vftable'

if (ho != 0)
    ho = DeleteObject(ho)
    arg1[1] = 0

if (arg1[8] u>= 0x10)
    ho = j__free(arg1[3])

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
return ho
