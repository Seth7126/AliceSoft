// 函数: sub_66d950
// 地址: 0x66d950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* result = arg2
int128_t* result_1 = result

if (arg1 != result)
    int128_t* result_3 = &arg1[0xa]
    
    if (result_3 != result)
        do
            int64_t xmm1_1 = result_3[2].q
            int128_t* result_2 = result_3
            int128_t xmm0_1 = *result_3
            int32_t eax = arg1[8]
            int128_t xmm2_1 = result_3[1]
            int32_t var_c_1 = xmm1_1.d
            int32_t var_2c_1 = xmm0_1.d
            
            if (var_c_1 s< eax || (var_c_1 s<= eax && var_2c_1 s< *arg1))
                int128_t* result_4 = result_1
                result = sub_66f970(result_3 + 0x28, result_3, arg1, result_3 + 0x28)
                *arg1 = xmm0_1
                *(arg1 + 0x10) = xmm2_1
                *(arg1 + 0x20) = xmm1_1
            else
                result = result_3
                
                while (true)
                    int32_t ecx = *(result - 8)
                    result -= 0x28
                    
                    if (var_c_1 s>= ecx)
                        if (var_c_1 s> ecx)
                            break
                        
                        if (var_2c_1 s>= *result)
                            break
                    
                    *result_2 = *result
                    result_2[1] = result[1]
                    result_2[2].q = result[2].q
                    result_2 = result
                
                *result_2 = xmm0_1
                result_2[1] = xmm2_1
                result_2[2].q = xmm1_1
            
            result_3 += 0x28
        while (result_3 != result_1)

return result
