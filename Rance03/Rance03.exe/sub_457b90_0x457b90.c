// 函数: sub_457b90
// 地址: 0x457b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 8); i != *(arg1 + 0xc); i = &i[1])
    if (*(*i + 5) != 0)
        int32_t* edx_1 = *(arg1 + 8)
        int32_t* edi_1 = edx_1
        int32_t ecx_1 = *(arg1 + 0xc)
        int32_t edi_2
        
        if (edi_1 == ecx_1)
        label_457bd4:
            edi_2 = 0xffffffff
        else
            while (*(*edi_1 + 5) == 0)
                edi_1 = &edi_1[1]
                
                if (edi_1 == ecx_1)
                    goto label_457bd4
            
            edi_2 = (edi_1 - edx_1) s>> 2
        
        int32_t* j = *(arg1 + 0x14)
        
        if (j == *(arg1 + 0x18))
            break
        
        do
            void* ecx_2 = *j
            
            if (edi_2 s>= 0 && (*(ecx_2 + 8) - *(ecx_2 + 4)) s>> 2 s> edi_2)
                int32_t eax_6 = *(*(ecx_2 + 4) + (edi_2 << 2))
                
                if (eax_6 != 0 && sub_457210(eax_6, arg2) != 0)
                    return (j - *(arg1 + 0x14)) s>> 2
            
            j = &j[1]
        while (j != *(arg1 + 0x18))
        
        return 0xffffffff

return 0xffffffff
