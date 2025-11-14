// 函数: sub_5d9cc0
// 地址: 0x5d9cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_30
int32_t eax_1 = __security_cookie ^ &var_30
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x66666667, arg4[1] - *arg4)
int32_t edx_3 = edx_2 s>> 4
int32_t i = 0

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t var_2c_1 = 0
    int32_t ecx = 0
    int32_t edx_7
    
    do
        if (*(ecx + *arg4 + 0x18) == 0x1b && i u< *(arg3 + 0xc) u>> 2)
            int32_t eax_9
            
            if (*(arg3 + 0xc) != 0)
                eax_9 = *(arg3 + 8)
            else
                eax_9 = 0
            
            int32_t ebx_1 = *(eax_9 + (i << 2))
            
            if (ebx_1 != 0)
                int32_t eax_11
                int32_t edx_4
                edx_4:eax_11 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
                int32_t edx_5 = edx_4 s>> 2
                
                if (ebx_1 u< (edx_5 u>> 0x1f) + edx_5)
                    int32_t var_8_1 = 0xf
                    int32_t eax_17 = *(arg1 + 4)
                    int32_t var_c_1 = 0
                    char var_1c = 0
                    sub_401ff0(&var_1c, eax_17 + ebx_1 * 0x18, 0, 0xffffffff)
                    int32_t var_20
                    ebx_1.b = sub_5bd940(arg2 + 0x48, &var_1c, &var_20) == 0
                    
                    if (var_8_1 u>= 0x10)
                        j__free(var_1c.d)
                    
                    int32_t var_44_3
                    
                    var_44_3 = ebx_1.b == 0 ? var_20 : 0
                    
                    sub_5d34a0(arg3, i, var_44_3)
                else if (*(arg3 + 0xc) != 0)
                    *(*(arg3 + 8) + (i << 2)) = 0
                else
                    *(i << 2) = 0
        
        i += 1
        var_2c_1 += 0x28
        int32_t eax_20
        int32_t edx_6
        edx_6:eax_20 = muls.dp.d(0x66666667, arg4[1] - *arg4)
        ecx = var_2c_1
        edx_7 = edx_6 s>> 4
    while (i s< (edx_7 u>> 0x1f) + edx_7)

int32_t result
result.b = 1
sub_69a5bc(eax_1 ^ &var_30)
return result
