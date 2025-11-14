// 函数: sub_42a830
// 地址: 0x42a830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0 && arg3 s< (*(*(arg1 + 0x84) + 0x14))() && arg2 s>= 0
        && arg2 s< (*(*(arg1 + 0xb4) + 0x10))() + 2)
    int32_t eax_6
    int32_t edx
    edx:eax_6 = muls.dp.d(0x38e38e39, *(arg1 + 0xf8) - *(arg1 + 0xf4))
    int32_t edx_1 = edx s>> 3
    int32_t ebx = 2
    
    if (edx_1 u>> 0x1f != neg.d(edx_1))
        int32_t ebp_1 = 0
        int32_t i = 0
        int32_t edx_4
        
        do
            if (arg2 s>= ebx
                    && arg2 s< *(*(arg1 + 0xf4) + ebp_1 + 0x1c) + (*(arg1 + 0xf0) << 1) + ebx)
                return i
            
            int32_t eax_14 = *(*(arg1 + 0xf4) + ebp_1 + 0x1c)
            ebp_1 += 0x24
            ebx += eax_14 + (*(arg1 + 0xf0) << 1)
            int32_t eax_16
            int32_t edx_3
            edx_3:eax_16 = muls.dp.d(0x38e38e39, *(arg1 + 0xf8) - *(arg1 + 0xf4))
            edx_4 = edx_3 s>> 3
            i += 1
        while (i u< (edx_4 u>> 0x1f) + edx_4)

return 0xffffffff
