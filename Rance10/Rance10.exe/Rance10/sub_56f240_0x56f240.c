// 函数: sub_56f240
// 地址: 0x56f240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x1c)
void* esi = arg1 + 8

if (eax u>= 0x10)
    sub_403160(*esi, eax + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0

if ((arg2 & 1) != 0)
    int32_t var_c_1 = 0x24
    operator new(arg1)

return arg1
