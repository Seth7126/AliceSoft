// 函数: sub_637bc0
// 地址: 0x637bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_638970(&arg1[9])

if (arg1[0x13] == 0x5e)
    void* eax_1 = arg1[0xa]
    *(eax_1 + 8) ^= 1
    int16_t* ebx_1 = *arg1
    
    if (ebx_1 != arg1[2])
        if (*ebx_1 == 0x5c && sub_636a80(arg1) != 0)
            *arg1 = &ebx_1[1]
        
        *arg1 += 2
    
    sub_635790(arg1)

if ((arg1[0x14] & 0x20000000) != 0 && arg1[0x13] == 0x5d)
    int16_t ebx_2 = 0x5d
    
    if ((arg1[0xb] & 0x100) != 0)
        ebx_2 = (*(**(arg1[0xc] + 4) + 0x20))(0x5d)
    
    void* edi_1 = arg1[0xa]
    
    if (*(edi_1 + 0x18) == 0)
        int32_t eax_7 = sub_6e810c(0x20)
        int32_t var_4_1 = eax_7
        __builtin_memset(eax_7, 0, 0x20)
        *(edi_1 + 0x18) = eax_7
    
    uint32_t edx_1 = zx.d(ebx_2)
    char* ecx_5 = *(edi_1 + 0x18) + (edx_1 u>> 3)
    *ecx_5 |= (1 << ((edx_1 & 7) u% 0x20)).b
    int16_t* edi_2 = *arg1
    
    if (edi_2 != arg1[2])
        if (*edi_2 == 0x5c && sub_636a80(arg1) != 0)
            *arg1 = &edi_2[1]
        
        *arg1 += 2
    
    sub_635790(arg1)

return sub_6384b0(arg1) __tailcall
