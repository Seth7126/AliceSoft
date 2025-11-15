// 函数: sub_4a9180
// 地址: 0x4a9180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x24)
void* esi = arg1 + 0x10

if (eax u>= 0x10)
    sub_403160(*esi, eax + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
return sub_403160(arg1, 1, 0x30)
