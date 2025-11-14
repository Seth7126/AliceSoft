// 函数: sub_626780
// 地址: 0x626780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg1 + 0x16bc)

if (ecx s<= 0xd)
    *(arg1 + 0x16b8) |= 2 << ecx.b
    *(arg1 + 0x16bc) = ecx + 3
else
    char* edx_1 = *(arg1 + 8)
    int32_t ecx_1 = *(arg1 + 0x14)
    *(arg1 + 0x16b8) |= 2 << ecx.b
    edx_1[ecx_1] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    int32_t ecx_2
    ecx_2.b = 0x10
    ecx_2.b = 0x10 - *(arg1 + 0x16bc)
    *(arg1 + 0x14) += 1
    *(arg1 + 0x16bc) -= 0xd
    *(arg1 + 0x16b8) = 2 u>> ecx_2.b

int32_t ecx_3 = *(arg1 + 0x16bc)
*(arg1 + 0x16b8) = *(arg1 + 0x16b8)

if (ecx_3 s<= 9)
    *(arg1 + 0x16bc) = ecx_3 + 7
    return sub_626ed0(arg1) __tailcall

(*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
*(arg1 + 0x14) += 1
(*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
*(arg1 + 0x14) += 1
*(arg1 + 0x16bc) -= 9
*(arg1 + 0x16b8) = 0
return sub_626ed0(arg1) __tailcall
