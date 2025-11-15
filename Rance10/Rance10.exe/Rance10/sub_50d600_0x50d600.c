// 函数: sub_50d600
// 地址: 0x50d600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4efcc0(arg1[0x29])

if (arg1[0x2f] != 0xffffffff && (*(*arg1 + 0x18))() != 0)
    int32_t eax_3 = sub_50e5e0(&arg1[0x33])
    int32_t ebx = eax_3
    
    if (arg1[0x30] != ebx)
        int32_t ecx_2 = arg1[0x2f]
        int32_t eax_4 = arg1[0x2f]
        
        if (ebx s< ecx_2)
            ecx_2 = ebx
        
        if (eax_4 s< ebx)
            eax_4 = ebx
        
        if (ecx_2 != eax_4)
            int32_t eax_6 =
                sub_517760(eax, ecx_2, eax_4 - ecx_2, arg1[0x66], arg1[0x67], arg1[0x68], 1)
            arg1[0x30] = ebx
            return eax_6
        
        void* esi_1 = *(eax + 0x44)
        sub_555e00(esi_1, 0x13, 1)
        eax_3 = sub_55f850(*(esi_1 + 0x80))
        arg1[0x30] = ebx
    
    return eax_3

void* esi_2 = *(eax + 0x44)
sub_555e00(esi_2, 0x13, 1)
return sub_55f850(*(esi_2 + 0x80)) __tailcall
