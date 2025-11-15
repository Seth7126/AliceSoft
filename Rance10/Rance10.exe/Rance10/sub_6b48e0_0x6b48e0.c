// 函数: sub_6b48e0
// 地址: 0x6b48e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0

if (arg3[2] s> 0)
    int32_t i = divs.dp.d(sx.q(arg4), arg5)
    
    while (i s< divs.dp.d(sx.q(arg4 + arg7), arg5))
        int32_t eax_7 = sub_6b4270(arg3, arg6)
        
        if (eax_7 == 0xffffffff)
            return 0xffffffff
        
        int32_t edx_4 = *arg3
        int32_t esi_2 = arg3[4] + ((edx_4 * eax_7) << 2)
        int32_t j = 0
        
        if (edx_4 s> 0)
            do
                int32_t eax_10 = *(arg2 + (edi << 2))
                edi += 1
                *(eax_10 + (i << 2)) = *(esi_2 + (j << 2)) f+ *(eax_10 + (i << 2))
                
                if (edi == arg5)
                    edi = 0
                    i += 1
                
                j += 1
            while (j s< *arg3)

return 0
