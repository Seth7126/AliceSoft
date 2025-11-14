// 函数: sub_406290
// 地址: 0x406290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CVariableToken::`vftable'{for `dpanalysis::IToken'}

if (arg1[6] u>= 0x10)
    j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
*arg1 = &dpanalysis::IToken::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
