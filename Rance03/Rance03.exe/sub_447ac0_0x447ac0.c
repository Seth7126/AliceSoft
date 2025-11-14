// 函数: sub_447ac0
// 地址: 0x447ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = sub_443580(arg2)

if (eax s< 0)
    if ((eax & 0x40000000) == 0)
        sub_447bb0(arg1, eax)
        *(arg2 + 8) += 5
        return 5
    
    int32_t eax_1 = sub_447b40(arg1, eax)
    *(arg2 + 8) += eax_1
    return eax_1

if ((eax & 0x40000000) != 0)
    int32_t eax_2 = sub_447c30(arg1, eax)
    *(arg2 + 8) += eax_2
    return eax_2

if ((eax & 0x20000000) == 0)
    *arg1 = 0x3c
    *(arg2 + 8) += 3
    return 3

int32_t eax_3 = eax & 0x10000000
int32_t eax_4 = neg.d(eax_3)
*arg1 = (sbb.d(eax_4, eax_4, eax_3 != 0) & 4) + 4
*(arg2 + 8) += 4
return 4
