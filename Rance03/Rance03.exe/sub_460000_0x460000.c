// 函数: sub_460000
// 地址: 0x460000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax = *(arg1 + 4)
char edx = *eax

if (edx == 0x2f || edx == 0x23 || edx == 0x2e)
    *(arg1 + 0x10) = eax
    edx = *eax
    
    if (edx == 0x2e)
        if (eax == *(arg1 + 8))
        label_460032:
            void* eax_1 = sub_4601a0(arg1)
            *(arg1 + 0x10) = 0
            return eax_1
        
        eax.b = eax[0xffffffff]
        
        if (eax.b == 0 || eax.b == 0xa)
            goto label_460032
        
        goto label_460059
    
    if (edx == 0x23)
        *(arg1 + 4) = &eax[1]
        void* eax_2
        
        if (*(arg1 + 0xc) u> &eax[1])
            eax_2.b = eax[1]
        
        if (*(arg1 + 0xc) u> &eax[1] && eax_2.b == edx)
            goto label_460032
        
        eax = *(arg1 + 0x10)
        *(arg1 + 4) = eax
    label_460059:
        *(arg1 + 0x10) = 0
        *(arg1 + 0x10) = 0
        return eax
    
    int32_t ebx_1 = *(arg1 + 0xc)
    *(arg1 + 4) = &eax[1]
    
    if (ebx_1 u> &eax[1] && eax[1] == 0x2f)
        void* eax_3 = sub_4601a0(arg1)
        *(arg1 + 0x10) = 0
        return eax_3
    
    if (eax[1] != 0x2a)
        *(arg1 + 4) = eax
        *(arg1 + 0x10) = 0
        return eax
    
    eax = &eax[2]
    edx = 0
    *(arg1 + 4) = eax
    int32_t esi_1 = 1
    
    if (ebx_1 u> eax)
        while (true)
            char* edi_2 = *(arg1 + 4)
            eax.b = *edi_2
            
            if ((eax.b u>= 0x81 && eax.b u<= 0x9f) || (eax.b u>= 0xe0 && eax.b u<= 0xef))
                eax = &edi_2[1]
                edx = 0
                *(arg1 + 4) = eax
            else if (eax.b != 0x2f)
                if (eax.b == 0x2a)
                    if (eax.b != 0x2f || edx != 0x2a)
                        goto label_4600eb
                    
                    goto label_4600e4
                
                edx = 0
            else if (edx != 0x2a)
            label_4600eb:
                
                if (eax.b != 0x2a || edx != 0x2f)
                    edx = eax.b
                else
                    esi_1 += 1
                    edx = 0
            else
            label_4600e4:
                int32_t temp0_1 = esi_1
                esi_1 -= 1
                
                if (temp0_1 == 1)
                    break
                
                edx = 0
            
            *(arg1 + 4) += 1
            
            if (ebx_1 u<= *(arg1 + 4))
                *(arg1 + 0x10) = 0
                return eax
        
        *(arg1 + 4) += 1
    
    *(arg1 + 0x10) = 0

return eax
