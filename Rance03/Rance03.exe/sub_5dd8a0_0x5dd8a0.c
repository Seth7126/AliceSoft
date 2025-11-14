// 函数: sub_5dd8a0
// 地址: 0x5dd8a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 2

if (arg2 u>= (edx_3 u>> 0x1f) + edx_3)
    return 0

int32_t eax_5 = *(arg1 + 4)
int32_t ecx_1 = arg2 * 3
int32_t* result = eax_5 + (ecx_1 << 3)

if (*(eax_5 + (ecx_1 << 3) + 0x14) u< 0x10)
    return result

return *result
