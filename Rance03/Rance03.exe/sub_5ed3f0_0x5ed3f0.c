// 函数: sub_5ed3f0
// 地址: 0x5ed3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = data_75d514
int32_t* eax = sub_5ed1f0(ebx)

if (eax.b == 0)
    return eax

if (arg2 s> 0)
    int32_t __saved_esi_2
    eax, __saved_esi_2 = sub_5ed330(arg2)
    
    if (arg2 == eax && data_75d534 != 0)
        int32_t __saved_esi_1 = __saved_esi_2
        eax = sub_6203f0()
        
        if (eax != 0)
            int32_t var_14
            int32_t esi
            
            if (sub_5ed1f0(ebx) != 0)
                int32_t eax_3 = (*(**(ebx + 0x2c) + 0x18))()
                esi = eax_3
                var_14 = eax_3
            else
                esi = 0
                var_14 = 0
            
            int32_t* edi
            
            if (sub_5ed1f0(ebx).b != 0)
                edi = (*(**(ebx + 0x2c) + 0x1c))()
            else
                edi = nullptr
            
            if (esi s> 0 && edi s> 0)
                int32_t* esi_1 = sub_620c20()
                
                if (esi_1 != 0)
                    int32_t* eax_7 = (*(*esi_1 + 0xc))(var_14, edi, 0x20)
                    
                    if (eax_7 == 0)
                        (*(*esi_1 + 4))()
                    else
                        int32_t temp0_1 = divs.dp.d(sx.q(var_14), arg2)
                        int32_t* edi_1 = nullptr
                        int32_t i_1 = divs.dp.d(sx.q(edi), arg2)
                        int32_t* var_14_1 = nullptr
                        int32_t eax_15
                        
                        if (arg2 == 1)
                        label_5ed502:
                            (*(*esi_1 + 4))()
                            esi_1 = (**eax)(0x6eba00)
                            
                            if (esi_1 != 0)
                                if ((*(*esi_1 + 0x7c))(eax_7) != 0)
                                    (*(*esi_1 + 4))()
                                    
                                    if (arg2 == 1)
                                        edi_1 = eax_7
                                        var_14_1 = edi_1
                                    else
                                        int32_t esi_2 = **(ebx + 0xc)
                                        int32_t eax_30
                                        int32_t ecx_20
                                        eax_30, ecx_20 = (*(*eax_7 + 0x14))()
                                        int32_t var_28_2 = ecx_20
                                        int32_t eax_34
                                        int32_t ecx_23
                                        eax_34, ecx_23 = (*(*edi_1 + 0x14))(eax_7, 0, 0, 
                                            _mm_cvtepi32_ps(zx.o((*(*eax_7 + 0x10))(_mm_cvtepi32_ps(
                                                zx.o(eax_30))))))
                                        int32_t var_28_5 = ecx_23
                                        int32_t xmm0_8 = _mm_cvtepi32_ps(zx.o((*(*edi_1 + 0x10))(
                                            _mm_cvtepi32_ps(zx.o(eax_34)))))
                                        *(arg2 + 0xc)
                                        (*(esi_2 + 0x6c))(edi_1, 0, 0, xmm0_8)
                                        (*(*eax_7 + 4))()
                                    
                                    int32_t eax_42
                                    int32_t edx_5
                                    edx_5:eax_42 = sx.q((i_1 * temp0_1) << 2)
                                    int32_t var_4 = (eax_42 + (edx_5 & 3)) s>> 2
                                    
                                    if ((*(*arg1 + 0x30))(&var_4, 1) == 0)
                                        goto label_5ed527
                                    
                                    int32_t* ebx_2 = (*(*arg1 + 0x10))(0)
                                    int32_t eax_50 = *edi_1
                                    
                                    if (ebx_2 != 0)
                                        void* esi_4 = (*(eax_50 + 8))(0, 0)
                                        eax_50 = *edi_1
                                        
                                        if (esi_4 != 0)
                                            void* eax_52 = (*(eax_50 + 0x1c))()
                                            
                                            if (i_1 s> 0)
                                                int32_t i
                                                
                                                do
                                                    sub_69d850(ebx_2, esi_4, temp0_1 << 2)
                                                    esi_4 += eax_52
                                                    ebx_2 = &ebx_2[temp0_1]
                                                    i = i_1
                                                    i_1 -= 1
                                                while (i != 1)
                                                edi_1 = var_14_1
                                            
                                            (*(*edi_1 + 4))()
                                            int32_t eax_55
                                            eax_55.b = 1
                                            return eax_55
                                    
                                    (*(eax_50 + 4))()
                                else
                                    (*(*eax_7 + 4))()
                                    
                                    if (edi_1 != 0)
                                        eax_15 = *edi_1
                                        goto label_5ed4e8
                                    
                                    (*(*esi_1 + 4))()
                            else
                                (*(*eax_7 + 4))()
                                
                                if (edi_1 != 0)
                                label_5ed527:
                                    (*(*edi_1 + 4))()
                                    int32_t eax_21
                                    eax_21.b = 0
                                    return eax_21
                        else
                            edi_1 = (*(*esi_1 + 0xc))(temp0_1, i_1, 0x20)
                            var_14_1 = edi_1
                            
                            if (edi_1 != 0)
                                goto label_5ed502
                            
                            eax_15 = *eax_7
                        label_5ed4e8:
                            (*(eax_15 + 4))()
                            (*(*esi_1 + 4))()
            
            int32_t* eax_4
            eax_4.b = 0
            return eax_4

eax.b = 0
return eax
