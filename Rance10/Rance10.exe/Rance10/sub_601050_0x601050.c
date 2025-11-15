// 函数: sub_601050
// 地址: 0x601050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax

if (*(arg1 + 0x24) == 0)
    eax.b = 0
    return eax

int32_t edi_1 = arg3 - 1

if (arg3 - 1 s>= 0)
    uint32_t* ebp_1 = arg2
    int32_t ebx_1 = edi_1 * 0x70
    
    while (true)
        switch (*(*(*(arg1 + 0x24) + 0x60) + ebx_1 + 0x34))
            case 0, 0xa, 0xb, 0xc, 0xd, 0x2f, 0x3f, 0x4f, 0x52, 0x5c
                goto label_6010a2
            case 0x12, 0x13, 0x14, 0x15, 0x33, 0x43, 0x50, 0x59, 0x5d
                sub_621d30(*(arg1 + 0x20), *ebp_1)
            label_6010a2:
                
                if (edi_1 u< *(arg1 + 0x14) u>> 2)
                    *(*(arg1 + 0x10) + (edi_1 << 2)) = *ebp_1
                
                ebx_1 -= 0x70
                ebp_1 = &ebp_1[1]
                int32_t temp2_1 = edi_1
                edi_1 -= 1
                
                if (temp2_1 - 1 s< 0)
                    break
                
                continue
        
        uint32_t eax_3
        eax_3.b = 0
        return eax_3

eax.b = 1
return eax
