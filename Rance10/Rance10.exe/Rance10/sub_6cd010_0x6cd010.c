// 函数: sub_6cd010
// 地址: 0x6cd010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg2[1] = divs.dp.d(sx.q(*(arg1 + 0x1c)), *(arg1 + 0x18))
*arg2 = 0x28
arg2[2] = not.d(*(arg1 + 0x10))
arg2[3].w = 1
*(arg2 + 0xe) = *(arg1 + 0x14)
__builtin_memset(&arg2[5], 0, 0x14)
uint32_t eax_6 = *(arg1 + 0x14) - 8

if (eax_6 u<= 0x18)
    eax_6 = zx.d(lookup_table_6cd0dc[eax_6])
    
    switch (eax_6)
        case 0
            arg2[4] = 0
            void* eax_7 = arg2 + 0x29
            
            for (int32_t i = 0; i s< 0x100; )
                *(eax_7 + 1) = i.b
                eax_7 += 4
                *(eax_7 - 4) = i.b
                *(eax_7 - 5) = i.b
                i += 1
                *(eax_7 - 2) = 0
            
            return eax_7
        case 1
            arg2[4] = 3
            arg2[0xa] = 0xf800
            arg2[0xb] = 0x7e0
            arg2[0xc] = 0x1f
        case 2
            arg2[4] = 0

return eax_6
