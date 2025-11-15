// 函数: sub_6a6430
// 地址: 0x6a6430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg5
int32_t* edx = arg4
void* edi = *esi
int32_t eax = *edx

if (edi u< arg2)
    do
        int32_t ecx_1 = sx.d(*(edi + arg3)) - 0x2b
        
        if (ecx_1 u> 0x3a)
            break
        
        int32_t esi_1
        
        switch (ecx_1)
            case 0
                esi_1 = 4
            case 1, 4, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1c, 
                    0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 
                    0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
                    0x37, 0x38, 0x39
                break
            case 2
                esi_1 = 0x84
            case 3
                esi_1 = 0x10
            case 5
                esi_1 = 8
            case 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe
                esi_1 = 0x108
            case 0x1a, 0x3a
                esi_1 = 0x20
        
        int32_t ecx_6 = (eax & 3) - 4 + (esi_1 & 0x3c)
        
        if (ecx_6 u> 0x1d)
            break
        
        switch (ecx_6)
            case 0
                if ((eax.b & 0x3c) != 0)
                    break
                
                eax |= esi_1
            case 1, 3, 7, 8, 9, 0xa, 0xb, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                    0x17, 0x18, 0x19, 0x1a, 0x1b
                break
            case 2
                if ((eax.b & 0x3c) != 0)
                    break
                
                eax |= 4
            case 4
                if ((eax.b & 0x10) != 0)
                    eax = (eax & 0x1c0) | 0x11
                
                eax |= esi_1 | 0x40
            case 5
                eax |= esi_1 | 0x40
            case 6
                eax |= 0x48
            case 0xc
                if ((eax.b & 0x10) != 0)
                    break
                
                if ((eax.b & 8) == 0)
                    eax = (eax & 0x1c0) | esi_1 | 1
                else
                    eax |= esi_1
            case 0x1c, 0x1d
                if ((eax.b & 8) == 0)
                    break
                
                eax = (eax & 0x1c0) | 2
        
        edi += 1
    while (edi u< arg2)
    
    edx = arg4
    esi = arg5

*esi = edi
*edx = eax
return eax u>> 3 & 1
