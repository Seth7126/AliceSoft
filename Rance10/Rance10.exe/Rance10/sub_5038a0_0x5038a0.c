// 函数: sub_5038a0
// 地址: 0x5038a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &partsengine::CGUIMessageVariable::`vftable'
int32_t eax = arg1[0xa]

if (eax u>= 0x10)
    eax = sub_403160(arg1[5], eax + 1, 1)

arg1[0xa] = 0xf
bool cond:0 = arg1[0xa] u< 0x10
arg1[9] = 0

if (cond:0)
    arg1[5].b = 0
    return eax

char* eax_2 = arg1[5]
*eax_2 = 0
return eax_2
