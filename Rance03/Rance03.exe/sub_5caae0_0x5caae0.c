// 函数: sub_5caae0
// 地址: 0x5caae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx
int32_t* var_14 = ecx
uint32_t eax

if (*(arg1 + 0x48) != 0)
    uint32_t ebp_2 = *(arg1 + 0xc) u>> 2
    
    if (ebp_2 s> 1)
        int32_t edi_1
        
        if (*(arg1 + 0xc) != 0)
            edi_1 = *(arg1 + 8)
        else
            edi_1 = 0
        
        int32_t ebx_1 = 1
        
        if (ebp_2 s> 1)
            eax = ebp_2
            
            do
                int32_t ebp_3 = *(edi_1 + (ebx_1 << 2))
                int32_t esi_1 = ebx_1 - 1
                
                if (ebx_1 s>= 1)
                    int32_t var_c = ebp_3
                    int32_t temp1_1
                    
                    do
                        int32_t var_8_1 = *(edi_1 + (esi_1 << 2))
                        int32_t var_10
                        int32_t* var_28_1 = &var_10
                        int32_t eax_2
                        int32_t edx_1
                        eax_2, edx_1 = sub_5cac70(ecx, arg2, &var_c, ecx)
                        
                        if (eax_2.b == 0)
                            sub_5c24e0(eax_2, edx_1, ecx, var_14, 0x6e8bd0)
                            int32_t* eax_4
                            eax_4.b = 0
                            return eax_4
                        
                        ecx = var_14
                        
                        if (var_10 s<= 0)
                            break
                        
                        *(edi_1 + (esi_1 << 2) + 4) = *(edi_1 + (esi_1 << 2))
                        temp1_1 = esi_1
                        esi_1 -= 1
                    while (temp1_1 - 1 s>= 0)
                    eax = ebp_2
                
                ebx_1 += 1
                *(edi_1 + (esi_1 << 2) + 4) = ebp_3
            while (ebx_1 s< eax)

eax.b = 1
return eax
