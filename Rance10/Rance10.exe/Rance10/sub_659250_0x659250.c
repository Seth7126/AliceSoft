// 函数: sub_659250
// 地址: 0x659250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_50
int32_t eax_1 = __security_cookie ^ &var_50
void* ebp = arg1
void* var_1c = ebp
void* ecx = *(ebp + 0x1b0)
void* var_30 = ecx
int32_t eax_2

if (*(ebp + 0xfc) != 0 && *(ecx + 0x2c) == 0)
    eax_2 = sub_658400(ebp)
    
    if (eax_2.b == 0)
        @__security_check_cookie@4(eax_1 ^ &var_50)
        return eax_2
    
    ecx = var_30

if (*(ecx + 0x28) == 0)
    int32_t* eax_3 = *(ebp + 0x18)
    int128_t xmm0_1 = *(ecx + 0x14)
    int32_t ebx_1 = *(ecx + 0x24)
    int32_t esi_1 = *(ecx + 0xc)
    int32_t edx_1 = *eax_3
    int32_t edi_1 = eax_3[1]
    eax_2 = *(ecx + 0x10)
    int32_t ecx_4 = 0
    void* var_40_1 = ebp
    var_50 = edx_1
    int128_t var_18 = xmm0_1
    int32_t var_24_1 = 0
    
    if (*(ebp + 0x14c) s> 0)
        void* ebx_3 = var_30 + 0x8c
        void* var_34_1 = ebp + 0x150
        void* var_38_1 = ebx_3
        
        while (true)
            int32_t edi_2 = *(ebx_3 - 0x28)
            int16_t* ecx_5 = *(arg2 + (ecx_4 << 2))
            int32_t var_48
            int32_t var_44
            int32_t ecx_7
            
            if (eax_2 s>= 8)
            label_659357:
                uint32_t ecx_9 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                int32_t edx_7 = *(edi_2 + (ecx_9 << 2) + 0x90)
                uint32_t edi_3
                
                if (edx_7 == 0)
                    ecx_7 = 9
                label_659384:
                    edi_3 = sub_658310(eax_2, esi_1, &var_50, eax_2, edi_2, ecx_7)
                    
                    if (edi_3 s>= 0)
                        esi_1 = var_48
                        eax_2 = var_44
                        goto label_65939d
                else
                    edi_3 = zx.d(*(ecx_9 + edi_2 + 0x490))
                    eax_2 -= edx_7
                label_65939d:
                    int32_t i = 1
                    int32_t ebx_4 = *ebx_3
                    int32_t var_3c_1 = ebx_4
                    int32_t ecx_12 = *(var_38_1 + 0x28)
                    
                    if (ecx_12 == 0)
                        if (edi_3 == 0)
                            goto label_65960c
                        
                        if (eax_2 s>= edi_3)
                            goto label_659547
                        
                        if (sub_6581f0(eax_2, esi_1, &var_50, eax_2, edi_3).b != 0)
                            esi_1 = var_48
                            eax_2 = var_44
                        label_659547:
                            eax_2 -= edi_3
                        label_65960c:
                            
                            do
                                int32_t ecx_30
                                
                                if (eax_2 s< 8)
                                    if (sub_6581f0(eax_2, esi_1, &var_50, eax_2, 0).b == 0)
                                        goto label_659684
                                    
                                    eax_2 = var_44
                                    esi_1 = var_48
                                    
                                    if (eax_2 s>= 8)
                                        goto label_659589
                                    
                                    ecx_30 = 1
                                    goto label_6595b6
                                
                            label_659589:
                                uint32_t ecx_32 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                                int32_t edx_25 = *(ebx_4 + (ecx_32 << 2) + 0x90)
                                uint32_t edi_8
                                
                                if (edx_25 == 0)
                                    ecx_30 = 9
                                label_6595b6:
                                    edi_8 = sub_658310(eax_2, esi_1, &var_50, eax_2, ebx_4, ecx_30)
                                    
                                    if (edi_8 s< 0)
                                        goto label_659684
                                    
                                    esi_1 = var_48
                                    eax_2 = var_44
                                else
                                    edi_8 = zx.d(*(ecx_32 + ebx_4 + 0x490))
                                    eax_2 -= edx_25
                                
                                int32_t ebx_9 = edi_8 s>> 4
                                int32_t edi_9 = edi_8 & 0xf
                                
                                if (edi_9 != 0)
                                    if (eax_2 s< edi_9)
                                        if (sub_6581f0(eax_2, esi_1, &var_50, eax_2, edi_9).b == 0)
                                            goto label_659684
                                        
                                        esi_1 = var_48
                                        eax_2 = var_44
                                    
                                    eax_2 -= edi_9
                                else if (ebx_9 != 0xf)
                                    break
                                
                                i += ebx_9 + 1
                                ebx_4 = var_3c_1
                            while (i s< 0x40)
                            
                        label_659616:
                            ebp = var_1c
                            ecx_4 = var_24_1 + 1
                            var_34_1 += 4
                            ebx_3 = var_38_1 + 4
                            var_24_1 = ecx_4
                            var_38_1 = ebx_3
                            
                            if (ecx_4 s>= *(ebp + 0x14c))
                                break
                            
                            continue
                    else
                        if (edi_3 == 0)
                        label_65940a:
                            int32_t ecx_16 = *var_34_1
                            *(&var_18:4 + (ecx_16 << 2)) += edi_3
                            *ecx_5 = (*(&var_18:4 + (ecx_16 << 2))).w
                            
                            if (ecx_12 s> 1)
                                while (true)
                                    int32_t ecx_19
                                    
                                    if (eax_2 s< 8)
                                        if (sub_6581f0(eax_2, esi_1, &var_50, eax_2, 0).b == 0)
                                            goto label_659684
                                        
                                        eax_2 = var_44
                                        esi_1 = var_48
                                        
                                        if (eax_2 s>= 8)
                                            goto label_65945a
                                        
                                        ecx_19 = 1
                                        goto label_659487
                                    
                                label_65945a:
                                    uint32_t ecx_21 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                                    int32_t edx_15 = *(ebx_4 + (ecx_21 << 2) + 0x90)
                                    uint32_t edi_6
                                    
                                    if (edx_15 == 0)
                                        ecx_19 = 9
                                    label_659487:
                                        edi_6 =
                                            sub_658310(eax_2, esi_1, &var_50, eax_2, ebx_4, ecx_19)
                                        
                                        if (edi_6 s< 0)
                                            goto label_659684
                                        
                                        esi_1 = var_48
                                        eax_2 = var_44
                                    else
                                        edi_6 = zx.d(*(ecx_21 + ebx_4 + 0x490))
                                        eax_2 -= edx_15
                                    
                                    int32_t ecx_24 = edi_6 s>> 4
                                    int32_t edi_7 = edi_6 & 0xf
                                    int32_t ebp_1
                                    
                                    if (edi_7 == 0)
                                        if (ecx_24 != 0xf)
                                            goto label_659616
                                        
                                        ebp_1 = i + 0xf
                                    else
                                        ebp_1 = i + ecx_24
                                        
                                        if (eax_2 s< edi_7)
                                            if (sub_6581f0(eax_2, esi_1, &var_50, eax_2, edi_7).b
                                                    == 0)
                                                goto label_659684
                                            
                                            esi_1 = var_48
                                            eax_2 = var_44
                                        
                                        int32_t ebx_6 = *((edi_7 << 2) + &data_76e550)
                                        eax_2 -= edi_7
                                        int32_t edx_20 = esi_1 s>> eax_2.b & ebx_6
                                        
                                        if (edx_20 s<= *((edi_7 << 2) + &data_76e54c))
                                            edx_20 -= ebx_6
                                        
                                        ecx_5[*((ebp_1 << 2) + &data_76e8a0)] = edx_20.w
                                        ebx_4 = var_3c_1
                                    
                                    i = ebp_1 + 1
                                    
                                    if (i s>= ecx_12)
                                        if (i s>= 0x40)
                                            goto label_659616
                                        
                                        break
                            
                            goto label_65960c
                        
                        if (eax_2 s>= edi_3)
                            goto label_6593df
                        
                        if (sub_6581f0(eax_2, esi_1, &var_50, eax_2, edi_3).b != 0)
                            esi_1 = var_48
                            eax_2 = var_44
                        label_6593df:
                            int32_t ebx_5 = *((edi_3 << 2) + &data_76e550)
                            void* edx_10 = (edi_3 << 2) + &data_76e550
                            eax_2 -= edi_3
                            edi_3 = esi_1 s>> eax_2.b & ebx_5
                            
                            if (edi_3 s<= *(edx_10 - 4))
                                edi_3 -= ebx_5
                            
                            ebx_4 = var_3c_1
                            goto label_65940a
            else if (sub_6581f0(eax_2, esi_1, &var_50, eax_2, 0).b != 0)
                eax_2 = var_44
                esi_1 = var_48
                
                if (eax_2 s>= 8)
                    goto label_659357
                
                ecx_7 = 1
                goto label_659384
        label_659684:
            uint32_t eax_4
            eax_4.b = 0
            @__security_check_cookie@4(eax_1 ^ &var_50)
            return eax_4
        
        edx_1 = var_50
        xmm0_1 = var_18
    
    **(ebp + 0x18) = edx_1
    *(*(ebp + 0x18) + 4) = edi_1
    ecx = var_30
    *(ecx + 0x14) = xmm0_1
    *(ecx + 0xc) = esi_1
    *(ecx + 0x10) = eax_2
    *(ecx + 0x24) = ebx_1

*(ecx + 0x2c) -= 1
eax_2.b = 1
@__security_check_cookie@4(eax_1 ^ &var_50)
return eax_2
