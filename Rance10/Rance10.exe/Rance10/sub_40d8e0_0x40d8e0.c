// 函数: sub_40d8e0
// 地址: 0x40d8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = &arg1[1]
*arg1 = &dpanalysis::CVariableToken::`vftable'{for `dpanalysis::IToken'}
int32_t eax = esi[5]

if (eax u>= 0x10)
    sub_403160(*esi, eax + 1, 1)

esi[5] = 0xf
bool cond:0 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:0))
    esi = *esi

*esi = nullptr
*arg1 = &dpanalysis::IToken::`vftable'

if ((arg2 & 1) != 0)
    int32_t var_c_1 = 0x1c
    operator new(arg1)

return arg1
