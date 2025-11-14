// 函数: sub_649a00
// 地址: 0x649a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t* var_2c = arg2

if (arg3[0x16] s>= 2)
    int32_t var_10_1
    int32_t ecx_2
    int32_t edi_4
    
    while (true)
        if (arg3[0x16] == 4)
            int32_t eax_1 = arg3[0x7e]
            void* edi_1 = arg3[0x79]
            
            if (eax_1 s> 0xffffffff && eax_1 s< arg3[0x7d])
                int32_t i = 0
                
                if (*(edi_1 + 4) s> 0)
                    do
                        *(arg3[0x7b] + (i << 2)) = *(arg3[0x7a] + (i << 2)) + (arg3[0x7e] << 2)
                        i += 1
                    while (i s< *(edi_1 + 4))
                
                int32_t edi_3 = arg3[0x7d]
                ecx_2 = arg3[0x7b]
                var_10_1 = ecx_2
                edi_4 = edi_3 - arg3[0x7e]
                
                if (edi_3 != arg3[0x7e])
                    break
        
        uint32_t eax_5 = sub_648260(arg3)
        
        if (eax_5 == 0xfffffffe)
            return 0
        
        if (eax_5 s<= 0)
            return eax_5
    
    if (edi_4 s<= 0)
        return edi_4
    
    void* eax_8
    
    if (arg3[1] == 0 || arg3[0x16] s< 3)
        eax_8 = arg3[0x12]
    else
        eax_8 = (arg3[0x18] << 5) + arg3[0x12]
    
    int32_t eax_9 = *(eax_8 + 4)
    int32_t ebx_1 = eax_9 * 2
    int32_t temp0_1 = divs.dp.d(0x1000, ebx_1)
    
    if (edi_4 s> temp0_1)
        edi_4 = temp0_1
    
    if (edi_4 s> 0)
        int32_t eax_12 = 0
        int32_t var_28 = 0
        
        if (eax_9 s> 0)
            do
                int32_t ecx_4 = *(ecx_2 + (eax_12 << 2))
                int16_t* edx_2 = var_2c
                int32_t ecx_5 = 0
                
                if (edi_4 s> 0)
                    do
                        int32_t var_20_1
                        var_20_1.q = _mm_cvtps_pd(*(ecx_4 + (ecx_5 << 2)) * 32768f)
                        int32_t eax_13 = int.d(fconvert.t(var_20_1.q))
                        
                        if (eax_13 s> 0x7fff)
                            eax_13 = 0x7fff
                        else if (eax_13 s< 0xffff8000)
                            eax_13 = 0xffff8000
                        
                        *edx_2 = eax_13.w
                        ecx_5 += 1
                        edx_2 = &edx_2[eax_9]
                    while (ecx_5 s< edi_4)
                    
                    eax_12 = var_28
                
                var_2c = &var_2c[1]
                eax_12 += 1
                ecx_2 = var_10_1
                var_28 = eax_12
            while (eax_12 s< eax_9)
        
        int32_t eax_15 = arg3[0x7e] + edi_4
        
        if (eax_15 s<= arg3[0x7d])
            arg3[0x7e] = eax_15
        
        int32_t eax_19
        int32_t edx_3
        edx_3:eax_19 = sx.q(edi_4 << (*(*(arg3[0x12] + 0x1c) + 0xe48)).b)
        int32_t temp4 = arg3[0x14]
        arg3[0x14] += eax_19
        arg3[0x15] = adc.d(arg3[0x15], edx_3, temp4 + eax_19 u< temp4)
        
        if (arg4 != 0)
            *arg4 = arg3[0x18]
        
        return ebx_1 * edi_4

return 0xffffff7d
