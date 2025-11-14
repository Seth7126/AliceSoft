// 函数: sub_5d9fb0
// 地址: 0x5d9fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t edi = 0
uint32_t result = *(arg3 + 0xc) u>> 2

if (result s> 0)
    bool cond:0_1 = 0 u>= result
    
    do
        if (not(cond:0_1))
            int32_t eax_4
            
            if (*(arg3 + 0xc) != 0)
                eax_4 = *(arg3 + 8)
            else
                eax_4 = 0
            
            int32_t ebx_1 = *(eax_4 + (edi << 2))
            
            if (ebx_1 != 0)
                int32_t eax_5
                int32_t edx_1
                edx_1:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
                int32_t edx_2 = edx_1 s>> 2
                
                if (ebx_1 u< (edx_2 u>> 0x1f) + edx_2)
                    int32_t var_c_1 = 0xf
                    void** eax_11 = *(arg1 + 4) + ebx_1 * 0x18
                    int32_t var_10_1 = 0
                    char var_20 = 0
                    sub_401ff0(&var_20, eax_11, 0, 0xffffffff)
                    int32_t var_28
                    ebx_1.b = sub_5bd940(arg2 + 0x48, &var_20, &var_28) == 0
                    
                    if (var_c_1 u>= 0x10)
                        j__free(var_20.d)
                    
                    uint32_t eax_14 = *(arg3 + 0xc) u>> 2
                    
                    if (ebx_1.b == 0)
                        if (edi u< eax_14)
                            int32_t ecx_6
                            
                            if (*(arg3 + 0xc) != 0)
                                ecx_6 = *(arg3 + 8)
                            else
                                ecx_6 = 0
                            
                            *(ecx_6 + (edi << 2)) = var_28
                    else if (edi u< eax_14)
                        if (*(arg3 + 0xc) != 0)
                            *(*(arg3 + 8) + (edi << 2)) = 0
                        else
                            *(edi << 2) = 0
                else if (*(arg3 + 0xc) != 0)
                    *(*(arg3 + 8) + (edi << 2)) = 0
                else
                    *(edi << 2) = 0
        
        edi += 1
        result = *(arg3 + 0xc) u>> 2
        cond:0_1 = edi u>= result
    while (edi s< result)

result.b = 1
sub_69a5bc(eax_1 ^ &var_2c)
return result
