// 函数: sub_64cfb0
// 地址: 0x64cfb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
arg5 = ebp_1
int32_t ebx = *(*(arg1 + 0x18c) + 8)
void* result = *(arg1 + 0x1c)
arg1 = result

if (not(cond:0))
    int32_t edx_1 = arg4 << 2
    int32_t temp1_1
    
    do
        int32_t* eax_2 = arg2
        arg2 = &eax_2[1]
        int32_t esi_1 = *(edx_1 + arg3[1])
        result = *(edx_1 + *arg3)
        int32_t edi_2 = *(edx_1 + arg3[2])
        int32_t ecx_6 = *(edx_1 + arg3[3])
        edx_1 += 4
        
        if (arg1 u> 0)
            void* ecx_7 = ecx_6 - result
            void* esi_2 = esi_1 - result
            void* ebp_3 = *eax_2 + 2
            void* edi_3 = edi_2 - result
            void* i_1 = arg1
            void* i
            
            do
                uint32_t ecx_9 = zx.d(*(ebp_3 - 2))
                ebp_3 += 4
                result += 1
                int32_t esi_3 = 0xff - zx.d(*(ebp_3 - 5))
                int32_t edx_2 = 0xff - zx.d(*(ebp_3 - 4))
                uint32_t ecx_11
                ecx_11.b = *(ebp_3 - 3)
                *(ecx_7 + result - 1) = ecx_11.b
                *(result - 1) = ((*(ebx + (edx_2 << 2) + 0x800) + *(ebx + (esi_3 << 2) + 0x400)
                    + *(ebx + ((0xff - ecx_9) << 2))) s>> 0x10).b
                *(esi_2 + result - 1) = ((*(ebx + (edx_2 << 2) + 0x1400)
                    + *(ebx + (esi_3 << 2) + 0x1000) + *(ebx + ((0xff - ecx_9) << 2) + 0xc00))
                    s>> 0x10).b
                i = i_1
                i_1 -= 1
                *(edi_3 + result - 1) = ((*(ebx + (edx_2 << 2) + 0x1c00)
                    + *(ebx + (esi_3 << 2) + 0x1800) + *(ebx + ((0xff - ecx_9) << 2) + 0x1400))
                    s>> 0x10).b
            while (i != 1)
            ebp_1 = arg5
        
        temp1_1 = ebp_1
        ebp_1 -= 1
        arg5 = ebp_1
    while (temp1_1 - 1 s>= 0)

return result
