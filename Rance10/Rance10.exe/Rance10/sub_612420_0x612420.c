// 函数: sub_612420
// 地址: 0x612420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[0xf] = &usernotice::CDlgButton::`vftable'
arg1[0xd] = &usernotice::CListBox::`vftable'
sub_417070(&arg1[9])
int32_t eax = arg1[8]

if (eax u>= 0x10)
    eax = sub_403160(arg1[3], eax + 1, 1)

arg1[8] = 0xf
bool cond:0 = arg1[8] u< 0x10
arg1[7] = 0

if (cond:0)
    arg1[3].b = 0
    *arg1 = &win32only::CDialog::`vftable'
    return eax

char* eax_2 = arg1[3]
*eax_2 = 0
*arg1 = &win32only::CDialog::`vftable'
return eax_2
