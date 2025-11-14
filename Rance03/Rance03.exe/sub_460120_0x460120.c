// 函数: sub_460120
// 地址: 0x460120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0xc)

if (esi u<= *(arg1 + 4))
    return 

while (true)
    char* edx_1 = *(arg1 + 4)
    void* eax
    eax.b = *edx_1
    
    if ((eax.b u>= 0x81 && eax.b u<= 0x9f) || (eax.b u>= 0xe0 && eax.b u<= 0xef))
        eax = edx_1
        
        if (*eax == 0x81 && *(eax + 1) == 0x40)
            *(arg1 + 4) = eax + 2
        
        break
    
    if (sx.d(eax.b) - 9 u> 0x17)
        break
    
    switch (eax.b)
        case 9, 0xa, 0xd, 0x20
            *(arg1 + 4) = &edx_1[1]
            
            if (esi u<= &edx_1[1])
                return 
            
            continue
        case 0xb, 0xc, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
                0x1b, 0x1c, 0x1d, 0x1e, 0x1f
            break
