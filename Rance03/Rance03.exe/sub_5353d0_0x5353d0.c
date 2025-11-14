// 函数: sub_5353d0
// 地址: 0x5353d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = arg3
int32_t var_8 = edx
int32_t i_6 = (arg2 - edx) s>> 2
int32_t i_5 = (arg4 - edx) s>> 2
int32_t i_3 = i_6
int32_t i_2 = i_5
int32_t i_4 = i_5

if (i_6 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_4
        i_4 = i_3
        i = mods.dp.d(sx.q(i_7), i_3)
        i_3 = i
    while (i != 0)
    edx = var_8
    i_2 = i_4

if (i_4 s>= i_5 || i_4 s<= 0)
    return 

int32_t ebp_1 = i_6 << 2
int32_t esi = edx + (i_4 << 2)
int32_t i_1

do
    arg1 = esi + ebp_1
    int32_t ebx_2 = esi
    
    if (arg1 == arg4)
        arg1 = edx
    
    do
        int32_t edx_3 = *ebx_2
        *ebx_2 = *arg1
        ebx_2 = arg1
        *arg1 = edx_3
        edx = var_8
        int32_t ecx_3 = (arg4 - arg1) s>> 2
        
        if (i_6 s>= ecx_3)
            arg1 = edx + ((i_6 - ecx_3) << 2)
        else
            arg1 += ebp_1
    while (arg1 != esi)
    
    esi -= 4
    i_1 = i_2 - 1
    i_2 = i_1
while (i_1 s> 0)
