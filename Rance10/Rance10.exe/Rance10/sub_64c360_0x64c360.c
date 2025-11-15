// 函数: sub_64c360
// 地址: 0x64c360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
void* ebp = *(edx + 0x184)
int32_t ecx_1 = *(edx + 0x128) - 1
int32_t var_10 = ecx_1
int32_t i = *(ebp + 0x10)
int32_t var_c = *(edx + 0x110) - 1
int32_t i_1 = i

while (i s< *(ebp + 0x14))
    int32_t edi_1 = *(ebp + 0xc)
    int32_t var_20_1 = edi_1
    
    if (edi_1 u<= ecx_1)
        do
            int32_t ebx_1 = 0
            int32_t j_1 = 0
            
            if (*(edx + 0x114) s> 0)
                void* eax_2 = edx + 0x118
                void* var_14_1 = eax_2
                int32_t j
                
                do
                    void* esi = *eax_2
                    int32_t eax_4 = *(*(edx + 0x194) + (*(esi + 4) << 2) + 4)
                    int32_t edx_1
                    
                    if (edi_1 u>= var_10)
                        edx_1 = *(esi + 0x48)
                    else
                        edx_1 = *(esi + 0x38)
                    
                    int32_t eax_6 = *(esi + 0x44) * edi_1
                    int32_t edi_3 = *(esi + 0x28) * i_1
                    int32_t k = 0
                    int32_t k_1 = 0
                    int32_t var_24_1 = edi_3
                    
                    if (*(esi + 0x3c) s> 0)
                        int32_t ecx_3 = *(esi + 0x38)
                        
                        do
                            if (*(ebp + 8) u< var_c || k + i_1 s< *(esi + 0x4c))
                                eax_4(arg1, esi, *(arg2 + (*(esi + 4) << 2)), 
                                    *(ebp + (ebx_1 << 2) + 0x18), edi_3, eax_6, edx_1)
                                int32_t eax_10 = *(esi + 0x38)
                                
                                if (edx_1 s< eax_10)
                                    _memset(*(ebp + ((edx_1 + ebx_1) << 2) + 0x18), 0, 
                                        (eax_10 - edx_1) << 7)
                                    int32_t edi_6 = edx_1
                                    
                                    if (edx_1 s< *(esi + 0x38))
                                        void* edx_8 = ebp + 0x18 + ((edx_1 + ebx_1) << 2)
                                        
                                        do
                                            int16_t* eax_15 = *(edx_8 - 4)
                                            edx_8 += 4
                                            edi_6 += 1
                                            eax_15.w = *eax_15
                                            **(edx_8 - 4) = eax_15.w
                                        while (edi_6 s< *(esi + 0x38))
                            else
                                void* edi_5 = ebp + 0x18 + (ebx_1 << 2)
                                _memset(*edi_5, 0, ecx_3 << 7)
                                int32_t edx_4 = 0
                                
                                if (*(esi + 0x38) s> 0)
                                    do
                                        edi_5 += 4
                                        edx_4 += 1
                                        int16_t* eax_8
                                        eax_8.w = **(ebp + (ebx_1 << 2) + 0x14)
                                        **(edi_5 - 4) = eax_8.w
                                    while (edx_4 s< *(esi + 0x38))
                            
                            ecx_3 = *(esi + 0x38)
                            ebx_1 += ecx_3
                            var_24_1 += *(esi + 0x28)
                            edi_3 = var_24_1
                            k = k_1 + 1
                            k_1 = k
                        while (k s< *(esi + 0x3c))
                    
                    edx = arg1
                    j = j_1 + 1
                    eax_2 = var_14_1 + 4
                    j_1 = j
                    var_14_1 = eax_2
                    edi_1 = var_20_1
                while (j s< *(edx + 0x114))
            
            if ((*(*(edx + 0x198) + 4))(edx, ebp + 0x18).b == 0)
                *(ebp + 0xc) = edi_1
                *(ebp + 0x10) = i_1
                int32_t eax_22
                eax_22.b = 0
                return eax_22
            
            ecx_1 = var_10
            edi_1 += 1
            edx = arg1
            var_20_1 = edi_1
        while (edi_1 u<= ecx_1)
        
        i = i_1
    
    i += 1
    *(ebp + 0xc) = 0
    i_1 = i

*(ebp + 8) += 1
void* ecx_9 = *(edx + 0x184)
int32_t eax_1

if (*(edx + 0x114) s<= 1)
    void* eax_25 = *(edx + 0x118)
    
    if (*(ecx_9 + 8) u>= *(edx + 0x110) - 1)
        eax_1 = *(eax_25 + 0x4c)
    else
        eax_1 = *(eax_25 + 0xc)
    
    *(ecx_9 + 0x14) = eax_1
else
    *(ecx_9 + 0x14) = 1

*(ecx_9 + 0xc) = 0
eax_1.b = 1
*(ecx_9 + 0x10) = 0
return eax_1
