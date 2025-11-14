// 函数: sub_54d110
// 地址: 0x54d110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
int32_t edx_3 = edx_2 s>> 3
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t edi_1 = 0
    int32_t var_8_1 = 0
    int32_t ebp_3
    
    do
        void* ebp_1 = *(arg1 + 0x30)
        int32_t esi_1 = *(edi_1 + ebp_1 + 0x1c)
        
        if (esi_1 != 0xffffffff)
            int32_t ecx = 0
            int32_t eax_3
            int32_t edx_6
            edx_6:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - ebp_1)
            int32_t edx_7 = edx_6 s>> 3
            
            if ((edx_7 u>> 0x1f) + edx_7 s> 0)
                int32_t eax_7
                int32_t edx_10
                edx_10:eax_7 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - ebp_1)
                int32_t* eax_8 = ebp_1 + 0x18
                int32_t edx_11 = edx_10 s>> 3
                
                while (true)
                    if (*eax_8 == esi_1)
                        edi_1 = var_8_1
                        *(edi_1 + ebp_1 + 0x20) = ecx
                        break
                    
                    ecx += 1
                    eax_8 = &eax_8[0xc]
                    
                    if (ecx s>= (edx_11 u>> 0x1f) + edx_11)
                        edi_1 = var_8_1
                        break
        
        edi_1 += 0x30
        int32_t eax_9
        int32_t edx_12
        edx_12:eax_9 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
        ebp_3 = var_4 + 1
        var_8_1 = edi_1
        int32_t edx_13 = edx_12 s>> 3
        var_4 = ebp_3
        result = (edx_13 u>> 0x1f) + edx_13
    while (ebp_3 s< result)

return result
