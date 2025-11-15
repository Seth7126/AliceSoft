// 函数: sub_5e6fb0
// 地址: 0x5e6fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_5665c0(data_7fd4cc, arg3, arg2)

if (eax == 0)
    eax.b = 0
    return eax

__Smtx_lock_shared(eax + 0x200)
int32_t esi = *(eax + 0x1fc)
__Smtx_unlock_shared(eax + 0x200)

if (esi == 0)
    void* ebx_1 = *(eax + 0x220)
    void* var_1c_1 = ebx_1
    
    if (ebx_1 != 0)
        int32_t eax_8
        int32_t edx_1
        edx_1:eax_8 = muls.dp.d(0x4da637d, *(ebx_1 + 8) - *(ebx_1 + 4))
        int32_t edx_2 = edx_1 s>> 4
        int32_t ebp_2 = (edx_2 u>> 0x1f) + edx_2
        
        if (ebp_2 s<= 0)
            eax_8.b = 0
            return eax_8
        
        int32_t edi_1 = 0
        int32_t var_24 = 0
        *arg6 = 0x7f7fffff
        *arg5 = 0x7f7fffff
        *arg4 = 0x7f7fffff
        *arg9 = 0xff7fffff
        *arg8 = 0xff7fffff
        *arg7 = 0xff7fffff
        int32_t* eax_14
        
        if (ebp_2 s> 0)
            int32_t ebp_3 = 0
            eax_14 = ebp_2
            int32_t var_20_1 = 0
            
            do
                if (edi_1 s>= 0)
                    int32_t eax_15
                    int32_t edx_3
                    edx_3:eax_15 = muls.dp.d(0x4da637d, *(ebx_1 + 8) - *(ebx_1 + 4))
                    int32_t edx_4 = edx_3 s>> 4
                    
                    if (edi_1 s< (edx_4 u>> 0x1f) + edx_4)
                        void* esi_2 = *(ebx_1 + 4)
                        void* esi_3 = esi_2 + ebp_3
                        
                        if (esi_2 != neg.d(ebp_3))
                            int32_t ecx_9 = *(esi_3 + 0x29c) - *(esi_3 + 0x298)
                            float xmm2_2 = _mm_max_ss(*(esi_3 + 0x28), 0x3f800000)
                            int32_t i_1 = ecx_9 s/ 0x1c
                            
                            if (i_1 s> 0)
                                void* eax_21 = *(esi_3 + 0x298) + 0x10
                                int32_t i
                                
                                do
                                    float xmm0_7 = *arg4
                                    float xmm1_2 = *(eax_21 - 8) - xmm2_2
                                    float xmm0_8
                                    
                                    xmm0_8 = xmm0_7 > xmm1_2 ? xmm1_2 : xmm0_7
                                    
                                    *arg4 = xmm0_8
                                    float xmm0_9 = *arg5
                                    float xmm1_4 = *(eax_21 - 4) - xmm2_2
                                    float xmm0_10
                                    
                                    xmm0_10 = xmm0_9 > xmm1_4 ? xmm1_4 : xmm0_9
                                    
                                    *arg5 = xmm0_10
                                    float xmm0_11 = *arg6
                                    float xmm1_6 = *eax_21 - xmm2_2
                                    float xmm0_12
                                    
                                    xmm0_12 = xmm0_11 > xmm1_6 ? xmm1_6 : xmm0_11
                                    
                                    *arg6 = xmm0_12
                                    float xmm0_13 = *arg7
                                    float xmm1_8 = *(eax_21 - 8) + xmm2_2
                                    float xmm0_14
                                    
                                    xmm0_14 = xmm1_8 > xmm0_13 ? xmm1_8 : xmm0_13
                                    
                                    *arg7 = xmm0_14
                                    float xmm0_15 = *arg8
                                    float xmm1_10 = *(eax_21 - 4) + xmm2_2
                                    float xmm0_16
                                    
                                    xmm0_16 = xmm1_10 > xmm0_15 ? xmm1_10 : xmm0_15
                                    
                                    *arg8 = xmm0_16
                                    float xmm0_17 = *arg9
                                    float xmm1_12 = *eax_21 + xmm2_2
                                    float xmm0_18
                                    
                                    xmm0_18 = xmm1_12 > xmm0_17 ? xmm1_12 : xmm0_17
                                    
                                    eax_21 += 0x1c
                                    *arg9 = xmm0_18
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                                edi_1 = var_24
                                ebx_1 = var_1c_1
                                ebp_3 = var_20_1
                    
                    eax_14 = ebp_2
                
                edi_1 += 1
                ebp_3 += 0x34c
                var_24 = edi_1
                var_20_1 = ebp_3
            while (edi_1 s< eax_14)
        
        eax_14.b = 1
        return eax_14
else
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x18)
    __Smtx_lock_shared(eax + 0x200)
    void* esi_1 = *(eax + 0x1fc)
    __Smtx_unlock_shared(eax + 0x200)
    int32_t var_c
    
    if (sub_5bc4b0(esi_1, &var_18, &var_c) != 0)
        sub_6ca7c0(&var_18, eax + 0x1c)
        sub_6ca7c0(&var_c, eax + 0x1c)
        *arg4 = var_18
        int32_t var_14
        *arg5 = var_14
        int32_t var_10
        *arg6 = var_10
        *arg7 = var_c
        int32_t var_8
        *arg8 = var_8
        int32_t var_4
        *arg9 = var_4
        int32_t* eax_7
        eax_7.b = 1
        return eax_7

return 0
