// 函数: sub_5b9e60
// 地址: 0x5b9e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_14 = arg3

if (edx_14 s< 0 || edx_14 s>= (*(arg2 + 0x18) - *(arg2 + 0x14)) s>> 2)
    int32_t eax
    eax.b = 0
    return eax

int32_t* edi_1 = arg1 + 0x6c
int32_t* var_8 = edi_1
void* ebp = *(*(arg2 + 0x14) + (edx_14 << 2))
void* var_4 = ebp
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2aaaaaab, *(ebp + 0x20) - *(ebp + 0x1c))
int32_t edx_1 = edx s>> 2
int32_t ebx_2 = (edx_1 u>> 0x1f) + edx_1
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = muls.dp.d(0x38e38e39, edi_1[1] - *edi_1)
int32_t edx_3 = edx_2 s>> 3
int32_t eax_6
int32_t edx_4
edx_4:eax_6 = muls.dp.d(0x38e38e39, edi_1[1] - *edi_1)
int32_t edx_5 = edx_4 s>> 3
sub_5bc940(edi_1, (edx_5 u>> 0x1f) + edx_5 + ebx_2)
arg2 = nullptr
int32_t eax_11

if (ebx_2 s> 0)
    int32_t ecx_7 = 0
    eax_11 = ((edx_3 u>> 0x1f) + edx_3) * 0x24
    int32_t var_14_1 = 0
    int32_t var_18_1 = eax_11
    
    while (true)
        int64_t* esi_6 = *(ebp + 0x1c) + ecx_7
        int64_t* ebp_2 = *edi_1 + eax_11
        *ebp_2 = *esi_6
        ebp_2[1].d = esi_6[1].d
        int32_t eax_14
        int32_t edx_6
        edx_6:eax_14 = muls.dp.d(0x2aaaaaab, esi_6[2].d - *(esi_6 + 0xc))
        int32_t edx_7 = edx_6 s>> 1
        int32_t ecx_12 = (edx_7 u>> 0x1f) + edx_7
        
        if ((*(ebp_2 + 0x14) - *(ebp_2 + 0xc)) s>> 2 u>= ecx_12)
            goto label_5b9f6f
        
        if (ecx_12 u<= 0x3fffffff)
            sub_404670(ebp_2 + 0xc, ecx_12)
        label_5b9f6f:
            int32_t eax_18
            int32_t edx_8
            edx_8:eax_18 = muls.dp.d(0x2aaaaaab, esi_6[2].d - *(esi_6 + 0xc))
            int32_t edx_9 = edx_8 s>> 1
            int32_t ecx_18 = (edx_9 u>> 0x1f) + edx_9
            
            if ((ebp_2[4].d - ebp_2[3].d) s>> 2 u>= ecx_18)
                goto label_5b9f9b
            
            if (ecx_18 u<= 0x3fffffff)
                sub_404670(&ebp_2[3], ecx_18)
            label_5b9f9b:
                int32_t edi_2 = esi_6[2].d
                void* esi_7 = *(esi_6 + 0xc)
                
                while (esi_7 != edi_2)
                    int32_t ecx_24 = *(esi_7 + 8)
                    int32_t eax_22 = ebp_2[2].d
                    arg3 = ecx_24
                    
                    if (&arg3 u>= eax_22)
                    label_5ba005:
                        
                        if (eax_22 == *(ebp_2 + 0x14))
                            sub_404610(ebp_2 + 0xc, 1)
                        
                        int32_t* eax_25 = ebp_2[2].d
                        
                        if (eax_25 != 0)
                            *eax_25 = ecx_24
                    else
                        int32_t edx_10 = *(ebp_2 + 0xc)
                        eax_22 = ebp_2[2].d
                        
                        if (edx_10 u> &arg3)
                            goto label_5ba005
                        
                        if (eax_22 == *(ebp_2 + 0x14))
                            sub_404610(ebp_2 + 0xc, 1)
                        
                        int32_t* edx_11 = ebp_2[2].d
                        
                        if (edx_11 != 0)
                            *edx_11 = *(*(ebp_2 + 0xc) + ((&arg3 - edx_10) s>> 2 << 2))
                    
                    ebp_2[2].d += 4
                    int32_t xmm0_2 = *(esi_7 + 4)
                    int32_t eax_26 = *(ebp_2 + 0x1c)
                    arg3 = xmm0_2
                    int32_t edx_12
                    
                    if (&arg3 u< eax_26)
                        edx_12 = ebp_2[3].d
                    
                    void* eax_30
                    
                    if (&arg3 u>= eax_26 || edx_12 u> &arg3)
                        if (eax_26 == ebp_2[4].d)
                            sub_404610(&ebp_2[3], 1)
                        
                        int32_t* eax_29 = *(ebp_2 + 0x1c)
                        
                        if (eax_29 != 0)
                            *eax_29 = xmm0_2
                        
                        eax_30 = &eax_29[1]
                    else
                        if (eax_26 == ebp_2[4].d)
                            sub_404610(&ebp_2[3], 1)
                        
                        int32_t* edx_13 = *(ebp_2 + 0x1c)
                        
                        if (edx_13 != 0)
                            *edx_13 = *(ebp_2[3].d + ((&arg3 - edx_12) s>> 2 << 2))
                        
                        eax_30 = &edx_13[1]
                    
                    esi_7 += 0xc
                    *(ebp_2 + 0x1c) = eax_30
                
                void* edi_4 = arg2 + 1
                eax_11 = var_18_1 + 0x24
                ecx_7 = var_14_1 + 0x18
                arg2 = edi_4
                var_18_1 = eax_11
                var_14_1 = ecx_7
                
                if (edi_4 s>= ebx_2)
                    break
                
                edi_1 = var_8
                ebp = var_4
                continue
        
        sub_6d0927("vector<T> too long")
        noreturn

eax_11.b = 1
return eax_11
