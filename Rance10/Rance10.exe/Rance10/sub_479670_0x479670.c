// 函数: sub_479670
// 地址: 0x479670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg5 s<= 0 || arg6 s<= 0)
    return 

if (*(arg1 + 0x20) != 0)
    sub_479090(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10)
    return 

void* esi_1 = (*(*arg2 + 8))(arg3, arg4)
int32_t* i_1 = arg6
int32_t* eax = (*(*arg2 + 0x1c))() - (arg5 << 2)
arg2 = eax

if (i_1 s<= 0)
    return 

int32_t* i

do
    if (arg5 s> 0)
        int32_t j_1 = arg5
        int32_t j
        
        do
            *esi_1 = arg7.b
            *(esi_1 + 1) = arg8.b
            *(esi_1 + 2) = arg9.b
            *(esi_1 + 3) = arg10.b
            esi_1 += 4
            j = j_1
            j_1 -= 1
        while (j != 1)
        eax = arg2
    
    esi_1 += eax
    i = i_1
    i_1 -= 1
while (i != 1)
