// 函数: sub_5a6230
// 地址: 0x5a6230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ebp_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (ebp_1 != 0)
                void* ecx_1 = *(ebp_1 + 0x1c0)
                
                if (ecx_1 != 0)
                    return sub_57e9d0(ecx_1, arg4, arg5, arg6, arg7, arg8, arg9)
                
                void* ebp_2 = *(ebp_1 + 0x1d8)
                void* var_4_1 = ebp_2
                
                if (ebp_2 != 0)
                    int32_t eax_5
                    int32_t edx
                    edx:eax_5 = muls.dp.d(0x1a6d01a7, *(ebp_2 + 0x18) - *(ebp_2 + 0x14))
                    int32_t edx_1 = edx s>> 6
                    int32_t ebx_2 = (edx_1 u>> 0x1f) + edx_1
                    
                    if (ebx_2 s<= 0)
                        eax_5.b = 0
                        return eax_5
                    
                    int32_t edi = 0
                    int32_t var_10 = 0
                    *arg6 = 0x7f7fffff
                    *arg5 = 0x7f7fffff
                    *arg4 = 0x7f7fffff
                    *arg9 = 0xff7fffff
                    *arg8 = 0xff7fffff
                    *arg7 = 0xff7fffff
                    int32_t eax_11
                    
                    if (ebx_2 s> 0)
                        eax_11 = ebx_2
                        int32_t var_14_1 = 0
                        int32_t ebx_3 = 0
                        
                        do
                            if (edi s>= 0)
                                int32_t eax_12
                                int32_t edx_2
                                edx_2:eax_12 =
                                    muls.dp.d(0x1a6d01a7, *(ebp_2 + 0x18) - *(ebp_2 + 0x14))
                                int32_t edx_3 = edx_2 s>> 6
                                
                                if (edi s< (edx_3 u>> 0x1f) + edx_3)
                                    void* esi_2 = *(ebp_2 + 0x14)
                                    void* esi_3 = esi_2 + ebx_3
                                    
                                    if (esi_2 != neg.d(ebx_3))
                                        float xmm0_1 = *(esi_3 + 0x28)
                                        float var_c
                                        int32_t* eax_16 = &var_c
                                        float var_8 = 1f
                                        var_c = xmm0_1
                                        
                                        if (xmm0_1 <= 1f)
                                            eax_16 = &var_8
                                        
                                        float xmm2_1 = *eax_16
                                        int32_t eax_17
                                        int32_t edx_4
                                        edx_4:eax_17 = muls.dp.d(0x38e38e39, 
                                            *(esi_3 + 0x1a0) - *(esi_3 + 0x19c))
                                        int32_t edx_5 = edx_4 s>> 3
                                        int32_t i_1 = (edx_5 u>> 0x1f) + edx_5
                                        
                                        if (i_1 s> 0)
                                            int32_t* edi_1 = arg5
                                            int32_t edx_6 = 0
                                            int32_t i
                                            
                                            do
                                                int32_t ecx_8 = *(esi_3 + 0x19c)
                                                float xmm1_2 = *(ecx_8 + edx_6 + 0xc) - xmm2_1
                                                int32_t* eax_19 = &var_8
                                                bool cond:1_1 = *arg4 <= xmm1_2
                                                var_8 = xmm1_2
                                                
                                                if (cond:1_1)
                                                    eax_19 = arg4
                                                
                                                *arg4 = *eax_19
                                                int32_t* eax_21 = &var_8
                                                float xmm1_4 = *(ecx_8 + edx_6 + 0x10) - xmm2_1
                                                bool cond:2_1 = *edi_1 <= xmm1_4
                                                var_8 = xmm1_4
                                                
                                                if (cond:2_1)
                                                    eax_21 = edi_1
                                                
                                                *edi_1 = *eax_21
                                                int32_t* eax_23 = &var_8
                                                float xmm1_6 = *(ecx_8 + edx_6 + 0x14) - xmm2_1
                                                bool cond:3_1 = *arg6 <= xmm1_6
                                                var_8 = xmm1_6
                                                
                                                if (cond:3_1)
                                                    eax_23 = arg6
                                                
                                                *arg6 = *eax_23
                                                int32_t eax_25 = &var_8
                                                float xmm0_6 = *(ecx_8 + edx_6 + 0xc) + xmm2_1
                                                bool cond:4_1 = xmm0_6 f<= *arg7
                                                var_8 = xmm0_6
                                                
                                                if (cond:4_1)
                                                    eax_25 = arg7
                                                
                                                *arg7 = *eax_25
                                                float* eax_27 = &var_8
                                                float xmm0_8 = xmm2_1 f+ *(ecx_8 + edx_6 + 0x10)
                                                bool cond:5_1 = xmm0_8 <= *arg8
                                                var_8 = xmm0_8
                                                
                                                if (cond:5_1)
                                                    eax_27 = arg8
                                                
                                                *arg8 = *eax_27
                                                int32_t* eax_29 = &var_8
                                                float xmm0_10 = xmm2_1 f+ *(ecx_8 + edx_6 + 0x14)
                                                edi_1 = arg5
                                                bool cond:6_1 = xmm0_10 f<= *arg9
                                                var_8 = xmm0_10
                                                
                                                if (cond:6_1)
                                                    eax_29 = arg9
                                                
                                                edx_6 += 0x24
                                                *arg9 = *eax_29
                                                i = i_1
                                                i_1 -= 1
                                            while (i != 1)
                                            edi = var_10
                                            ebp_2 = var_4_1
                                        
                                        ebx_3 = var_14_1
                                
                                eax_11 = ebx_2
                            
                            edi += 1
                            ebx_3 += 0x26c
                            var_10 = edi
                            var_14_1 = ebx_3
                        while (edi s< eax_11)
                    
                    eax_11.b = 1
                    return eax_11

arg1.b = 0
return arg1
