// 函数: sub_64bc10
// 地址: 0x64bc10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
int32_t ebp = ebx[0x66]
int32_t var_28 = ebp

if (ebx[0x38] != 0)
    if (*(ebp + 0x44) == 0)
        sub_64b400(ebx, (*(ebp + 0x48)).b)
        *(ebp + 0x44) = ebx[0x38]
        *(ebp + 0x48) = (*(ebp + 0x48) + 1) & 7
    
    *(ebp + 0x44) -= 1

int32_t eax_5 = ebx[0x5c]
int32_t i = 0
int32_t i_1 = 0

if (ebx[0x4c] s> 0)
    void* ecx_2 = &ebx[0x4d]
    void* var_8_1 = ecx_2
    
    do
        int16_t* edx_3 = *(arg2 + (i << 2))
        int32_t eax_6 = *ecx_2
        void* ecx_3 = ebx[eax_6 + 0x46]
        int32_t* edi_2 = (eax_6 << 2) + 0x34 + ebp
        void* eax_8 = (eax_6 << 2) + ebp
        int32_t ecx_4 = *(ecx_3 + 0x14)
        int32_t ecx_5 = sx.d(*edx_3)
        char* esi_2 = *(ebp + (ecx_4 << 2) + 0x4c) + *edi_2
        int32_t ebp_2 = ecx_5 - *(eax_8 + 0x24)
        
        if (ecx_5 != *(eax_8 + 0x24))
            *(eax_8 + 0x24) = ecx_5
            int32_t eax_9 = sub_64b150(eax_8, esi_2, ebx, 1)
            int32_t j_6
            
            if (ebp_2 s<= 0)
                ebp_2 = neg.d(ebp_2)
                sub_64b150(eax_9, &esi_2[1], ebx, 1)
                *edi_2 = 8
                j_6 = 3
            else
                sub_64b150(eax_9, &esi_2[1], ebx, 0)
                *edi_2 = 4
                j_6 = 2
            
            void* edi_3 = &esi_2[j_6]
            int32_t esi_3 = 0
            int32_t ebp_3 = ebp_2 - 1
            
            if (ebp_2 != 1)
                sub_64b150(j_6, edi_3, ebx, 1)
                esi_3 = 1
                edi_3 = *(var_28 + (ecx_4 << 2) + 0x4c) + 0x14
                j_6 = ebp_3 s>> 1
                int32_t j_9 = j_6
                
                if (j_6 != 0)
                    int32_t j = j_6
                    
                    do
                        j_6 = sub_64b150(j_6, edi_3, ebx, 1)
                        esi_3 *= 2
                        edi_3 += 1
                        j s>>= 1
                    while (j != 0)
            
            sub_64b150(j_6, edi_3, ebx, 0)
            
            if (esi_3 s< 1 << *(ecx_4 + ebx + 0x98) s>> 1)
                *edi_2 = 0
            else if (esi_3 s> 1 << *(ecx_4 + ebx + 0xa8) s>> 1)
                *edi_2 += 8
            
            for (int32_t j_1 = esi_3 s>> 1; j_1 != 0; j_1 s>>= 1)
                int32_t eax_18 = j_1 & ebp_3
                int32_t eax_19 = neg.d(eax_18)
                int32_t eax_21 = neg.d(sbb.d(eax_19, eax_19, eax_18 != 0))
                sub_64b150(eax_21, edi_3 + 0xe, ebx, eax_21)
        else
            sub_64b150(eax_8, esi_2, ebx, 0)
            *edi_2 = 0
        
        int32_t j_7 = ebx[0x5d]
        
        if (j_7 == 0)
            ebp = var_28
        else
            int16_t* ebp_4 = edx_3
            int32_t edx_12 = *(ecx_3 + 0x18)
            int32_t var_14_2 = edx_12
            int32_t eax_23
            int32_t j_2
            
            do
                eax_23 = *(eax_5 + (j_7 << 2))
                
                if (ebp_4[eax_23] != 0)
                    break
                
                j_2 = j_7
                j_7 -= 1
            while (j_2 != 1)
            ebx = arg1
            int32_t edi_6 = 0
            
            if (j_7 s> 0)
                int32_t ecx_14 = var_28
                
                while (true)
                    char* esi_5 = edi_6 * 3 + *(ecx_14 + (edx_12 << 2) + 0x8c)
                    sub_64b150(eax_23, esi_5, ebx, 0)
                    int32_t edi_7 = edi_6 + 1
                    int32_t var_1c_2 = edi_7
                    int32_t eax_25 = *(eax_5 + (edi_7 << 2))
                    int32_t j_3 = sx.d(ebp_4[eax_25])
                    
                    if (j_3 == 0)
                        do
                            sub_64b150(eax_25, &esi_5[1], ebx, 0)
                            edi_7 += 1
                            esi_5 = &esi_5[3]
                            eax_25 = *(eax_5 + (edi_7 << 2))
                            j_3 = sx.d(edx_3[eax_25])
                        while (j_3 == 0)
                        
                        var_1c_2 = edi_7
                    
                    int32_t eax_27 = sub_64b150(eax_25, &esi_5[1], ebx, 1)
                    int32_t var_3c_2
                    
                    if (j_3 s<= 0)
                        j_3 = neg.d(j_3)
                        var_3c_2 = 1
                    else
                        var_3c_2 = 0
                    
                    int32_t eax_28 = sub_64b150(eax_27, var_28 + 0xcc, ebx, var_3c_2)
                    void* esi_6 = &esi_5[2]
                    int32_t edi_8 = 0
                    int32_t ebp_5 = j_3 - 1
                    
                    if (j_3 != 1)
                        sub_64b150(eax_28, esi_6, ebx, 1)
                        eax_28 = ebp_5 s>> 1
                        edi_8 = 1
                        int32_t var_20_2 = eax_28
                        
                        if (eax_28 != 0)
                            sub_64b150(eax_28, esi_6, ebx, 1)
                            int32_t esi_7 = 0xd9
                            edi_8 = 2
                            
                            if (var_1c_2 s<= zx.d(*(var_14_2 + ebx + 0xb8)))
                                esi_7 = 0xbd
                            
                            eax_28 = var_28
                            esi_6 = esi_7 + *(eax_28 + (var_14_2 << 2) + 0x8c)
                            int32_t j_8 = var_20_2 s>> 1
                            
                            if (j_8 != 0)
                                int32_t j_4 = j_8
                                
                                do
                                    eax_28 = sub_64b150(eax_28, esi_6, ebx, 1)
                                    edi_8 *= 2
                                    esi_6 += 1
                                    j_4 s>>= 1
                                while (j_4 != 0)
                    
                    eax_23 = sub_64b150(eax_28, esi_6, ebx, 0)
                    
                    for (int32_t j_5 = edi_8 s>> 1; j_5 != 0; j_5 s>>= 1)
                        int32_t eax_32 = j_5 & ebp_5
                        int32_t eax_33 = neg.d(eax_32)
                        int32_t eax_35 = neg.d(sbb.d(eax_33, eax_33, eax_32 != 0))
                        eax_23 = sub_64b150(eax_35, esi_6 + 0xe, ebx, eax_35)
                    
                    edi_6 = var_1c_2
                    ebp_4 = edx_3
                    ecx_14 = var_28
                    
                    if (edi_6 s>= j_7)
                        break
                    
                    edx_12 = var_14_2
            
            ebp = var_28
            
            if (edi_6 s< ebx[0x5d])
                sub_64b150(var_14_2, edi_6 * 3 + *(ebp + (var_14_2 << 2) + 0x8c), ebx, 1)
        
        i = i_1 + 1
        ecx_2 = var_8_1 + 4
        i_1 = i
        var_8_1 = ecx_2
    while (i s< ebx[0x4c])

i.b = 1
return i
