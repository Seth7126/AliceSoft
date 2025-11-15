// 函数: sub_6cdfa0
// 地址: 0x6cdfa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HGDIOBJ ho = arg1[1]
*arg1 = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[1] = 0

int32_t eax_1 = arg1[8]

if (eax_1 u>= 0x10)
    eax_1 = sub_403160(arg1[3], eax_1 + 1, 1)

arg1[8] = 0xf
bool cond:0 = arg1[8] u< 0x10
arg1[7] = 0

if (cond:0)
    arg1[3].b = 0
    return eax_1

char* eax_2 = arg1[3]
*eax_2 = 0
return eax_2
