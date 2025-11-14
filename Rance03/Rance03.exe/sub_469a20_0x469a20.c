// 函数: sub_469a20
// 地址: 0x469a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg7 s<= 0 || arg8 s<= 0)
    return 

int32_t* eax_1 = (*(*arg1 + 8))(arg2, arg3)
void* esi_1 = (*(*arg4 + 8))(arg5, arg6)
int32_t edi_1 = arg7 << 2
int32_t eax_4 = (*(*arg1 + 0x1c))()
int32_t i_1 = arg8
arg3 = (*(*arg4 + 0x1c))() - edi_1

if (i_1 s<= 0)
    return 

int32_t* ecx_5 = eax_1
int32_t j_2 = arg7
int32_t i

do
    if (j_2 s> 0)
        int32_t j_1 = j_2
        int32_t j
        
        do
            j_2.b = *(esi_1 + 3)
            esi_1 += 4
            *(ecx_5 + 3) = j_2.b
            ecx_5 = &ecx_5[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        j_2 = arg7
    
    ecx_5 += eax_4 - edi_1
    esi_1 += arg3
    i = i_1
    i_1 -= 1
while (i != 1)
