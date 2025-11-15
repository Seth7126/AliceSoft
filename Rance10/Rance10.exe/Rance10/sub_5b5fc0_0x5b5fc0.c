// 函数: sub_5b5fc0
// 地址: 0x5b5fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
char* result = arg2
char* result_8 = arg1
char* result_1 = result
char* result_9 = result_8
int32_t* var_90 = &var_4

if (result_8 != result)
    void* result_6 = &result_8[0x6c]
    
    if (result_6 != result)
        void* ebp_2 = result_6 - result_8
        
        do
            int32_t xmm0_1 = *(result_8 + 0x68)
            char* result_4 = result_6
            void var_78
            __builtin_memcpy(&var_78, result_6, 0x6c)
            int32_t i
            char* result_7
            
            if (xmm0_1 f<= i)
                result = ebp_2 - 0x6c + result_8
                
                if (not(*(result_8 + ebp_2 - 4) f<= i))
                    char* result_2 = result_4
                    
                    do
                        char* result_5 = result_2
                        char* result_3 = result
                        result_2 = result
                        result -= 0x6c
                        __builtin_memcpy(result_5, result_3, 0x6c)
                    while (i f< *(result + 0x68))
                    
                    result_4 = result_2
                    result_8 = result_9
                
                result_7 = result_4
            else
                result = sub_6feca0(&result_8[0x6c], result_8, ebp_2)
                result_8 = result_9
                result_7 = result_8
            
            result_6 += 0x6c
            ebp_2 += 0x6c
            __builtin_memcpy(result_7, &var_78, 0x6c)
        while (result_6 != result_1)

*var_90
return result
