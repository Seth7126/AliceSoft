// 函数: sub_42ccd0
// 地址: 0x42ccd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x38)

if (result != *(arg1 + 0x3c))
    result = *(result + ((*(arg1 + 0x3c) - result) s>> 2 << 2) - 4)
    *(arg1 + 0x2c) = result
    *(arg1 + 0x3c) -= 4

return result
