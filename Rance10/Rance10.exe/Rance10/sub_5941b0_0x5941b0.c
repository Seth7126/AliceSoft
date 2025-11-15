// 函数: sub_5941b0
// 地址: 0x5941b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg2
char* result_1 = result

if (arg1 != result)
    void* result_4 = &arg1[3]
    int64_t* result_3 = result_4
    
    if (result_3 != result)
        do
            int64_t xmm1_1 = *result_3
            int64_t* result_2 = result_3
            int32_t ebp_1 = result_3[1].d
            int32_t i = xmm1_1.d
            
            if (i s>= *arg1)
                result = result_3 - 0xc
                
                if (i s< *(result_3 - 0xc))
                    do
                        *result_2 = *result
                        result_2[1].d = *(result + 8)
                        result_2 = result
                        result -= 0xc
                    while (i s< *result)
                
                *result_2 = xmm1_1
                result_2[1].d = ebp_1
            else
                result = sub_6feca0(result_4, arg1, result_3 - arg1)
                *arg1 = xmm1_1
                arg1[2] = ebp_1
            
            result_3 += 0xc
            result_4 = &arg1[3]
        while (result_3 != result_1)

return result
