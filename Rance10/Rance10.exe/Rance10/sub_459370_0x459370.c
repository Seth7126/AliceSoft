// 函数: sub_459370
// 地址: 0x459370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_459550(arg1 + 0x20)
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
    int32_t var_c_1 = 0x2c
    operator new(arg1)

return arg1
