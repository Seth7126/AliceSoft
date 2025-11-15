// 函数: sub_63c270
// 地址: 0x63c270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = data_7fcbbc
int32_t* eax = sub_63c080(ebx)

if (eax.b == 0)
    return eax

int32_t esi = arg2

if (esi s> 0 && esi == sub_63c190(esi) && data_7fcb88 != 0)
    int32_t var_8
    int32_t edi
    
    if (sub_63c080(ebx) != 0)
        int32_t eax_3 = (*(**(ebx + 0x2c) + 0x50))()
        edi = eax_3
        var_8 = eax_3
    else
        edi = 0
        var_8 = 0
    
    int32_t* var_c
    int32_t* eax_4
    int32_t* ebp
    
    if (sub_63c080(ebx).b != 0)
        eax_4 = (*(**(ebx + 0x2c) + 0x54))()
        ebp = eax_4
        var_c = eax_4
    else
        ebp = nullptr
        var_c = nullptr
    
    if (edi s> 0 && ebp s> 0)
        eax_4 = sub_69d9a0()
        
        if (eax_4 != 0)
            int32_t* eax_7 = (*(*eax_4 + 0xc))(edi, ebp, 0x20)
            
            if (eax_7 == 0)
                (*(*eax_4 + 4))()
            else
                int32_t* edi_1 = nullptr
                
                if (esi == 1)
                    goto label_63c36b
                
                edi_1 = (*(*eax_4 + 0xc))(divs.dp.d(sx.q(var_8), arg2), 
                    divs.dp.d(sx.q(var_c), arg2), 0x20)
                
                if (edi_1 != 0)
                    esi = arg2
                label_63c36b:
                    (*(*eax_4 + 4))()
                    
                    if (sub_44ff30(eax_7) != 0)
                        if (esi == 1)
                            edi_1 = eax_7
                        else
                            int32_t esi_2 = **(ebx + 0x10)
                            int32_t eax_23
                            int32_t ecx_13
                            eax_23, ecx_13 = (*(*eax_7 + 0x14))()
                            int32_t var_20_2 = ecx_13
                            int32_t eax_27
                            int32_t ecx_16
                            eax_27, ecx_16 = (*(*edi_1 + 0x14))(eax_7, 0, 0, 
                                _mm_cvtepi32_ps(zx.o((*(*eax_7 + 0x10))(_mm_cvtepi32_ps(zx.o(
                                    eax_23))))))
                            int32_t var_20_5 = ecx_16
                            int32_t eax_29 = (*(*edi_1 + 0x10))(_mm_cvtepi32_ps(zx.o(eax_27)))
                            *(ebx + 0x10)
                            (*(esi_2 + 0x6c))(edi_1, 0, 0, _mm_cvtepi32_ps(zx.o(eax_29)))
                            (*(*eax_7 + 4))()
                        
                        bool cond:0_1 = sub_63c9f0(arg1, edi_1) == 0
                        int32_t eax_32 = *edi_1
                        
                        if (not(cond:0_1))
                            (*(eax_32 + 4))()
                            int32_t eax_33
                            eax_33.b = 1
                            return eax_33
                        
                        (*(eax_32 + 4))()
                    else
                        (*(*eax_7 + 4))()
                        
                        if (edi_1 != 0)
                            (*(*edi_1 + 4))()
                            int32_t eax_20
                            eax_20.b = 0
                            return eax_20
                else
                    (*(*eax_7 + 4))()
                    (*(*eax_4 + 4))()
    
    eax_4.b = 0
    return eax_4

eax.b = 0
return eax
