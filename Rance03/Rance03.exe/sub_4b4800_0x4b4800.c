// 函数: sub_4b4800
// 地址: 0x4b4800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CGUIMessage::`vftable'

if (arg1[0xc] u>= 0x10)
    j__free(arg1[7])

arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
sub_4b4d00(&arg1[4])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
