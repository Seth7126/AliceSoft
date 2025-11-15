// 函数: sub_64d110
// 地址: 0x64d110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1
int32_t i_1 = *(result + 0x1c)
int32_t ebx_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
int32_t i_2 = i_1
arg5 = ebx_1

if (not(cond:0))
    int32_t edx_1 = arg4 << 2
    int32_t temp1_1
    
    do
        int32_t* eax_1 = arg2
        arg2 = &eax_1[1]
        int32_t ebp_1 = *(edx_1 + *arg3)
        result = *(edx_1 + arg3[1])
        int32_t ecx_3 = *(edx_1 + arg3[2])
        edx_1 += 4
        
        if (i_1 != 0)
            void* esi_2 = *eax_1 + 2
            void* ebp_2 = ebp_1 - result
            arg1 = ecx_3 - result
            int32_t i
            
            do
                char edx_2 = *(esi_2 - 1)
                esi_2 += 3
                void* ecx_4
                ecx_4.b = *(esi_2 - 5)
                result += 1
                ecx_4.b -= edx_2
                ecx_4.b -= 0x80
                char ebx_2 = *(esi_2 - 3) - edx_2
                *(result + ebp_2 - 1) = ecx_4.b
                *(result - 1) = edx_2
                *(arg1 + result - 1) = ebx_2 + 0x80
                i = i_1
                i_1 -= 1
            while (i != 1)
            ebx_1 = arg5
            i_1 = i_2
        
        temp1_1 = ebx_1
        ebx_1 -= 1
        arg5 = ebx_1
    while (temp1_1 - 1 s>= 0)

return result
