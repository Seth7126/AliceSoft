// 函数: sub_469c50
// 地址: 0x469c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg8 s<= 0 || arg9 s<= 0)
    return 

char eax_2 = (*(*arg2 + 0x28))()

if (eax_2 == 0)
    if (*(arg1 + 0x22) != eax_2)
        sub_469fa0(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
        return 
    
    if (*(arg1 + 0x21) != 0)
        sub_469ef0(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
        return 

void* esi_2 = (*(*arg2 + 8))(arg3, arg4)
void* ebp_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t edi_1 = arg8 << 2
void* eax_10 = (*(*arg2 + 0x1c))() - edi_1
int32_t eax_12 = (*(*arg5 + 0x1c))() - edi_1
int32_t i_1 = arg9

if (i_1 s<= 0)
    return 

void* edx_3 = eax_10
int32_t ebx_3 = eax_12
int32_t j_2 = arg8
int32_t i

do
    if (j_2 s> 0)
        int32_t j_1 = j_2
        int32_t j
        
        do
            uint32_t edi_2 = zx.d(*(ebp_1 + 3))
            uint32_t eax_14 = zx.d(*(esi_2 + 1))
            *esi_2 += (((zx.d(*ebp_1) - zx.d(*esi_2)) * edi_2) s>> 8).b
            uint32_t eax_15 = zx.d(*(esi_2 + 2))
            *(esi_2 + 1) += (((zx.d(*(ebp_1 + 1)) - eax_14) * edi_2) s>> 8).b
            uint32_t edx_12 = zx.d(*(ebp_1 + 2))
            ebp_1 += 4
            *(esi_2 + 2) += (((edx_12 - eax_15) * edi_2) s>> 8).b
            esi_2 += 4
            j = j_1
            j_1 -= 1
        while (j != 1)
        i_1 = arg9
        j_2 = arg8
        edx_3 = eax_10
        ebx_3 = eax_12
    
    esi_2 += edx_3
    ebp_1 += ebx_3
    i = i_1
    i_1 -= 1
    arg9 = i_1
while (i != 1)
