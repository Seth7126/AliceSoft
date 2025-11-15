// 函数: sub_6be900
// 地址: 0x6be900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* edx = *arg2
int32_t ebx = edx[2]
int32_t esi = *arg2[4]
int32_t eax_5 = *(arg3 + 0x24) s>> 1

if (edx[1] s< eax_5)
    eax_5 = edx[1]

int32_t eax_6 = eax_5 - *edx

if (eax_6 s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(eax_6), ebx)
    int32_t ebx_1 = arg5
    __alloca_probe_16(ebx_1 << 2)
    int32_t edi_1 = 0
    int32_t __saved_edi
    int32_t* var_24_1 = &__saved_edi
    
    if (ebx_1 s> 0)
        void* edx_4 = arg3
        void* esi_3 = ((divs.dp.d(sx.q(temp0_1 - 1 + esi), esi) << 2) + 7) & 0xfffffff8
        
        do
            if (*(edx_4 + 0x48) + esi_3 s> *(edx_4 + 0x4c))
                if (*(edx_4 + 0x44) != 0)
                    int32_t var_50_1 = 8
                    int32_t* eax_16 = sub_705e22()
                    edx_4 = arg3
                    *(edx_4 + 0x50) += *(edx_4 + 0x48)
                    eax_16[1] = *(edx_4 + 0x54)
                    *eax_16 = *(edx_4 + 0x44)
                    *(edx_4 + 0x54) = eax_16
                
                void* var_50_2 = esi_3
                *(edx_4 + 0x4c) = esi_3
                edx_4 = arg3
                *(edx_4 + 0x44) = sub_705e22()
                *(edx_4 + 0x48) = 0
            
            void* eax_18 = *(edx_4 + 0x48)
            void* ecx_4 = *(edx_4 + 0x44) + eax_18
            *(edx_4 + 0x48) = eax_18 + esi_3
            var_24_1[edi_1] = ecx_4
            edi_1 += 1
        while (edi_1 s< ebx_1)
    
    int32_t* eax_21 = arg2
    int32_t i = 0
    int32_t i_1 = 0
    
    if (eax_21[2] s> 0)
        int32_t edi_2 = temp0_1
        
        do
            int32_t esi_4 = 0
            int32_t var_2c_1 = 0
            
            if (edi_2 s> 0)
                int32_t* edx_5 = nullptr
                int32_t* var_10_1 = nullptr
                
                do
                    if (i == 0)
                        int32_t edi_3 = 0
                        
                        if (ebx_1 s> 0)
                            while (true)
                                void* esi_5 = eax_21[4]
                                
                                if (*(esi_5 + 8) s<= 0)
                                    goto label_6beb86
                                
                                int32_t eax_22 = sub_6b4270(esi_5, arg3 + 4)
                                
                                if (eax_22 s< 0)
                                    goto label_6beb86
                                
                                int32_t edx_8 = *(*(esi_5 + 0x18) + (eax_22 << 2))
                                
                                if (edx_8 == 0xffffffff)
                                    goto label_6beb86
                                
                                if (edx_8 s>= edx[4])
                                    goto label_6beb86
                                
                                edx_5 = var_10_1
                                *(edx_5 + var_24_1[edi_3]) = *(arg2[7] + (edx_8 << 2))
                                
                                if (*(edx_5 + var_24_1[edi_3]) == 0)
                                    goto label_6beb86
                                
                                edi_3 += 1
                                
                                if (edi_3 s>= ebx_1)
                                    esi_4 = var_2c_1
                                    break
                                
                                eax_21 = arg2
                        
                        edi_2 = temp0_1
                    
                    int32_t ebx_2 = 0
                    int32_t var_30_1 = 0
                    
                    if (esi s> 0)
                        int32_t ecx_8 = arg5
                        int32_t eax_29 = esi_4 * ebx
                        int32_t edx_9 = ebx
                        int32_t var_34_1 = eax_29
                        
                        while (esi_4 s< edi_2)
                            int32_t edi_4 = 0
                            
                            if (ecx_8 s> 0)
                                int32_t* esi_7 = var_24_1
                                int32_t* ecx_11 = arg4 - esi_7
                                
                                do
                                    int32_t edx_12 = *(*(var_10_1 + *esi_7) + (ebx_2 << 2))
                                    ebx_2 = var_30_1
                                    
                                    if ((edx[edx_12 + 6] & 1 << i_1.b) != 0)
                                        int32_t edx_14 = *(*(arg2[5] + (edx_12 << 2)) + (i_1 << 2))
                                        
                                        if (edx_14 != 0 && arg6(edx_14, 
                                                *(ecx_11 + esi_7) + ((*edx + eax_29) << 2), 
                                                arg3 + 4, ebx) == 0xffffffff)
                                            goto label_6beb86
                                    
                                    eax_29 = var_34_1
                                    edi_4 += 1
                                    esi_7 = &esi_7[1]
                                while (edi_4 s< arg5)
                                
                                ecx_8 = arg5
                                esi_4 = var_2c_1
                                edx_9 = ebx
                            
                            edi_2 = temp0_1
                            ebx_2 += 1
                            esi_4 += 1
                            var_30_1 = ebx_2
                            eax_29 += edx_9
                            var_2c_1 = esi_4
                            var_34_1 = eax_29
                            
                            if (ebx_2 s>= esi)
                                break
                        
                        edx_5 = var_10_1
                    
                    ebx_1 = arg5
                    edx_5 = &edx_5[1]
                    eax_21 = arg2
                    i = i_1
                    var_10_1 = edx_5
                while (esi_4 s< edi_2)
            
            i += 1
            i_1 = i
        while (i s< eax_21[2])

label_6beb86:
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return 0
