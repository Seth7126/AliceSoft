// 函数: sub_6586c0
// 地址: 0x6586c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = arg1
void* ebx = *(eax + 0x1b0)

if (*(eax + 0xfc) != 0 && *(ebx + 0x2c) == 0)
    char eax_1 = sub_658400(eax)
    
    if (eax_1 == 0)
        return eax_1
    
    eax = arg1

if (*(ebx + 0x28) == 0)
    int32_t ecx_2 = *(eax + 0x17c)
    int32_t edx_1 = *(ebx + 0x14)
    char ecx_3 = (*(eax + 0x184)).b
    int32_t ecx_4 = *(eax + 0x18c)
    
    if (edx_1 != 0)
        eax.b = 1
        *(ebx + 0x2c) -= 1
        *(ebx + 0x14) = edx_1 - 1
        return eax
    
    int32_t* ecx_5 = *(eax + 0x18)
    int32_t edi_1 = *(ebx + 0x40)
    int32_t ebp_1 = *(ebx + 0xc)
    int32_t esi_1 = *(ebx + 0x10)
    void* var_4_1 = eax
    int32_t var_14 = *ecx_5
    void* eax_3 = ecx_5[1]
    int32_t var_18_1 = edi_1
    int32_t eax_5 = *arg2
    int32_t eax_7 = *(arg1 + 0x178)
    int32_t var_34_1 = eax_7
    
    if (eax_7 s<= ecx_2)
        while (true)
            uint32_t eax_8
            int32_t var_c
            int32_t var_8
            int32_t eax_9
            
            if (esi_1 s>= 8)
            label_6587b9:
                eax_8 = zx.d((ebp_1 s>> (esi_1.b - 8)).b)
                int32_t ecx_8 = *(edi_1 + (eax_8 << 2) + 0x90)
                uint32_t edi_2
                
                if (ecx_8 == 0)
                    eax_9 = 9
                label_6587e1:
                    eax_8 = sub_658310(eax_9, ebp_1, &var_14, esi_1, edi_1, eax_9)
                    edi_2 = eax_8
                    
                    if (edi_2 s>= 0)
                        ebp_1 = var_c
                        esi_1 = var_8
                        goto label_6587fd
                else
                    edi_2 = zx.d(*(eax_8 + edi_1 + 0x490))
                    esi_1 -= ecx_8
                label_6587fd:
                    int32_t ebx_2 = edi_2 s>> 4
                    int32_t edi_3 = edi_2 & 0xf
                    int32_t eax_15
                    
                    if (edi_3 != 0)
                        int32_t eax_13 = var_34_1 + ebx_2
                        int32_t var_34_2 = eax_13
                        
                        if (esi_1 s>= edi_3)
                            goto label_658837
                        
                        if (sub_6581f0(eax_13, ebp_1, &var_14, esi_1, edi_3).b != 0)
                            ebp_1 = var_c
                            esi_1 = var_8
                            eax_13 = var_34_2
                        label_658837:
                            int32_t ebx_3 = *((edi_3 << 2) + &data_76e550)
                            esi_1 -= edi_3
                            int32_t edx_8 = ebp_1 s>> esi_1.b & ebx_3
                            
                            if (edx_8 s<= *((edi_3 << 2) + &data_76e54c))
                                edx_8 -= ebx_3
                            
                            edx_8.w <<= ecx_3
                            *(eax_5 + (*(ecx_4 + (eax_13 << 2)) << 1)) = edx_8.w
                            eax_15 = var_34_2
                            goto label_65887a
                    else if (ebx_2 != 0xf)
                        if (ebx_2 == 0)
                            break
                        
                        if (esi_1 s>= ebx_2)
                            goto label_6588f4
                        
                        if (sub_6581f0(eax_8, ebp_1, &var_14, esi_1, ebx_2).b != 0)
                            ebp_1 = var_c
                            esi_1 = var_8
                        label_6588f4:
                            esi_1 -= ebx_2
                            edx_1 = (ebp_1 s>> esi_1.b & *((ebx_2 << 2) + &data_76e550)) - 1
                                + (1 << ebx_2.b)
                            break
                    else
                        eax_15 = var_34_1 + ebx_2
                    label_65887a:
                        eax_7 = eax_15 + 1
                        var_34_1 = eax_7
                        
                        if (eax_7 s> ecx_2)
                            break
                        
                        edi_1 = var_18_1
                        continue
            else if (sub_6581f0(eax_7, ebp_1, &var_14, esi_1, 0).b != 0)
                esi_1 = var_8
                ebp_1 = var_c
                
                if (esi_1 s>= 8)
                    goto label_6587b9
                
                eax_9 = 1
                goto label_6587e1
            eax_8.b = 0
            return eax_8
    
    **(arg1 + 0x18) = var_14
    *(*(arg1 + 0x18) + 4) = eax_3
    *(ebx + 0xc) = ebp_1
    *(ebx + 0x10) = esi_1
    *(ebx + 0x14) = edx_1

*(ebx + 0x2c) -= 1
eax.b = 1
return eax
