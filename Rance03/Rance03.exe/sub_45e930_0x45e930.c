// 函数: sub_45e930
// 地址: 0x45e930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_5 = *(arg2 + 4)

if (eax_5 == 1)
    *(arg1 + 4) = 1
    *(arg1 + 0xc) = *(arg2 + 8) ^ 0x65656565
    int32_t eax_4
    eax_4.b = 1
    return eax_4

if (eax_5 != 2)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

*(arg1 + 4) = 2
int32_t eax_2
int32_t xmm0_1
eax_2, xmm0_1 = sub_4591e0(*(arg2 + 0xc))
*(arg1 + 0x10) = xmm0_1
eax_2.b = 1
return eax_2
