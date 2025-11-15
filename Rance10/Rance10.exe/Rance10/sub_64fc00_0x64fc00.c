// 函数: sub_64fc00
// 地址: 0x64fc00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x17c)
int32_t eax = *(esi + 8)

if (eax u< *(arg1 + 0x110))
    while (true)
        int32_t eax_1 = *(arg1 + 0x10c)
        
        if (*(esi + 0xc) u< eax_1)
            (*(*(arg1 + 0x180) + 4))(arg1, arg2, arg3, arg4, esi + 0x18, esi + 0xc, eax_1)
        
        eax = *(esi + 0xc)
        
        if (eax != *(arg1 + 0x10c))
            break
        
        eax = (*(*(arg1 + 0x184) + 4))(arg1, esi + 0x18)
        
        if (eax.b == 0)
            if (*(esi + 0x10) == 0)
                *arg3 -= 1
                *(esi + 0x10) = 1
            
            break
        
        if (*(esi + 0x10) != 0)
            *arg3 += 1
            *(esi + 0x10) = 0
        
        *(esi + 8) += 1
        int32_t eax_6 = *(esi + 8)
        *(esi + 0xc) = 0
        
        if (eax_6 u>= *(arg1 + 0x110))
            return eax_6

return eax
