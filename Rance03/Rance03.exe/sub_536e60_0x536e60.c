// 函数: sub_536e60
// 地址: 0x536e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, *(arg1 + 0x1a0) - *(arg1 + 0x19c))
int32_t edx_3 = edx_2 s>> 3

if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
    return 0

int32_t eax_5
int32_t edx_4
edx_4:eax_5 = muls.dp.d(0x38e38e39, *(arg1 + 0x1a0) - *(arg1 + 0x19c))
int32_t edx_5 = edx_4 s>> 3
return *(*(arg1 + 0x19c) + ((edx_5 u>> 0x1f) + edx_5) * 0x24 - 0x24)
