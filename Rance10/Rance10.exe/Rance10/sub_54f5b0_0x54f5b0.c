// 函数: sub_54f5b0
// 地址: 0x54f5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t entry_i
int32_t i_3 = entry_i
int32_t edi
int32_t var_20 = edi
int32_t* var_c = arg1

if (*arg1 != 0)
    int32_t arg_4
    int32_t arg_8
    int32_t j_2
    int32_t i_5
    sub_54ee10(arg1, &arg_4, &arg_8, &j_2, &i_5)
    int32_t i_1 = i_5
    int32_t j_1 = j_2
    int32_t i_2 = i_1
    int32_t i_4 = i_1
    
    if (sub_54ed10(arg1, arg_4, arg_8, j_1) == 0)
        int32_t* eax_1 = sub_54e9a0(arg1)
        void* esi_1 = (*(*eax_1 + 8))(arg_4, arg_8)
        int32_t* var_14
        int32_t result = (*(*sub_54e9a0(var_14) + 0x1c))() - (j_1 << 2)
        int32_t result_1 = result
        
        if (i_1 s> 0)
            int32_t i
            
            do
                if (j_1 s> 0)
                    int32_t j
                    
                    do
                        int32_t eax_6
                        int32_t edx_2
                        edx_2:eax_6 = mulu.dp.d(0x80808081, zx.d(*(esi_1 + 3)) * zx.d(arg2))
                        *(esi_1 + 3) = (edx_2 u>> 7).b
                        esi_1 += 4
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    i_1 = i_3
                    j_1 = j_2
                    result = result_1
                
                esi_1 += result
                i = i_1
                i_1 -= 1
                i_3 = i_1
            while (i != 1)
        
        result.b = 1
        return result

return 0
