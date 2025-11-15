// 函数: sub_42c8e0
// 地址: 0x42c8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
int32_t edi = *(edx + 0x10)
uint32_t eax

if (edi u> *(edx + 8))
    while (true)
        char* esi_1 = *(edx + 8)
        arg1.b = *esi_1
        
        if ((arg1.b u< 0x81 || arg1.b u> 0x9f) && arg1.b + 0x20 u> 0xf)
            if (sx.d(arg1.b) - 9 u> 0x17)
                break
            
            switch (arg1.b)
                case 9, 0xa, 0xd, 0x20
                    *(edx + 8) = &esi_1[1]
                    
                    if (edi u> &esi_1[1])
                        continue
                    
                    void* eax_3
                    eax_3.b = 1
                    return eax_3
                case 0xb, 0xc, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                        0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
                    break
        
        eax = esi_1
        
        if (*eax == 0x81 && *(eax + 1) == 0x40)
            *(edx + 8) += 2
        
        break

eax.b = 1
return eax
