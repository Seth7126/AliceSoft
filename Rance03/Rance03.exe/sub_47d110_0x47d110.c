// 函数: sub_47d110
// 地址: 0x47d110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &msgskip::CMsgSkip::`vftable'

if (arg1[0x11] u>= 0x10)
    j__free(arg1[0xc])

arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0
int32_t result = arg1[9]

if (result != 0)
    result = j__free(result)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
return result
