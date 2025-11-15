// 函数: sub_6596a0
// 地址: 0x6596a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
void* ebx = esi[0x6c]

if (*(esi + 0xc9) == 0)
    if (esi[0x5e] != 0 || esi[0x60] != 0 || esi[0x61] != 0)
        *(*esi + 0x14) = 0x7d
        (*(*esi + 4))(esi, 0xffffffff)
    else if ((esi[0x32].b != 0 || esi[0x5f] s< 0x40) && esi[0x5f] != esi[0x64])
        *(*esi + 0x14) = 0x7d
        (*(*esi + 4))(esi, 0xffffffff)
    
    uint32_t (* eax_37)(void* arg1, int32_t arg2) = sub_659250
    
    if (esi[0x64] != 0x3f)
        eax_37 = sub_658df0
    
    int32_t i = 0
    *(ebx + 4) = eax_37
    
    if (esi[0x4c] s> 0)
        void* eax_38 = &esi[0x4d]
        void* ebp_4 = ebx + 0x18
        arg1 = eax_38
        
        do
            void* eax_39 = *eax_38
            int32_t ecx_11 = *(eax_39 + 0x14)
            void* eax_41 = ebx + 0x44 + (ecx_11 << 2)
            sub_657ef0(eax_41, 1, esi, ecx_11, eax_41)
            
            if (esi[0x64] != 0)
                int32_t ecx_14 = *(eax_39 + 0x18)
                void* eax_43 = ebx + ((ecx_14 + 0x15) << 2)
                sub_657ef0(eax_43, 0, esi, ecx_14, eax_43)
            
            i += 1
            *ebp_4 = 0
            eax_38 = arg1 + 4
            ebp_4 += 4
            arg1 = eax_38
        while (i s< esi[0x4c])
    
    int32_t i_1 = 0
    
    if (esi[0x53] s> 0)
        void* eax_45 = &esi[0x54]
        void* edi_3 = ebx + 0xb4
        arg1 = eax_45
        
        do
            void* edx_1 = esi[*eax_45 + 0x4d]
            *(edi_3 - 0x50) = *(ebx + (*(edx_1 + 0x14) << 2) + 0x44)
            *(edi_3 - 0x28) = *(ebx + (*(edx_1 + 0x18) << 2) + 0x54)
            
            if (*(edx_1 + 0x34) == 0)
                *edi_3 = 0
            else
                int32_t ecx_16 = *(edx_1 + 0x28)
                int32_t edx_2 = *(edx_1 + 0x24)
                
                switch (esi[0x64])
                    case 0
                        *edi_3 = 1
                    case 3
                        if (ecx_16 s<= 0 || ecx_16 s> 2)
                            ecx_16 = 2
                        
                        if (edx_2 s<= 0 || edx_2 s> 2)
                            edx_2 = 2
                        
                        *edi_3 = (*U":>?")[edx_2 + (ecx_16 << 1)] + 1
                    case 8
                        if (ecx_16 s<= 0 || ecx_16 s> 3)
                            ecx_16 = 3
                        
                        if (edx_2 s<= 0 || edx_2 s> 3)
                            edx_2 = 3
                        
                        *edi_3 = *(((ecx_16 * 3 + edx_2) << 2) + &data_76e144) + 1
                    case 0xf
                        if (ecx_16 s<= 0 || ecx_16 s> 4)
                            ecx_16 = 4
                        
                        if (edx_2 s<= 0 || edx_2 s> 4)
                            edx_2 = 4
                        
                        *edi_3 = *(((edx_2 + (ecx_16 << 2)) << 2) + &data_76e224) + 1
                    case 0x18
                        if (ecx_16 s<= 0 || ecx_16 s> 5)
                            ecx_16 = 5
                        
                        if (edx_2 s<= 0 || edx_2 s> 5)
                            edx_2 = 5
                        
                        *edi_3 = (*U":>?")[1 + ecx_16 * 5 + edx_2] + 1
                    case 0x23
                        if (ecx_16 s<= 0 || ecx_16 s> 6)
                            ecx_16 = 6
                        
                        if (edx_2 s<= 0 || edx_2 s> 6)
                            edx_2 = 6
                        
                        *edi_3 = (*U"*+/0")[edx_2 + ecx_16 * 6] + 1
                    case 0x30
                        if (ecx_16 s<= 0 || ecx_16 s> 7)
                            ecx_16 = 7
                        
                        if (edx_2 s<= 0 || edx_2 s> 7)
                            edx_2 = 7
                        
                        *edi_3 = *(((ecx_16 * 7 + edx_2) << 2) + &data_76e258) + 1
                    default
                        if (ecx_16 s<= 0 || ecx_16 s> 8)
                            ecx_16 = 8
                        
                        if (edx_2 s<= 0 || edx_2 s> 8)
                            edx_2 = 8
                        
                        *edi_3 = *(((edx_2 + (ecx_16 << 3)) << 2) + &data_76e3b4) + 1
            
            i_1 += 1
            eax_45 = arg1 + 4
            edi_3 += 4
            arg1 = eax_45
        while (i_1 s< esi[0x53])
else
    int32_t eax_1 = esi[0x5e]
    bool cond:1_1
    
    if (eax_1 != 0)
        int32_t ecx_1 = esi[0x5f]
        
        if (ecx_1 s>= eax_1 && ecx_1 s<= esi[0x64])
            cond:1_1 = esi[0x4c] != 1
            goto label_6596ed
        
    label_65970e:
        *(*esi + 0x14) = 0x11
        *(*esi + 0x18) = esi[0x5e]
        *(*esi + 0x1c) = esi[0x5f]
        *(*esi + 0x20) = esi[0x60]
        *(*esi + 0x24) = esi[0x61]
        (**esi)(esi)
    else
        cond:1_1 = esi[0x5f] != eax_1
    label_6596ed:
        
        if (cond:1_1)
            goto label_65970e
        
        int32_t eax_2 = esi[0x60]
        
        if ((eax_2 != 0 && eax_2 - 1 != esi[0x61]) || esi[0x61] s> 0xd)
            goto label_65970e
    void* i_2 = nullptr
    arg1 = nullptr
    
    if (esi[0x4c] s> 0)
        void* eax_11 = &esi[0x4d]
        void* var_8_1 = eax_11
        
        do
            int32_t ebx_1 = *(*eax_11 + 4)
            int32_t* ebp_3 = (ebx_1 << 8) + esi[0x23]
            
            if (esi[0x5e] != 0 && *ebp_3 s< 0)
                *(*esi + 0x14) = 0x76
                *(*esi + 0x18) = ebx_1
                *(*esi + 0x1c) = 0
                (*(*esi + 4))(esi, 0xffffffff)
                i_2 = arg1
            
            int32_t j = esi[0x5e]
            
            if (j s<= esi[0x5f])
                do
                    int32_t eax_18 = ebp_3[j]
                    
                    if (eax_18 s< 0)
                        eax_18 = 0
                    
                    if (esi[0x60] != eax_18)
                        *(*esi + 0x14) = 0x76
                        *(*esi + 0x18) = ebx_1
                        *(*esi + 0x1c) = j
                        (*(*esi + 4))(esi, 0xffffffff)
                    
                    ebp_3[j] = esi[0x61]
                    j += 1
                while (j s<= esi[0x5f])
                
                i_2 = arg1
            
            i_2 += 1
            eax_11 = var_8_1 + 4
            arg1 = i_2
            var_8_1 = eax_11
        while (i_2 s< esi[0x4c])
    
    uint32_t (* eax_26)(void* arg1, int32_t* arg2)
    void* (* ecx_6)(void* arg1, int32_t arg2)
    
    if (esi[0x60] != 0)
        eax_26 = sub_658a10
        ecx_6 = sub_658920
    else
        eax_26 = sub_6586c0
        ecx_6 = sub_658490
    
    if (esi[0x5e] == 0)
        eax_26 = ecx_6
    
    int32_t i_3 = 0
    *(ebx + 4) = eax_26
    
    if (esi[0x4c] s> 0)
        void* eax_27 = ebx + 0x18
        void* edi_1 = &esi[0x4d]
        arg1 = eax_27
        void* var_8_2 = edi_1
        
        do
            void* ecx_7 = *edi_1
            
            if (esi[0x5e] != 0)
                int32_t edi_2 = *(ecx_7 + 0x18)
                int32_t* eax_31 = ebx + ((edi_2 + 0xc) << 2)
                sub_657ef0(eax_31, 0, esi, edi_2, eax_31)
                edi_1 = var_8_2
                *(ebx + 0x40) = *(ebx + (edi_2 << 2) + 0x30)
                eax_27 = arg1
            else if (esi[0x60] == 0)
                int32_t ecx_8 = *(ecx_7 + 0x14)
                int32_t* eax_29 = ebx + ((ecx_8 + 0xc) << 2)
                sub_657ef0(eax_29, 1, esi, ecx_8, eax_29)
                eax_27 = arg1
            
            *eax_27 = 0
            i_3 += 1
            edi_1 += 4
            eax_27 += 4
            var_8_2 = edi_1
            arg1 = eax_27
        while (i_3 s< esi[0x4c])
    
    *(ebx + 0x14) = 0

*(ebx + 0x10) = 0
*(ebx + 0xc) = 0
*(ebx + 0x28) = 0
int32_t result = esi[0x3f]
*(ebx + 0x2c) = result
return result
