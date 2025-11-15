// 函数: sub_42b720
// 地址: 0x42b720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &advengine::CToken::`vftable'
int32_t eax = arg1[7]

if (eax u>= 0x10)
    eax = sub_403160(arg1[2], eax + 1, 1)

arg1[7] = 0xf
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:0)
    arg1[2].b = 0
    return eax

char* eax_2 = arg1[2]
*eax_2 = 0
return eax_2
