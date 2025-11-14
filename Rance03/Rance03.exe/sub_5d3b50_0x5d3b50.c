// 函数: sub_5d3b50
// 地址: 0x5d3b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg3
void* edi_1 = edi - 1

if (edi - 1 s>= 0)
    int32_t* ebx_1 = arg2
    
    while (true)
        uint32_t eax_2 = *(*(arg1 + 0x2c) + (edi_1 << 2))
        int32_t* eax_8
        int32_t ecx
        
        switch (eax_2)
            case 0, 0xa, 0xb, 0xd, 0x1b, 0x2f
                ecx = *ebx_1
                
                if (*(arg1 + 0xc) != 0)
                label_5d3b96:
                    *(*(arg1 + 8) + (edi_1 << 2)) = ecx
                    goto label_5d3c5e
                
                *(edi_1 << 2) = ecx
            label_5d3c5e:
                ebx_1 = &ebx_1[1]
                void* temp2_1 = edi_1
                edi_1 -= 1
                
                if (temp2_1 - 1 s< 0)
                    break
                
                continue
            case 0xc
                eax_2 = sub_5d3550(arg1, edi_1, &arg3)
                
                if (eax_2.b != 0)
                    eax_8 = arg3
                label_5d3c45:
                    
                    if (eax_8 != 0xffffffff)
                        eax_2 = sub_5d5e80(*(arg1 + 0x1c), eax_8)
                    
                    if (eax_8 == 0xffffffff || eax_2.b != 0)
                        sub_5d3520(arg1, edi_1, *ebx_1)
                        goto label_5d3c5e
            case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
                if (edi_1 u< *(arg1 + 0xc) u>> 2)
                    int32_t eax_10
                    
                    if (*(arg1 + 0xc) != 0)
                        eax_10 = *(arg1 + 8)
                    else
                        eax_10 = 0
                    
                    int32_t eax_11 = *(eax_10 + (edi_1 << 2))
                    
                    if (eax_11 != 0xffffffff)
                        eax_2 = sub_5d5e80(*(arg1 + 0x1c), eax_11)
                    
                    if (eax_11 == 0xffffffff || eax_2.b != 0)
                        ecx = *ebx_1
                        
                        if (*(arg1 + 0xc) != 0)
                            goto label_5d3b96
                        
                        *(edi_1 << 2) = ecx
                        goto label_5d3c5e
            case 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1f, 0x20, 0x33, 0x34, 0x43, 0x44
                int32_t ecx_1 = *ebx_1
                void* edx_1 = *(arg1 + 0x1c)
                
                if (ecx_1 s>= 0 && ecx_1 s< (*(edx_1 + 0xc) - *(edx_1 + 8)) s>> 2)
                    void* eax_7 = *(*(edx_1 + 8) + (ecx_1 << 2))
                    
                    if (eax_7 != 0)
                        *(eax_7 + 0x18) += 1
                
                ecx = *ebx_1
                
                if (*(arg1 + 0xc) != 0)
                    goto label_5d3b96
                
                *(edi_1 << 2) = ecx
                goto label_5d3c5e
            case 0x3f
                eax_2 = sub_5d3550(arg1, edi_1, &arg2)
                
                if (eax_2.b != 0)
                    eax_8 = arg2
                    goto label_5d3c45
        
        eax_2.b = 0
        return eax_2

int32_t eax
eax.b = 1
return eax
