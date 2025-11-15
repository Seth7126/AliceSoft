// 函数: sub_6ff9e6
// 地址: 0x6ff9e6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    _terminate()
    noreturn

int32_t i_1 = *arg2
char ebx = 0
void* result

if (i_1 s> 0)
    int32_t edx_1 = 0
    int32_t var_8_1 = 0
    int32_t* eax_2 = *(*(arg1 + 0x1c) + 0xc)
    int32_t j_2 = *eax_2
    result = &eax_2[1]
    void* result_1 = result
    int32_t i
    
    do
        void* result_2 = result
        void* result_3 = result_2
        int32_t j_1 = j_2
        
        if (j_2 s> 0)
            char* eax_5 = arg2[1] + edx_1
            char* var_18_1 = eax_5
            int32_t j
            
            do
                if (TypeMatchHelper<class __FrameHandler3>(eax_5, *result_2, *(arg1 + 0x1c)) != 0)
                    ebx = 1
                    break
                
                j = j_1 - 1
                result_2 = result_3 + 4
                j_1 = j
                result_3 = result_2
                eax_5 = var_18_1
            while (j s> 0)
            edx_1 = var_8_1
        
        result = result_1
        edx_1 += 0x10
        var_8_1 = edx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = ebx
return result
