// 函数: sub_428930
// 地址: 0x428930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpvariable::CInputDlg::`vftable'{for `win32only::CDialog'}

if (arg1[7] u>= 0x10)
    j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
*arg1 = &win32only::CDialog::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
