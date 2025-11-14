// 函数: sub_41f950
// 地址: 0x41f950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_34
int32_t eax_1 = __security_cookie ^ &var_34
int32_t ebx
int32_t var_38 = ebx

if (data_75d4b4 != 0)
    int32_t eax_3 = *(arg2 + 0x3c)
    int32_t var_28 = eax_3
    
    if (eax_3 != 0)
        int32_t* var_30
        sub_420040(arg1 + 8, &var_30, &var_28)
        int32_t* eax_4 = var_30
        
        if (eax_4 != *(arg1 + 8))
            int32_t* edi_1 = eax_4[5]
            
            if (*edi_1 == 5)
                int32_t i = 0
                int32_t eax_5
                int32_t edx_1
                edx_1:eax_5 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
                int32_t edx_2 = edx_1 s>> 2
                
                if ((edx_2 u>> 0x1f) + edx_2 s> 0)
                    int32_t edx_6
                    
                    do
                        int32_t var_24
                        ebx.b = sub_40d280(sub_420a40(&var_24, i), &edi_1[7])
                        int32_t var_10
                        
                        if (var_10 u>= 0x10)
                            j__free(var_24)
                        
                        if (ebx.b == 0)
                            if (data_75d4b0 != i)
                                data_75d4b0 = i
                                sub_417c00(*(arg1 + 0xc4))
                            
                            break
                        
                        i += 1
                        int32_t eax_11
                        int32_t edx_5
                        edx_5:eax_11 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
                        edx_6 = edx_5 s>> 2
                    while (i s< (edx_6 u>> 0x1f) + edx_6)

sub_69a5bc(eax_1 ^ &var_34)
return 0
