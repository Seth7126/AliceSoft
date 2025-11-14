// 函数: sub_4bd8f0
// 地址: 0x4bd8f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 + 0x10)

if (result != *(arg1 + 0x14))
    int32_t eax
    int32_t edx_3
    edx_3:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x14) - result)
    int32_t edx_4 = edx_3 s>> 1
    sub_4be7d0(arg1 + 4, *(arg1 + 0x10) + ((edx_4 u>> 0x1f) + edx_4) * 0xc - 0xc)
    result = sub_4bd310(*(arg1 + 0x14) - 0xc)
    *(arg1 + 0x14) -= 0xc

return result
