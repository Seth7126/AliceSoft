// 函数: sub_439a80
// 地址: 0x439a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &advengine::CValueSyntax::`vftable'

if (arg1[0x13] u>= 0x10)
    j__free(arg1[0xe])

arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
int32_t result = sub_435c20(&arg1[0xb])
arg1[1] = &advengine::CToken::`vftable'

if (arg1[8] u>= 0x10)
    result = j__free(arg1[3])

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
return result
