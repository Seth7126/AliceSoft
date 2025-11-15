// 函数: sub_64c2b0
// 地址: 0x64c2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1[0x61]
*(esi + 8) = 0
sub_64c240(arg1)
int32_t eax_1 = arg2

if (arg2 == 0)
    if (*(esi + 0x40) != 0)
        *(*arg1 + 0x14) = 3
        eax_1 = (**arg1)(arg1)
    
    *(esi + 4) = sub_64c360
    return eax_1

int32_t eax_2 = eax_1 - 2

if (eax_1 == 2)
    if (*(esi + 0x40) == 0)
        *(*arg1 + 0x14) = 3
        eax_2 = (**arg1)(arg1)
    
    *(esi + 4) = sub_64c7f0
    return eax_2

int32_t eax_3 = eax_2 - 1

if (eax_2 != 1)
    *(*arg1 + 0x14) = 3
    return (**arg1)(arg1)

if (*(esi + 0x40) == 0)
    *(*arg1 + 0x14) = 3
    eax_3 = (**arg1)(arg1)

*(esi + 4) = sub_64c5e0
return eax_3
