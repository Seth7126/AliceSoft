// 函数: sub_5afb30
// 地址: 0x5afb30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg3
int32_t* var_8 = esi
int32_t i_5 = (arg2 - esi) s>> 5
int32_t i_6 = (arg4 - esi) s>> 5
int32_t i_7 = i_5
int32_t i_4 = i_6
int32_t i_2 = i_6
int32_t i_3 = i_5

if (i_5 != 0)
    int32_t i
    
    do
        int32_t i_8 = i_4
        i_4 = i_3
        i = mods.dp.d(sx.q(i_8), i_3)
        i_3 = i
    while (i != 0)
    i_5 = i_7
    i_2 = i_4

if (i_4 s>= i_6 || i_4 s<= 0)
    return 

arg1 = i_5 << 5
int32_t var_4_1 = arg1
int32_t* ebx_4 = &esi[i_4 * 8]
int32_t i_1

do
    int32_t* eax_2 = arg1 + ebx_4
    int32_t* ebp_1 = ebx_4
    
    if (eax_2 == arg4)
        eax_2 = esi
    
    do
        int32_t edi = *ebp_1
        int32_t esi_1 = ebp_1[1]
        int128_t xmm1_1 = *(ebp_1 + 0xc)
        int32_t edx_3 = ebp_1[7]
        *ebp_1 = *eax_2
        ebp_1[1] = eax_2[1]
        *(ebp_1 + 0xc) = *(eax_2 + 0xc)
        ebp_1[7] = eax_2[7]
        ebp_1 = eax_2
        eax_2[1] = esi_1
        esi = var_8
        *eax_2 = edi
        *(eax_2 + 0xc) = xmm1_1
        eax_2[7] = edx_3
        int32_t ecx_5 = (arg4 - eax_2) s>> 5
        
        if (i_7 s>= ecx_5)
            eax_2 = &esi[(i_7 - ecx_5) * 8]
        else
            eax_2 += var_4_1
    while (eax_2 != ebx_4)
    
    ebx_4 -= 0x20
    arg1 = var_4_1
    i_1 = i_2 - 1
    i_2 = i_1
while (i_1 s> 0)
