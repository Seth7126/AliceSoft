// 函数: sub_64b190
// 地址: 0x64b190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &usernotice::CVMErrorDialog::`vftable'{for `win32only::CDialog'}
arg1[0xf] = &usernotice::CDlgButton::`vftable'
arg1[0xd] = &usernotice::CListBox::`vftable'
int32_t* result = arg1[9]

if (result != 0)
    sub_4107c0(result, arg1[0xa])
    result = j__free(arg1[9])
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

if (arg1[8] u>= 0x10)
    result = j__free(arg1[3])

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
*arg1 = &win32only::CDialog::`vftable'
return result
