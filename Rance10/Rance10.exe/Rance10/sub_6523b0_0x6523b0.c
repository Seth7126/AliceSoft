// 函数: sub_6523b0
// 地址: 0x6523b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x178)
(*(*(arg1 + 0x198) + 8))(arg1)
int32_t eax_2 = *(esi + 0x10)
int32_t eax_3 = eax_2

if (eax_2 == 0)
    *(esi + 0x10) = 2
    
    if (*(arg1 + 0xd2) == 0)
        *(esi + 0x1c) += 1
else
    int32_t eax_4 = eax_3 - 1
    
    if (eax_3 == 1)
        *(esi + 0x14) += 1
        *(esi + 0x10) = 2
        return eax_4
    
    eax_3 = eax_4 - 1
    
    if (eax_4 == 1)
        if (*(arg1 + 0xd2) != eax_3.b)
            *(esi + 0x1c) += 1
            *(esi + 0x14) += 1
            *(esi + 0x10) = 1
            return eax_3
        
        *(esi + 0x1c) += 1

*(esi + 0x14) += 1
return eax_3
