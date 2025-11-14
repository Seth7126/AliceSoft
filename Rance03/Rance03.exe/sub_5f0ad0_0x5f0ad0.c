// 函数: sub_5f0ad0
// 地址: 0x5f0ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 4) -= 1
int32_t result = *(arg1 + 4)

if (result s<= 0)
    *(arg1 + 0xc) = *(arg1 + 8)
    result = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0

return result
