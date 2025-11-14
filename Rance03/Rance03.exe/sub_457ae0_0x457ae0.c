// 函数: sub_457ae0
// 地址: 0x457ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 8)

for (int32_t edx = *(arg1 + 0xc); i != edx; i = &i[1])
    if (*(*i + 5) != 0)
        int32_t* edi = *(arg1 + 8)
        int32_t* ecx_2 = edi
        int32_t ecx_3
        
        if (ecx_2 == edx)
        label_457b1f:
            ecx_3 = 0xffffffff
        else
            while (*(*ecx_2 + 5) == 0)
                ecx_2 = &ecx_2[1]
                
                if (ecx_2 == edx)
                    goto label_457b1f
            
            ecx_3 = (ecx_2 - edi) s>> 2
        
        int32_t* j_1 = *(arg1 + 0x14)
        
        for (int32_t* j = j_1; j != *(arg1 + 0x18); j = &j[1])
            void* esi_1 = *j
            
            if (ecx_3 s>= 0 && (*(esi_1 + 8) - *(esi_1 + 4)) s>> 2 s> ecx_3)
                void* edx_5 = *(*(esi_1 + 4) + (ecx_3 << 2))
                
                if (edx_5 != 0 && (*(edx_5 + 0xc) ^ 0x65656565) == arg2)
                    return (j - j_1) s>> 2
        
        return 0xffffffff

return 0xffffffff
