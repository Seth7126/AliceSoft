// 函数: sub_651f80
// 地址: 0x651f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x8c) - *(arg1 + 0x88))
    int32_t edx_4 = edx_3 s>> 2
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        int32_t eax_5 = *(arg1 + 0x88)
        int32_t ecx = arg2 * 3
        int32_t* result = eax_5 + (ecx << 3)
        
        if (*(eax_5 + (ecx << 3) + 0x14) u< 0x10)
            return result
        
        return *result

return nullptr
