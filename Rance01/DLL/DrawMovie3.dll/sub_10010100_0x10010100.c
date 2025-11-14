// 函数: sub_10010100
// 地址: 0x10010100
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (*(*(arg1 + 0x28) + 0x14) == 0)
    return 0x80040227

if (*(arg1 + 0xa1) != 0)
    return 1

uint32_t eax_2 = zx.d(*(arg1 + 0x24))
int32_t eax_3 = neg.d(eax_2)
return sbb.d(eax_3, eax_3, eax_2 != 0) & 0x8004020b
