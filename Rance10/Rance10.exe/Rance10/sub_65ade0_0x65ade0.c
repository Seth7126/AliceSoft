// 函数: sub_65ade0
// 地址: 0x65ade0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1[0x67]

if (arg2 != 0)
    if (arg2 == 2)
        *(esi + 4) = sub_65b010
        return arg2 - 2
    
    *(*arg1 + 0x14) = 3
    return (**arg1)(arg1)

void* eax_7 = arg1[0x6e]

if (*(eax_7 + 8) == 0)
    *(esi + 4) = sub_65ae70
    *(esi + 0x30) = 0
    *(esi + 0x34) = 0
    return eax_7

*(esi + 4) = sub_65aee0
void* eax_8 = sub_65ab20(arg1)
*(esi + 0x40) = 0
*(esi + 0x44) = 0
*(esi + 0x4c) = 0
*(esi + 0x30) = 0
*(esi + 0x34) = 0
return eax_8
