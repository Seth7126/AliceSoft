// 函数: sub_5d7ba0
// 地址: 0x5d7ba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CResume::`vftable'

if (arg1[0xa] u>= 0x10)
    j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
int32_t* result = arg1[1]

if (result != 0)
    sub_4107c0(result, arg1[2])
    result = j__free(arg1[1])
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
