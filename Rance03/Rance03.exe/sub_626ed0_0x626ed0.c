// 函数: sub_626ed0
// 地址: 0x626ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result = *(arg1 + 0x16bc)

if (result == 0x10)
    (*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    *(arg1 + 0x14) += 1
    *(arg1 + 0x16bc) = 0
    *(arg1 + 0x16b8) = 0
    return 0

if (result s>= 8)
    result.b = *(arg1 + 0x16b8)
    (*(arg1 + 8))[*(arg1 + 0x14)] = result.b
    result = zx.d(*(arg1 + 0x16b9))
    *(arg1 + 0x14) += 1
    *(arg1 + 0x16bc) -= 8
    *(arg1 + 0x16b8) = result.w

return result
