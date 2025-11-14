// 函数: sub_622b40
// 地址: 0x622b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

while (true)
    int32_t ebx_1 = arg2
    
    while (true)
        int32_t eax_1 = arg1[0x1d]
        int32_t edx
        
        if (eax_1 u>= 0x106)
        label_622b7b:
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
                eax_13, edx = sub_6222c0(arg1, edi_1)
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
                uint32_t eax_20 = zx.d(*(zx.d(edx.b) + 0x6f05e0))
                arg1[eax_20 + 0x126].w += 1
                uint32_t eax_21 = zx.d(edi_4 - 1)
                uint32_t eax_22
                
                if (edi_4 - 1 u>= 0x100)
                    eax_22 = zx.d(*((eax_21 u>> 7) + 0x6f07e0))
                else
                    eax_22 = zx.d(*(eax_21 + 0x6f06e0))
                
                arg1[eax_22 + 0x262].w += 1
                int32_t* ecx_14
                ecx_14.b = arg1[0x5a8] == arg1[0x5a7] - 1
                int32_t ecx_15 = arg1[0x1e]
                arg1[0x1d] += 1 - ecx_15
                arg1[0x1e] = ecx_15 - 2
                int32_t i
                
                do
                    arg1[0x1b] += 1
                    int32_t ebx_2 = arg1[0x1b]
                    
                    if (ebx_2 u<= ebp_2)
                        int32_t ecx_17 = arg1[0x10]
                        int32_t edi_9 = (arg1[0x12] << (arg1[0x16]).b
                            ^ zx.d(*(arg1[0xe] + ebx_2 + 2))) & arg1[0x15]
                        int32_t edx_7 = arg1[0xd] & ebx_2
                        int32_t eax_30 = arg1[0x11]
                        arg1[0x12] = edi_9
                        *(ecx_17 + (edx_7 << 1)) = *(eax_30 + (edi_9 << 1))
                        *(arg1[0x11] + (arg1[0x12] << 1)) = arg1[0x1b].w
                    
                    i = arg1[0x1e]
                    arg1[0x1e] -= 1
                while (i != 1)
                arg1[0x1b] += 1
                int32_t ecx_19 = arg1[0x1b]
                ebx_1 = arg2
                arg1[0x1a] = 0
                arg1[0x18] = 2
                
                if (ecx_14 == 0)
                    continue
                else
                    int32_t eax_33 = arg1[0x17]
                    void* edx_9
                    
                    if (eax_33 s< 0)
                        edx_9 = nullptr
                    else
                        edx_9 = arg1[0xe] + eax_33
                    
                    sub_626870(eax_33, edx_9, arg1, ecx_19 - eax_33, 0)
                    void* ebx_3 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    void* edi_10 = *(ebx_3 + 0x1c)
                    sub_626ed0(edi_10)
                    void* ebp_3 = *(edi_10 + 0x14)
                    
                    if (ebp_3 u> *(ebx_3 + 0x10))
                        ebp_3 = *(ebx_3 + 0x10)
                    
                    if (ebp_3 != 0)
                        sub_69d850(*(ebx_3 + 0xc), *(edi_10 + 0x10), ebp_3)
                        *(ebx_3 + 0xc) += ebp_3
                        *(edi_10 + 0x10) += ebp_3
                        *(ebx_3 + 0x14) += ebp_3
                        *(ebx_3 + 0x10) -= ebp_3
                        int32_t temp2_1 = *(edi_10 + 0x14)
                        *(edi_10 + 0x14) -= ebp_3
                        
                        if (temp2_1 == ebp_3)
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
                uint32_t eax_41 = zx.d(edx.b)
                arg1[eax_41 + 0x25].w += 1
                
                if (arg1[0x5a8] == arg1[0x5a7] - 1)
                    int32_t ecx_26 = arg1[0x17]
                    void* edx_11
                    
                    if (ecx_26 s< 0)
                        edx_11 = nullptr
                    else
                        edx_11 = arg1[0xe] + ecx_26
                    
                    int32_t eax_45 = arg1[0x1b] - ecx_26
                    sub_626870(eax_45, edx_11, arg1, eax_45, 0)
                    void* ebp_4 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    void* edi_11 = *(ebp_4 + 0x1c)
                    sub_626ed0(edi_11)
                    void* ebx_4 = *(edi_11 + 0x14)
                    
                    if (ebx_4 u> *(ebp_4 + 0x10))
                        ebx_4 = *(ebp_4 + 0x10)
                    
                    if (ebx_4 == 0)
                        ebx_1 = arg2
                    else
                        sub_69d850(*(ebp_4 + 0xc), *(edi_11 + 0x10), ebx_4)
                        *(ebp_4 + 0xc) += ebx_4
                        *(edi_11 + 0x10) += ebx_4
                        *(ebp_4 + 0x14) += ebx_4
                        *(ebp_4 + 0x10) -= ebx_4
                        int32_t temp1_1 = *(edi_11 + 0x14)
                        *(edi_11 + 0x14) -= ebx_4
                        ebx_1 = arg2
                        
                        if (temp1_1 == ebx_4)
                            *(edi_11 + 0x10) = *(edi_11 + 8)
                
                void* eax_48 = *arg1
                arg1[0x1b] += 1
                arg1[0x1d] -= 1
                
                if (*(eax_48 + 0x10) == 0)
                    return 0
                
                continue
        else
            sub_622430(arg1)
            eax_1 = arg1[0x1d]
            
            if (eax_1 u>= 0x106 || ebx_1 != 0)
                if (eax_1 != 0)
                    goto label_622b7b
                
                if (arg1[0x1a] != 0)
                    edx.b = *(arg1[0x1b] + arg1[0xe] - 1)
                    *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
                    arg1[0x5a6][arg1[0x5a8]] = edx.b
                    arg1[0x5a8] += 1
                    uint32_t eax_53 = zx.d(edx.b)
                    arg1[eax_53 + 0x25].w += 1
                    arg1[0x1a] = 0
                
                int32_t ecx_32 = arg1[0x1b]
                int32_t eax_54 = 2
                
                if (ecx_32 u< 2)
                    eax_54 = ecx_32
                
                arg1[0x5ad] = eax_54
                
                if (ebx_1 == 4)
                    int32_t eax_55 = arg1[0x17]
                    void* edx_13
                    
                    if (eax_55 s< 0)
                        edx_13 = nullptr
                    else
                        edx_13 = arg1[0xe] + eax_55
                    
                    sub_626870(eax_55, edx_13, arg1, ecx_32 - eax_55, 1)
                    void* ecx_35 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_621800(ecx_35)
                    int32_t ecx_36
                    ecx_36.b = *(*arg1 + 0x10) != 0
                    return ecx_36 + 2
                
                if (arg1[0x5a8] != 0)
                    int32_t eax_59 = arg1[0x17]
                    void* edx_15
                    
                    if (eax_59 s< 0)
                        edx_15 = nullptr
                    else
                        edx_15 = arg1[0xe] + eax_59
                    
                    sub_626870(eax_59, edx_15, arg1, ecx_32 - eax_59, 0)
                    void* ecx_39 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_621800(ecx_39)
                
                if (arg1[0x5a8] == 0 || *(*arg1 + 0x10) != 0)
                    return 1
        return 0
