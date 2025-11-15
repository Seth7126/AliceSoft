// 函数: sub_4e8c30
// 地址: 0x4e8c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x114) - *(arg1 + 0x110))
int32_t edx_3 = edx_2 s>> 2

if ((edx_3 u>> 0x1f) + edx_3 s> arg2 && arg2 s>= 0)
    return *(arg1 + 0x110) + arg2 * 0x18

return arg1 + 4
