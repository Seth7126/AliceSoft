// 函数: sub_638400
// 地址: 0x638400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = *arg1

if (eax != arg1[2])
    uint32_t ebx_1 = zx.d(sub_639440(arg1[0xf], *arg1, eax + 2, (arg1[0x10] u>> 8).b & 1).w)
    
    if (ebx_1.w != 0)
        if (arg2 != 0)
            sub_638970(&arg1[9])
        
        char eax_5 = (*(**(arg1[0xf] + 4) + 0x10))(1, zx.d(arg1[0x12].w))
        void* esi = arg1[0xa]
        sub_639820(&arg1[9], esi, ebx_1, eax_5)
        *(esi + 0x24) |= ebx_1.w
        int16_t* esi_1 = *arg1
        
        if (esi_1 != arg1[2])
            if (*esi_1 == 0x5c && sub_636a80(arg1) != 0)
                *arg1 = &esi_1[1]
            
            *arg1 += 2
        
        sub_635790(arg1)
        uint32_t eax_8
        eax_8.b = 1
        return eax_8

eax.b = 0
return eax
