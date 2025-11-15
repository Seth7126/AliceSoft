// 函数: sub_657080
// 地址: 0x657080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
void* result = *(arg1 + 0x5c)
arg1 = result
arg5 = ebx_1

if (not(cond:0))
    int32_t* edi_1 = arg4
    int32_t edx_1 = arg3 << 2
    int32_t temp1_1
    
    do
        int32_t ebp_1 = *(edx_1 + *arg2)
        int32_t ecx_1 = *(edx_1 + arg2[1])
        void* esi_2 = *edi_1
        edi_1 = &edi_1[1]
        result = *(edx_1 + arg2[2])
        edx_1 += 4
        
        if (arg1 u> 0)
            void* i_1 = arg1
            char* ecx_2 = ecx_1 - result
            void* esi_3 = esi_2 + 2
            char* var_8_1 = ecx_2
            void* ebp_2 = ebp_1 - result
            void* i
            
            do
                char edx_2 = *(ecx_2 + result)
                esi_3 += 3
                ecx_2.b = *(result + ebp_2)
                result += 1
                ecx_2.b -= 0x80
                char ebx_2 = *(result - 1) + 0x80
                *(esi_3 - 4) = edx_2
                ecx_2.b += edx_2
                *(esi_3 - 5) = ecx_2.b
                ecx_2 = var_8_1
                *(esi_3 - 3) = ebx_2 + edx_2
                i = i_1
                i_1 -= 1
            while (i != 1)
            ebx_1 = arg5
        
        temp1_1 = ebx_1
        ebx_1 -= 1
        arg5 = ebx_1
    while (temp1_1 - 1 s>= 0)

return result
