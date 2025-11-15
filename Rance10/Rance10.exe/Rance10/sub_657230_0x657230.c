// 函数: sub_657230
// 地址: 0x657230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp_1 = arg5 - 1
void* result = *(arg1 + 0x5c)
arg1 = result

if (arg5 - 1 s>= 0)
    int32_t* esi_1 = arg4
    int32_t edx_1 = arg3 << 2
    int32_t temp1_1
    
    do
        int32_t edi_1 = *(edx_1 + *arg2)
        result = *(edx_1 + arg2[1])
        int32_t ebx_1 = *(edx_1 + arg2[2])
        edx_1 += 4
        void* ecx_3 = *esi_1
        esi_1 = &esi_1[1]
        
        if (arg1 u> 0)
            void* i_1 = arg1
            void* edx_2 = ecx_3 + 2
            char* edi_2 = edi_1 - result
            void* ebx_2 = ebx_1 - result
            void* i
            
            do
                edx_2 += 3
                *(edx_2 - 5) = *(edi_2 + result)
                result += 1
                *(edx_2 - 4) = *(result - 1)
                *(edx_2 - 3) = *(ebx_2 + result - 1)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        temp1_1 = ebp_1
        ebp_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
