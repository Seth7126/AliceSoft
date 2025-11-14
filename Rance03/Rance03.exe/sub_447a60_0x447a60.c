// 函数: sub_447a60
// 地址: 0x447a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = sub_443580(arg2)

if (eax s>= 0)
    *arg1 = 0xa
    *(arg2 + 8) += 1
    return eax

if ((eax & 0x40000000) == 0)
    *arg1 = 2
    *(arg2 + 8) += 2
    return 2

if ((eax & 0x20000000) == 0)
    *arg1 = 8
    *(arg2 + 8) += 3
    return 3

int32_t eax_1 = sub_447c90(arg1, eax)
*(arg2 + 8) += eax_1
return eax_1
