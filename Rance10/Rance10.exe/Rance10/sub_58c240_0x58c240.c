// 函数: sub_58c240
// 地址: 0x58c240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0x1c) - *(arg1 + 0x18)) s>> 3)
    return *(*(arg1 + 0x18) + (arg2 << 3))

int32_t* edx_4 = *(arg1 + 0x18)

if (((*(arg1 + 0x1c) - edx_4) & 0xfffffff8) s> 0)
    return *edx_4

return 0
