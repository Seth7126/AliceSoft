// 函数: sub_626f50
// 地址: 0x626f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = *(arg1 + 0x16bc)

if (eax s> 8)
    (*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    *(arg1 + 0x14) += 1
else if (eax s> 0)
    eax.b = *(arg1 + 0x16b8)
    (*(arg1 + 8))[*(arg1 + 0x14)] = eax.b
    *(arg1 + 0x14) += 1

*(arg1 + 0x16b8) = 0
*(arg1 + 0x16bc) = 0
return 0
