// 函数: sub_6550c0
// 地址: 0x6550c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx = arg1
int32_t ecx = *(ebx + 0x1b0)
arg1 = ecx

if (*(ebx + 0xfc) != 0)
    if (*(ecx + 0x38) == 0)
        sub_6549d0(ebx)
        ecx = arg1
    
    *(ecx + 0x38) -= 1

int32_t eax

if (*(ecx + 0x14) != 0xffffffff)
    int32_t eax_1 = *(ebx + 0x18c)
    eax = 0
    int32_t var_10_1 = 0
    
    if (*(ebx + 0x14c) s> 0)
        int32_t* edx_1 = ebx + 0x150
        int32_t* var_c_1 = edx_1
        int16_t* eax_2
        int32_t eax_15
        int32_t ebp_5
        char* esi_5
        int32_t edi_4
        
        while (true)
            int32_t ebp_4 = *edx_1
            eax_2 = *(arg2 + (eax << 2))
            void* eax_3 = *(ebx + (ebp_4 << 2) + 0x134)
            int32_t edi_1 = *(eax_3 + 0x14)
            char* esi_3 = *(ecx + (edi_1 << 2) + 0x3c) + *(ecx + (ebp_4 << 2) + 0x28)
            int32_t eax_4 = sub_654840(ebx, esi_3)
            
            if (eax_4 != 0)
                int32_t eax_5 = sub_654840(ebx, &esi_3[1])
                void* ebp_2 = eax_5 + 2 + esi_3
                int32_t esi_4 = sub_654840(ebx, ebp_2)
                
                if (esi_4 != 0)
                    ebp_2 = *(arg1 + (edi_1 << 2) + 0x3c) + 0x14
                    
                    if (sub_654840(ebx, ebp_2) != 0)
                        int32_t i
                        
                        do
                            esi_4 *= 2
                            
                            if (esi_4 == 0x8000)
                                *(*ebx + 0x14) = 0x75
                                (*(*ebx + 4))(ebx, 0xffffffff)
                                *(arg1 + 0x14) = 0xffffffff
                                int32_t eax_34
                                eax_34.b = 1
                                return eax_34
                            
                            ebp_2 += 1
                            i = sub_654840(ebx, ebp_2)
                        while (i != 0)
                
                if (esi_4 s>= 1 << *(edi_1 + ebx + 0xcb) s>> 1)
                    if (esi_4 s<= 1 << *(edi_1 + ebx + 0xdb) s>> 1)
                        eax_4 = (eax_5 << 2) + 4
                    else
                        eax_4 = (eax_5 << 2) + 0xc
                    
                    *(arg1 + (ebp_4 << 2) + 0x28) = eax_4
                else
                    *(arg1 + (ebp_4 << 2) + 0x28) = 0
                
                int32_t edi_2 = esi_4
                
                for (int32_t i_1 = esi_4 s>> 1; i_1 != 0; i_1 s>>= 1)
                    if (sub_654840(ebx, ebp_2 + 0xe) != 0)
                        edi_2 |= i_1
                
                int32_t edi_3 = edi_2 + 1
                
                if (eax_5 != 0)
                    edi_3 = neg.d(edi_3)
                
                ecx = arg1
                *(ecx + (ebp_4 << 2) + 0x18) += edi_3
            else
                ecx = arg1
                *(ecx + (ebp_4 << 2) + 0x28) = eax_4
            
            eax_4.w = *(ecx + (ebp_4 << 2) + 0x18)
            *eax_2 = eax_4.w
            
            if (*(ebx + 0x190) != 0)
                ebp_5 = arg1
                edi_4 = 0
                eax_15 = *(eax_3 + 0x18)
                esi_5 = *(ebp_5 + (eax_15 << 2) + 0x7c)
                
                if (sub_654840(ebx, esi_5) == 0)
                    break
                
            label_6553ad:
                ecx = arg1
            
            eax = var_10_1 + 1
            edx_1 = &var_c_1[1]
            var_10_1 = eax
            var_c_1 = edx_1
            
            if (eax s>= *(ebx + 0x14c))
                eax.b = 1
                return eax
        
        while (true)
            int32_t edi_5 = edi_4 + 1
            int32_t var_18_2 = edi_5
            
            if (sub_654840(ebx, &esi_5[1]) != 0)
            label_6552da:
                int32_t eax_19 = sub_654840(ebx, ebp_5 + 0xbc)
                void* esi_6 = &esi_5[2]
                int32_t edi_6 = sub_654840(ebx, esi_6)
                
                if (edi_6 == 0)
                label_65534e:
                    int32_t ebp_6 = edi_6
                    
                    for (int32_t i_2 = edi_6 s>> 1; i_2 != 0; i_2 s>>= 1)
                        if (sub_654840(ebx, esi_6 + 0xe) != 0)
                            ebp_6 |= i_2
                    
                    int32_t ebp_7 = ebp_6 + 1
                    
                    if (eax_19 != 0)
                        ebp_7 = neg.d(ebp_7)
                    
                    edi_4 = var_18_2
                    eax_2[*(eax_1 + (edi_4 << 2))] = ebp_7.w
                    
                    if (edi_4 s>= *(ebx + 0x190))
                        goto label_6553ad
                    
                    ebp_5 = arg1
                    esi_5 = edi_4 * 3 + *(ebp_5 + (eax_15 << 2) + 0x7c)
                    
                    if (sub_654840(ebx, esi_5) != 0)
                        goto label_6553ad
                    
                    continue
                else
                    if (sub_654840(ebx, esi_6) == 0)
                        goto label_65534e
                    
                    edi_6 *= 2
                    int32_t esi_7 = 0xd9
                    
                    if (var_18_2 s<= zx.d(*(eax_15 + ebx + 0xeb)))
                        esi_7 = 0xbd
                    
                    esi_6 = esi_7 + *(ebp_5 + (eax_15 << 2) + 0x7c)
                    
                    if (sub_654840(ebx, esi_6) == 0)
                        goto label_65534e
                    
                    while (true)
                        edi_6 *= 2
                        
                        if (edi_6 == 0x8000)
                            break
                        
                        esi_6 += 1
                        
                        if (sub_654840(ebx, esi_6) == 0)
                            goto label_65534e
            else
                while (true)
                    esi_5 = &esi_5[3]
                    
                    if (edi_5 s>= *(ebx + 0x190))
                        break
                    
                    edi_5 += 1
                    var_18_2 = edi_5
                    
                    if (sub_654840(ebx, &esi_5[1]) != 0)
                        goto label_6552da
            
            *(*ebx + 0x14) = 0x75
            (*(*ebx + 4))(ebx, 0xffffffff)
            *(ebp_5 + 0x14) = 0xffffffff
            break

eax.b = 1
return eax
