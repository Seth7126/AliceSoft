// 函数: sub_64d1d0
// 地址: 0x64d1d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1
int32_t ebx_1 = arg5 - 1
int32_t ebp = *(result + 0x24)
int32_t esi = *(result + 0x1c)

if (arg5 - 1 s>= 0)
    int32_t ecx_1 = arg4 << 2
    int32_t temp1_1
    
    do
        char** eax_1 = arg2
        char* edx_1 = *eax_1
        arg2 = &eax_1[1]
        int32_t edi_1 = *(ecx_1 + *arg3)
        ecx_1 += 4
        result = nullptr
        arg1 = ecx_1
        
        if (esi != 0)
            do
                ecx_1.b = *edx_1
                edx_1 = &edx_1[ebp]
                *(result + edi_1) = ecx_1.b
                result += 1
            while (result u< esi)
            
            ecx_1 = arg1
        
        temp1_1 = ebx_1
        ebx_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
