// 函数: sub_638f00
// 地址: 0x638f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[0x13]

if (eax == 0x5c)
    int16_t* edi = *arg1
    
    if (edi != arg1[2])
        if (*edi == eax.w && sub_636a80(arg1) != 0)
            *arg1 = &edi[1]
        
        *arg1 += 2
    
    int32_t ecx_1 = sub_635790(arg1)
    int32_t eax_3 = arg1[0x14]
    
    if ((eax_3 & 0x200000) == 0)
        char eax_6
        
        if ((eax_3 & 0x10000) != 0)
            eax_6 = sub_6390a0(arg1, arg1[0x12].w)
        
        if ((eax_3 & 0x10000) == 0 || eax_6 == 0)
            char eax_8
            
            if ((arg1[0x14] & 0x8000) != 0)
                eax_8 = sub_639110(arg1, arg1[0x12].w)
            
            if ((arg1[0x14] & 0x8000) == 0 || eax_8 == 0)
                arg1[0x11] = 0x5c
                return 1
        
        sub_636ac0(arg1)
        return 1
    
    int32_t var_10_1 = ecx_1
    return sub_639680(arg1)

if (eax != 0x5b)
    if (eax == 0x5d || eax == 0xffffffff)
        return 0
    
    arg1[0x11] = zx.d(arg1[0x12].w)
    sub_636ac0(arg1)
    return 1

int16_t* edi_1 = *arg1

if (edi_1 != arg1[2])
    if (*edi_1 == 0x5c && sub_636a80(arg1) != 0)
        *arg1 = &edi_1[1]
    
    *arg1 += 2

sub_635790(arg1)
int32_t edi_2 = arg1[0x13]

if (edi_2 != 0x3a && edi_2 != 0x3d && edi_2 != 0x2e)
    arg1[0x11] = 0x5b
    return 1

int16_t* ebx = *arg1

if (ebx != arg1[2])
    if (*ebx == 0x5c && sub_636a80(arg1) != 0)
        *arg1 = &ebx[1]
    
    *arg1 += 2

sub_635790(arg1)
sub_6394e0(arg1, edi_2)
return 2
