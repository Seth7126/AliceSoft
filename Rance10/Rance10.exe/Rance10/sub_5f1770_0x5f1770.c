// 函数: sub_5f1770
// 地址: 0x5f1770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == arg2)
    return 

void* ecx = &arg1[7]
int128_t* esi_1 = ecx

while (esi_1 != arg2)
    int128_t i_1 = *esi_1
    int128_t* edx = esi_1
    int32_t eax_1 = *(esi_1 + 0x18)
    int64_t xmm2_1 = esi_1[1].q
    int32_t i = i_1
    
    if (i s>= *arg1)
        int128_t* eax_4 = esi_1 - 0x1c
        
        if (i s< *(esi_1 - 0x1c))
            do
                *edx = *eax_4
                edx[1].q = eax_4[1].q
                *(edx + 0x18) = *(eax_4 + 0x18)
                edx = eax_4
                eax_4 -= 0x1c
            while (i s< *eax_4)
        
        *edx = i_1
        edx[1].q = xmm2_1
        *(edx + 0x18) = eax_1
    else
        sub_6feca0(ecx, arg1, esi_1 - arg1)
        *arg1 = i_1
        *(arg1 + 0x10) = xmm2_1
        arg1[6] = eax_1
    
    esi_1 += 0x1c
    ecx = &arg1[7]
