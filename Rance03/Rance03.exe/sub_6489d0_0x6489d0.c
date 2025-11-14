// 函数: sub_6489d0
// 地址: 0x6489d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
int32_t eax = esi[0x16]

if (eax s>= 2)
    if (esi[1] == 0)
        return 0xffffff76
    
    if (arg3 s>= 0 && (arg3 s> 0 || arg2 u>= 0))
        int32_t temp1_1 = esi[5]
        
        if (arg3 s<= temp1_1 && (arg3 s< temp1_1 || arg2 u<= esi[4]))
            if (eax s>= 3)
                int32_t eax_2 = esi[0x18]
                int32_t ecx_1 = esi[0xe]
                int32_t temp2_1 = *(ecx_1 + (eax_2 << 3) + 4)
                
                if (arg3 s< temp2_1 || (arg3 s<= temp2_1 && arg2 u< *(ecx_1 + (eax_2 << 3))))
                    sub_648230(esi)
                else
                    int32_t temp3_1 = *(ecx_1 + (eax_2 << 3) + 0xc)
                    
                    if (arg3 s>= temp3_1
                            && (arg3 s> temp3_1 || arg2 u>= *(ecx_1 + (eax_2 << 3) + 8)))
                        sub_648230(esi)
            
            int32_t edx = esi[0x17]
            esi[0x14] = 0xffffffff
            esi[0x15] = 0xffffffff
            
            if (esi != 0xffffff88 && esi[0x1e] != 0)
                sub_63d5b0(&esi[0x1e])
                esi[0x72] = edx
            
            int32_t eax_3
            int32_t edx_1
            eax_3, edx_1 = sub_6389d0(&esi[0x78])
            int32_t var_170[0x54]
            int32_t (* ecx_6)[0x54] = &var_170
            
            if (sub_646ff0(eax_3, edx_1, esi, arg2, arg3) != 0)
                esi[0x14] = 0xffffffff
                esi[0x15] = 0xffffffff
                sub_63cf00(ecx_6)
                sub_648230(esi)
                return 0xffffff77
            
            int32_t ebx_2 = 0
            int32_t var_1a4 = 0
            int32_t var_1b8 = 0
            int32_t var_1bc = 0
            int32_t var_1b0 = 0
            sub_63ce70(ecx_6, esi[0x17])
            void* eax_6 = sub_63d5b0(&var_170)
            
            while (true)
                void* var_1a0
                void* ebx_4
                
                if (esi[0x16] s< 3 || var_170[0] == 0)
                    ebx_4 = &esi[0x1e]
                else
                    void var_190
                    eax_6 = sub_63d660(eax_6, &var_190, &var_170, 1)
                    
                    if (eax_6 s<= 0)
                        ebx_4 = &esi[0x1e]
                    else
                        void* ecx_12 = (esi[0x18] << 5) + esi[0x12]
                        
                        if (*(ecx_12 + 0x1c) == 0)
                            ebx_4 = &esi[0x1e]
                            eax_6 = sub_63d790(ebx_4)
                        else
                            int32_t edi_2 = sub_646ef0(ecx_12, &var_190)
                            
                            if (edi_2 s< 0)
                                sub_63d790(&esi[0x1e])
                                edi_2 = 0
                            else if (var_1bc != 0 && var_1b0 == 0)
                                sub_63d790(&esi[0x1e])
                            else if (ebx_2 != 0)
                                var_1a4 += (edi_2 + ebx_2) s>> 2
                            
                            int32_t var_180
                            int32_t var_17c
                            eax_6 = var_180 & var_17c
                            
                            if (eax_6 == 0xffffffff)
                                ebx_2 = edi_2
                                var_1b8 = ebx_2
                                continue
                            
                            int32_t edi_6 = esi[0x18]
                            int32_t edx_13 = esi[0x11]
                            int32_t eax_16 = edi_6 << 4
                            void* ecx_30 = var_180 - *(eax_16 + edx_13)
                            int32_t ebx_5 = sbb.d(var_17c, *(eax_16 + edx_13 + 4), 
                                var_180 u< *(eax_16 + edx_13))
                            int32_t var_1b0_1 = ebx_5
                            int32_t var_19c
                            
                            if (ebx_5 s<= 0 && (ebx_5 s< 0 || ecx_30 u< 0))
                                var_1a0.q = 0
                                ebx_5 = var_19c
                                ecx_30 = var_1a0
                                var_1b0_1 = ebx_5
                            
                            int32_t edx_14 = 0
                            var_1b8.q = 0
                            var_1a0.q = 0
                            int32_t var_1bc_1
                            void* var_1b8_1
                            int32_t var_1a8_2
                            int32_t edi_7
                            int32_t var_1b4
                            
                            if (edi_6 s< 2)
                                edi_7 = var_19c
                                var_1a8_2 = var_1b4
                                var_1bc_1 = var_1b8
                                var_1b8_1 = var_1a0
                            else
                                edi_7 = var_19c
                                void* eax_18 = esi[0x11] + 0x18
                                int32_t esi_1 = var_1b4
                                int32_t ebx_6 = var_1b8
                                int32_t i_2 = ((edi_6 - 2) u>> 1) + 1
                                void* edx_19 = var_1a0
                                int32_t i
                                
                                do
                                    int32_t temp9_1 = ebx_6
                                    ebx_6 += *(eax_18 - 0x10)
                                    esi_1 = adc.d(esi_1, *(eax_18 - 0xc), 
                                        temp9_1 + *(eax_18 - 0x10) u< temp9_1)
                                    void* temp11_1 = edx_19
                                    edx_19 += *eax_18
                                    edi_7 =
                                        adc.d(edi_7, *(eax_18 + 4), temp11_1 + *eax_18 u< temp11_1)
                                    eax_18 += 0x20
                                    i = i_2
                                    i_2 -= 1
                                while (i != 1)
                                var_1bc_1 = ebx_6
                                ebx_5 = var_1b0_1
                                var_1a8_2 = esi_1
                                esi = arg1
                                var_1b8_1 = edx_19
                                edx_14 = (((edi_6 - 2) u>> 1) + 1) * 2
                            
                            if (edx_14 s< esi[0x18])
                                int32_t eax_22 = esi[0x11]
                                int32_t edx_20 = edx_14 << 4
                                void* temp19_1 = ecx_30
                                ecx_30 += *(edx_20 + eax_22 + 8)
                                ebx_5 = adc.d(ebx_5, *(edx_20 + eax_22 + 0xc), 
                                    temp19_1 + *(edx_20 + eax_22 + 8) u< temp19_1)
                            
                            int32_t eax_24
                            int32_t edx_21
                            edx_21:eax_24 = sx.q(var_1a4)
                            void* var_1b8_2 = var_1b8_1 - eax_24
                            void* eax_26 = var_1b8_2 + var_1bc_1
                            void* eax_27 = eax_26 + ecx_30
                            esi[0x14] = eax_27
                            int32_t edi_10 = adc.d(
                                adc.d(sbb.d(edi_7, edx_21, var_1b8_1 u< eax_24), var_1a8_2, 
                                    var_1b8_2 + var_1bc_1 u< var_1b8_2), 
                                ebx_5, eax_26 + ecx_30 u< eax_26)
                            esi[0x15] = edi_10
                            
                            if (edi_10 s<= 0 && (edi_10 s< 0 || eax_27 u< 0))
                                esi[0x14] = 0
                                esi[0x15] = 0
                            
                            break
                
                if (var_1b8 != 0)
                    esi[0x14] = 0xffffffff
                    esi[0x15] = 0xffffffff
                    break
                
                int32_t eax_11
                int32_t edx_9
                eax_11, edx_9 = sub_647050(eax_6, &var_1a0, esi, 0xffffffff, 0xffffffff)
                
                if (edx_9 s< 0 || (edx_9 s<= 0 && eax_11 u< 0))
                    int32_t eax_28
                    int32_t edx_22
                    eax_28, edx_22 = sub_648940(esi, 0xffffffff)
                    esi[0x14] = eax_28
                    esi[0x15] = edx_22
                    break
                
                if (esi[0x16] s>= 3)
                    uint32_t eax_12 = sub_63ce40(&var_1a0)
                    
                    if (esi[0x17] != eax_12 && (*(var_1a0 + 5) & 2) != 0)
                        sub_648230(esi)
                        sub_63cf00(&var_170)
                
                if (esi[0x16] s>= 3 && esi[0x16] s>= 3)
                label_648cae:
                    sub_63d2a0(ebx_4, &var_1a0)
                    sub_63d2a0(&var_170, &var_1a0)
                    eax_6 = var_1a0
                    var_1bc = zx.d(*(eax_6 + 5)) & 4
                else
                    uint32_t i_1 = sub_63ce40(&var_1a0)
                    int32_t edx_10 = 0
                    eax_6 = esi[0xd]
                    
                    if (eax_6 s> 0)
                        int32_t* ecx_23 = esi[0x10]
                        
                        while (*ecx_23 != i_1)
                            edx_10 += 1
                            ecx_23 = &ecx_23[1]
                            
                            if (edx_10 s>= eax_6)
                                break
                    
                    if (edx_10 != eax_6)
                        esi[0x18] = edx_10
                        esi[0x17] = i_1
                        
                        if (ebx_4 != 0 && *ebx_4 != 0)
                            sub_63d5b0(ebx_4)
                            *(ebx_4 + 0x150) = i_1
                        
                        if (var_170[0] != 0)
                            sub_63d5b0(&var_170)
                            uint32_t i_3 = i_1
                        
                        int32_t eax_14 = esi[0xf]
                        esi[0x16] = 3
                        int32_t temp8_1 = *(eax_14 + (edx_10 << 3) + 4)
                        
                        if (edx_9 s> temp8_1
                                || (edx_9 s>= temp8_1 && eax_11 u> *(eax_14 + (edx_10 << 3))))
                            var_1b0 = 0
                        else
                            var_1b0 = 1
                        
                        goto label_648cae
                
                ebx_2 = var_1b8
                continue
            
            sub_63cf00(&var_170)
            *(esi + 0x68) = zx.o(0)
            return 0

return 0xffffff7d
