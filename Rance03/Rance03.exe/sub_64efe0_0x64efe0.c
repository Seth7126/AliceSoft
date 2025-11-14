// 函数: sub_64efe0
// 地址: 0x64efe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 4) -= 1
int32_t result = *(arg1 + 4)

if (result s<= 0)
    *(arg1 + 0x28) = *(arg1 + 0x24)
    *(arg1 + 0x34) = *(arg1 + 0x30)
    result = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x40) = 0
    __builtin_memset(arg1 + 8, 0, 0x14)
    *(arg1 + 0x20) = 0

return result
