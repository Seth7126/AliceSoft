// 函数: sub_67a2b0
// 地址: 0x67a2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x1c0)
void* var_8 = edi
int32_t* eax = *(edi + 0x18)
int32_t ebx = *eax
int32_t edx = eax[1]
int32_t eax_1 = eax[2]
int32_t* result = *(arg1 + 0x5c)
int32_t var_28 = ebx
void* result_1 = result

if (arg4 s> 0)
    int32_t* ebp_1 = arg3
    result = arg2 - ebp_1
    arg2 = result
    int32_t i
    
    do
        int32_t edx_1 = *(edi + 0x30)
        int32_t esi_1 = 0
        char* eax_3 = *(result + ebp_1)
        int32_t ecx_3 = edx_1 << 6
        int32_t edx_3 = *(edi + 0x34) + ecx_3
        int32_t edx_5 = *(edi + 0x38) + ecx_3
        int32_t edx_7 = *(edi + 0x3c) + ecx_3
        arg1 = result_1
        
        if (result_1 != 0)
            void* edi_1 = *ebp_1
            void* j
            
            do
                uint32_t ecx_5 = zx.d(*eax_3)
                eax_3 = &eax_3[3]
                edi_1 += 1
                char ebx_2 = (*(edx_3 + (esi_1 << 2)) + ecx_5)[ebx]
                    + (*(edx_5 + (esi_1 << 2)) + zx.d(eax_3[0xfffffffe]))[edx]
                char* edx_15 = *(edx_7 + (esi_1 << 2)) + zx.d(eax_3[0xffffffff])
                esi_1 = (esi_1 + 1) & 0xf
                j = arg1
                arg1 -= 1
                *(edi_1 - 1) = ebx_2 + edx_15[eax_1]
                ebx = var_28
            while (j != 1)
            edi = var_8
            ebp_1 = arg3
        
        ebp_1 = &ebp_1[1]
        arg3 = ebp_1
        i = arg4
        arg4 -= 1
        *(edi + 0x30) = (edx_1 + 1) & 0xf
        result = arg2
    while (i != 1)

return result
