// 函数: sub_469930
// 地址: 0x469930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg8 s<= 0 || arg9 s<= 0)
    return 

if (*(arg1 + 0x22) != 0)
    sub_469db0(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
    return 

int32_t* eax_2 = (*(*arg2 + 8))(arg3, arg4)
char* esi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t edi_1 = arg8 << 2
int32_t eax_5 = (*(*arg2 + 0x1c))()
void* i_1 = arg9
arg4 = (*(*arg5 + 0x1c))() - edi_1

if (i_1 s<= 0)
    return 

int32_t* ecx_4 = eax_2
void* j_2 = arg8
void* i

do
    if (j_2 s> 0)
        void* j_1 = j_2
        void* j
        
        do
            *ecx_4 = *esi_1
            *(ecx_4 + 1) = esi_1[1]
            *(ecx_4 + 2) = esi_1[2]
            char eax_10 = esi_1[3]
            esi_1 = &esi_1[4]
            *(ecx_4 + 3) = eax_10
            ecx_4 = &ecx_4[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        j_2 = arg8
    
    ecx_4 += eax_5 - edi_1
    esi_1 += arg4
    i = i_1
    i_1 -= 1
while (i != 1)
