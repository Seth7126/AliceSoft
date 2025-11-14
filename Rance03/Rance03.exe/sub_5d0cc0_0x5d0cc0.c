// 函数: sub_5d0cc0
// 地址: 0x5d0cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 8)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, *(esi + 0xc4) - *(esi + 0xc0))
int32_t edx_1 = edx s>> 3

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t eax_4 = arg2 * 0x2c
    void* eax_5 = eax_4 + *(esi + 0xc0)
    
    if (eax_4 != neg.d(*(esi + 0xc0)))
        int32_t eax_6
        int32_t edx_2
        edx_2:eax_6 = muls.dp.d(0x66666667, *(eax_5 + 0x24) - *(eax_5 + 0x20))
        int32_t edx_3 = edx_2 s>> 4
        return (edx_3 u>> 0x1f) + edx_3

return 0
