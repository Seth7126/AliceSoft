// 函数: sub_696e70
// 地址: 0x696e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &win32only::CAliceRunPatch::`vftable'

if (arg1[6] u>= 0x10)
    j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
