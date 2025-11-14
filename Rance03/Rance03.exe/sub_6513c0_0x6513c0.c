// 函数: sub_6513c0
// 地址: 0x6513c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &startup::CIniFile::`vftable'{for `ISys40Ini2'}

if (arg1[0x2d] u>= 0x10)
    j__free(arg1[0x28])

arg1[0x2d] = 0xf
arg1[0x2c] = 0
arg1[0x28].b = 0
sub_544550(&arg1[0x25])
int32_t* result = arg1[0x22]

if (result != 0)
    sub_4107c0(result, arg1[0x23])
    result = j__free(arg1[0x22])
    arg1[0x22] = 0
    arg1[0x23] = 0
    arg1[0x24] = 0

if (arg1[0x21] u>= 0x10)
    result = j__free(arg1[0x1c])

arg1[0x21] = 0xf
arg1[0x20] = 0
arg1[0x1c].b = 0

if (arg1[0x1b] u>= 0x10)
    result = j__free(arg1[0x16])

arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0

if (arg1[0x15] u>= 0x10)
    result = j__free(arg1[0x10])

arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0

if (arg1[0xf] u>= 0x10)
    result = j__free(arg1[0xa])

arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0

if (arg1[9] u>= 0x10)
    result = j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
return result
