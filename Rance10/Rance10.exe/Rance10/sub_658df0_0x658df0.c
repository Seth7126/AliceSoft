// 函数: sub_658df0
// 地址: 0x658df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_58
int32_t eax_1 = __security_cookie ^ &var_58
void* ebp = arg1
void* var_1c = ebp
void* ecx = *(ebp + 0x1b0)
void* var_38 = ecx
int32_t eax_2

if (*(ebp + 0xfc) != 0 && *(ecx + 0x2c) == 0)
    eax_2 = sub_658400(ebp)
    
    if (eax_2.b == 0)
        @__security_check_cookie@4(eax_1 ^ &var_58)
        return eax_2
    
    ecx = var_38

if (*(ecx + 0x28) == 0)
    int32_t eax_3 = *(ebp + 0x18c)
    int128_t xmm0_1 = *(ecx + 0x14)
    int32_t ebx_1 = *(ecx + 0x24)
    int32_t esi_1 = *(ecx + 0xc)
    int32_t eax_4 = *(ebp + 0x190)
    int32_t* eax_5 = *(ebp + 0x18)
    void* var_48_1 = ebp
    int128_t var_18 = xmm0_1
    int32_t edx_1 = *eax_5
    int32_t edi_1 = eax_5[1]
    eax_2 = *(ecx + 0x10)
    int32_t ecx_4 = 0
    var_58 = edx_1
    int32_t var_28_1 = 0
    
    if (*(ebp + 0x14c) s> 0)
        void* ebx_3 = var_38 + 0x8c
        void* var_3c_1 = ebp + 0x150
        void* var_40_1 = ebx_3
        
        while (true)
            int32_t edi_2 = *(ebx_3 - 0x28)
            int16_t* ecx_5 = *(arg2 + (ecx_4 << 2))
            int32_t var_50
            int32_t var_4c
            int32_t ecx_7
            
            if (eax_2 s>= 8)
            label_658f07:
                uint32_t ecx_9 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                int32_t edx_7 = *(edi_2 + (ecx_9 << 2) + 0x90)
                uint32_t edi_3
                
                if (edx_7 == 0)
                    ecx_7 = 9
                label_658f34:
                    edi_3 = sub_658310(eax_2, esi_1, &var_58, eax_2, edi_2, ecx_7)
                    
                    if (edi_3 s>= 0)
                        esi_1 = var_50
                        eax_2 = var_4c
                        goto label_658f4d
                else
                    edi_3 = zx.d(*(ecx_9 + edi_2 + 0x490))
                    eax_2 -= edx_7
                label_658f4d:
                    int32_t ebp_1 = 1
                    int32_t ebx_4 = *ebx_3
                    int32_t var_44_1 = ebx_4
                    int32_t ecx_12 = *(var_40_1 + 0x28)
                    
                    if (ecx_12 == 0)
                        if (edi_3 == 0)
                            goto label_6590f4
                        
                        if (eax_2 s>= edi_3)
                            goto label_6590ee
                        
                        if (sub_6581f0(eax_2, esi_1, &var_58, eax_2, edi_3).b != 0)
                            esi_1 = var_50
                            eax_2 = var_4c
                        label_6590ee:
                            eax_2 -= edi_3
                        label_6590f4:
                            
                            while (ebp_1 s<= eax_4)
                                int32_t ecx_31
                                
                                if (eax_2 s< 8)
                                    if (sub_6581f0(eax_2, esi_1, &var_58, eax_2, 0).b == 0)
                                        goto label_659235
                                    
                                    eax_2 = var_4c
                                    esi_1 = var_50
                                    
                                    if (eax_2 s>= 8)
                                        goto label_659139
                                    
                                    ecx_31 = 1
                                    goto label_659166
                                
                            label_659139:
                                uint32_t ecx_33 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                                int32_t edx_25 = *(ebx_4 + (ecx_33 << 2) + 0x90)
                                uint32_t edi_8
                                
                                if (edx_25 == 0)
                                    ecx_31 = 9
                                label_659166:
                                    edi_8 = sub_658310(eax_2, esi_1, &var_58, eax_2, ebx_4, ecx_31)
                                    
                                    if (edi_8 s< 0)
                                        goto label_659235
                                    
                                    esi_1 = var_50
                                    eax_2 = var_4c
                                else
                                    edi_8 = zx.d(*(ecx_33 + ebx_4 + 0x490))
                                    eax_2 -= edx_25
                                
                                int32_t ebx_9 = edi_8 s>> 4
                                int32_t edi_9 = edi_8 & 0xf
                                
                                if (edi_9 != 0)
                                    if (eax_2 s< edi_9)
                                        if (sub_6581f0(eax_2, esi_1, &var_58, eax_2, edi_9).b == 0)
                                            goto label_659235
                                        
                                        esi_1 = var_50
                                        eax_2 = var_4c
                                    
                                    eax_2 -= edi_9
                                else if (ebx_9 != 0xf)
                                    break
                                
                                ebp_1 += ebx_9 + 1
                                ebx_4 = var_44_1
                            
                        label_6591c7:
                            ebp = var_1c
                            ecx_4 = var_28_1 + 1
                            var_3c_1 += 4
                            ebx_3 = var_40_1 + 4
                            var_28_1 = ecx_4
                            var_40_1 = ebx_3
                            
                            if (ecx_4 s>= *(ebp + 0x14c))
                                break
                            
                            continue
                    else
                        if (edi_3 == 0)
                        label_658fba:
                            int32_t ecx_16 = *var_3c_1
                            *(&var_18:4 + (ecx_16 << 2)) += edi_3
                            *ecx_5 = (*(&var_18:4 + (ecx_16 << 2))).w
                            
                            if (ecx_12 s> 1)
                                do
                                    int32_t ecx_19
                                    
                                    if (eax_2 s< 8)
                                        if (sub_6581f0(eax_2, esi_1, &var_58, eax_2, 0).b == 0)
                                            goto label_659235
                                        
                                        eax_2 = var_4c
                                        esi_1 = var_50
                                        
                                        if (eax_2 s>= 8)
                                            goto label_65900a
                                        
                                        ecx_19 = 1
                                        goto label_659037
                                    
                                label_65900a:
                                    uint32_t ecx_21 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                                    int32_t edx_15 = *(ebx_4 + (ecx_21 << 2) + 0x90)
                                    uint32_t edi_6
                                    
                                    if (edx_15 == 0)
                                        ecx_19 = 9
                                    label_659037:
                                        edi_6 =
                                            sub_658310(eax_2, esi_1, &var_58, eax_2, ebx_4, ecx_19)
                                        
                                        if (edi_6 s< 0)
                                            goto label_659235
                                        
                                        esi_1 = var_50
                                        eax_2 = var_4c
                                    else
                                        edi_6 = zx.d(*(ecx_21 + ebx_4 + 0x490))
                                        eax_2 -= edx_15
                                    
                                    int32_t ecx_24 = edi_6 s>> 4
                                    int32_t edi_7 = edi_6 & 0xf
                                    int32_t ebp_2
                                    
                                    if (edi_7 == 0)
                                        if (ecx_24 != 0xf)
                                            goto label_6591c7
                                        
                                        ebp_2 = ebp_1 + 0xf
                                    else
                                        ebp_2 = ebp_1 + ecx_24
                                        
                                        if (eax_2 s< edi_7)
                                            if (sub_6581f0(eax_2, esi_1, &var_58, eax_2, edi_7).b
                                                    == 0)
                                                goto label_659235
                                            
                                            esi_1 = var_50
                                            eax_2 = var_4c
                                        
                                        int32_t ebx_6 = *((edi_7 << 2) + &data_76e550)
                                        eax_2 -= edi_7
                                        int32_t edx_20 = esi_1 s>> eax_2.b & ebx_6
                                        
                                        if (edx_20 s<= *((edi_7 << 2) + &data_76e54c))
                                            edx_20 -= ebx_6
                                        
                                        ecx_5[*(eax_3 + (ebp_2 << 2))] = edx_20.w
                                        ebx_4 = var_44_1
                                    
                                    ebp_1 = ebp_2 + 1
                                while (ebp_1 s< ecx_12)
                            
                            goto label_6590f4
                        
                        if (eax_2 s>= edi_3)
                            goto label_658f8f
                        
                        if (sub_6581f0(eax_2, esi_1, &var_58, eax_2, edi_3).b != 0)
                            esi_1 = var_50
                            eax_2 = var_4c
                        label_658f8f:
                            int32_t ebx_5 = *((edi_3 << 2) + &data_76e550)
                            void* edx_10 = (edi_3 << 2) + &data_76e550
                            eax_2 -= edi_3
                            edi_3 = esi_1 s>> eax_2.b & ebx_5
                            
                            if (edi_3 s<= *(edx_10 - 4))
                                edi_3 -= ebx_5
                            
                            ebx_4 = var_44_1
                            goto label_658fba
            else if (sub_6581f0(eax_2, esi_1, &var_58, eax_2, 0).b != 0)
                eax_2 = var_4c
                esi_1 = var_50
                
                if (eax_2 s>= 8)
                    goto label_658f07
                
                ecx_7 = 1
                goto label_658f34
        label_659235:
            uint32_t eax_6
            eax_6.b = 0
            @__security_check_cookie@4(eax_1 ^ &var_58)
            return eax_6
        
        edx_1 = var_58
        xmm0_1 = var_18
    
    **(ebp + 0x18) = edx_1
    *(*(ebp + 0x18) + 4) = edi_1
    ecx = var_38
    *(ecx + 0x14) = xmm0_1
    *(ecx + 0xc) = esi_1
    *(ecx + 0x10) = eax_2
    *(ecx + 0x24) = ebx_1

*(ecx + 0x2c) -= 1
eax_2.b = 1
@__security_check_cookie@4(eax_1 ^ &var_58)
return eax_2
