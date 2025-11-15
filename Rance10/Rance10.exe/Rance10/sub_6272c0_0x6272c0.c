// 函数: sub_6272c0
// 地址: 0x6272c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (sub_627860(arg1 - 0x20, arg2).b != 0 && *(arg1 + 0x14) == 0)
    eax = *(arg1 + 0xc)
    
    if (eax == 0x12 || eax == 0x33 || eax == 0x13 || eax == 0x59 || eax == 0x5d)
        if (arg3 s>= 0)
            char eax_1 = sub_621d30(*(arg1 + 4), arg3)
            
            if (eax_1 == 0)
                return eax_1
        
        int32_t ecx_2 = arg2 << 1
        
        if (ecx_2 u< *(arg1 - 0xc) u>> 2)
            *(*(arg1 - 0x10) + (ecx_2 << 2)) = arg3
            
            if (ecx_2 + 1 u< *(arg1 - 0xc) u>> 2)
                *(*(arg1 - 0x10) + ((ecx_2 + 1) << 2)) = arg4
                return 1
        
        return 0

eax.b = 0
return eax
