// 函数: sub_46d0c0
// 地址: 0x46d0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
int32_t ebx = *(edx + 0xc)

if (ebx u<= *(edx + 4))
    return 

while (true)
    char* esi_1 = *(edx + 4)
    arg1.b = *esi_1
    
    if ((arg1.b u< 0x81 || arg1.b u> 0x9f) && (arg1 + 0x20).b u> 0xf)
        if (arg1.b == 0xa && arg2 s> 0)
            break
        
        if (sx.d(arg1.b) - 9 u> 0x17)
            break
        
        switch (arg1.b)
            case 9, 0xa, 0xd, 0x20
                *(edx + 4) = &esi_1[1]
                
                if (ebx u<= &esi_1[1])
                    return 
                
                continue
            case 0xb, 0xc, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
                    0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
                break
    
    void* eax = esi_1
    
    if (*eax == 0x81 && *(eax + 1) == 0x40)
        *(edx + 4) += 2
    
    break
