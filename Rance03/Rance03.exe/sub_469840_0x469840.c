// 函数: sub_469840
// 地址: 0x469840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg8 s<= 0 || arg9 s<= 0)
    return 

char eax_2 = (*(*arg2 + 0x28))()

if (eax_2 == 0 && *(arg1 + 0x22) != eax_2)
    sub_469db0(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
    return 

void* ebp_1 = (*(*arg2 + 8))(arg3, arg4)
char* esi_2 = (*(*arg5 + 8))(arg6, arg7)
int32_t edi_1 = arg8 << 2
int32_t eax_8 = (*(*arg2 + 0x1c))()
int32_t i_1 = arg9
int32_t ebx_4 = (*(*arg5 + 0x1c))() - edi_1

if (i_1 s<= 0)
    return 

int32_t j_2 = arg8
int32_t i

do
    if (j_2 s> 0)
        int32_t j_1 = j_2
        int32_t j
        
        do
            j_2.b = *esi_2
            *ebp_1 = j_2.b
            j_2.b = esi_2[1]
            *(ebp_1 + 1) = j_2.b
            j_2.b = esi_2[2]
            esi_2 = &esi_2[4]
            *(ebp_1 + 2) = j_2.b
            ebp_1 += 4
            j = j_1
            j_1 -= 1
        while (j != 1)
        j_2 = arg8
    
    ebp_1 += eax_8 - edi_1
    esi_2 = &esi_2[ebx_4]
    i = i_1
    i_1 -= 1
while (i != 1)
