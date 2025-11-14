// 函数: sub_639600
// 地址: 0x639600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* edi = arg1

if (edi[2] s> 0)
    *edi
    int32_t ebx_1 = divs.dp.d(sx.q(arg4), *edi)
    int32_t var_14_1 = ebx_1
    __alloca_probe_16(ebx_1 << 2)
    __alloca_probe_16(ebx_1 << 2)
    int32_t var_24_1 = 0
    int32_t __saved_edi
    
    if (ebx_1 s> 0)
        int32_t* ebx_2 = arg3
        int32_t* esi_1 = 0
        int32_t* var_10_1 = &__saved_edi
        int32_t eax_33
        
        do
            int32_t i = edi[0xa]
            int32_t i_3 = i
            int32_t eax_7 = sub_638010(ebx_2, edi[9])
            int32_t edi_3
            int32_t eax_10
            
            if (eax_7 s< 0)
                edi_3 = 0
                eax_10 = arg1[2]
            label_639708:
                int32_t eax_20 = sub_638010(ebx_2, i)
                
                if (eax_20 s< 0)
                    while (i s> 1)
                        i -= 1
                        i_3 = i
                        eax_20 = sub_638010(ebx_2, i)
                        
                        if (eax_20 s>= 0)
                            goto label_63973b
                    
                    if (eax_20 s< 0)
                        *(esi_1 + var_10_1) = 0xffffffff
                        sub_69a5bc(eax_1 ^ &__saved_ebp)
                        return 0xffffffff
                
            label_63973b:
                int32_t ecx_10 = sub_639470(eax_20)
                int32_t i_1 = eax_10 - edi_3
                int32_t var_28_1 = ecx_10
                
                if (i_1 s> 1)
                    int32_t ebx_3 = eax_10
                    
                    do
                        int32_t edx_10 = i_1 s>> 1
                        int32_t ecx_12 = neg.d(sbb.d(ecx_10, ecx_10, 
                            ecx_10 u< *(arg1[5] + ((edx_10 + edi_3) << 2))))
                        ebx_3 -= neg.d(ecx_12) & edx_10
                        edi_3 += (ecx_12 - 1) & edx_10
                        ecx_10 = var_28_1
                        i_1 = ebx_3 - edi_3
                    while (i_1 s> 1)
                    
                    i = i_3
                    ebx_2 = arg3
                
                int32_t edx_12 = sx.d(*(arg1[7] + edi_3))
                
                if (edx_12 s> i)
                    sub_6380c0(ebx_2, i)
                    edi_3 = 0xffffffff
                else
                    sub_6380c0(ebx_2, edx_12)
            else
                int32_t ecx_3 = *(edi[8] + (eax_7 << 2))
                
                if (ecx_3 s< 0)
                    edi_3 = ecx_3 s>> 0xf & 0x7fff
                    eax_10 = arg1[2] - (ecx_3 & 0x7fff)
                    goto label_639708
                
                int32_t edx_4 = ebx_2[4]
                int32_t edi_4 = *ebx_2
                int32_t esi_3 = sx.d(*(edi[7] + ecx_3 - 1)) + ebx_2[1]
                
                if (edi_4 s<= edx_4 - ((esi_3 + 7) s>> 3))
                    int32_t eax_15
                    int32_t edx_5
                    edx_5:eax_15 = sx.q(esi_3)
                    ebx_2[1] = esi_3 & 7
                    int32_t eax_17 = (eax_15 + (edx_5 & 7)) s>> 3
                    ebx_2[3] += eax_17
                    *ebx_2 = eax_17 + edi_4
                    edi_3 = ecx_3 - 1
                else
                    ebx_2[3] = 0
                    edi_3 = ecx_3 - 1
                    *ebx_2 = edx_4
                    ebx_2[1] = 1
            *(esi_1 + var_10_1) = edi_3
            
            if (edi_3 == 0xffffffff)
                sub_69a5bc(eax_1 ^ &__saved_ebp)
                return 0xffffffff
            
            edi = arg1
            *var_10_1 = edi[4] + ((*arg1 * edi_3) << 2)
            eax_33 = var_24_1 + 1
            var_10_1 = &var_10_1[1]
            var_24_1 = eax_33
        while (eax_33 s< var_14_1)
        ebx_1 = var_14_1
    
    int32_t eax_34 = 0
    int32_t i_2 = 0
    int32_t var_10_2 = 0
    
    if (*edi s> 0)
        float* edx_16 = arg2
        float* var_c_3 = edx_16
        int32_t* edi_7 = edi
        
        do
            int32_t ecx_18 = 0
            
            if (ebx_1 s>= 4)
                int32_t __saved_ebx
                int32_t* edi_8 = &__saved_ebx
                ecx_18 = (((ebx_1 - 4) u>> 2) + 1) << 2
                int32_t j_1 = ((ebx_1 - 4) u>> 2) + 1
                int32_t j
                
                do
                    int32_t eax_36 = edi_8[-1]
                    *edx_16 = *(edi_8[-2] + (i_2 << 2)) + *edx_16
                    int32_t eax_37 = *edi_8
                    edx_16[1] = *(eax_36 + (i_2 << 2)) + edx_16[1]
                    int32_t eax_38 = edi_8[1]
                    edi_8 = &edi_8[4]
                    edx_16[2] = *(eax_37 + (i_2 << 2)) + edx_16[2]
                    edx_16[3] = *(eax_38 + (i_2 << 2)) + edx_16[3]
                    edx_16 = &edx_16[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                edi_7 = arg1
                ebx_1 = var_14_1
                eax_34 = var_10_2
                edx_16 = var_c_3
            
            if (ecx_18 s< ebx_1)
                float* edx_18 = &arg2[eax_34 + ecx_18]
                
                do
                    int32_t eax_40 = (&__saved_edi)[ecx_18]
                    ecx_18 += 1
                    *edx_18 = *(eax_40 + (i_2 << 2)) + *edx_18
                    edx_18 = &edx_18[1]
                while (ecx_18 s< ebx_1)
                
                edi_7 = arg1
                eax_34 = var_10_2
                edx_16 = var_c_3
            
            i_2 += 1
            eax_34 += ebx_1
            edx_16 = &edx_16[ebx_1]
            var_10_2 = eax_34
            var_c_3 = edx_16
        while (i_2 s< *edi_7)

sub_69a5bc(eax_1 ^ &__saved_ebp)
return 0
