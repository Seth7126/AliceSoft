// 函数: sub_64af70
// 地址: 0x64af70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &usernotice::COpenWebDlg::`vftable'{for `win32only::CDialog'}

if (arg1[0x13] u>= 0x10)
    j__free(arg1[0xe])

arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0

if (arg1[0xd] u>= 0x10)
    j__free(arg1[8])

arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0

if (arg1[7] u>= 0x10)
    j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
*arg1 = &win32only::CDialog::`vftable'
