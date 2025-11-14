// 函数: sub_439780
// 地址: 0x439780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax = *(arg1 + 8)
char edx = *eax

if (edx == 0x2f || edx == 0x23 || edx == 0x2e)
    *(arg1 + 0x14) = eax
    edx = *eax
    
    if (edx == 0x2e)
        if (eax == *(arg1 + 0xc))
        label_4397b2:
            sub_439940(arg1)
            *(arg1 + 0x14) = 0
            void* eax_1
            eax_1.b = 1
            return eax_1
        
        eax.b = eax[0xffffffff]
        
        if (eax.b == 0 || eax.b == 0xa)
            goto label_4397b2
        
        goto label_4397db
    
    if (edx == 0x23)
        *(arg1 + 8) = &eax[1]
        void* eax_2
        
        if (*(arg1 + 0x10) u> &eax[1])
            eax_2.b = eax[1]
        
        if (*(arg1 + 0x10) u> &eax[1] && eax_2.b == edx)
            goto label_4397b2
        
        *(arg1 + 8) = *(arg1 + 0x14)
    label_4397db:
        *(arg1 + 0x14) = 0
        eax.b = 1
        *(arg1 + 0x14) = 0
        return eax
    
    int32_t ebx_1 = *(arg1 + 0x10)
    *(arg1 + 8) = &eax[1]
    
    if (ebx_1 u> &eax[1] && eax[1] == 0x2f)
        sub_439940(arg1)
        *(arg1 + 0x14) = 0
        void* eax_3
        eax_3.b = 1
        return eax_3
    
    if (eax[1] != 0x2a)
        *(arg1 + 8) = eax
        eax.b = 1
        *(arg1 + 0x14) = 0
        return eax
    
    edx = 0
    *(arg1 + 8) = &eax[2]
    int32_t esi_1 = 1
    
    if (ebx_1 u> &eax[2])
        while (true)
            char* edi_2 = *(arg1 + 8)
            eax.b = *edi_2
            
            if ((eax.b u>= 0x81 && eax.b u<= 0x9f) || (eax.b u>= 0xe0 && eax.b u<= 0xef))
                edx = 0
                *(arg1 + 8) = &edi_2[1]
            else if (eax.b != 0x2f)
                if (eax.b == 0x2a)
                    if (eax.b != 0x2f || edx != 0x2a)
                        goto label_439872
                    
                    goto label_43986b
                
                edx = 0
            else if (edx != 0x2a)
            label_439872:
                
                if (eax.b != 0x2a || edx != 0x2f)
                    edx = eax.b
                else
                    esi_1 += 1
                    edx = 0
            else
            label_43986b:
                int32_t temp0_1 = esi_1
                esi_1 -= 1
                
                if (temp0_1 == 1)
                    break
                
                edx = 0
            
            *(arg1 + 8) += 1
            
            if (ebx_1 u<= *(arg1 + 8))
                *(arg1 + 0x14) = 0
                eax.b = 1
                return eax
        
        *(arg1 + 8) += 1
    
    *(arg1 + 0x14) = 0

eax.b = 1
return eax
