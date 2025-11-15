// 函数: sub_6536d0
// 地址: 0x6536d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t j_2 = *(arg2 + 0x24) * *(arg2 + 0x1c)
int32_t eax_1 = *(arg2 + 4)
int32_t ecx = *(arg1 + 0x190)
int32_t* edi = arg3
uint32_t edx = zx.d(*(eax_1 + ecx + 0x5c))
uint32_t k_2 = zx.d(*(eax_1 + ecx + 0x66))
int32_t eax_3 = k_2 * edx
int32_t j_3 = j_2
uint32_t k_3 = k_2
uint32_t eax_4 = eax_3 u>> 1
int32_t* result = sub_6535f0(eax_4, *(arg1 + 0x104), edi, *(arg1 + 0x1c), edx * j_2)
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x104) s> 0)
    result = arg4
    
    do
        char* ecx_2 = *result
        int32_t ebp_1 = 0
        char* var_1c_1 = ecx_2
        int32_t var_28_1 = 0
        
        if (j_2 != 0)
            uint32_t edx_3 = edx
            int32_t j_1 = j_2
            int32_t j
            
            do
                int32_t ebx_1 = 0
                
                if (k_2 != 0)
                    int32_t* ecx_3 = edi
                    uint32_t k_1 = k_2
                    int32_t* var_24_1 = ecx_3
                    uint32_t k
                    
                    do
                        int32_t esi = 0
                        char* eax_6 = *ecx_3 + ebp_1
                        int32_t edi_1 = 0
                        int32_t ebp_2 = 0
                        
                        if (edx_3 u>= 2)
                            int32_t edx_6 = ((edx_3 - 2) u>> 1) + 1
                            ebp_2 = edx_6 * 2
                            int32_t temp4_1
                            
                            do
                                esi += zx.d(*eax_6)
                                edi_1 += zx.d(eax_6[1])
                                eax_6 = &eax_6[2]
                                temp4_1 = edx_6
                                edx_6 -= 1
                            while (temp4_1 != 1)
                            ecx_3 = var_24_1
                            edx_3 = edx
                        
                        if (ebp_2 s< edx_3)
                            ebx_1 += zx.d(*eax_6)
                        
                        ebp_1 = var_28_1
                        ecx_3 = &ecx_3[1]
                        ebx_1 += edi_1 + esi
                        k = k_1
                        k_1 -= 1
                        var_24_1 = ecx_3
                    while (k != 1)
                    k_2 = k_3
                    ecx_2 = var_1c_1
                    edi = arg3
                
                edx_3 = edx
                ebp_1 += edx_3
                *ecx_2 = (divs.dp.d(sx.q(eax_4 + ebx_1), eax_3)).b
                ecx_2 = &ecx_2[1]
                j = j_1
                j_1 -= 1
                var_1c_1 = ecx_2
                var_28_1 = ebp_1
            while (j != 1)
            result = arg4
            i = i_1
            j_2 = j_3
        
        i += k_2
        edi = &edi[k_2]
        i_1 = i
        result = &result[1]
        arg3 = edi
        arg4 = result
    while (i s< *(arg1 + 0x104))

return result
