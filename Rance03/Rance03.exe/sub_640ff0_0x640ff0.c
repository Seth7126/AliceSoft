// 函数: sub_640ff0
// 地址: 0x640ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg3
float esi = 0f
int32_t* var_18 = ebx
int32_t result = ebx[1]
int32_t ecx = *ebx
int32_t var_14 = ecx
float xmm6_1 = *(result + 0x1f0) - arg7
arg7 = 0f

if (ecx s> 0)
    int32_t edx = arg4
    int32_t edi
    int32_t var_28_1 = edi
    
    do
        int32_t ebx_1 = ebx[5]
        float eax = esi i+ 1
        float xmm4_1 = *(edx + (esi << 2))
        int32_t i = *(ebx_1 + (esi << 2))
        
        if (eax s< ecx)
            while (*(ebx_1 + (esi << 2) + 4) == i)
                esi = eax
                float xmm0_1 = *(edx + (esi << 2))
                
                if (not(xmm0_1 <= xmm4_1))
                    xmm4_1 = xmm0_1
                
                eax = esi i+ 1
                
                if (eax s>= ecx)
                    break
            
            arg7 = esi
        
        result = arg5
        
        if (xmm4_1 + 6f f<= *(result + (esi << 2)))
            ebx = var_18
        else
            int32_t edi_2 = i s>> (var_18[8]).b
            
            if (edi_2 s>= 0x11)
                edi_2 = 0x10
            else if (edi_2 s< 0)
                edi_2 = 0
            
            int32_t eax_1 = var_18[0xa]
            int32_t eax_2 = var_18[9]
            int32_t ecx_2 = 7
            int32_t edx_2 = 0
            int32_t eax_3 = int.d((fconvert.d(xmm4_1 + xmm6_1) - 30.0) * 0.10000000149011612)
            
            if (eax_3 s> 0)
                edx_2 = eax_3
            
            if (edx_2 s< 7)
                ecx_2 = edx_2
            
            int32_t* eax_6 = *(*(arg2 + (edi_2 << 2)) + (ecx_2 << 2))
            float xmm0_10 = _mm_cvtepi32_ps(zx.o(eax_2))
            float xmm3_1 = *eax_6
            int32_t edi_3 = int.d(fconvert.t(eax_6[1]))
            ebx = var_18
            int32_t ecx_3 = int.d(xmm3_1)
            result = int.d(_mm_cvtepi32_ps(zx.o(*(ebx_1 + (esi << 2)) - ebx[7]))
                + (xmm3_1 - 16f) * xmm0_10 - _mm_cvtepi32_ps(zx.o(eax_2 s>> 1)))
            
            if (ecx_3 s>= edi_3)
                ecx = var_14
                edx = arg4
            else
                do
                    if (result s> 0)
                        float xmm0_14 = eax_6[ecx_3 + 2] f+ xmm4_1
                        
                        if (not(xmm0_14 f<= *(arg6 + (result << 2))))
                            *(arg6 + (result << 2)) = xmm0_14
                    
                    result += eax_2
                    
                    if (result s>= eax_1)
                        break
                    
                    ecx_3 += 1
                while (ecx_3 s< edi_3)
                
                esi = arg7
                ecx = var_14
                edx = arg4
                ebx = var_18
        
        esi += 1
        arg7 = esi
    while (esi s< ecx)

return result
