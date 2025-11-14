// 函数: sub_469100
// 地址: 0x469100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = arg4
void* i_7 = arg2 - arg3
void* i_4 = ecx - arg3
int32_t i_5 = i_7
int32_t i_1 = i_4
int32_t i_2 = i_1

if (i_7 != 0)
    int32_t i_3 = i_1
    int32_t i
    
    do
        int32_t i_6 = i_3
        i_3 = i_5
        i = mods.dp.d(sx.q(i_6), i_5)
        i_5 = i
    while (i != 0)
    i_2 = i_3
    ecx = arg4
    i_1 = i_2

if (i_1 s>= i_4 || i_1 s<= 0)
    return 

int32_t eax_4 = neg.d(i_7)
int32_t eax_6 = neg.d(ecx)
char* ebx_1 = arg3 + i_1

do
    arg1 = ebx_1 + i_7
    char* ebp_1 = ebx_1
    
    if (arg1 == ecx)
        arg1 = arg3
    
    int32_t esi_1 = neg.d(arg1)
    
    do
        ecx.b = *arg1
        i_1.b = *ebp_1
        *ebp_1 = ecx.b
        ebp_1 = arg1
        *arg1 = i_1.b
        
        if (i_7 s>= arg4 + esi_1)
            arg1 += i_7 - arg4 + arg3
            esi_1 = neg.d(arg3) + eax_4 + esi_1 - eax_6
        else
            arg1 += i_7
            esi_1 += eax_4
    while (arg1 != ebx_1)
    
    ebx_1 -= 1
    ecx = arg4
    i_1 = i_2 - 1
    i_2 = i_1
while (i_1 s> 0)
