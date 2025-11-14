// 函数: sub_50a3e0
// 地址: 0x50a3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0x34)

if (esi s<= 0 || *(arg1 + 8) == *(arg1 + 0xc))
    return 

if (*(arg1 + 0x38) != 0)
    *(arg1 + 0x38) = 0
    return 

int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(arg2 + *(arg1 + 0x3c))
*(arg1 + 0x3c) = mods.dp.d(edx_1:eax_3, esi)
int32_t ecx_2 = (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(*(arg1 + 0x40) + divs.dp.d(edx_1:eax_3, esi))
*(arg1 + 0x58) = 1
*(arg1 + 0x40) = mods.dp.d(edx_3:eax_7, ecx_2)
