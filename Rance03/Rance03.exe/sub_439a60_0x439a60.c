// 函数: sub_439a60
// 地址: 0x439a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 + 0x38)

if (result != *(arg1 + 0x3c))
    result = *(result + ((*(arg1 + 0x3c) - result) s>> 2 << 2) - 4)
    *(arg1 + 0x2c) = result
    *(arg1 + 0x3c) -= 4

return result
