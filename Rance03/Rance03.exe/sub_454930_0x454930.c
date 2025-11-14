// 函数: sub_454930
// 地址: 0x454930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &debugfile::CObjectType::`vftable'

if (arg1[8] u>= 0x10)
    j__free(arg1[3])

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
