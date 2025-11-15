// 函数: sub_64d230
// 地址: 0x64d230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp_1 = arg5 - 1
void* result = *(arg1 + 0x1c)
arg1 = result

if (arg5 - 1 s>= 0)
    int32_t edx_1 = arg4 << 2
    int32_t temp1_1
    
    do
        int32_t* eax_1 = arg2
        arg2 = &eax_1[1]
        int32_t edi_1 = *(edx_1 + *arg3)
        result = *(edx_1 + arg3[1])
        int32_t ebx_1 = *(edx_1 + arg3[2])
        edx_1 += 4
        
        if (arg1 != 0)
            void* edx_2 = *eax_1 + 2
            char* edi_2 = edi_1 - result
            void* ebx_2 = ebx_1 - result
            void* i_1 = arg1
            void* i
            
            do
                char ecx_4 = *(edx_2 - 2)
                edx_2 += 3
                *(edi_2 + result) = ecx_4
                result += 1
                *(result - 1) = *(edx_2 - 4)
                *(ebx_2 + result - 1) = *(edx_2 - 3)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        temp1_1 = ebp_1
        ebp_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
