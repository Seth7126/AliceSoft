// 函数: sub_64c5e0
// 地址: 0x64c5e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
int32_t i = 0
int32_t i_1 = 0
void* ebx = *(esi + 0x184)
int32_t eax_1 = *(esi + 0x110) - 1
void* ebp = *(esi + 0x54)
void* var_8 = ebx
void* var_1c = ebp

if (*(esi + 0x4c) s> 0)
    do
        int32_t ecx_1 = *(ebp + 0xc)
        int32_t eax_5 =
            (*(*(esi + 4) + 0x20))(esi, *(ebx + (i << 2) + 0x40), *(ebx + 8) * ecx_1, ecx_1, 1)
        uint32_t j_1
        
        if (*(ebx + 8) u>= eax_1)
            j_1 = modu.dp.d(0:(*(ebp + 0x20)), *(ebp + 0xc))
            
            if (j_1 == 0)
                j_1 = *(ebp + 0xc)
        else
            j_1 = *(ebp + 0xc)
        
        int32_t eax_9 = *(ebp + 0x1c)
        int32_t ecx_2 = *(ebp + 8)
        uint32_t j_2 = j_1
        uint32_t j_4 = modu.dp.d(0:eax_9, ecx_2)
        int32_t var_18_1 = ecx_2
        
        if (j_4 s> 0)
            j_4 = ecx_2 - j_4
        
        int32_t ebp_1 = *(*(arg1 + 0x194) + (i << 2) + 4)
        int32_t edi = 0
        
        if (j_1 s> 0)
            do
                void* esi_1 = *(eax_5 + (edi << 2))
                ebp_1(arg1, var_1c, *(arg2 + (i_1 << 2)), esi_1, *(var_1c + 0x28) * edi, 0, eax_9)
                
                if (j_4 s> 0)
                    uint32_t (* esi_2)[0x4] = esi_1 + (eax_9 << 7)
                    _memset(esi_2, 0, j_4 << 7)
                    int16_t ecx_4 = esi_2[-8][0].w
                    
                    if (j_4 s> 0)
                        uint32_t j_3 = j_4
                        uint32_t j
                        
                        do
                            *esi_2 = ecx_4
                            esi_2 = &esi_2[8]
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                
                j_1 = j_2
                edi += 1
            while (edi s< j_1)
            
            ecx_2 = var_18_1
        
        if (*(var_8 + 8) == eax_1)
            int32_t edi_2 = eax_9 + j_4
            uint32_t k_1 = divu.dp.d(0:edi_2, ecx_2)
            uint32_t k_2 = k_1
            
            if (j_1 s< *(var_1c + 0xc))
                int32_t edi_3 = edi_2 << 7
                int32_t var_24_2 = edi_3
                
                do
                    uint32_t (* esi_3)[0x4] = *(eax_5 + (j_1 << 2))
                    int32_t ebx_2 = *(eax_5 + (j_2 << 2) - 4)
                    _memset(esi_3, 0, edi_3)
                    
                    if (k_1 != 0)
                        int32_t ecx_5 = var_18_1
                        int32_t edi_5 = ecx_5 << 7
                        uint32_t k
                        
                        do
                            int16_t edx_12 = *(ebx_2 + edi_5 - 0x80)
                            ebx_2 += edi_5
                            
                            if (ecx_5 s> 0)
                                uint32_t (* eax_27)[0x4] = esi_3
                                int32_t temp5_1
                                
                                do
                                    *eax_27 = edx_12
                                    eax_27 = &eax_27[8]
                                    temp5_1 = ecx_5
                                    ecx_5 -= 1
                                while (temp5_1 != 1)
                                ecx_5 = var_18_1
                            
                            esi_3 = &esi_3[ecx_5 * 8]
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        k_1 = k_2
                        edi_3 = var_24_2
                    
                    j_1 = j_2 + 1
                    j_2 = j_1
                while (j_1 s< *(var_1c + 0xc))
        
        esi = arg1
        i = i_1 + 1
        ebx = var_8
        ebp = var_1c + 0x58
        i_1 = i
        var_1c = ebp
    while (i s< *(esi + 0x4c))

int32_t var_38_4 = arg2
return sub_64c7f0(esi)
