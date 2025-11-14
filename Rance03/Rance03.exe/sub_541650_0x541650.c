// 函数: sub_541650
// 地址: 0x541650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x6c) - *(arg1 + 0x68))
int32_t edx_3 = edx_2 s>> 1

if (arg2 s>= (edx_3 u>> 0x1f) + edx_3)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

int32_t eax_4 = *(arg1 + 0x68)
int32_t ecx_1 = arg2 * 3
*arg3 = *(eax_4 + (ecx_1 << 2))
arg3[1].d = *(eax_4 + (ecx_1 << 2) + 8)
int32_t eax_6
eax_6.b = 1
return eax_6
