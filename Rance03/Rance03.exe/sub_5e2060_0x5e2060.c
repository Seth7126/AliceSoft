// 函数: sub_5e2060
// 地址: 0x5e2060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys40::CInputString::`vftable'

if (arg1[0x16] u>= 0x10)
    j__free(arg1[0x11])

arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
int32_t* result = arg1[7]

if (result != 0)
    sub_4107c0(result, arg1[8])
    result = j__free(arg1[7])
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
return result
