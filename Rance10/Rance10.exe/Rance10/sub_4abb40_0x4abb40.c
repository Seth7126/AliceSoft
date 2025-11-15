// 函数: sub_4abb40
// 地址: 0x4abb40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s< 0 || (*(arg1 + 8) - *(arg1 + 4)) s>> 4 s<= arg2)
    return 0

int32_t* edx_1 = (arg2 << 4) + *(arg1 + 4)
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x2aaaaaab, edx_1[1] - *edx_1)
int32_t edx_3 = edx_2 s>> 1
return (edx_3 u>> 0x1f) + edx_3
