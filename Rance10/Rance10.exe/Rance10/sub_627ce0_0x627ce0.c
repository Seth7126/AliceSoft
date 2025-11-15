// 函数: sub_627ce0
// 地址: 0x627ce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax

if (*(arg2 + 0x2c) != arg1[0xb] || *(arg2 + 0x34) != arg1[0xd])
label_627cf9:
    eax.b = 0
    return eax

(*(*arg1 + 4))()
uint32_t eax_3 = (*(*(arg2 + 0x20) + 8))()
sub_627910(arg1, eax_3, 0)

if (arg1[0xd] == 0)
    eax = arg1[0xb]
    
    if (eax == 0xa || eax == 0xb || eax == 0x2f || eax == 0x5c)
        char* ebx_1
        
        if (*(arg2 + 0x14) != 0)
            ebx_1 = *(arg2 + 0x10)
        else
            ebx_1 = nullptr
        
        char* esi_1
        
        if (arg1[5] != 0)
            esi_1 = arg1[4]
        else
            esi_1 = nullptr
        
        sub_700660(esi_1, ebx_1, (*(*(arg2 + 0x20) + 8))() << 2)
        char* eax_7
        eax_7.b = 1
        return eax_7

void* esi_2 = nullptr

if (eax_3 s> 0)
    do
        if (sub_627e30(arg1, esi_2, arg2, esi_2).b == 0)
            goto label_627cf9
        
        esi_2 += 1
    while (esi_2 s< eax_3)

eax.b = 1
return eax
