// 函数: sub_46a520
// 地址: 0x46a520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg5 s<= 0)
    return 

int32_t i_1 = arg6

if (i_1 s<= 0)
    return 

char eax_3 = (*(*arg2 + 0x28))()

if (eax_3 == 0 && *(arg1 + 0x22) != eax_3)
    sub_469e60(arg2, arg3, arg4, arg5, i_1, arg7, arg8, arg9, 0xff)
    return 

char* esi_1 = (*(*arg2 + 8))(arg3, arg4)
int32_t eax = (*(*arg2 + 0x1c))() - (arg5 << 2)
arg4 = eax

if (i_1 s<= 0)
    return 

int32_t i

do
    if (arg5 s> 0)
        int32_t j_1 = arg5
        int32_t j
        
        do
            *esi_1 = arg7.b
            esi_1[1] = arg8.b
            esi_1[2] = arg9.b
            esi_1 = &esi_1[4]
            j = j_1
            j_1 -= 1
        while (j != 1)
        eax = arg4
    
    esi_1 = &esi_1[eax]
    i = i_1
    i_1 -= 1
while (i != 1)
