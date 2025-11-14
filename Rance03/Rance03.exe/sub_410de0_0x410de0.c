// 函数: sub_410de0
// 地址: 0x410de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CDialogBPConfig::`vftable'{for `win32only::CDialog'}

if (arg1[8] u>= 0x10)
    j__free(arg1[3])

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
*arg1 = &win32only::CDialog::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
