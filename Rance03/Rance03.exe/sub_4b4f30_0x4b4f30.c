// 函数: sub_4b4f30
// 地址: 0x4b4f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CGUIMessageVariable::`vftable'

if (arg1[0xa] u>= 0x10)
    j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
