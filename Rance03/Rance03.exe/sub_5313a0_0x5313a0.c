// 函数: sub_5313a0
// 地址: 0x5313a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg2
void* ebx = arg1
void* i = *result
void* var_1c = ebx

if (i != result[1])
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    
    do
        int32_t* eax = i + 4
        float xmm4_1 = -3.40282347e+38f
        void* i_1 = i
        float xmm6_1 = 3.40282347e+38f
        float xmm7_1 = 3.40282347e+38f
        float xmm5_1 = -3.40282347e+38f
        int32_t j_1 = 3
        int32_t j
        
        do
            float xmm0_1 = *eax
            
            if (not(xmm6_1 <= xmm0_1))
                xmm6_1 = xmm0_1
            
            if (not(xmm0_1 <= xmm4_1))
                xmm4_1 = xmm0_1
            
            float xmm0_2 = eax[2]
            
            if (not(xmm7_1 <= xmm0_2))
                xmm7_1 = xmm0_2
            
            if (not(xmm0_2 <= xmm5_1))
                xmm5_1 = xmm0_2
            
            eax = &eax[3]
            j = j_1
            j_1 -= 1
        while (j != 1)
        float xmm3_1 = *(ebx + 0x1c)
        void* eax_1 = *(ebx + 0x2c)
        float xmm3_2 = *(ebx + 0x24)
        int32_t var_18
        int32_t* ecx = &var_18
        float xmm1_1 = 1f / (*(ebx + 0x20) - xmm3_1)
        int32_t* var_20 = eax_1 - 1
        float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_1))
        float xmm0_6 = *(ebx + 0x28) - xmm3_2
        int32_t eax_2 = int.d((xmm6_1 - xmm3_1) * xmm2_2 * xmm1_1)
        var_18 = eax_2
        int32_t* eax_3 = &var_20
        
        if (eax_2 s<= 0)
            ecx = &var_14
        
        float xmm1_2 = 1f / xmm0_6
        
        if (eax_1 - 1 s>= *ecx)
            eax_3 = ecx
        
        int32_t* ecx_1 = &var_18
        int32_t var_28_1 = *eax_3
        var_20 = eax_1 - 1
        int32_t eax_5 = int.d((xmm4_1 - xmm3_1) * xmm2_2 * xmm1_1)
        var_18 = eax_5
        int32_t* eax_6 = &var_20
        
        if (eax_5 s<= 0)
            ecx_1 = &var_10
        
        if (eax_1 - 1 s>= *ecx_1)
            eax_6 = ecx_1
        
        int32_t* ecx_2 = &var_18
        int32_t* ebp_1 = *eax_6
        int32_t eax_7 = *(ebx + 0x30)
        var_20 = ebp_1
        float xmm2_4 = _mm_cvtepi32_ps(zx.o(eax_7))
        int32_t var_30 = eax_7 - 1
        int32_t eax_8 = int.d((xmm7_1 - xmm3_2) * xmm2_4 * xmm1_2)
        var_18 = eax_8
        int32_t* eax_9 = &var_30
        
        if (eax_8 s<= 0)
            ecx_2 = &var_c
        
        if (eax_7 - 1 s>= *ecx_2)
            eax_9 = ecx_2
        
        int32_t* ecx_3 = &var_18
        int32_t edx_2 = *eax_9
        int32_t var_4 = var_30
        int32_t eax_11 = int.d((xmm5_1 - xmm3_2) * xmm2_4 * xmm1_2)
        int32_t var_24_1 = edx_2
        var_18 = eax_11
        int32_t* eax_12 = &var_4
        
        if (eax_11 s<= 0)
            ecx_3 = &var_8
        
        if (var_30 s>= *ecx_3)
            eax_12 = ecx_3
        
        int32_t ecx_4 = *eax_12
        int32_t eax_13 = var_28_1
        var_18 = ecx_4
        ebx = var_1c
        
        if (eax_13 s> 0)
            eax_13 -= 1
            var_28_1 = eax_13
        
        if (ebp_1 s< eax_1 - 1)
            ebp_1 += 1
            var_20 = ebp_1
        
        if (edx_2 s> 0)
            edx_2 -= 1
            var_24_1 = edx_2
        
        if (ecx_4 s< var_30)
            ecx_4 += 1
            var_18 = ecx_4
        
        if (edx_2 s<= ecx_4)
            do
                int32_t ecx_5 = eax_13
                var_30 = ecx_5
                
                if (eax_13 s<= ebp_1)
                    do
                        int32_t* edi_1 = *(ebx + 0x10) + (*(ebx + 0x2c) * edx_2 + ecx_5) * 0xc
                        int32_t ecx_7 = edi_1[1]
                        int32_t ebp_2
                        
                        if (&i_1 u< ecx_7)
                            ebp_2 = *edi_1
                        
                        if (&i_1 u>= ecx_7 || ebp_2 u> &i_1)
                            int32_t edx_7 = edi_1[2]
                            
                            if (ecx_7 == edx_7 && (edx_7 - ecx_7) s>> 2 u< 1)
                                int32_t ebx_4 = *edi_1
                                int32_t ecx_16 = (ecx_7 - ebx_4) s>> 2
                                
                                if (0x3fffffff - ecx_16 u< 1)
                                    sub_69a551("vector<T> too long")
                                    noreturn
                                
                                int32_t edx_9 = (edx_7 - ebx_4) s>> 2
                                uint32_t ecx_18 = edx_9 u>> 1
                                int32_t edx_10
                                
                                if (0x3fffffff - ecx_18 u>= edx_9)
                                    edx_10 = edx_9 + ecx_18
                                else
                                    edx_10 = 0
                                
                                if (edx_10 u< ecx_16 + 1)
                                    edx_10 = ecx_16 + 1
                                
                                sub_412f90(edi_1, edx_10)
                            
                            void** eax_30 = edi_1[1]
                            
                            if (eax_30 != 0)
                                *eax_30 = i
                        else
                            int32_t edx_3 = edi_1[2]
                            
                            if (ecx_7 == edx_3 && (edx_3 - ecx_7) s>> 2 u< 1)
                                int32_t ecx_9 = (ecx_7 - ebp_2) s>> 2
                                
                                if (0x3fffffff - ecx_9 u< 1)
                                    sub_69a551("vector<T> too long")
                                    noreturn
                                
                                int32_t edx_5 = (edx_3 - ebp_2) s>> 2
                                var_4 = ecx_9 + 1
                                uint32_t ecx_12 = edx_5 u>> 1
                                int32_t edx_6
                                
                                if (0x3fffffff - ecx_12 u>= edx_5)
                                    edx_6 = edx_5 + ecx_12
                                else
                                    edx_6 = 0
                                
                                if (edx_6 u< var_4)
                                    edx_6 = var_4
                                
                                sub_412f90(edi_1, edx_6)
                            
                            int32_t* ecx_14 = edi_1[1]
                            
                            if (ecx_14 != 0)
                                *ecx_14 = *(*edi_1 + ((&i_1 - ebp_2) s>> 2 << 2))
                        
                        int32_t ecx_20 = var_30
                        edi_1[1] += 4
                        ecx_5 = ecx_20 + 1
                        ebp_1 = var_20
                        edx_2 = var_24_1
                        ebx = var_1c
                        var_30 = ecx_5
                    while (ecx_5 s<= ebp_1)
                    
                    eax_13 = var_28_1
                
                edx_2 += 1
                var_24_1 = edx_2
            while (edx_2 s<= var_18)
        
        result = arg2
        i += 0x84
    while (i != result[1])

return result
