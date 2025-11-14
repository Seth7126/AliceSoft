// 函数: sub_64fa70
// 地址: 0x64fa70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0 && arg3 s< (*(*(arg1 + 0xc) + 0x14))() && arg2 s>= 0
        && arg2 s< (*(*(arg1 + 0x3c) + 0x10))() + 2)
    int32_t eax_6
    int32_t edx
    edx:eax_6 = muls.dp.d(0x38e38e39, *(arg1 + 0x80) - *(arg1 + 0x7c))
    int32_t edx_1 = edx s>> 3
    
    if ((edx_1 u>> 0x1f) + edx_1 s> 0)
        int32_t ebp_1 = 0
        int32_t i = 0
        int32_t ebx_1 = 2
        int32_t edx_4
        
        do
            if (arg2 s>= ebx_1
                    && arg2 s< *(*(arg1 + 0x7c) + ebp_1 + 0x1c) + (*(arg1 + 0x78) << 1) + ebx_1)
                return i
            
            int32_t eax_15 = *(*(arg1 + 0x7c) + ebp_1 + 0x1c)
            ebp_1 += 0x24
            ebx_1 += eax_15 + (*(arg1 + 0x78) << 1)
            int32_t eax_17
            int32_t edx_3
            edx_3:eax_17 = muls.dp.d(0x38e38e39, *(arg1 + 0x80) - *(arg1 + 0x7c))
            edx_4 = edx_3 s>> 3
            i += 1
        while (i s< (edx_4 u>> 0x1f) + edx_4)

return 0xffffffff
