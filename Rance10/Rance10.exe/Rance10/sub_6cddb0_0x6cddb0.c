// 函数: sub_6cddb0
// 地址: 0x6cddb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &win32only::CFileMapping::`vftable'
sub_6cdf10(arg1)
int32_t eax = arg1[9]

if (eax u>= 0x10)
    eax = sub_403160(arg1[4], eax + 1, 1)

arg1[9] = 0xf
bool cond:0 = arg1[9] u< 0x10
arg1[8] = 0

if (cond:0)
    arg1[4].b = 0
    return eax

char* eax_2 = arg1[4]
*eax_2 = 0
return eax_2
