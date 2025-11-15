// 函数: sub_653e80
// 地址: 0x653e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_11 = 1
int32_t (** result)() = (*arg1[1])(arg1, 1, 0x70)
int32_t (** result_1)() = result
arg1[0x64] = result_1
*result_1 = sub_4033e0
result_1[1] = sub_653650
result_1[2].b = 0

if (*(arg1 + 0xd3) != 0)
    *(*arg1 + 0x14) = 0x1a
    result = (**arg1)(arg1)

int32_t i = 0

if (arg1[0x13] s> 0)
    int32_t* ecx_2 = arg1[0x15] + 8
    int32_t* var_8_1 = ecx_2
    void* edi_1 = &result_1[3]
    
    do
        int32_t result_2 = divs.dp.d(sx.q(ecx_2[7] * *ecx_2), arg1[0x42])
        int32_t temp0_1 = divs.dp.d(sx.q(ecx_2[8] * ecx_2[1]), arg1[0x43])
        int32_t edx_3 = arg1[0x41]
        int32_t eax_12 = arg1[0x40]
        result = result_2
        *(edi_1 + 0x28) = temp0_1
        
        if (eax_12 != result || edx_3 != temp0_1)
            result *= 2
            
            if (eax_12 != result)
            label_653f9a:
                int32_t eax_14
                int32_t edx_4
                edx_4:eax_14 = sx.q(eax_12)
                int32_t temp1_2
                
                if (mods.dp.d(edx_4:eax_14, result_2) == 0)
                    int32_t eax_17
                    int32_t edx_6
                    edx_6:eax_17 = sx.q(edx_3)
                    temp1_2 = mods.dp.d(edx_6:eax_17, temp0_1)
                    result = divs.dp.d(edx_6:eax_17, temp0_1)
                
                if (mods.dp.d(edx_4:eax_14, result_2) != 0 || temp1_2 != 0)
                    *(*arg1 + 0x14) = 0x27
                    result = (**arg1)(arg1)
                else
                    *edi_1 = sub_6536d0
                    var_11 = temp1_2.b
                    *(result_1 + i + 0x5c) = (divs.dp.d(edx_4:eax_14, result_2)).b
                    *(result_1 + i + 0x66) = result.b
            else if (edx_3 != temp0_1)
                result = temp0_1 * 2
                
                if (edx_3 != result)
                    goto label_653f9a
                
                if (arg1[0x36] == 0)
                    *edi_1 = sub_653960
                else
                    *edi_1 = sub_653a40
                    result_1[2].b = 1
            else
                var_11 = 0
                *edi_1 = sub_6538b0
        else if (arg1[0x36] == 0)
            *edi_1 = sub_653840
        else
            *edi_1 = sub_653d10
            result_1[2].b = 1
        
        i += 1
        ecx_2 = &var_8_1[0x16]
        edi_1 += 4
        var_8_1 = ecx_2
    while (i s< arg1[0x13])

if (arg1[0x36] == 0 || var_11 != 0)
    return result

*(*arg1 + 0x14) = 0x65
return (*(*arg1 + 4))(arg1, 0)
