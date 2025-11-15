// 函数: sub_6a0570
// 地址: 0x6a0570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0 && *(arg1 + 0x20) != 0 && *(arg1 + 0x24) != 0)
    int32_t* ecx = *(arg1 + 0x1c)
    
    if (ecx != 0 && *ecx == arg1)
        int32_t edx_1 = ecx[1]
        
        if (edx_1 s>= 0x3f34 && edx_1 s<= 0x3f53)
            ecx[8] = 0
            *(arg1 + 0x14) = 0
            *(arg1 + 8) = 0
            *(arg1 + 0x18) = 0
            int32_t edx_2 = ecx[3]
            
            if (edx_2 != 0)
                *(arg1 + 0x30) = edx_2 & 1
            
            ecx[1] = 0x3f34
            ecx[0x1c] = &ecx[0x14d]
            ecx[0x15] = &ecx[0x14d]
            ecx[0x14] = &ecx[0x14d]
            ecx[2] = 0
            ecx[4] = 0
            ecx[6] = 0x8000
            ecx[9] = 0
            ecx[0xf] = 0
            ecx[0x10] = 0
            ecx[0x6f1] = 1
            ecx[0x6f2] = 0xffffffff
            return 0

return 0xfffffffe
