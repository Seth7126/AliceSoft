// 函数: sub_6beed0
// 地址: 0x6beed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *arg2
int32_t ebp = *arg2[4]
int32_t ebx = edx[2]
int32_t eax_4 = (*(arg1 + 0x24) * arg5) s>> 1

if (edx[1] s< eax_4)
    eax_4 = edx[1]

int32_t eax_5 = eax_4 - *edx

if (eax_5 s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(eax_5), ebx)
    int32_t* eax_13 = sub_6b3050(arg1, divs.dp.d(sx.q(temp0_1 - 1 + ebp), ebp) << 2)
    int32_t* edx_4 = eax_13
    int32_t ecx_2 = 0
    int32_t* var_4_1 = edx_4
    
    if (arg5 s> 0)
        while (*(arg4 + (ecx_2 << 2)) == 0)
            ecx_2 += 1
            
            if (ecx_2 s>= arg5)
                break
        
        edx_4 = eax_13
    
    if (ecx_2 != arg5)
        int32_t* ebx_1 = arg2
        int32_t i = 0
        
        if (ebx_1[2] s> 0)
            int32_t ecx_3 = temp0_1
            
            do
                int32_t edi_1 = 0
                
                if (ecx_3 s> 0)
                    int32_t* eax_14 = edx_4
                    int32_t* var_18_1 = edx_4
                    
                    do
                        if (i == 0)
                            void* esi_1 = ebx_1[4]
                            
                            if (*(esi_1 + 8) s<= i)
                                return 0
                            
                            int32_t eax_15 = sub_6b4270(esi_1, arg1 + 4)
                            
                            if (eax_15 s< 0)
                                return 0
                            
                            int32_t ecx_6 = *(*(esi_1 + 0x18) + (eax_15 << 2))
                            
                            if (ecx_6 == 0xffffffff)
                                return 0
                            
                            if (ecx_6 s>= edx[4])
                                return 0
                            
                            int32_t eax_18 = *(ebx_1[7] + (ecx_6 << 2))
                            *var_18_1 = eax_18
                            
                            if (eax_18 == 0)
                                return 0
                            
                            eax_14 = var_18_1
                            ecx_3 = temp0_1
                        
                        int32_t esi_2 = 0
                        
                        if (ebp s> 0)
                            int32_t ebx_3 = edi_1 * ebx
                            
                            while (edi_1 s< ecx_3)
                                int32_t edx_8 = *(*eax_14 + (esi_2 << 2))
                                
                                if ((edx[edx_8 + 6] & 1 << i.b) != 0)
                                    int32_t* ecx_10 = *(*(arg2[5] + (edx_8 << 2)) + (i << 2))
                                    
                                    if (ecx_10 != 0)
                                        int32_t eax_28 = *edx + ebx_3
                                        
                                        if (sub_6b48e0(eax_28, arg3, ecx_10, eax_28, arg5, 
                                                arg1 + 4, ebx) == 0xffffffff)
                                            return 0
                                
                                ebx_3 += ebx
                                esi_2 += 1
                                eax_14 = var_18_1
                                edi_1 += 1
                                ecx_3 = temp0_1
                                
                                if (esi_2 s>= ebp)
                                    break
                            
                            ebx_1 = arg2
                        
                        eax_14 = &eax_14[1]
                        var_18_1 = eax_14
                    while (edi_1 s< ecx_3)
                
                edx_4 = var_4_1
                i += 1
            while (i s< ebx_1[2])

return 0
