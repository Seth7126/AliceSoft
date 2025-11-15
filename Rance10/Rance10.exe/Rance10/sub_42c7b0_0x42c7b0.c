// 函数: sub_42c7b0
// 地址: 0x42c7b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = *(arg1 + 8)
char edx = *eax

if (edx == 0x2f || edx == 0x23 || edx == 0x2e)
    *(arg1 + 0x14) = eax
    edx = *eax
    
    if (edx == 0x2e)
        if (eax == *(arg1 + 0xc))
        label_42c7e2:
            sub_42c970(arg1)
            *(arg1 + 0x14) = 0
            void* eax_1
            eax_1.b = 1
            return eax_1
        
        eax.b = eax[0xffffffff]
        
        if (eax.b == 0 || eax.b == 0xa)
            goto label_42c7e2
        
        goto label_42c80b
    
    if (edx == 0x23)
        *(arg1 + 8) = &eax[1]
        void* eax_2
        
        if (*(arg1 + 0x10) u> &eax[1])
            eax_2.b = eax[1]
        
        if (*(arg1 + 0x10) u> &eax[1] && eax_2.b == edx)
            goto label_42c7e2
        
        *(arg1 + 8) = *(arg1 + 0x14)
    label_42c80b:
        *(arg1 + 0x14) = 0
        eax.b = 1
        *(arg1 + 0x14) = 0
        return eax
    
    int32_t ebp_1 = *(arg1 + 0x10)
    *(arg1 + 8) = &eax[1]
    
    if (ebp_1 u> &eax[1] && eax[1] == 0x2f)
        sub_42c970(arg1)
        *(arg1 + 0x14) = 0
        void* eax_3
        eax_3.b = 1
        return eax_3
    
    if (eax[1] != 0x2a)
        *(arg1 + 8) = eax
        eax.b = 1
        *(arg1 + 0x14) = 0
        return eax
    
    int32_t ebx
    ebx.b = 0
    *(arg1 + 8) = &eax[2]
    int32_t esi_1 = 1
    
    if (ebp_1 u> &eax[2])
        while (true)
            char* edi_1 = *(arg1 + 8)
            void* edx_1
            edx_1.b = *edi_1
            
            if (edx_1.b u< 0x81)
                if ((edx_1 + 0x20).b u> 0xf)
                    goto label_42c889
                
                ebx.b = 0
                *(arg1 + 8) = &edi_1[1]
            else if (edx_1.b u<= 0x9f || (edx_1 + 0x20).b u<= 0xf)
                ebx.b = 0
                *(arg1 + 8) = &edi_1[1]
            else
            label_42c889:
                
                if (edx_1.b != 0x2f)
                    if (edx_1.b == 0x2a)
                        if (edx_1.b != 0x2f || ebx.b != 0x2a)
                            goto label_42c8a7
                        
                        goto label_42c89e
                    
                    ebx.b = 0
                else if (ebx.b != 0x2a)
                label_42c8a7:
                    
                    if (edx_1.b != 0x2a || ebx.b != 0x2f)
                        ebx.b = edx_1.b
                    else
                        esi_1 += 1
                        ebx.b = 0
                else
                label_42c89e:
                    int32_t temp0_1 = esi_1
                    esi_1 -= 1
                    
                    if (temp0_1 == 1)
                        break
                    
                    ebx.b = 0
            
            *(arg1 + 8) += 1
            
            if (ebp_1 u<= *(arg1 + 8))
                *(arg1 + 0x14) = 0
                eax.b = 1
                return eax
        
        *(arg1 + 8) += 1
    
    *(arg1 + 0x14) = 0

eax.b = 1
return eax
