// 函数: sub_57a620
// 地址: 0x57a620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_88 = &var_4
void* result = arg2
void* result_1 = result

if (arg1 != result)
    void* result_2 = arg1 + 0x6c
    
    if (result_2 != result)
        do
            int32_t xmm0_1 = *(arg1 + 0x68)
            void var_78
            __builtin_memcpy(&var_78, result_2, 0x6c)
            void* result_3 = result_2
            int32_t i
            void* result_6
            
            if (xmm0_1 f<= i)
                result = result_2 - 0x6c
                
                if (not(*(result_2 - 4) f<= i))
                    do
                        void* result_5 = result_3
                        void* result_4 = result
                        result_3 = result
                        result -= 0x6c
                        __builtin_memcpy(result_5, result_4, 0x6c)
                    while (*(result + 0x68) f> i)
                
                result_6 = result_3
            else
                result = result_2
                
                if (arg1 != result_2)
                    do
                        result -= 0x6c
                        __builtin_memcpy(result + 0x6c, result, 0x6c)
                    while (result != arg1)
                
                result_6 = arg1
            
            result_2 += 0x6c
            __builtin_memcpy(result_6, &var_78, 0x6c)
        while (result_2 != result_1)

*var_88
return result
