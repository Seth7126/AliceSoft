// 函数: sub_4d6ec0
// 地址: 0x4d6ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = arg1
void* result

do
    void* esi_1 = *(i + 0x10)
    
    if (esi_1 != 0 && *(esi_1 + 8) == 3)
        int32_t edi_1 = *(i + 0x2c)
        int32_t edi_2 = edi_1 - *(esi_1 + 0x3c)
        
        if (edi_1 - *(esi_1 + 0x3c) s>= 0)
            int32_t eax_1
            int32_t edx_1
            edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(esi_1 + 0x48) - *(esi_1 + 0x44))
            int32_t edx_2 = edx_1 s>> 1
            
            if ((edx_2 u>> 0x1f) + edx_2 s> edi_2)
                int32_t* edi_3 = *(esi_1 + 0x44) + edi_2 * 0xc
                
                if (edi_3 != 0)
                    void* j = edi_3[1]
                    
                    while (j != *edi_3)
                        void* ecx_3 = *(j - 4)
                        j -= 4
                        
                        if (ecx_3 != 0)
                            int32_t var_24_1 = *(ecx_3 + 0x20)
                            int32_t var_20_1 = *(ecx_3 + 0x24)
                            int32_t var_2c_1 = *(ecx_3 + 0x4c)
                            int32_t var_14_1 = *(ecx_3 + 0x40)
                            int32_t var_28_1 = *(ecx_3 + 0x50)
                            int32_t var_10_1 = *(ecx_3 + 0x44)
                            int32_t xmm0_5 = *(ecx_3 + 0x48)
                            char var_30 = *(ecx_3 + 0x59)
                            int32_t var_c_1 = xmm0_5
                            char var_2f_1 = *(ecx_3 + 0x58)
                            int32_t var_1c_1 = *(ecx_3 + 0x28)
                            int32_t var_18_1 = *(ecx_3 + 0x2c)
                            sub_4d7000(arg2, &var_30)
    
    result = *(i + 0x18)
    
    if (*(result + 0x18) != 0)
        return sub_4efe50(*(*(*(*(result + 0x18) + 0x140) + 0x88) + 0x98), arg2)
    
    i = *(result + 0x1c)
while (i != 0)

return result
