// 函数: sub_6225f0
// 地址: 0x6225f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
int32_t* ebx = 0xffff
int32_t* eax_1 = esi[3] - 5

if (eax_1 u< 0xffff)
    ebx = eax_1

arg1 = ebx

while (true)
    int32_t eax_2 = esi[0x1d]
    
    if (eax_2 u<= 1)
        sub_622430(esi)
        eax_2 = esi[0x1d]
        
        if (eax_2 == 0)
            if (arg2 != 0)
                esi[0x5ad] = 0
                
                if (arg2 == 4)
                    int32_t ecx_10 = esi[0x17]
                    void* edx_6
                    
                    if (ecx_10 s< 0)
                        edx_6 = nullptr
                    else
                        edx_6 = esi[0xe] + ecx_10
                    
                    int32_t eax_15 = esi[0x1b] - ecx_10
                    sub_626870(eax_15, edx_6, esi, eax_15, 1)
                    void* ecx_12 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_621800(ecx_12)
                    int32_t eax_17
                    eax_17.b = *(*esi + 0x10) != 0
                    return eax_17 + 2
                
                int32_t ecx_14 = esi[0x1b]
                int32_t eax_19 = esi[0x17]
                
                if (ecx_14 s> eax_19)
                    void* edx_8
                    
                    if (eax_19 s< 0)
                        edx_8 = nullptr
                    else
                        edx_8 = esi[0xe] + eax_19
                    
                    sub_626870(eax_19, edx_8, esi, ecx_14 - eax_19, 0)
                    void* ecx_17 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_621800(ecx_17)
                
                if (ecx_14 s<= eax_19 || *(*esi + 0x10) != 0)
                    return 1
            
            break
    
    void* edi_1 = esi[0x17]
    int32_t temp0_1 = esi[0x1b]
    esi[0x1b] += eax_2
    int32_t eax_3 = esi[0x1b]
    esi[0x1d] = 0
    void* ecx_2 = edi_1 + ebx
    
    if (temp0_1 == neg.d(eax_2) || eax_3 u>= ecx_2)
        void* eax_4 = eax_3 - ecx_2
        esi[0x1b] = ecx_2
        esi[0x1d] = eax_4
        void* edx_2
        
        if (edi_1 s< 0)
            edx_2 = nullptr
        else
            edx_2 = esi[0xe] + edi_1
        
        sub_626870(eax_4, edx_2, esi, ecx_2 - edi_1, 0)
        void* ebx_1 = *esi
        esi[0x17] = esi[0x1b]
        void* edi_2 = *(ebx_1 + 0x1c)
        sub_626ed0(edi_2)
        void* ebp_1 = *(edi_2 + 0x14)
        
        if (ebp_1 u> *(ebx_1 + 0x10))
            ebp_1 = *(ebx_1 + 0x10)
        
        if (ebp_1 != 0)
            sub_69d850(*(ebx_1 + 0xc), *(edi_2 + 0x10), ebp_1)
            *(ebx_1 + 0xc) += ebp_1
            *(edi_2 + 0x10) += ebp_1
            *(ebx_1 + 0x14) += ebp_1
            *(ebx_1 + 0x10) -= ebp_1
            int32_t temp1_1 = *(edi_2 + 0x14)
            *(edi_2 + 0x14) -= ebp_1
            
            if (temp1_1 == ebp_1)
                *(edi_2 + 0x10) = *(edi_2 + 8)
        
        if (*(*esi + 0x10) == 0)
            break
        
        ebx = arg1
    
    int32_t edi_3 = esi[0x17]
    int32_t eax_9 = esi[0xb] - 0x106
    int32_t ecx_7 = esi[0x1b] - edi_3
    
    if (ecx_7 u>= eax_9)
        void* edx_4
        
        if (edi_3 s< 0)
            edx_4 = nullptr
        else
            edx_4 = esi[0xe] + edi_3
        
        sub_626870(eax_9, edx_4, esi, ecx_7, 0)
        void* ebx_2 = *esi
        esi[0x17] = esi[0x1b]
        void* edi_4 = *(ebx_2 + 0x1c)
        sub_626ed0(edi_4)
        void* ebp_2 = *(edi_4 + 0x14)
        
        if (ebp_2 u> *(ebx_2 + 0x10))
            ebp_2 = *(ebx_2 + 0x10)
        
        if (ebp_2 != 0)
            sub_69d850(*(ebx_2 + 0xc), *(edi_4 + 0x10), ebp_2)
            *(ebx_2 + 0xc) += ebp_2
            *(edi_4 + 0x10) += ebp_2
            *(ebx_2 + 0x14) += ebp_2
            *(ebx_2 + 0x10) -= ebp_2
            int32_t temp2_1 = *(edi_4 + 0x14)
            *(edi_4 + 0x14) -= ebp_2
            
            if (temp2_1 == ebp_2)
                *(edi_4 + 0x10) = *(edi_4 + 8)
        
        if (*(*esi + 0x10) == 0)
            break
        
        ebx = arg1

return 0
