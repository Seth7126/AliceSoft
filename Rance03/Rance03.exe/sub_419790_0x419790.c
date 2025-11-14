// 函数: sub_419790
// 地址: 0x419790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0 && arg3 s< (*(*(arg1 + 0x14) + 0x14))() && arg2 s>= 0
        && arg2 s< (*(*(arg1 + 0x44) + 0x10))() + 2)
    int32_t eax_6
    int32_t edx
    edx:eax_6 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
    int32_t edx_1 = edx s>> 3
    int32_t ebx = 2
    
    if ((edx_1 u>> 0x1f) + edx_1 s> 0)
        int32_t ebp_1 = 0
        int32_t i = 0
        int32_t edx_4
        
        do
            if (arg2 s>= ebx
                    && arg2 s< *(*(arg1 + 0x84) + ebp_1 + 0x1c) + (*(arg1 + 0x80) << 1) + ebx)
                return i
            
            int32_t eax_15 = *(*(arg1 + 0x84) + ebp_1 + 0x1c)
            ebp_1 += 0x24
            ebx += eax_15 + (*(arg1 + 0x80) << 1)
            int32_t eax_17
            int32_t edx_3
            edx_3:eax_17 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
            edx_4 = edx_3 s>> 3
            i += 1
        while (i s< (edx_4 u>> 0x1f) + edx_4)

return 0xffffffff
