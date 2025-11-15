// 函数: sub_6c43c0
// 地址: 0x6c43c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* var_34 = arg2

if (arg3[0x16] s>= 2)
    int32_t var_24
    int32_t ecx_3
    
    while (true)
        if (arg3[0x16] == 4)
            int32_t eax_1 = arg3[0x7e]
            void* edi_1 = arg3[0x79]
            
            if (eax_1 s<= 0xffffffff || eax_1 s>= arg3[0x7d])
                ecx_3 = 0
            else
                int32_t i = 0
                
                if (*(edi_1 + 4) s> 0)
                    do
                        *(arg3[0x7b] + (i << 2)) = *(arg3[0x7a] + (i << 2)) + (arg3[0x7e] << 2)
                        i += 1
                    while (i s< *(edi_1 + 4))
                
                ecx_3 = arg3[0x7d] - arg3[0x7e]
                var_24 = arg3[0x7b]
            
            if (ecx_3 != 0)
                break
        
        int128_t* eax_6 = sub_6c2c70(arg3)
        
        if (eax_6 == 0xfffffffe)
            return 0
        
        if (eax_6 s<= 0)
            return eax_6
    
    if (ecx_3 s<= 0)
        return ecx_3
    
    void* eax_9
    
    if (arg3[1] == 0 || arg3[0x16] s< 3)
        eax_9 = arg3[0x12]
    else
        eax_9 = (arg3[0x18] << 5) + arg3[0x12]
    
    int32_t eax_10 = *(eax_9 + 4)
    int32_t ebx_1 = eax_10 * 2
    int32_t edi_2 = divs.dp.d(0x1000, ebx_1)
    
    if (ecx_3 s<= edi_2)
        edi_2 = ecx_3
    
    if (edi_2 s> 0)
        int32_t ebx_2 = 0
        int32_t var_30 = 0
        
        if (eax_10 s> 0)
            do
                int32_t ecx_5 = 0
                int32_t eax_14 = *(var_24 + (ebx_2 << 2))
                int16_t* eax_15 = var_34
                int16_t* edx_2 = eax_15
                
                if (edi_2 s> 0)
                    do
                        int32_t var_20_1
                        var_20_1.q = _mm_cvtps_pd(*(eax_14 + (ecx_5 << 2)) * 32768f)
                        int32_t eax_16 = int.d(fconvert.t(var_20_1.q))
                        
                        if (eax_16 s> 0x7fff)
                            eax_16 = 0x7fff
                        else if (eax_16 s< 0xffff8000)
                            eax_16 = 0xffff8000
                        
                        *edx_2 = eax_16.w
                        ecx_5 += 1
                        edx_2 = &edx_2[eax_10]
                    while (ecx_5 s< edi_2)
                    
                    ebx_2 = var_30
                    eax_15 = var_34
                
                ebx_2 += 1
                var_30 = ebx_2
                var_34 = &eax_15[1]
            while (ebx_2 s< eax_10)
        
        int32_t eax_19 = arg3[0x7e] + edi_2
        
        if (eax_19 s<= arg3[0x7d])
            arg3[0x7e] = eax_19
        
        int32_t eax_23
        int32_t edx_3
        edx_3:eax_23 = sx.q(edi_2 << (*(*(arg3[0x12] + 0x1c) + 0xe48)).b)
        int32_t temp3 = arg3[0x14]
        arg3[0x14] += eax_23
        arg3[0x15] = adc.d(arg3[0x15], edx_3, temp3 + eax_23 u< temp3)
        
        if (arg4 != 0)
            *arg4 = arg3[0x18]
        
        return edi_2 * ebx_1

return 0xffffff7d
