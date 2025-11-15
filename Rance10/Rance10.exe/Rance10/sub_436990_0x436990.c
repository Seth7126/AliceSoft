// 函数: sub_436990
// 地址: 0x436990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result_1
int32_t eax_1 = __security_cookie ^ &result_1
void* esi = arg2
int32_t var_110
uint32_t var_104[0x10][0x4]
uint32_t result = sub_448cd0(_memset(&var_104, 0, 0x100), &var_110, &result_1, arg3)

if (result.b != 0)
    uint32_t result_3 = result_1
    
    if (result_3 u>= 0x40)
        result.b = 0
    else
        int32_t eax_3 = *((result_3 << 2) + &data_794f48)
        int32_t ebx_2 = eax_3 & 0x80000007
        
        if (ebx_2 s< 0)
            ebx_2 = ((ebx_2 - 1) | 0xfffffff8) + 1
        
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(eax_3)
        int32_t result_2 = (eax_4 + (edx_1 & 7)) s>> 3 << 3
        int32_t eax_7 = var_110
        result_1 = result_2
        int32_t ecx_1
        ecx_1.b = eax_7 s> 0
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = sx.q(((ecx_1 << 1) + 0xffffffff + (eax_7 << 1))
            * zx.d(*(*arg1 + result_2 + ebx_2 + 0x4c)) * arg4)
        int32_t ecx_8 = ((edx_3 & 0xf) + eax_11) s>> 4
        
        if (ecx_8 s> 0x7ff)
            ecx_8 = 0x7ff
        else if (ecx_8 s< 0xfffff800)
            ecx_8 = 0xfffff800
        else if ((ecx_8.b & 1) == 0)
            int32_t eax_12
            eax_12.b = ecx_8 s> 0
            ecx_8 = ecx_8 + (eax_12 << 1) - 1
        
        int32_t ebx_5 = ebx_2 + result_1
        int32_t edi_1 = result_3 + 1
        int32_t eax_14 = (*U" ,*& ")[ebx_5] * ecx_8
        var_104[0][ebx_5] = eax_14
        
        if (sub_448b30(eax_14, &var_110, &result_1, arg3).b == 0)
        label_436b7f:
            result.b = 0
        else
            while (true)
                result = result_1
                
                if (result == 0xffffffff)
                    if (ebx_5 != 0)
                        sub_436630(esi, &var_104)
                        result.b = 1
                    else
                        int32_t eax_28
                        char edx_12
                        edx_12:eax_28 = sx.q(var_104[0][0])
                        result = esi + 0x80
                        
                        if (esi == result)
                            result.b = 1
                        else
                            do
                                *esi = ((eax_28 + zx.d(edx_12)) s>> 8).w
                                esi += 2
                            while (esi != result)
                            
                            result.b = 1
                    
                    break
                
                int32_t edi_2 = edi_1 + result
                
                if (edi_2 u>= 0x40)
                    goto label_436b7f
                
                int32_t eax_15 = *((edi_2 << 2) + &data_794f48)
                int32_t ebx_7 = eax_15 & 0x80000007
                
                if (ebx_7 s< 0)
                    ebx_7 = ((ebx_7 - 1) | 0xfffffff8) + 1
                
                int32_t eax_16
                int32_t edx_6
                edx_6:eax_16 = sx.q(eax_15)
                int32_t edx_8 = (eax_16 + (edx_6 & 7)) s>> 3 << 3
                int32_t eax_19 = var_110
                int32_t ecx_11
                ecx_11.b = eax_19 s> 0
                int32_t eax_23
                int32_t edx_9
                edx_9:eax_23 = sx.q(((ecx_11 << 1) + 0xffffffff + (eax_19 << 1))
                    * zx.d(*(*arg1 + edx_8 + ebx_7 + 0x4c)) * arg4)
                int32_t eax_25 = (eax_23 + (edx_9 & 0xf)) s>> 4
                
                if (eax_25 s> 0x7ff)
                    eax_25 = 0x7ff
                else if (eax_25 s< 0xfffff800)
                    eax_25 = 0xfffff800
                else if ((eax_25.b & 1) == 0)
                    int32_t ecx_17
                    ecx_17.b = eax_25 s> 0
                    eax_25 = eax_25 + (ecx_17 << 1) - 1
                
                ebx_5 = ebx_7 + edx_8
                edi_1 = edi_2 + 1
                var_104[0][ebx_5] = (*U" ,*& ")[ebx_5] * eax_25
                
                if (sub_448b30(eax_25, &var_110, &result_1, arg3).b == 0)
                    goto label_436b7f

@__security_check_cookie@4(eax_1 ^ &result_1)
return result
