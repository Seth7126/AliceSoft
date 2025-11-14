// 函数: sub_5d9a40
// 地址: 0x5d9a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi_1 = arg1 - *(arg2 + 0x104)

if (esi_1 != 0xffffffff)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0x7c) - *(arg2 + 0x78))
    int32_t edx_2 = edx_1 s>> 3
    
    if (esi_1 u< (edx_2 u>> 0x1f) + edx_2)
        int32_t eax_5 = esi_1 * 0x2c
        
        if (eax_5 != neg.d(*(arg2 + 0x78)))
            return eax_5 + *(arg2 + 0x78)

return 0
