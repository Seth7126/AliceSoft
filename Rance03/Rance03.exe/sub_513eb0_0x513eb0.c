// 函数: sub_513eb0
// 地址: 0x513eb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CSound::`vftable'{for `partsengine::ISound'}
arg1[3] = &common::CStringWrapper::`vftable'{for `IString'}

if (arg1[9] u>= 0x10)
    j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
