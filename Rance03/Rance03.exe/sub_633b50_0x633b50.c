// 函数: sub_633b50
// 地址: 0x633b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result_1 = arg1
*(arg1 + 0x118) += 1
uint32_t result = *(arg1 + 0x118)

if (result u>= *(arg1 + 0x108))
    int32_t ebx
    int32_t var_c_1 = ebx
    int32_t edi
    int32_t var_14_1 = edi
    
    if (*(arg1 + 0x154) != 0)
        int32_t eax_1 = *(arg1 + 0x110) + 1
        *(arg1 + 0x118) = 0
        _memset(*(arg1 + 0x120), 0, eax_1)
        
        while (true)
            *(arg1 + 0x155) += 1
            ebx.b = *(arg1 + 0x155)
            
            if (ebx.b u>= 7)
                goto label_633c21
            
            uint32_t ebp_1 = zx.d(ebx.b)
            uint32_t edi_2 = zx.d(*(ebp_1 + 0x6f0fa4))
            result = divu.dp.d(0:(edi_2 - 1 + *(arg1 + 0x100) - zx.d(*(ebp_1 + 0x6f1a04))), edi_2)
            bool cond:1_1 = (*(arg1 + 0x7c) & 2) != 0
            result_1 = result
            *(arg1 + 0x114) = result
            
            if (cond:1_1)
                break
            
            uint32_t edi_3 = zx.d(*(ebp_1 + 0x6f1a14))
            result = divu.dp.d(0:(*(arg1 + 0x104) - 1 + edi_3 - zx.d(*(ebp_1 + 0x6f0958))), edi_3)
            *(arg1 + 0x108) = result
            
            if (result != 0)
                if (result_1 != 0)
                    break
    
    if (*(arg1 + 0x154) == 0 || ebx.b u>= 7)
    label_633c21:
        return sub_633ae0(arg1) __tailcall

return result
