// 函数: sub_651e70
// 地址: 0x651e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
int32_t esi = 0
int128_t* edi = *(arg1 + 0xcc)

if (*(arg1 + 0xc8) s> 0)
    int32_t* eax = edi + 0x18
    
    do
        if (i != esi)
            *(eax - 0x18) = *edi
            *(eax - 8) = edi[1]
            eax[2] = edi[2].d
        
        int32_t ecx_1 = *(arg1 + 0x174)
        
        if (eax[-1] s<= ecx_1)
            if (*eax s> ecx_1)
                *eax = ecx_1
            
            esi += 1
            eax = &eax[9]
        
        i += 1
        edi += 0x24
    while (i s< *(arg1 + 0xc8))

*(arg1 + 0xc8) = esi
