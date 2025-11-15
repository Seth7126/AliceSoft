// 函数: sub_614c40
// 地址: 0x614c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *(arg1 + 0x1fc)
int32_t esi = *(*(arg1 + 0x1f8) + (edx << 2) - 4)
*(arg1 + 0x1fc) = edx - 1
int32_t eax_2
eax_2.b = esi != 0
return sub_405d30(arg1 + 0x1f4, eax_2)
