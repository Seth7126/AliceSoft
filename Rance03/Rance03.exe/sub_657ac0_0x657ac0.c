// 函数: sub_657ac0
// 地址: 0x657ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = 0

if (*(arg2 + 4) != 0)
    result = *(arg1 + 0x48)

if (*(arg2 + 5) != 0)
    result += *(arg1 + 0x60)

if (*(arg2 + 6) != 0)
    result += *(arg1 + 0x90) + *(arg1 + 0x78)

if (*(arg2 + 7) != 0)
    result += *(arg1 + 0xd8) + *(arg1 + 0xc0) + *(arg1 + 0xa8)

if (*(arg2 + 8) != 0)
    result += *(arg1 + 0xf0)

if (*(arg2 + 9) != 0)
    result += *(arg1 + 0x108)

if (*(arg2 + 0xa) != 0)
    result += *(arg1 + 0x120)

if (*(arg2 + 0xb) != 0)
    result += *(arg1 + 0x138)

if (*(arg2 + 0xc) != 0)
    result += *(arg1 + 0x150)

if (*(arg2 + 0xd) != 0)
    result += *(arg1 + 0x168)

if (*(arg2 + 0xe) != 0)
    result += *(arg1 + 0x180)

if (*(arg2 + 0xf) != 0)
    result += *(arg1 + 0x198)

if (*(arg2 + 0x10) != 0)
    result += *(arg1 + 0x1b0)

if (*(arg2 + 0x11) != 0)
    result += *(arg1 + 0x1c8)

if (*(arg2 + 0x12) != 0)
    result += *(arg1 + 0x1e0)

if (*(arg2 + 0x13) != 0)
    result += *(arg1 + 0x1f8)

if (*(arg2 + 0x14) != 0)
    result += *(arg1 + 0x210)

if (*(arg2 + 0x15) != 0)
    result += *(arg1 + 0x228)

if (*(arg2 + 0x16) != 0)
    result += *(arg1 + 0x258) + *(arg1 + 0x240)

if (*(arg2 + 0x17) != 0)
    result += *(arg1 + 0x2a0) + *(arg1 + 0x288) + *(arg1 + 0x270)

if (*(arg2 + 0x18) == 0)
    return result

return result + *(arg1 + 0x2b8)
