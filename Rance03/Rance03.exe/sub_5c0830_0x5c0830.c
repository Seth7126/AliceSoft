// 函数: sub_5c0830
// 地址: 0x5c0830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 0
int32_t var_c = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, *(arg1 + 0xe8) - *(arg1 + 0xe4))
int32_t edx_3 = edx_2 s>> 4

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t ebp_1 = 0
    
    while (true)
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x66666667, *(arg1 + 0xe8) - *(arg1 + 0xe4))
        int32_t edx_5 = edx_4 s>> 4
        int32_t eax_7
        
        if (esi u< (edx_5 u>> 0x1f) + edx_5)
            void* esi_1 = *(arg1 + 0xe4)
            int32_t* esi_2 = esi_1 + ebp_1
            int32_t var_4
            
            if (esi_1 != neg.d(ebp_1))
                switch (esi_2[1] - 0xa)
                    case 0, 0x11, 0x25
                        void* ecx_2 = *(arg1 + 0x1260)
                        int32_t edx_6 = *esi_2
                        int32_t ebx_1 = esi_2[2]
                        
                        if (edx_6 u< *(ecx_2 + 0xc) u>> 2)
                            if (*(ecx_2 + 0xc) != 0)
                                *(*(ecx_2 + 8) + (edx_6 << 2)) = ebx_1
                            else
                                *(edx_6 << 2) = ebx_1
                            
                            goto label_5c0a56
                    case 1
                        void* ecx_3 = *(arg1 + 0x1260)
                        int32_t edx_7 = *esi_2
                        int32_t xmm0_1 = esi_2[3]
                        
                        if (edx_7 u< *(ecx_3 + 0xc) u>> 2)
                            if (*(ecx_3 + 0xc) != 0)
                                *(*(ecx_3 + 8) + (edx_7 << 2)) = xmm0_1
                            else
                                *(edx_7 << 2) = xmm0_1
                            
                            goto label_5c0a56
                    case 2
                        if (sub_5d3550(*(arg1 + 0x1260), *esi_2, &var_4).b != 0)
                            eax_7 = sub_5d6060(arg1 + 0x16c, var_4)
                            
                            if (eax_7 != 0)
                                eax_7 = sub_5d3d20(eax_7, &esi_2[4])
                            label_5c0a41:
                                
                                if (eax_7.b != 0)
                                    goto label_5c0a56
                    case 8, 9, 0x29
                        void* ecx_9 = *(arg1 + 0x1260)
                        int32_t edx_8 = *esi_2
                        
                        if (edx_8 u< *(ecx_9 + 0xc) u>> 2)
                            int32_t eax_15
                            
                            if (*(ecx_9 + 0xc) != 0)
                                eax_15 = *(ecx_9 + 8)
                            else
                                eax_15 = 0
                            
                            *(eax_15 + (edx_8 << 2)) = 0
                            
                            if (sub_5d34a0(*(arg1 + 0x1260), *esi_2 + 1, esi_2[2]).b != 0
                                    && ((*(arg1 + 0x178) - *(arg1 + 0x174)) & 0xfffffffc) s> 0)
                                eax_7 = **(arg1 + 0x174)
                                
                                if (eax_7 != 0)
                                    *(eax_7 + 0x18) += 1
                                label_5c0a56:
                                    ebp_1 += 0x28
                                    int32_t eax_22
                                    int32_t edx_11
                                    edx_11:eax_22 =
                                        muls.dp.d(0x66666667, *(arg1 + 0xe8) - *(arg1 + 0xe4))
                                    esi = var_c + 1
                                    int32_t edx_12 = edx_11 s>> 4
                                    var_c = esi
                                    
                                    if (esi s>= (edx_12 u>> 0x1f) + edx_12)
                                        break
                                    
                                    continue
                    case 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x16, 0x2a, 0x39, 0x3a
                        void* ecx_11 = *(arg1 + 0x1260)
                        int32_t ebx_2 = esi_2[2]
                        
                        if (ebx_2 u< *(ecx_11 + 0xc) u>> 2)
                            int32_t edx_9
                            
                            if (*(ecx_11 + 0xc) != 0)
                                edx_9 = *(ecx_11 + 8)
                            else
                                edx_9 = 0
                            
                            int32_t esi_3 = *esi_2
                            int32_t edx_10 = *(edx_9 + (ebx_2 << 2))
                            
                            if (esi_3 u< *(ecx_11 + 0xc) u>> 2)
                                if (*(ecx_11 + 0xc) != 0)
                                    eax_7 = *(ecx_11 + 8)
                                else
                                    eax_7 = 0
                                
                                *(eax_7 + (esi_3 << 2)) = edx_10
                                
                                if (edx_10 == 0xffffffff)
                                    goto label_5c0a56
                                
                                if (edx_10 s>= 0)
                                    eax_7 = sub_5d73a0(arg1 + 0x16c, edx_10)
                                    goto label_5c0a41
        
        eax_7.b = 0
        return eax_7

int32_t eax_3
eax_3.b = 1
return eax_3
