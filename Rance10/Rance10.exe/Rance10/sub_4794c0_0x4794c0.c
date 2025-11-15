// 函数: sub_4794c0
// 地址: 0x4794c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* esi = (*(*arg2 + 8))(arg3, arg4)
char* eax_3 = (*(*arg5 + 8))(arg6, arg7)
int32_t edi_1 = arg8 << 2
int32_t* eax_5 = (*(*arg2 + 0x1c))() - edi_1
int32_t eax_7 = (*(*arg5 + 0x1c))() - edi_1
int32_t result = arg9

if (result s> 0)
    char* ebx_1 = eax_3
    int32_t j_2 = arg8
    int32_t* edx_2 = eax_5
    int32_t ebp_1 = eax_7
    int32_t i
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t j
            
            do
                uint32_t edx_4 = zx.d(*(esi + 1))
                *esi = *(zx.d(*ebx_1) + *(*(arg1 + 8) + (zx.d(*esi) << 2)))
                uint32_t edx_5 = zx.d(*(esi + 2))
                *(esi + 1) = *(zx.d(ebx_1[1]) + *(*(arg1 + 8) + (edx_4 << 2)))
                uint32_t ecx_6 = zx.d(ebx_1[2])
                ebx_1 = &ebx_1[4]
                *(esi + 2) = *(ecx_6 + *(*(arg1 + 8) + (edx_5 << 2)))
                esi += 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = arg9
            j_2 = arg8
            edx_2 = eax_5
            ebp_1 = eax_7
        
        esi += edx_2
        ebx_1 = &ebx_1[ebp_1]
        i = result
        result -= 1
        arg9 = result
    while (i != 1)

return result
