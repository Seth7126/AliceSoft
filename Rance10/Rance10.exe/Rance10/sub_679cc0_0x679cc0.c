// 函数: sub_679cc0
// 地址: 0x679cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1[0x70]
int32_t* var_20 = result + 0x20
int32_t eax = sub_679bc0(arg1, result + 0x20)

if (arg1[0x19] != 3)
    *(*arg1 + 0x14) = 0x61
    *(*arg1 + 0x18) = eax
else
    void* edx_1 = *arg1
    *(edx_1 + 0x18) = eax
    *(edx_1 + 0x1c) = *(result + 0x20)
    *(edx_1 + 0x20) = *(result + 0x24)
    *(edx_1 + 0x24) = *(result + 0x28)
    *(*arg1 + 0x14) = 0x60

(*(*arg1 + 4))(arg1, 1)
int32_t eax_10 = (*(arg1[1] + 8))(arg1, 1, eax, arg1[0x19])
int32_t ecx_1 = eax
int32_t i = 0
int32_t eax_11 = ecx_1
int32_t var_24 = eax_11

if (arg1[0x19] s> 0)
    do
        int32_t j_2 = *var_20
        int32_t temp0_1 = divs.dp.d(sx.q(eax_11), j_2)
        int32_t j_1 = j_2
        
        if (j_2 s> 0)
            int32_t ebx_2 = j_2 - 1
            int32_t var_28_1 = 0
            int32_t var_8_1 = ebx_2
            int32_t eax_15
            int32_t edx_4
            edx_4:eax_15 = sx.q(ebx_2)
            int32_t eax_17 = (eax_15 - edx_4) s>> 1
            int32_t edx_5 = 0
            int32_t var_c_1 = eax_17
            int32_t var_18_1 = 0
            int32_t j
            
            do
                int32_t eax_21 = var_28_1
                int32_t edx_7 = eax_21
                
                if (eax_21 s< ecx_1)
                    int32_t eax_22 = var_24
                    
                    do
                        int32_t ecx_2 = 0
                        
                        if (temp0_1 s> 0)
                            do
                                char* eax_24 = *(eax_10 + (i << 2)) + ecx_2
                                ecx_2 += 1
                                eax_24[edx_7] = (divs.dp.d(sx.q(eax_17 + edx_5), ebx_2)).b
                            while (ecx_2 s< temp0_1)
                            
                            eax_22 = var_24
                        
                        ecx_1 = eax
                        edx_7 += eax_22
                    while (edx_7 s< ecx_1)
                    
                    eax_21 = var_28_1
                
                ebx_2 = var_8_1
                edx_5 = var_18_1 + 0xff
                j = j_1
                j_1 -= 1
                var_28_1 = eax_21 + temp0_1
                eax_17 = var_c_1
                var_18_1 = edx_5
            while (j != 1)
        
        i += 1
        var_20 = &var_20[1]
        eax_11 = temp0_1
        var_24 = eax_11
    while (i s< arg1[0x19])

*(result + 0x10) = eax_10
*(result + 0x14) = ecx_1
return result
