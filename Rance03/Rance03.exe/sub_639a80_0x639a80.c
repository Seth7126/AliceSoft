// 函数: sub_639a80
// 地址: 0x639a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg3
int32_t* var_4 = edi

if (edi[2] s> 0)
    int32_t esi_1 = 0
    int32_t var_18_1 = 0
    
    if (arg5 s> 0)
        int32_t* ebx_1 = arg4
        
        while (true)
            int32_t i = edi[0xa]
            int32_t eax_1 = sub_638010(ebx_1, edi[9])
            int32_t ebp_3
            int32_t eax_3
            
            if (eax_1 s< 0)
                eax_3 = edi[2]
                ebp_3 = 0
            label_639b5d:
                int32_t edx_5 = sub_638010(ebx_1, i)
                
                if (edx_5 s< 0)
                    while (i s> 1)
                        int32_t i_3 = i - 1
                        i = i_3
                        edx_5 = sub_638010(ebx_1, i_3)
                        
                        if (edx_5 s>= 0)
                            goto label_639b8a
                    
                    if (edx_5 s< 0)
                        return 0xffffffff
                
            label_639b8a:
                int32_t edx_7 = rol.d(edx_5, 0x10)
                int32_t ecx_13 = ((edx_7 u>> 8 ^ edx_7 << 8) & 0xff00ff) ^ edx_7 << 8
                int32_t edx_13 = ((ecx_13 u>> 4 ^ ecx_13 << 4) & 0xf0f0f0f) ^ ecx_13 << 4
                int32_t ecx_19 = ((edx_13 u>> 2 ^ edx_13 << 2) & 0x33333333) ^ edx_13 << 2
                int32_t edx_18 = ((ecx_19 u>> 1 ^ (ecx_19 * 2)) & 0x55555555) ^ (ecx_19 * 2)
                int32_t i_1 = eax_3 - ebp_3
                
                if (i_1 s> 1)
                    int32_t ebx_2 = eax_3
                    
                    do
                        int32_t edx_20 = i_1 s>> 1
                        int32_t ecx_21 = neg.d(sbb.d(ecx_19, ecx_19, 
                            edx_18 u< *(edi[5] + ((edx_20 + ebp_3) << 2))))
                        ecx_19 = neg.d(ecx_21) & edx_20
                        ebx_2 -= ecx_19
                        ebp_3 += (ecx_21 - 1) & edx_20
                        i_1 = ebx_2 - ebp_3
                    while (i_1 s> 1)
                    
                    esi_1 = var_18_1
                    edi = var_4
                    ebx_1 = arg4
                
                int32_t ecx_23 = sx.d(*(edi[7] + ebp_3))
                
                if (ecx_23 s> i)
                    int32_t edx_31 = ebx_1[4]
                    int32_t esi_4 = ebx_1[1] + i
                    int32_t edi_2 = *ebx_1
                    
                    if (edi_2 s> edx_31 - ((esi_4 + 7) s>> 3))
                        ebx_1[3] = 0
                        *ebx_1 = edx_31
                        ebx_1[1] = 1
                        return 0xffffffff
                    
                    int32_t eax_54
                    int32_t edx_32
                    edx_32:eax_54 = sx.q(esi_4)
                    int32_t eax_56 = (eax_54 + (edx_32 & 7)) s>> 3
                    ebx_1[3] += eax_56
                    *ebx_1 = eax_56 + edi_2
                    ebx_1[1] = esi_4 & 7
                    return 0xffffffff
                
                int32_t edx_23 = ebx_1[1] + ecx_23
                int32_t ecx_26 = *ebx_1
                
                if (ecx_26 s<= ebx_1[4] - ((edx_23 + 7) s>> 3))
                    int32_t eax_32
                    int32_t edx_24
                    edx_24:eax_32 = sx.q(edx_23)
                    int32_t eax_34 = (eax_32 + (edx_24 & 7)) s>> 3
                    ebx_1[3] += eax_34
                    *ebx_1 = eax_34 + ecx_26
                    ebx_1[1] = edx_23 & 7
                else
                    int32_t eax_30 = ebx_1[4]
                    ebx_1[3] = 0
                    *ebx_1 = eax_30
                    ebx_1[1] = 1
            else
                int32_t ecx_2 = *(edi[8] + (eax_1 << 2))
                
                if (ecx_2 s< 0)
                    ebp_3 = ecx_2 s>> 0xf & 0x7fff
                    eax_3 = edi[2] - (ecx_2 & 0x7fff)
                    goto label_639b5d
                
                int32_t edx_1 = ebx_1[4]
                int32_t ebp_5 = sx.d(*(edi[7] + ecx_2 - 1)) + ebx_1[1]
                int32_t ecx_6 = *ebx_1
                
                if (ecx_6 s<= edx_1 - ((ebp_5 + 7) s>> 3))
                    int32_t eax_8
                    int32_t edx_2
                    edx_2:eax_8 = sx.q(ebp_5)
                    ebx_1[1] = ebp_5 & 7
                    int32_t eax_10 = (eax_8 + (edx_2 & 7)) s>> 3
                    ebx_1[3] += eax_10
                    *ebx_1 = eax_10 + ecx_6
                    ebp_3 = ecx_2 - 1
                else
                    ebx_1[3] = 0
                    ebp_3 = ecx_2 - 1
                    *ebx_1 = edx_1
                    ebx_1[1] = 1
            
            if (ebp_3 == 0xffffffff)
                return 0xffffffff
            
            int32_t ebp_9 = edi[4] + ((*edi * ebp_3) << 2)
            int32_t i_2 = 0
            
            if (arg5 - esi_1 s< 4)
            label_639d10:
                
                if (esi_1 s>= arg5)
                    break
                
                int32_t* edx_30 = (i_2 << 2) + ebp_9
                
                while (i_2 s< *edi)
                    i_2 += 1
                    *(arg2 + (esi_1 << 2)) = *edx_30
                    edx_30 = &edx_30[1]
                    esi_1 += 1
                    var_18_1 = esi_1
                    
                    if (esi_1 s>= arg5)
                        return 0
            else
                void* edx_28 = arg2 + 8 + (esi_1 << 2)
                i_2 = 0
                
                while (i_2 s< *edi)
                    *(edx_28 - 8) = *(ebp_9 + (i_2 << 2))
                    
                    if (i_2 + 1 s>= *edi)
                        esi_1 += 1
                    else
                        *(edx_28 - 4) = *(ebp_9 + ((i_2 + 1) << 2))
                        
                        if (i_2 + 2 s>= *edi)
                            esi_1 += 2
                        else
                            *edx_28 = *(ebp_9 + ((i_2 + 2) << 2))
                            
                            if (i_2 + 3 s>= *edi)
                                esi_1 += 3
                            else
                                esi_1 += 4
                                *(edx_28 + 4) = *(ebp_9 + ((i_2 + 3) << 2))
                                i_2 += 4
                                edx_28 += 0x10
                                var_18_1 = esi_1
                                
                                if (esi_1 s>= arg5 - 3)
                                    goto label_639d10
                                
                                continue
                    
                    var_18_1 = esi_1
                    break
            
            if (esi_1 s>= arg5)
                return 0
else if (arg5 s> 0)
    __builtin_memset(arg2, 0, arg5 << 2)

return 0
