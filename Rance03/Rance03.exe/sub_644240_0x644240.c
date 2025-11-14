// 函数: sub_644240
// 地址: 0x644240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = 0
int32_t eax = 0
int32_t edi = arg5

if (edi s> 0)
    do
        if (*(arg4 + (eax << 2)) != 0)
            ecx += 1
        
        eax += 1
    while (eax s< edi)
    
    if (ecx != 0)
        int32_t* edx_3 = *arg2
        int32_t eax_1 = edx_3[3]
        int32_t ecx_1 = edx_3[2]
        int32_t temp0 = divs.dp.d(sx.q(edx_3[1] - *edx_3), ecx_1)
        int32_t ebx = *(arg1 + 0x48)
        
        if (ebx + 8 s> *(arg1 + 0x4c))
            if (*(arg1 + 0x44) != 0)
                int32_t* eax_6 = _malloc(8)
                int32_t ecx_3 = *(arg1 + 0x54)
                *(arg1 + 0x50) += ebx
                eax_6[1] = ecx_3
                *eax_6 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_6
            
            *(arg1 + 0x4c) = 8
            *(arg1 + 0x44) = _malloc(8)
            *(arg1 + 0x48) = 0
        
        int32_t eax_8 = *(arg1 + 0x48)
        void* ecx_5 = *(arg1 + 0x44)
        uint32_t ebx_4 = ((temp0 << 2) + 7) & 0xfffffff8
        char** result_1 = ecx_5 + eax_8
        *(arg1 + 0x48) = eax_8 + 8
        char** result = result_1
        
        if (ebx_4 + eax_8 + 8 s> *(arg1 + 0x4c))
            if (ecx_5 != 0)
                int32_t* eax_10 = _malloc(8)
                int32_t ecx_6 = *(arg1 + 0x54)
                *(arg1 + 0x50) += eax_8 + 8
                eax_10[1] = ecx_6
                *eax_10 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_10
            
            *(arg1 + 0x4c) = ebx_4
            result_1 = result
            *(arg1 + 0x44) = _malloc(ebx_4)
            *(arg1 + 0x48) = 0
        
        int32_t eax_12 = *(arg1 + 0x48)
        char* ecx_9 = *(arg1 + 0x44) + eax_12
        *(arg1 + 0x48) = eax_12 + ebx_4
        *result_1 = ecx_9
        _memset(ecx_9, 0, temp0 << 2)
        int32_t var_10 = 0
        int32_t eax_18 = divs.dp.d(sx.q(*edx_3), edi)
        arg5 = eax_18
        
        if (temp0 s> 0)
            int32_t esi_2 = eax_1 - 1
            int32_t var_4_1 = esi_2
            bool cond:0_1
            
            do
                int32_t ecx_10 = 0
                int32_t ebp_1 = 0
                int32_t var_1c_1 = 0
                
                if (ecx_1 s> 0)
                    int32_t edx_9 = *arg3
                    int32_t var_8_1 = edx_9
                    int32_t ebx_6 = 0
                    
                    do
                        int32_t esi_3 = 1
                        int32_t eax_20
                        int32_t edx_10
                        edx_10:eax_20 = sx.q(*(edx_9 + (eax_18 << 2)))
                        int32_t eax_22 = (eax_20 ^ edx_10) - edx_10
                        
                        if (eax_22 s> ebp_1)
                            ebp_1 = eax_22
                        
                        if (edi s> 1)
                            do
                                int32_t eax_25
                                int32_t edx_11
                                edx_11:eax_25 = sx.q(*(arg3[esi_3] + (arg5 << 2)))
                                int32_t eax_27 = (eax_25 ^ edx_11) - edx_11
                                
                                if (eax_27 s> ecx_10)
                                    ecx_10 = eax_27
                                
                                esi_3 += 1
                            while (esi_3 s< edi)
                            
                            ebx_6 = var_1c_1
                        
                        ebx_6 += edi
                        edx_9 = var_8_1
                        eax_18 = arg5 + 1
                        arg5 = eax_18
                        var_1c_1 = ebx_6
                    while (ebx_6 s< ecx_1)
                    
                    esi_2 = var_4_1
                
                int32_t edx_12 = 0
                
                if (esi_2 s> 0)
                    void* eax_30 = &edx_3[0x286]
                    
                    while (ebp_1 s> *(eax_30 - 0x100) || ecx_10 s> *eax_30)
                        edx_12 += 1
                        eax_30 += 4
                        
                        if (edx_12 s>= esi_2)
                            break
                
                *(*result + (var_10 << 2)) = edx_12
                cond:0_1 = var_10 + 1 s< temp0
                var_10 += 1
                eax_18 = arg5
            while (cond:0_1)
        
        arg2[0xa] += 1
        return result

return 0
