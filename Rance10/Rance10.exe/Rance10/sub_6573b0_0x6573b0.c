// 函数: sub_6573b0
// 地址: 0x6573b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1
int32_t ebx_1 = arg5 - 1
int32_t esi = *(result + 0x5c)

if (arg5 - 1 s>= 0)
    void** ecx_1 = arg4
    int32_t ebp_1 = arg3 << 2
    int32_t temp1_1
    
    do
        ebp_1 += 4
        char* edx_1 = nullptr
        int32_t edi_1 = *(*arg2 + ebp_1 - 4)
        result = *ecx_1
        ecx_1 = &ecx_1[1]
        arg4 = ecx_1
        
        if (esi != 0)
            result += 1
            
            do
                ecx_1.b = edx_1[edi_1]
                result += 3
                edx_1 = &edx_1[1]
                *(result - 2) = ecx_1.b
                *(result - 3) = ecx_1.b
                *(result - 4) = ecx_1.b
            while (edx_1 u< esi)
            
            ecx_1 = arg4
        
        temp1_1 = ebx_1
        ebx_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
