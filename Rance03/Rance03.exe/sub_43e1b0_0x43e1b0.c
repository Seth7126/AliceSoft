// 函数: sub_43e1b0
// 地址: 0x43e1b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 2
int32_t ecx_4 = *(arg1 + 8)

if (*(*(arg1 + 4) + ((edx_3 u>> 0x1f) + edx_3) * 0x18 - 8) != 0)
    int32_t eax_6
    int32_t edx_7
    edx_7:eax_6 = muls.dp.d(0x2aaaaaab, ecx_4 - *(arg1 + 4))
    int32_t edx_8 = edx_7 s>> 2
    return (edx_8 u>> 0x1f) + edx_8

int32_t eax_1
int32_t edx_5
edx_5:eax_1 = muls.dp.d(0x2aaaaaab, ecx_4 - *(arg1 + 4))
int32_t edx_6 = edx_5 s>> 2
return (edx_6 u>> 0x1f) - 1 + edx_6
