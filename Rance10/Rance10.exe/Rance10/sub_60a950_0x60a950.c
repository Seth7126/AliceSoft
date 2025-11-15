// 函数: sub_60a950
// 地址: 0x60a950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ecx = *(arg2 + 4)

if (&ecx[4] u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t esi_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(arg2 + 4) = &ecx[4]

if (esi_6 != 0)
    uint32_t eax_4 = sub_405df0(arg1, esi_6)
    char* ecx_2
    char* edx_1
    
    if (eax_4.b != 0)
        if (*(arg1 + 8) != 0)
            ecx_2 = *(arg1 + 4)
        else
            ecx_2 = nullptr
        
        edx_1 = *(arg2 + 4)
    
    if (eax_4.b == 0 || &edx_1[esi_6] u> *(arg2 + 8))
        eax_4.b = 0
        return eax_4
    
    sub_700660(ecx_2, edx_1, esi_6)
    *(arg2 + 4) += esi_6

uint32_t eax_3
eax_3.b = 1
return eax_3
