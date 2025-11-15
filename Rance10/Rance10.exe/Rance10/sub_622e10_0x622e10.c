// 函数: sub_622e10
// 地址: 0x622e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = &arg1[2]
*arg1 = &sys43vm::CResume::`vftable'
int32_t eax = esi[5]

if (eax u>= 0x10)
    sub_403160(*esi, eax + 1, 1)

esi[5] = 0xf
bool cond:0 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:0))
    esi = *esi

*esi = nullptr

if ((arg2 & 1) != 0)
    int32_t var_c_1 = 0x20
    operator new(arg1)

return arg1
