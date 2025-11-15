// 函数: sub_5f1350
// 地址: 0x5f1350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg2
char* result_1 = result

if (arg1 != result)
    void* result_4 = &arg1[5]
    int128_t* result_3 = result_4
    
    if (result_3 != result)
        do
            int128_t i_1 = *result_3
            int32_t ebp_1 = result_3[1].d
            int128_t* result_2 = result_3
            int32_t i = i_1
            
            if (i s>= *arg1)
                result = result_3 - 0x14
                
                if (i s< *(result_3 - 0x14))
                    do
                        *result_2 = *result
                        result_2[1].d = *(result + 0x10)
                        result_2 = result
                        result -= 0x14
                    while (i s< *result)
                
                *result_2 = i_1
                result_2[1].d = ebp_1
            else
                result = sub_6feca0(result_4, arg1, result_3 - arg1)
                *arg1 = i_1
                arg1[4] = ebp_1
            
            result_3 += 0x14
            result_4 = &arg1[5]
        while (result_3 != result_1)

return result
