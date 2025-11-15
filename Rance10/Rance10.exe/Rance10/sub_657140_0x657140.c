// 函数: sub_657140
// 地址: 0x657140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
arg5 = edx_1
int32_t edi = *(*(arg1 + 0x1bc) + 0x18)
void* result = *(arg1 + 0x5c)
arg1 = result

if (not(cond:0))
    int32_t* esi_1 = arg2
    int32_t ecx_1 = arg3 << 2
    int32_t temp1_1
    
    do
        result = *(ecx_1 + esi_1[2])
        int32_t* ecx_3 = arg4
        arg4 = &arg4[1]
        
        if (arg1 u> 0)
            void* ebp_2 = *(ecx_1 + esi_1[1]) - result
            void* ebx_2 = *(ecx_1 + *esi_1) - result
            void* ecx_5 = *ecx_3 - result
            void* i_1 = arg1
            void* i
            
            do
                uint32_t esi_2 = zx.d(*(result + ebp_2))
                result += 1
                int32_t edx_4 = *(edi + (zx.d(*(ebx_2 + result - 1) - 0x80 + esi_2.b) << 2))
                    + *(edi + (zx.d(*(result - 1) - 0x80 + esi_2.b) << 2) + 0x800)
                i = i_1
                i_1 -= 1
                *(ecx_5 + result - 1) = ((edx_4 + *(edi + (esi_2 << 2) + 0x400)) s>> 0x10).b
            while (i != 1)
            edx_1 = arg5
            esi_1 = arg2
        
        ecx_1 += 4
        temp1_1 = edx_1
        edx_1 -= 1
        arg5 = edx_1
    while (temp1_1 - 1 s>= 0)

return result
