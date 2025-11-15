// 函数: sub_657420
// 地址: 0x657420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t temp0 = arg5
arg5 -= 1
void* ecx = *(arg1 + 0x1bc)
void* i_2 = *(arg1 + 0x5c)
int32_t eax_1 = *(arg1 + 0x12c)
int32_t eax_2 = *(ecx + 8)
int32_t eax_3 = *(ecx + 0xc)
int32_t eax_4 = *(ecx + 0x10)
void* result = *(ecx + 0x14)
void* result_1 = result

if (temp0 - 1 s>= 0)
    int32_t* edi_1 = arg2
    int32_t edx = arg3 << 2
    int32_t ebp_3
    
    do
        int32_t* ebp_1 = arg4
        int32_t ebx_1 = *(edx + *edi_1)
        int32_t esi_1 = *(edx + edi_1[2])
        result = *(edx + edi_1[1])
        int32_t ecx_3 = *(edx + edi_1[3])
        edx += 4
        edi_1 = arg2
        arg4 = &ebp_1[1]
        ebp_3 = arg5
        
        if (i_2 u> 0)
            void* ebx_2 = ebx_1 - result
            void* esi_2 = esi_1 - result
            void* var_c_1 = ebx_2
            void* ebp_5 = *ebp_1 + 2
            void* var_8_1 = esi_2
            void* ecx_4 = ecx_3 - result
            void* i_1 = i_2
            void* i
            
            do
                uint32_t ecx_6 = zx.d(*(esi_2 + result))
                ebp_5 += 4
                uint32_t ebx_3 = zx.d(*(ebx_2 + result))
                result += 1
                uint32_t esi_3 = ecx_6 << 2
                uint32_t edi_4 = zx.d(*(result - 1)) << 2
                *(ebp_5 - 6) = *(eax_1 - *(esi_3 + eax_2) - ebx_3 + 0xff)
                esi_2 = var_8_1
                *(ebp_5 - 5) =
                    *(eax_1 - ((*(edi_4 + result_1) + *(esi_3 + eax_4)) s>> 0x10) - ebx_3 + 0xff)
                i = i_1
                i_1 -= 1
                ebx_2 = var_c_1
                *(ebp_5 - 4) = *(eax_1 - *(edi_4 + eax_3) - ebx_3 + 0xff)
                *(ebp_5 - 3) = *(ecx_4 + result - 1)
            while (i != 1)
            edi_1 = arg2
            ebp_3 = arg5
        
        arg5 = ebp_3 - 1
    while (ebp_3 - 1 s>= 0)

return result
