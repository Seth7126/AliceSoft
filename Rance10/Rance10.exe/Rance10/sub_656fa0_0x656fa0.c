// 函数: sub_656fa0
// 地址: 0x656fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
arg5 = ebx_1
int32_t esi = *(*(arg1 + 0x1bc) + 0x18)
void* result = *(arg1 + 0x5c)
arg1 = result

if (not(cond:0))
    int32_t* edi_1 = arg4
    int32_t edx_1 = arg3 << 2
    int32_t temp1_1
    
    do
        result = *(edx_1 + arg2[1])
        int32_t edx_3 = *edi_1
        edi_1 = &edi_1[1]
        
        if (arg1 u> 0)
            void* i_1 = arg1
            void* ecx_4 = *(edx_1 + arg2[2]) - result
            void* ebp_2 = *(edx_1 + *arg2) - result
            void* var_8_1 = ecx_4
            void* edx_4 = edx_3 - result
            void* i
            
            do
                uint32_t ecx_5 = zx.d(*(ecx_4 + result))
                result += 1
                int32_t ebx_4 = *(esi + (ecx_5 << 2) + 0x800)
                    + *(esi + (zx.d(*(result + ebp_2 - 1)) << 2))
                    + *(esi + (zx.d(*(result - 1)) << 2) + 0x400)
                *(edx_4 + result - 1) = (ebx_4 s>> 0x10).b
                ecx_4 = var_8_1
                i = i_1
                i_1 -= 1
            while (i != 1)
            ebx_1 = arg5
        
        edx_1 += 4
        temp1_1 = ebx_1
        ebx_1 -= 1
        arg5 = ebx_1
    while (temp1_1 - 1 s>= 0)

return result
