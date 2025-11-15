// 函数: sub_6f6ccd
// 地址: 0x6f6ccd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx_1 = arg3 * 0x34 + *(arg2 + 0x30)

if (*(edx_1 + 0x31) == 0)
    *(arg1 + 0xa8) += 1
    *(arg2 + 0x20) += 1
    *(edx_1 + 0x31) = 1
else
    *(arg1 + 0xa8) -= 1
    *(arg2 + 0x20) -= 1
    *(edx_1 + 0x31) = 0

return arg2
