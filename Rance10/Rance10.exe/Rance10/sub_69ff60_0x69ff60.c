// 函数: sub_69ff60
// 地址: 0x69ff60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t var_4 = arg2

while (true)
    if (arg1[0x1d] == 0)
        sub_69eeb0(arg1)
        
        if (arg1[0x1d] == 0)
            if (var_4 != 0)
                arg1[0x5ad] = 0
                
                if (var_4 == 4)
                    int32_t ecx_9 = arg1[0x17]
                    char* edx_3
                    
                    if (ecx_9 s< 0)
                        edx_3 = nullptr
                    else
                        edx_3 = arg1[0xe] + ecx_9
                    
                    void* eax_13 = arg1[0x1b] - ecx_9
                    sub_6a3720(eax_13, edx_3, arg1, eax_13, 1)
                    void* ebx_3 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    void* edi_2 = *(ebx_3 + 0x1c)
                    sub_6a3d90(edi_2)
                    void* ebp_2 = *(edi_2 + 0x14)
                    
                    if (ebp_2 u> *(ebx_3 + 0x10))
                        ebp_2 = *(ebx_3 + 0x10)
                    
                    if (ebp_2 != 0)
                        sub_700660(*(ebx_3 + 0xc), *(edi_2 + 0x10), ebp_2)
                        *(ebx_3 + 0xc) += ebp_2
                        *(edi_2 + 0x10) += ebp_2
                        *(ebx_3 + 0x14) += ebp_2
                        *(ebx_3 + 0x10) -= ebp_2
                        int32_t temp1_1 = *(edi_2 + 0x14)
                        *(edi_2 + 0x14) -= ebp_2
                        
                        if (temp1_1 == ebp_2)
                            *(edi_2 + 0x10) = *(edi_2 + 8)
                    
                    int32_t eax_16
                    eax_16.b = *(*arg1 + 0x10) != 0
                    return eax_16 + 2
                
                if (arg1[0x5a8] != 0)
                    int32_t ecx_14 = arg1[0x17]
                    char* edx_5
                    
                    if (ecx_14 s< 0)
                        edx_5 = nullptr
                    else
                        edx_5 = arg1[0xe] + ecx_14
                    
                    void* eax_19 = arg1[0x1b] - ecx_14
                    sub_6a3720(eax_19, edx_5, arg1, eax_19, 0)
                    void* ecx_16 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_69e250(ecx_16)
                
                if (arg1[0x5a8] == 0 || *(*arg1 + 0x10) != 0)
                    return 1
            
            break
    
    char* ecx_1 = arg1[0x1b]
    int32_t eax_1 = arg1[0xe]
    arg1[0x18] = 0
    arg2.b = ecx_1[eax_1]
    *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
    arg1[0x5a6][arg1[0x5a8]] = arg2.b
    arg1[0x5a8] += 1
    uint32_t eax_4 = zx.d(arg2.b)
    arg1[eax_4 + 0x25].w += 1
    int32_t eax_5 = arg1[0x5a7]
    arg1[0x1b] += 1
    arg1[0x1d] -= 1
    
    if (arg1[0x5a8] == eax_5 - 1)
        int32_t eax_7 = arg1[0x17]
        char* edx_1
        
        if (eax_7 s< 0)
            edx_1 = nullptr
        else
            edx_1 = arg1[0xe] + eax_7
        
        sub_6a3720(eax_7, edx_1, arg1, arg1[0x1b] - eax_7, 0)
        void* ebx_1 = *arg1
        arg1[0x17] = arg1[0x1b]
        void* edi_1 = *(ebx_1 + 0x1c)
        sub_6a3d90(edi_1)
        void* ebp_1 = *(edi_1 + 0x14)
        
        if (ebp_1 u> *(ebx_1 + 0x10))
            ebp_1 = *(ebx_1 + 0x10)
        
        if (ebp_1 != 0)
            sub_700660(*(ebx_1 + 0xc), *(edi_1 + 0x10), ebp_1)
            *(ebx_1 + 0xc) += ebp_1
            *(edi_1 + 0x10) += ebp_1
            *(ebx_1 + 0x14) += ebp_1
            *(ebx_1 + 0x10) -= ebp_1
            int32_t temp0_1 = *(edi_1 + 0x14)
            *(edi_1 + 0x14) -= ebp_1
            
            if (temp0_1 == ebp_1)
                *(edi_1 + 0x10) = *(edi_1 + 8)
        
        if (*(*arg1 + 0x10) == 0)
            break

return 0
