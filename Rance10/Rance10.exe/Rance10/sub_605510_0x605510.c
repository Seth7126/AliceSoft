// 函数: sub_605510
// 地址: 0x605510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg3[0xa]
int32_t* ebx = arg2

if (eax s>= 0 && eax s< ebx[3])
    ebx[5] = eax

int32_t eax_1 = arg3[0xb]

if (eax_1 == 0)
    eax_1.b = 1
    return eax_1

sub_6060f0(arg1 + 0x28, eax_1)
int32_t* edi = *(arg1 + 0x28)
int32_t* eax_2 = *(arg1 + 0x2c)
arg2 = edi
arg3 = eax_2

if (edi != eax_2)
    while (true)
        if (ebx[3] s>= ebx[5] + 4)
            int32_t* edx
            
            if (ebx[3] != 0)
                edx = ebx[2]
            else
                edx = nullptr
            
            *edi = *(edx + ebx[5])
            ebx[5] += 4
            int32_t ecx_5 = *edi
            
            if (ecx_5 s> 0)
                sub_42c9c0(&edi[1], ecx_5)
                eax_2 = edi[1]
                int32_t ecx_7 = edi[2]
                
                while (eax_2 != ecx_7)
                    if (ebx[3] s< ebx[5] + 4)
                        goto label_6056ec
                    
                    int32_t* esi_1
                    
                    if (ebx[3] != 0)
                        esi_1 = ebx[2]
                    else
                        esi_1 = nullptr
                    
                    *eax_2 = *(esi_1 + ebx[5])
                    eax_2 = &eax_2[1]
                    ebx[5] += 4
                
                eax_2 = arg3
            
            if (ebx[3] s>= ebx[5] + 4)
                int32_t edx_5
                
                if (ebx[3] != 0)
                    edx_5 = ebx[2]
                else
                    edx_5 = 0
                
                int32_t* ecx_10 = ebx[5]
                int32_t edx_6 = *(ecx_10 + edx_5)
                ebx[5] = &ecx_10[1]
                
                if (edx_6 s> 0)
                    sub_606380(&edi[4], edx_6)
                    void* i = edi[4]
                    
                    for (int32_t edi_1 = edi[5]; i != edi_1; i += 0x10)
                        int32_t edx_7 = ebx[3]
                        
                        if (edx_7 s< ebx[5] + 4)
                            goto label_6056ec
                        
                        int32_t ecx_13
                        
                        if (edx_7 != 0)
                            ecx_13 = ebx[2]
                        else
                            ecx_13 = 0
                        
                        int32_t* eax_4 = ebx[5]
                        int32_t ebp_1 = *(eax_4 + ecx_13)
                        ebx[5] = &eax_4[1]
                        
                        if (edx_7 s< &eax_4[2])
                            goto label_6056ec
                        
                        int32_t eax_5
                        
                        if (edx_7 != 0)
                            eax_5 = ebx[2]
                        else
                            eax_5 = 0
                        
                        int32_t eax_6 = *(&eax_4[1] + eax_5)
                        ebx[5] = &eax_4[2]
                        *i = eax_6
                        
                        if (ebp_1 s> 0)
                            sub_42c9c0(i + 4, ebp_1)
                            eax_2 = *(i + 4)
                            int32_t ecx_17 = *(i + 8)
                            
                            while (eax_2 != ecx_17)
                                if (ebx[3] s< ebx[5] + 4)
                                    goto label_6056ec
                                
                                int32_t ebp_2
                                
                                if (ebx[3] != 0)
                                    ebp_2 = ebx[2]
                                else
                                    ebp_2 = 0
                                
                                *eax_2 = *(ebx[5] + ebp_2)
                                eax_2 = &eax_2[1]
                                ebx[5] += 4
                    
                    eax_2 = arg3
                    edi = arg2
                
                edi = &edi[7]
                arg2 = edi
                
                if (edi == eax_2)
                    break
                
                continue
        
    label_6056ec:
        eax_2.b = 0
        return eax_2

eax_2.b = 1
return eax_2
