// 函数: sub_69f420
// 地址: 0x69f420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (true)
    int32_t ebx_1 = arg2
    
    while (true)
        char* eax_1 = arg1[0x1d]
        
        if (eax_1 u>= 0x106)
        label_69f45f:
            int32_t edx
            
            if (eax_1 u>= 3)
                int32_t edi_1 = arg1[0x1b]
                int32_t edx_2 = arg1[0xd] & edi_1
                int32_t ecx_3 = arg1[0x10]
                int32_t ebx_5 =
                    (arg1[0x12] << (arg1[0x16]).b ^ zx.d(*(arg1[0xe] + edi_1 + 2))) & arg1[0x15]
                int32_t eax_4 = arg1[0x11]
                arg1[0x12] = ebx_5
                *(ecx_3 + (edx_2 << 1)) = *(eax_4 + (ebx_5 << 1))
                uint32_t edi_2 = zx.d(*(arg1[0x10] + ((arg1[0x1b] & arg1[0xd]) << 1)))
                *(arg1[0x11] + (arg1[0x12] << 1)) = arg1[0x1b].w
                
                if (edi_2 != 0 && arg1[0x1b] - edi_2 u<= arg1[0xb] - 0x106)
                    eax_1, edx = sub_69ed40(arg1, edi_2)
                    arg1[0x18] = eax_1
            
            int32_t ebx_6
            
            if (arg1[0x18] u< 3)
                edx.b = arg1[0x1b][arg1[0xe]]
                *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
                arg1[0x5a6][arg1[0x5a8]] = edx.b
                arg1[0x5a8] += 1
                uint32_t eax_30 = zx.d(edx.b)
                arg1[eax_30 + 0x25].w += 1
                ebx_6.b = arg1[0x5a8] == arg1[0x5a7] - 1
                arg1[0x1d] -= 1
                arg1[0x1b] += 1
            else
                eax_1.w = arg1[0x1b].w
                eax_1.w -= arg1[0x1c].w
                edx.b = arg1[0x18].b
                int16_t edi_3 = eax_1.w
                edx.b -= 3
                *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = edi_3
                arg1[0x5a6][arg1[0x5a8]] = edx.b
                arg1[0x5a8] += 1
                uint32_t eax_11 = zx.d(*(zx.d(edx.b) + 0x773168))
                arg1[eax_11 + 0x126].w += 1
                uint32_t eax_12 = zx.d(edi_3 - 1)
                
                if (edi_3 - 1 u>= 0x100)
                    eax_12.b = *((eax_12 u>> 7) + 0x773068)
                else
                    eax_12.b = *(eax_12 + 0x772f68)
                
                uint32_t eax_13 = zx.d(eax_12.b)
                arg1[eax_13 + 0x262].w += 1
                int32_t eax_16 = arg1[0x18]
                ebx_6.b = arg1[0x5a8] == arg1[0x5a7] - 1
                arg1[0x1d] -= eax_16
                
                if (eax_16 u> arg1[0x20] || arg1[0x1d] u< 3)
                    arg1[0x1b] += eax_16
                    char* eax_25 = arg1[0xe] + arg1[0x1b]
                    char ecx_15 = (arg1[0x16]).b
                    arg1[0x18] = 0
                    uint32_t edx_7 = zx.d(*eax_25)
                    arg1[0x12] = edx_7
                    arg1[0x12] = (edx_7 << ecx_15 ^ zx.d(eax_25[1])) & arg1[0x15]
                else
                    arg1[0x18] = eax_16 - 1
                    int32_t i
                    
                    do
                        arg1[0x1b] += 1
                        int32_t edi_5 = arg1[0x1b]
                        int32_t edi_6 = edi_5 & arg1[0xd]
                        int32_t ecx_13 = arg1[0x10]
                        int32_t edx_6 = (zx.d(*(edi_5 + arg1[0xe] + 2))
                            ^ arg1[0x12] << (arg1[0x16]).b) & arg1[0x15]
                        int32_t eax_21 = arg1[0x11]
                        arg1[0x12] = edx_6
                        *(ecx_13 + (edi_6 << 1)) = *(eax_21 + (edx_6 << 1))
                        *(arg1[0x11] + (arg1[0x12] << 1)) = arg1[0x1b].w
                        i = arg1[0x18]
                        arg1[0x18] -= 1
                    while (i != 1)
                    arg1[0x1b] += 1
            
            ebx_1 = arg2
            
            if (ebx_6 == 0)
                continue
            else
                int32_t ecx_19 = arg1[0x17]
                char* edx_11
                
                if (ecx_19 s< 0)
                    edx_11 = nullptr
                else
                    edx_11 = arg1[0xe] + ecx_19
                
                void* eax_34 = arg1[0x1b] - ecx_19
                sub_6a3720(eax_34, edx_11, arg1, eax_34, 0)
                void* ebp_1 = *arg1
                arg1[0x17] = arg1[0x1b]
                void* edi_7 = *(ebp_1 + 0x1c)
                sub_6a3d90(edi_7)
                void* ebx_7 = *(edi_7 + 0x14)
                
                if (ebx_7 u> *(ebp_1 + 0x10))
                    ebx_7 = *(ebp_1 + 0x10)
                
                if (ebx_7 != 0)
                    sub_700660(*(ebp_1 + 0xc), *(edi_7 + 0x10), ebx_7)
                    *(ebp_1 + 0xc) += ebx_7
                    *(edi_7 + 0x10) += ebx_7
                    *(ebp_1 + 0x14) += ebx_7
                    *(ebp_1 + 0x10) -= ebx_7
                    int32_t temp2_1 = *(edi_7 + 0x14)
                    *(edi_7 + 0x14) -= ebx_7
                    
                    if (temp2_1 == ebx_7)
                        *(edi_7 + 0x10) = *(edi_7 + 8)
                
                if (*(*arg1 + 0x10) != 0)
                    break
        else
            sub_69eeb0(arg1)
            eax_1 = arg1[0x1d]
            
            if (eax_1 u>= 0x106 || ebx_1 != 0)
                if (eax_1 != 0)
                    goto label_69f45f
                
                int32_t ecx_22 = arg1[0x1b]
                int32_t eax_39 = 2
                
                if (ecx_22 u< 2)
                    eax_39 = ecx_22
                
                arg1[0x5ad] = eax_39
                
                if (ebx_1 == 4)
                    int32_t eax_40 = arg1[0x17]
                    char* edx_13
                    
                    if (eax_40 s< 0)
                        edx_13 = nullptr
                    else
                        edx_13 = arg1[0xe] + eax_40
                    
                    sub_6a3720(eax_40, edx_13, arg1, ecx_22 - eax_40, 1)
                    void* ebp_2 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    void* edi_8 = *(ebp_2 + 0x1c)
                    sub_6a3d90(edi_8)
                    void* ebx_8 = *(edi_8 + 0x14)
                    
                    if (ebx_8 u> *(ebp_2 + 0x10))
                        ebx_8 = *(ebp_2 + 0x10)
                    
                    if (ebx_8 != 0)
                        sub_700660(*(ebp_2 + 0xc), *(edi_8 + 0x10), ebx_8)
                        *(ebp_2 + 0xc) += ebx_8
                        *(edi_8 + 0x10) += ebx_8
                        *(ebp_2 + 0x14) += ebx_8
                        *(ebp_2 + 0x10) -= ebx_8
                        int32_t temp1_1 = *(edi_8 + 0x14)
                        *(edi_8 + 0x14) -= ebx_8
                        
                        if (temp1_1 == ebx_8)
                            *(edi_8 + 0x10) = *(edi_8 + 8)
                    
                    int32_t eax_43
                    eax_43.b = *(*arg1 + 0x10) != 0
                    return eax_43 + 2
                
                if (arg1[0x5a8] == 0)
                    return 1
                
                int32_t eax_45 = arg1[0x17]
                char* edx_15
                
                if (eax_45 s< 0)
                    edx_15 = nullptr
                else
                    edx_15 = arg1[0xe] + eax_45
                
                sub_6a3720(eax_45, edx_15, arg1, ecx_22 - eax_45, 0)
                void* ecx_29 = *arg1
                arg1[0x17] = arg1[0x1b]
                sub_69e250(ecx_29)
                
                if (*(*arg1 + 0x10) != 0)
                    return 1
        
        return 0
