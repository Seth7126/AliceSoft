// 函数: sub_469b60
// 地址: 0x469b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
void* esi = (*(*arg2 + 8))(arg3, arg4)
char* eax_3 = (*(*arg5 + 8))(arg6, arg7)
int32_t edi_1 = arg8 << 2
int32_t* eax_5 = (*(*arg2 + 0x1c))() - edi_1
int32_t result = (*(*arg5 + 0x1c))() - edi_1
arg3 = result
int32_t edi_3 = *(arg1 + 8)
int32_t ebx_1 = *(edi_3 + ((0xff - arg10) << 2))
int32_t i_1 = arg9
int32_t edi_4 = *(edi_3 + (arg10 << 2))

if (i_1 s> 0)
    char* edx_3 = eax_3
    result = arg8
    int32_t* ebp_1 = eax_5
    int32_t i
    
    do
        if (result s> 0)
            int32_t ebp_2 = result
            int32_t j
            
            do
                uint32_t ecx_6 = zx.d(*(esi + 1))
                *esi = *(zx.d(*edx_3) + edi_4) + *(zx.d(*esi) + ebx_1)
                uint32_t ecx_7 = zx.d(*(esi + 2))
                *(esi + 1) = *(zx.d(edx_3[1]) + edi_4) + *(ecx_6 + ebx_1)
                uint32_t eax_11 = zx.d(edx_3[2])
                edx_3 = &edx_3[4]
                *(esi + 2) = *(eax_11 + edi_4) + *(ecx_7 + ebx_1)
                esi += 4
                j = ebp_2
                ebp_2 -= 1
            while (j != 1)
            result = arg8
            i_1 = arg9
            ebp_1 = eax_5
        
        edx_3 = &edx_3[arg3]
        esi += ebp_1
        i = i_1
        i_1 -= 1
        arg9 = i_1
    while (i != 1)

return result
