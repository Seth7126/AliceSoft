// 函数: sub_4a55a0
// 地址: 0x4a55a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x6c) = *(arg2 + 4)
int32_t result = *(arg2 + 8)
*(arg1 + 0x70) = result

if (*(arg1 + 0x50) == 0)
    return result

return (*(**(arg1 + 0x50) + 0x24))(*(arg2 + 4), *(arg2 + 8))
