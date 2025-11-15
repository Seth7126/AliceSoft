// 函数: sub_54f9c0
// 地址: 0x54f9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg1
int32_t* esi = arg1
int32_t edi
int32_t var_18 = edi

if (*esi != 0)
    int32_t arg_4
    int32_t arg_8
    int32_t result_1
    int32_t i_3
    sub_54ee10(arg1, &arg_4, &arg_8, &result_1, &i_3)
    int32_t i_1 = i_3
    int32_t i_2 = i_1
    
    if (sub_54ed10(esi, arg_4, arg_8, result_1) == 0)
        int32_t* eax_1 = sub_54e9a0(esi)
        char* esi_1 = (*(*eax_1 + 8))(arg_4, arg_8)
        int32_t eax_4 = (*(*eax_1 + 0x1c))()
        int32_t result = result_1
        int32_t edi_4 = eax_4 - (result << 2)
        
        if (i_1 s> 0)
            int32_t i
            
            do
                if (result s> 0)
                    int32_t edx_1 = result
                    int32_t j
                    
                    do
                        uint8_t ecx_8 = ((zx.d(*esi_1) * 0x132 + zx.d(esi_1[2]) * 0x75
                            + zx.d(esi_1[1]) * 0x259) u>> 0xa).b
                        *esi_1 = ecx_8
                        esi_1[1] = ecx_8
                        esi_1[2] = ecx_8
                        esi_1 = &esi_1[4]
                        j = edx_1
                        edx_1 -= 1
                    while (j != 1)
                    result = result_1
                
                esi_1 = &esi_1[edi_4]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        result.b = 1
        return result

return 0
