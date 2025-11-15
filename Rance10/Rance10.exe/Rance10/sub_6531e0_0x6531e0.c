// 函数: sub_6531e0
// 地址: 0x6531e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg6
void* edi = arg1
void* ebx = *(edi + 0x180)
void* var_c = ebx
int32_t eax_1 = *(edi + 0x104) * 3
int32_t result = arg7

if (*edx u< result)
    result = arg4
    int32_t* ecx_1 = arg3
    
    do
        int32_t ebp_1 = *ecx_1
        
        if (ebp_1 u>= result)
            if (*(ebx + 0x30) != 0)
                break
            
            if (*(ebx + 0x34) s< *(ebx + 0x3c))
                int32_t j = 0
                int32_t j_3 = 0
                
                if (*(edi + 0x4c) s> 0)
                    void* ebp_2 = ebx + 8
                    void* var_14_1 = ebp_2
                    
                    do
                        int32_t eax_12 = *(ebx + 0x3c)
                        int32_t esi_3 = *(ebx + 0x34)
                        void* ecx_6 = *(edi + 0x1c)
                        int32_t ebp_3 = *ebp_2
                        int32_t var_18_2 = eax_12
                        void* var_8_1 = ecx_6
                        
                        if (esi_3 s< eax_12)
                            int32_t ebx_2 = esi_3 << 2
                            
                            do
                                sub_700660(*(ebp_3 + (esi_3 << 2)), *(ebx_2 + ebp_3 - 4), ecx_6)
                                ecx_6 = var_8_1
                                esi_3 += 1
                            while (esi_3 s< eax_12)
                            
                            edi = arg1
                            ebx = var_c
                            j = j_3
                        
                        j += 1
                        ebp_2 = var_14_1 + 4
                        j_3 = j
                        var_14_1 = ebp_2
                    while (j s< *(edi + 0x4c))
                    
                    ecx_1 = arg3
                
                *(ebx + 0x34) = *(ebx + 0x3c)
                edx = arg6
        else
            int32_t edx_1 = *(ebx + 0x34)
            void* esi_1 = ebx + 8
            void* var_18_1 = esi_1
            int32_t ecx_3 = result - ebp_1
            int32_t eax_3 = *(ebx + 0x3c) - edx_1
            
            if (eax_3 u< ecx_3)
                ecx_3 = eax_3
            
            (*(*(edi + 0x18c) + 4))(edi, arg2 + (ebp_1 << 2), esi_1, edx_1, ecx_3)
            
            if (*(ebx + 0x30) == *(edi + 0x20))
                int32_t j_1 = 0
                int32_t j_2 = 0
                
                if (*(edi + 0x4c) s> 0)
                    do
                        int32_t k = 1
                        
                        if (*(edi + 0x104) s>= 1)
                            int32_t esi_2 = 4
                            
                            do
                                int32_t* ecx_5 = *var_18_1
                                sub_700660(*(ecx_5 - esi_2), *ecx_5, *(edi + 0x1c))
                                k += 1
                                esi_2 += 4
                            while (k s<= *(edi + 0x104))
                            
                            esi_1 = var_18_1
                            j_1 = j_2
                        
                        j_1 += 1
                        esi_1 += 4
                        j_2 = j_1
                        var_18_1 = esi_1
                    while (j_1 s< *(edi + 0x4c))
                    
                    ebx = var_c
            
            ecx_1 = arg3
            *ecx_1 += ecx_3
            *(ebx + 0x34) += ecx_3
            *(ebx + 0x30) -= ecx_3
            edx = arg6
        
        if (*(ebx + 0x34) == *(ebx + 0x3c))
            (*(*(edi + 0x190) + 4))(edi, ebx + 8, *(ebx + 0x38), arg5, *edx)
            edx = arg6
            *edx += 1
            *(ebx + 0x38) += *(edi + 0x104)
            
            if (*(ebx + 0x38) s>= eax_1)
                *(ebx + 0x38) = 0
            
            if (*(ebx + 0x34) s>= eax_1)
                *(ebx + 0x34) = 0
            
            ecx_1 = arg3
            *(ebx + 0x3c) = *(edi + 0x104) + *(ebx + 0x34)
        
        result = arg4
    while (*edx u< arg7)

return result
