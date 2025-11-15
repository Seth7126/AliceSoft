// 函数: sub_404c60
// 地址: 0x404c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &common::CStringWrapper::`vftable'{for `IString'}
int32_t eax = arg1[6]

if (eax u>= 0x10)
    eax = sub_403160(arg1[1], eax + 1, 1)

arg1[6] = 0xf
bool cond:0 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:0)
    arg1[1].b = 0
    return eax

char* eax_2 = arg1[1]
*eax_2 = 0
return eax_2
