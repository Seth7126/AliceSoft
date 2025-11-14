// 函数: sub_622fb0
// 地址: 0x622fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
uint32_t ebx = arg2
uint32_t var_4 = ebx

while (true)
    int32_t edi_1 = arg1[0x1d]
    
    if (edi_1 u<= 0x102)
        sub_622430(arg1)
        edi_1 = arg1[0x1d]
        
        if (edi_1 u<= 0x102 && ebx == 0)
            break
        
        if (edi_1 == 0)
            arg1[0x5ad] = 0
            
            if (ebx == 4)
                int32_t ecx_22 = arg1[0x17]
                void* edx_3
                
                if (ecx_22 s< 0)
                    edx_3 = nullptr
                else
                    edx_3 = arg1[0xe] + ecx_22
                
                int32_t eax_23 = arg1[0x1b] - ecx_22
                sub_626870(eax_23, edx_3, arg1, eax_23, 1)
                void* ecx_24 = *arg1
                arg1[0x17] = arg1[0x1b]
                sub_621800(ecx_24)
                int32_t ecx_25
                ecx_25.b = *(*arg1 + 0x10) != 0
                return ecx_25 + 2
            
            if (arg1[0x5a8] != 0)
                int32_t ecx_27 = arg1[0x17]
                void* edx_5
                
                if (ecx_27 s< 0)
                    edx_5 = nullptr
                else
                    edx_5 = arg1[0xe] + ecx_27
                
                int32_t eax_28 = arg1[0x1b] - ecx_27
                sub_626870(eax_28, edx_5, arg1, eax_28, 0)
                void* ecx_29 = *arg1
                arg1[0x17] = arg1[0x1b]
                sub_621800(ecx_29)
            
            if (arg1[0x5a8] == 0 || *(*arg1 + 0x10) != 0)
                return 1
            
            break
    
    arg1[0x18] = 0
    
    if (edi_1 u>= 3)
        int32_t ecx_1 = arg1[0x1b]
        
        if (ecx_1 != 0)
            char* ebx_2 = arg1[0xe] + ecx_1
            arg2 = zx.d(ebx_2[0xffffffff])
            
            if (arg2 == zx.d(*ebx_2) && arg2 == zx.d(ebx_2[1]))
                void* i = &ebx_2[2]
                
                if (arg2 == zx.d(ebx_2[2]))
                    do
                        uint32_t ecx_5 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_5)
                            break
                        
                        uint32_t ecx_6 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_6)
                            break
                        
                        uint32_t ecx_7 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_7)
                            break
                        
                        uint32_t ecx_8 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_8)
                            break
                        
                        uint32_t ecx_9 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_9)
                            break
                        
                        uint32_t ecx_10 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_10)
                            break
                        
                        uint32_t ecx_11 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_11)
                            break
                        
                        uint32_t ecx_12 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_12)
                            break
                    while (i u< &ebx_2[0x102])
                    
                    int32_t eax_3 = i - &ebx_2[0x102] + 0x102
                    
                    if (eax_3 u> edi_1)
                        eax_3 = edi_1
                    
                    arg1[0x18] = eax_3
            
            ebx = var_4
    
    int32_t ecx_15
    
    if (arg1[0x18] u< 3)
        arg2.b = arg1[0xe][arg1[0x1b]]
        *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
        arg1[0x5a6][arg1[0x5a8]] = arg2.b
        arg1[0x5a8] += 1
        uint32_t eax_14 = zx.d(arg2.b)
        arg1[eax_14 + 0x25].w += 1
        ecx_15.b = arg1[0x5a8] == arg1[0x5a7] - 1
        arg1[0x1d] -= 1
        arg1[0x1b] += 1
    else
        arg2.b = arg1[0x18].b
        arg2.b -= 3
        *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 1
        arg1[0x5a6][arg1[0x5a8]] = arg2.b
        arg1[0x5a8] += 1
        uint32_t eax_7 = zx.d(*(zx.d(arg2.b) + 0x6f05e0))
        arg1[eax_7 + 0x126].w += 1
        arg1[0x262].w += 1
        int32_t eax_10 = arg1[0x18]
        ecx_15.b = arg1[0x5a8] == arg1[0x5a7] - 1
        arg1[0x18] = 0
        arg1[0x1d] -= eax_10
        arg1[0x1b] += eax_10
    
    if (ecx_15 != 0)
        int32_t ecx_19 = arg1[0x17]
        void* edx_1
        
        if (ecx_19 s< 0)
            edx_1 = nullptr
        else
            edx_1 = arg1[0xe] + ecx_19
        
        int32_t eax_18 = arg1[0x1b] - ecx_19
        sub_626870(eax_18, edx_1, arg1, eax_18, 0)
        void* ebx_4 = *arg1
        arg1[0x17] = arg1[0x1b]
        void* edi_2 = *(ebx_4 + 0x1c)
        sub_626ed0(edi_2)
        void* ebp_1 = *(edi_2 + 0x14)
        
        if (ebp_1 u> *(ebx_4 + 0x10))
            ebp_1 = *(ebx_4 + 0x10)
        
        if (ebp_1 != 0)
            sub_69d850(*(ebx_4 + 0xc), *(edi_2 + 0x10), ebp_1)
            *(ebx_4 + 0xc) += ebp_1
            *(edi_2 + 0x10) += ebp_1
            *(ebx_4 + 0x14) += ebp_1
            *(ebx_4 + 0x10) -= ebp_1
            int32_t temp0_1 = *(edi_2 + 0x14)
            *(edi_2 + 0x14) -= ebp_1
            
            if (temp0_1 == ebp_1)
                *(edi_2 + 0x10) = *(edi_2 + 8)
        
        if (*(*arg1 + 0x10) == 0)
            break
        
        ebx = var_4

return 0
