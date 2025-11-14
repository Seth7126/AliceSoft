// 函数: sub_5eb070
// 地址: 0x5eb070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys40::CWindowSetting::`vftable'

if (arg1[0xe] u>= 0x10)
    j__free(arg1[9])

arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
