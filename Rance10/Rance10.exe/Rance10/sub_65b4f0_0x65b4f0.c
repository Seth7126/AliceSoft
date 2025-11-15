// 函数: sub_65b4f0
// 地址: 0x65b4f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg1[6]
char* edi = *ebp
int32_t ebx = ebp[1]

if (*(arg1[0x6b] + 0xd) == 0)
    *(*arg1 + 0x14) = 0x3c
    _strncpy(*arg1 + 0x18, "SOS", 0x50)
    (**arg1)(arg1)

if (ebx != 0)
    goto label_65b557

if (ebp[3](arg1) != 0)
    edi = *ebp
    ebx = ebp[1]
label_65b557:
    void* edi_1 = &edi[1]
    uint32_t eax_9 = zx.d(*edi) << 8
    int32_t ebx_1 = ebx - 1
    
    if (ebx != 1)
        goto label_65b57e
    
    if (ebp[3](arg1) != 0)
        edi_1 = *ebp
        ebx_1 = ebp[1]
    label_65b57e:
        void* edi_2 = edi_1 + 1
        uint32_t ecx_1 = zx.d(*edi_1) + eax_9
        int32_t ebx_2 = ebx_1 - 1
        
        if (ebx_1 != 1)
            goto label_65b59f
        
        if (ebp[3](arg1) != 0)
            edi_2 = *ebp
            ebx_2 = ebp[1]
        label_65b59f:
            int32_t ebx_3 = ebx_2 - 1
            uint32_t ecx_2 = zx.d(*edi_2)
            void* edi_3 = edi_2 + 1
            *(*arg1 + 0x14) = 0x69
            *(*arg1 + 0x18) = ecx_2
            (*(*arg1 + 4))(arg1, 1)
            uint32_t ecx_3 = ecx_2
            
            if (ecx_1 != (ecx_3 << 1) + 6 || ecx_3 u> 4)
            label_65b5e6:
                *(*arg1 + 0x14) = 0xc
                (**arg1)(arg1)
                ecx_3 = ecx_2
            else if (ecx_3 == 0 && *(arg1 + 0xc9) == ecx_3.b)
                goto label_65b5e6
            
            arg1[0x4c] = ecx_3
            int32_t var_10_1 = 0
            
            if (ecx_3 != 0)
                void* ecx_4 = &arg1[0x4d]
                void* var_4_3 = ecx_4
                
                while (true)
                    if (ebx_3 == 0)
                        if (ebp[3](arg1) == 0)
                            return 0
                        
                        edi_3 = *ebp
                        ecx_4 = &arg1[0x4d]
                        ebx_3 = ebp[1]
                    
                    uint32_t i_1 = zx.d(*edi_3)
                    int32_t ebx_4 = ebx_3 - 1
                    int32_t edi_5 = 0
                    
                    if (var_10_1 s> 0)
                        int32_t** edx_1 = ecx_4
                        
                        do
                            if (i_1 == **edx_1)
                                int32_t eax_22 = *arg1[0x4d]
                                
                                if (var_10_1 s> 1)
                                    void* edx_2 = &arg1[0x4e]
                                    int32_t i_2 = var_10_1 - 1
                                    int32_t i
                                    
                                    do
                                        int32_t* ecx_7 = *edx_2
                                        edx_2 += 4
                                        int32_t ecx_8 = *ecx_7
                                        
                                        if (ecx_8 s> eax_22)
                                            eax_22 = ecx_8
                                        
                                        i = i_2
                                        i_2 -= 1
                                    while (i != 1)
                                
                                i_1 = eax_22 + 1
                                break
                            
                            edi_5 += 1
                            edx_1 = &edx_1[1]
                        while (edi_5 s< var_10_1)
                    
                    int32_t edx_3 = arg1[9]
                    int32_t ecx_9 = 0
                    int32_t* edi_6 = arg1[0x31]
                    
                    if (edx_3 s<= 0)
                    label_65b6b0:
                        *(*arg1 + 0x14) = 4
                        *(*arg1 + 0x18) = i_1
                        (**arg1)(arg1)
                    else
                        while (i_1 != *edi_6)
                            ecx_9 += 1
                            edi_6 = &edi_6[0x16]
                            
                            if (ecx_9 s>= edx_3)
                                goto label_65b6b0
                    
                    *var_4_3 = edi_6
                    void* eax_27
                    
                    if (ebx_4 != 0)
                        eax_27 = edi_3 + 1
                    else
                        if (ebp[3](arg1) == 0)
                            return 0
                        
                        eax_27 = *ebp
                        ebx_4 = ebp[1]
                    
                    uint32_t ecx_12 = zx.d(*eax_27)
                    ebx_3 = ebx_4 - 1
                    edi_6[5] = ecx_12 u>> 4
                    int32_t eax_31 = *edi_6
                    edi_6[6] = ecx_12 & 0xf
                    void* ecx_14 = *arg1
                    *(ecx_14 + 0x18) = eax_31
                    *(ecx_14 + 0x1c) = edi_6[5]
                    *(ecx_14 + 0x20) = edi_6[6]
                    *(*arg1 + 0x14) = 0x6a
                    (*(*arg1 + 4))(arg1, 1)
                    var_4_3 += 4
                    int32_t eax_38 = var_10_1 + 1
                    edi_3 = eax_27 + 1
                    var_10_1 = eax_38
                    
                    if (eax_38 s>= ecx_2)
                        break
                    
                    ecx_4 = &arg1[0x4d]
            
            if (ebx_3 != 0)
                goto label_65b76d
            
            if (ebp[3](arg1) != 0)
                edi_3 = *ebp
                ebx_3 = ebp[1]
            label_65b76d:
                void* edi_7 = edi_3 + 1
                arg1[0x5e] = zx.d(*edi_3)
                int32_t ebx_5 = ebx_3 - 1
                
                if (ebx_3 != 1)
                    goto label_65b793
                
                if (ebp[3](arg1) != 0)
                    edi_7 = *ebp
                    ebx_5 = ebp[1]
                label_65b793:
                    void* edi_8 = edi_7 + 1
                    arg1[0x5f] = zx.d(*edi_7)
                    int32_t ebx_6 = ebx_5 - 1
                    
                    if (ebx_5 != 1)
                        goto label_65b7b6
                    
                    if (ebp[3](arg1) != 0)
                        edi_8 = *ebp
                        ebx_6 = ebp[1]
                    label_65b7b6:
                        uint32_t ecx_15 = zx.d(*edi_8)
                        arg1[0x60] = ecx_15 u>> 4
                        int32_t eax_46 = arg1[0x5e]
                        arg1[0x61] = ecx_15 & 0xf
                        void* ecx_17 = *arg1
                        *(ecx_17 + 0x18) = eax_46
                        *(ecx_17 + 0x1c) = arg1[0x5f]
                        *(ecx_17 + 0x20) = arg1[0x60]
                        *(ecx_17 + 0x24) = arg1[0x61]
                        *(*arg1 + 0x14) = 0x6b
                        (*(*arg1 + 4))(arg1, 1)
                        *(arg1[0x6b] + 0x10) = 0
                        
                        if (ecx_2 != 0)
                            arg1[0x1f] += 1
                        
                        *ebp = edi_8 + 1
                        void* result
                        result.b = 1
                        ebp[1] = ebx_6 - 1
                        return result

return 0
