// 函数: sub_65e6e0
// 地址: 0x65e6e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** result)(void* arg1) = (*arg1[1])(arg1, 1, 0xa0)
arg1[0x6e] = result
int32_t (** result_2)(void* arg1) = result
*result = sub_65e3c0
result[1] = sub_65e3e0
result[2].b = 0

if (arg1[0x44].b != 0)
    *(*arg1 + 0x14) = 0x1a
    (**arg1)(arg1)
    result = result_2

int32_t i = 0
int32_t i_1 = 0

if (arg1[9] s> 0)
    int32_t* result_4 = arg1[0x31] + 8
    int32_t* (** ebp_1)(void* arg1, int32_t* arg2, int32_t* arg3) = &result[0xd]
    int32_t* result_1 = result_4
    
    do
        int32_t result_3 = divs.dp.d(sx.q(result_4[7] * *result_4), arg1[0x48])
        int32_t ebx_1 = arg1[0x47]
        int32_t temp0_1 = divs.dp.d(sx.q(result_4[8] * result_4[1]), arg1[0x49])
        int32_t edx_3 = arg1[0x46]
        result = result_1
        ebp_1[0xc] = temp0_1
        
        if (result[0xb].b != 0)
            result = result_3
            
            if (result != edx_3 || temp0_1 != ebx_1)
                if (result * 2 != edx_3)
                label_65e7d8:
                    int32_t eax_15
                    int32_t edx_4
                    edx_4:eax_15 = sx.q(edx_3)
                    int32_t eax_18
                    int32_t edx_6
                    
                    if (mods.dp.d(edx_4:eax_15, result_3) == 0)
                        edx_6:eax_18 = sx.q(ebx_1)
                    
                    if (mods.dp.d(edx_4:eax_15, result_3) != 0
                            || mods.dp.d(edx_6:eax_18, temp0_1) != 0)
                        *(*arg1 + 0x14) = 0x27
                        (**arg1)(arg1)
                    else
                        *ebp_1 = sub_65e4f0
                        *(i + result_2 + 0x8c) = (divs.dp.d(edx_4:eax_15, result_3)).b
                        *(i + result_2 + 0x96) = (divs.dp.d(edx_6:eax_18, temp0_1)).b
                else if (temp0_1 != ebx_1)
                    if (temp0_1 * 2 != ebx_1)
                        goto label_65e7d8
                    
                    *ebp_1 = sub_65e670
                else
                    *ebp_1 = sub_65e610
                
                int32_t ecx_1 = arg1[0x46]
                int32_t edi_4 = arg1[0x17] - 1 + ecx_1
                result =
                    (*(arg1[1] + 8))(arg1, 1, edi_4 - mods.dp.d(sx.q(edi_4), ecx_1), arg1[0x47])
                i = i_1
                ebp_1[-0xa] = result
            else
                *ebp_1 = sub_65e4d0
        else
            *ebp_1 = sub_65e4e0
        
        i += 1
        result_4 = &result_1[0x16]
        i_1 = i
        ebp_1 = &ebp_1[1]
        result_1 = result_4
    while (i s< arg1[9])

return result
