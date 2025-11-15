// 函数: sub_69f7a0
// 地址: 0x69f7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx

while (true)
    int32_t ebx_1 = arg2
    
    while (true)
        int32_t eax_1 = arg1[0x1d]
        int32_t edx
        
        if (eax_1 u>= 0x106)
        label_69f7db:
            uint32_t edi_1 = 0
            
            if (eax_1 u>= 3)
                int32_t edi_2 = arg1[0x1b]
                int32_t edi_3 = edi_2 & arg1[0xd]
                int32_t edx_4 =
                    (arg1[0x12] << (arg1[0x16]).b ^ zx.d(*(arg1[0xe] + edi_2 + 2))) & arg1[0x15]
                int32_t eax_4 = arg1[0x11]
                int32_t ecx_3 = arg1[0x10]
                arg1[0x12] = edx_4
                *(ecx_3 + (edi_3 << 1)) = *(eax_4 + (edx_4 << 1))
                edi_1 = zx.d(*(arg1[0x10] + ((arg1[0x1b] & arg1[0xd]) << 1)))
                *(arg1[0x11] + (arg1[0x12] << 1)) = arg1[0x1b].w
            
            arg1[0x1e] = arg1[0x18]
            arg1[0x19] = arg1[0x1c]
            arg1[0x18] = 2
            
            if (edi_1 != 0 && arg1[0x1e] u< arg1[0x20] && arg1[0x1b] - edi_1 u<= arg1[0xb] - 0x106)
                char* eax_13
                eax_13, edx = sub_69ed40(arg1, edi_1)
                arg1[0x18] = eax_13
                
                if (eax_13 u<= 5)
                    if (arg1[0x22] == 1)
                        arg1[0x18] = 2
                    else if (eax_13 == 3 && arg1[0x1b] - arg1[0x1c] u> 0x1000)
                        arg1[0x18] = 2
            
            int32_t eax_16 = arg1[0x1e]
            
            if (eax_16 u>= 3 && arg1[0x18] u<= eax_16)
                edx.b = eax_16.b
                eax_16.w = arg1[0x1b].w
                eax_16.w -= arg1[0x19].w
                edx.b -= 3
                eax_16.w -= 1
                int16_t edi_4 = eax_16.w
                int32_t ebp_2 = arg1[0x1d] + arg1[0x1b] - 3
                *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = edi_4
                arg1[0x5a6][arg1[0x5a8]] = edx.b
                arg1[0x5a8] += 1
                uint32_t eax_20 = zx.d(*(zx.d(edx.b) + 0x773168))
                arg1[eax_20 + 0x126].w += 1
                uint32_t eax_21 = zx.d(edi_4 - 1)
                
                if (edi_4 - 1 u>= 0x100)
                    eax_21.b = *((eax_21 u>> 7) + 0x773068)
                else
                    eax_21.b = *(eax_21 + 0x772f68)
                
                uint32_t eax_22 = zx.d(eax_21.b)
                arg1[eax_22 + 0x262].w += 1
                int32_t ecx_14 = arg1[0x1e]
                var_4 = arg1[0x5a7] - 1
                int32_t* eax_25 = arg1[0x5a8]
                arg1[0x1d] += 1 - ecx_14
                arg1[0x1e] = ecx_14 - 2
                int32_t i
                
                do
                    arg1[0x1b] += 1
                    int32_t ebx_2 = arg1[0x1b]
                    
                    if (ebx_2 u<= ebp_2)
                        int32_t ecx_16 = arg1[0x10]
                        int32_t edi_9 = (arg1[0x12] << (arg1[0x16]).b
                            ^ zx.d(*(arg1[0xe] + ebx_2 + 2))) & arg1[0x15]
                        int32_t edx_7 = arg1[0xd] & ebx_2
                        int32_t eax_30 = arg1[0x11]
                        arg1[0x12] = edi_9
                        *(ecx_16 + (edx_7 << 1)) = *(eax_30 + (edi_9 << 1))
                        *(arg1[0x11] + (arg1[0x12] << 1)) = arg1[0x1b].w
                    
                    i = arg1[0x1e]
                    arg1[0x1e] -= 1
                while (i != 1)
                arg1[0x1b] += 1
                int32_t ecx_18 = arg1[0x1b]
                ebx_1 = arg2
                arg1[0x1a] = 0
                arg1[0x18] = 2
                
                if (eax_25 != var_4)
                    continue
                else
                    int32_t eax_34 = arg1[0x17]
                    char* edx_9
                    
                    if (eax_34 s< 0)
                        edx_9 = nullptr
                    else
                        edx_9 = arg1[0xe] + eax_34
                    
                    sub_6a3720(eax_34, edx_9, arg1, ecx_18 - eax_34, 0)
                    void* ebx_3 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    void* edi_10 = *(ebx_3 + 0x1c)
                    sub_6a3d90(edi_10)
                    void* ebp_3 = *(edi_10 + 0x14)
                    
                    if (ebp_3 u> *(ebx_3 + 0x10))
                        ebp_3 = *(ebx_3 + 0x10)
                    
                    if (ebp_3 != 0)
                        sub_700660(*(ebx_3 + 0xc), *(edi_10 + 0x10), ebp_3)
                        *(ebx_3 + 0xc) += ebp_3
                        *(edi_10 + 0x10) += ebp_3
                        *(ebx_3 + 0x14) += ebp_3
                        *(ebx_3 + 0x10) -= ebp_3
                        int32_t temp3_1 = *(edi_10 + 0x14)
                        *(edi_10 + 0x14) -= ebp_3
                        
                        if (temp3_1 == ebp_3)
                            *(edi_10 + 0x10) = *(edi_10 + 8)
                    
                    if (*(*arg1 + 0x10) != 0)
                        break
            else if (arg1[0x1a] == 0)
                arg1[0x1b] += 1
                arg1[0x1d] -= 1
                arg1[0x1a] = 1
                continue
            else
                edx.b = *(arg1[0x1b] + arg1[0xe] - 1)
                *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
                arg1[0x5a6][arg1[0x5a8]] = edx.b
                arg1[0x5a8] += 1
                uint32_t eax_42 = zx.d(edx.b)
                arg1[eax_42 + 0x25].w += 1
                
                if (arg1[0x5a8] == arg1[0x5a7] - 1)
                    int32_t ecx_26 = arg1[0x17]
                    char* edx_11
                    
                    if (ecx_26 s< 0)
                        edx_11 = nullptr
                    else
                        edx_11 = arg1[0xe] + ecx_26
                    
                    void* eax_46 = arg1[0x1b] - ecx_26
                    sub_6a3720(eax_46, edx_11, arg1, eax_46, 0)
                    void* ebp_4 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    void* edi_11 = *(ebp_4 + 0x1c)
                    sub_6a3d90(edi_11)
                    void* ebx_4 = *(edi_11 + 0x14)
                    
                    if (ebx_4 u> *(ebp_4 + 0x10))
                        ebx_4 = *(ebp_4 + 0x10)
                    
                    if (ebx_4 == 0)
                        ebx_1 = arg2
                    else
                        sub_700660(*(ebp_4 + 0xc), *(edi_11 + 0x10), ebx_4)
                        *(ebp_4 + 0xc) += ebx_4
                        *(edi_11 + 0x10) += ebx_4
                        *(ebp_4 + 0x14) += ebx_4
                        *(ebp_4 + 0x10) -= ebx_4
                        int32_t temp1_1 = *(edi_11 + 0x14)
                        *(edi_11 + 0x14) -= ebx_4
                        ebx_1 = arg2
                        
                        if (temp1_1 == ebx_4)
                            *(edi_11 + 0x10) = *(edi_11 + 8)
                
                void* eax_49 = *arg1
                arg1[0x1b] += 1
                arg1[0x1d] -= 1
                
                if (*(eax_49 + 0x10) == 0)
                    return 0
                
                continue
        else
            sub_69eeb0(arg1)
            eax_1 = arg1[0x1d]
            
            if (eax_1 u>= 0x106 || ebx_1 != 0)
                if (eax_1 != 0)
                    goto label_69f7db
                
                if (arg1[0x1a] != 0)
                    edx.b = *(arg1[0x1b] + arg1[0xe] - 1)
                    *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
                    arg1[0x5a6][arg1[0x5a8]] = edx.b
                    arg1[0x5a8] += 1
                    uint32_t eax_54 = zx.d(edx.b)
                    arg1[eax_54 + 0x25].w += 1
                    arg1[0x1a] = 0
                
                int32_t ecx_33 = arg1[0x1b]
                int32_t eax_55 = 2
                
                if (ecx_33 u< 2)
                    eax_55 = ecx_33
                
                arg1[0x5ad] = eax_55
                
                if (ebx_1 == 4)
                    int32_t eax_56 = arg1[0x17]
                    char* edx_13
                    
                    if (eax_56 s< 0)
                        edx_13 = nullptr
                    else
                        edx_13 = arg1[0xe] + eax_56
                    
                    sub_6a3720(eax_56, edx_13, arg1, ecx_33 - eax_56, 1)
                    void* ebp_5 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    void* edi_12 = *(ebp_5 + 0x1c)
                    sub_6a3d90(edi_12)
                    void* ebx_5 = *(edi_12 + 0x14)
                    
                    if (ebx_5 u> *(ebp_5 + 0x10))
                        ebx_5 = *(ebp_5 + 0x10)
                    
                    if (ebx_5 != 0)
                        sub_700660(*(ebp_5 + 0xc), *(edi_12 + 0x10), ebx_5)
                        *(ebp_5 + 0xc) += ebx_5
                        *(edi_12 + 0x10) += ebx_5
                        *(ebp_5 + 0x14) += ebx_5
                        *(ebp_5 + 0x10) -= ebx_5
                        int32_t temp2_1 = *(edi_12 + 0x14)
                        *(edi_12 + 0x14) -= ebx_5
                        
                        if (temp2_1 == ebx_5)
                            *(edi_12 + 0x10) = *(edi_12 + 8)
                    
                    int32_t ecx_37
                    ecx_37.b = *(*arg1 + 0x10) != 0
                    return ecx_37 + 2
                
                if (arg1[0x5a8] != 0)
                    int32_t eax_61 = arg1[0x17]
                    char* edx_15
                    
                    if (eax_61 s< 0)
                        edx_15 = nullptr
                    else
                        edx_15 = arg1[0xe] + eax_61
                    
                    sub_6a3720(eax_61, edx_15, arg1, ecx_33 - eax_61, 0)
                    void* ecx_41 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_69e250(ecx_41)
                
                if (arg1[0x5a8] == 0 || *(*arg1 + 0x10) != 0)
                    return 1
        return 0
