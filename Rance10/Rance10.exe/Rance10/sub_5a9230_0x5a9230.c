// 函数: sub_5a9230
// 地址: 0x5a9230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *(arg1 + 0x28)
void* edx = nullptr
int32_t ecx = *(arg1 + 0x2c)
float xmm2 = -3.40282347e+38f
void* var_c = nullptr
float xmm3 = -3.40282347e+38f
int32_t* var_8 = eax
int32_t var_4 = ecx

while (eax != ecx)
    int32_t* edi_1 = *eax
    int32_t* esi_1 = *edi_1
    int32_t edi_2 = edi_1[1]
    
    if (esi_1 != edi_2)
        do
            void* ebx_1 = *esi_1
            
            if (*(ebx_1 + 8) == 4)
                int32_t eax_5
                
                if ((*(ebx_1 + 0x2a0) - *(ebx_1 + 0x29c)) s/ 0x1c s> 0)
                    eax_5 = **(ebx_1 + 0x29c)
                else
                    eax_5 = 0
                
                float xmm1_1 = _mm_cvtepi32_ps(zx.o(eax_5))
                float xmm0_2 = _mm_cvtepi32_ps(zx.o(sub_578cb0(ebx_1 + 4)))
                
                if (xmm1_1 > arg2)
                    edx = var_c
                else
                    if (xmm0_2 > arg2)
                        return ebx_1
                    
                    xmm0_2 - xmm2
                    int32_t eax_7
                    eax_7:1.b = (xmm0_2 == xmm2 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_2, xmm2) ? 1 : 0) << 2 | (xmm0_2 < xmm2 ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_2) && not(xmm1_1 <= xmm3))
                        edx = ebx_1
                        xmm2 = xmm0_2
                        xmm3 = xmm1_1
                        var_c = edx
                    else if (xmm0_2 <= xmm2)
                        edx = var_c
                    else
                        edx = ebx_1
                        xmm2 = xmm0_2
                        xmm3 = xmm1_1
                        var_c = edx
            
            esi_1 = &esi_1[1]
        while (esi_1 != edi_2)
        
        eax = var_8
        ecx = var_4
    
    eax = &eax[1]
    var_8 = eax

return edx
