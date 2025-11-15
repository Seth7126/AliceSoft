// 函数: sub_64b550
// 地址: 0x64b550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1[0x66]
void* var_4 = ebp

if (arg1[0x38] != 0)
    if (*(ebp + 0x44) == 0)
        sub_64b400(arg1, (*(ebp + 0x48)).b)
        *(ebp + 0x44) = arg1[0x38]
        *(ebp + 0x48) = (*(ebp + 0x48) + 1) & 7
    
    *(ebp + 0x44) -= 1

int32_t i = 0
int32_t i_1 = 0
void* result

if (arg1[0x4c] s> 0)
    result = &arg1[0x4d]
    void* result_1 = result
    
    do
        int32_t edx_2 = *result
        int32_t* edi_2 = (edx_2 << 2) + 0x34 + ebp
        int32_t esi_1 = *(arg1[edx_2 + 0x46] + 0x14)
        int16_t* eax_5 = *(arg2 + (i << 2))
        i.b = arg1[0x5a].b
        int32_t eax_7 = sx.d(*eax_5) s>> i.b
        int32_t* ecx_3 = (esi_1 << 2) + 0x4c + ebp
        char* esi_3 = *edi_2 + *ecx_3
        void* ecx_5 = (edx_2 << 2) + ebp
        int32_t ebp_2 = eax_7 - *(ecx_5 + 0x24)
        
        if (eax_7 != *(ecx_5 + 0x24))
            *(ecx_5 + 0x24) = eax_7
            int32_t eax_8 = sub_64b150(eax_7, esi_3, arg1, 1)
            int32_t j_2
            char* esi_4
            
            if (ebp_2 s<= 0)
                ebp_2 = neg.d(ebp_2)
                j_2 = sub_64b150(eax_8, &esi_3[1], arg1, 1)
                *edi_2 = 8
                esi_4 = &esi_3[3]
            else
                j_2 = sub_64b150(eax_8, &esi_3[1], arg1, 0)
                *edi_2 = 4
                esi_4 = &esi_3[2]
            
            int32_t edi_3 = 0
            int32_t ebp_3 = ebp_2 - 1
            
            if (ebp_2 != 1)
                sub_64b150(j_2, esi_4, arg1, 1)
                edi_3 = 1
                esi_4 = *ecx_3 + 0x14
                j_2 = ebp_3 s>> 1
                int32_t j_3 = j_2
                
                if (j_2 != 0)
                    int32_t j = j_2
                    
                    do
                        j_2 = sub_64b150(j_2, esi_4, arg1, 1)
                        edi_3 *= 2
                        esi_4 = &esi_4[1]
                        j s>>= 1
                    while (j != 0)
            
            sub_64b150(j_2, esi_4, arg1, 0)
            
            if (edi_3 s< 1 << *(esi_1 + arg1 + 0x98) s>> 1)
                *edi_2 = 0
            else if (edi_3 s> 1 << *(esi_1 + arg1 + 0xa8) s>> 1)
                *edi_2 += 8
            
            for (int32_t j_1 = edi_3 s>> 1; j_1 != 0; j_1 s>>= 1)
                int32_t eax_17 = ebp_3 & j_1
                int32_t eax_18 = neg.d(eax_17)
                int32_t eax_20 = neg.d(sbb.d(eax_18, eax_18, eax_17 != 0))
                sub_64b150(eax_20, &esi_4[0xe], arg1, eax_20)
        else
            sub_64b150(eax_7, esi_3, arg1, 0)
            *edi_2 = 0
        
        i = i_1 + 1
        ebp = var_4
        result = result_1 + 4
        i_1 = i
        result_1 = result
    while (i s< arg1[0x4c])

result.b = 1
return result
