// 函数: sub_46a7d0
// 地址: 0x46a7d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
void* esi = (*(*arg2 + 8))(arg3, arg4)
char* eax_3 = (*(*arg5 + 8))(arg6, arg7)
int32_t edi_1 = arg8 << 2
int32_t* eax_5 = (*(*arg2 + 0x1c))() - edi_1
int32_t i_1 = arg9
int32_t result = (*(*arg5 + 0x1c))() - edi_1
arg4 = result

if (i_1 s> 0)
    char* edx_2 = eax_3
    result = arg8
    int32_t* ecx_4 = eax_5
    int32_t ebx_1 = arg4
    int32_t i
    
    do
        if (result s> 0)
            int32_t edi_2 = result
            int32_t j
            
            do
                *esi = *(zx.d(*edx_2) + zx.d(*esi) + *(arg1 + 0x14))
                *(esi + 1) = *(zx.d(edx_2[1]) + zx.d(*(esi + 1)) + *(arg1 + 0x14))
                uint32_t ecx_9 = zx.d(edx_2[2])
                edx_2 = &edx_2[4]
                *(esi + 2) = *(ecx_9 + zx.d(*(esi + 2)) + *(arg1 + 0x14))
                esi += 4
                j = edi_2
                edi_2 -= 1
            while (j != 1)
            result = arg8
            ecx_4 = eax_5
            ebx_1 = arg4
        
        esi += ecx_4
        edx_2 = &edx_2[ebx_1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
