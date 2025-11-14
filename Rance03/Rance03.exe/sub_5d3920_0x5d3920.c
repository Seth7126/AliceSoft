// 函数: sub_5d3920
// 地址: 0x5d3920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x24) = arg4

if (arg2 s<= 0)
    *(arg1 + 0x30) = 0
else
    sub_64ad90(arg1 + 0x28, arg2)

*(arg1 + 0xc) = 0
void* esi = arg1 + 4
uint32_t eax_1 = sub_64aeb0(esi, arg2 << 2)

if (eax_1.b == 0)
    return eax_1

int32_t edx = 0
arg4 = 0

if (arg2 s> 0)
    eax_1 = 0
    uint32_t var_8_1 = 0
    
    while (true)
        void* ebx_2 = *arg3 + eax_1
        *(*(arg1 + 0x2c) + (edx << 2)) = *(ebx_2 + 0x18)
        uint32_t eax_3
        int32_t ebx_3
        uint32_t* esi_3
        
        switch (*(ebx_2 + 0x18))
            case 0, 0xa, 0xb, 0x1b, 0x2f
                if (*(esi + 8) != 0)
                    *(*(esi + 4) + (edx << 2)) = 0
                else
                    *(edx << 2) = 0
                
                goto label_5d3abe
            case 0xc
                int32_t edi_3 = *(arg1 + 0x1c)
                ebx_3 = sub_5d5dc0(edi_3)
                esi_3 = *(edi_3 + 8) + (ebx_3 << 2)
                eax_3 = sub_5d5920(edi_3 + 0x1c)
            label_5d3aa1:
                *esi_3 = eax_3
                
                if (ebx_3 s>= 0)
                    sub_5d3520(arg1, arg4, ebx_3)
                    edx = arg4
                    esi = arg1 + 4
                label_5d3abe:
                    edx += 1
                    eax_1 = var_8_1 + 0x28
                    arg4 = edx
                    var_8_1 = eax_1
                    
                    if (edx s>= arg2)
                        break
                    
                    continue
            case 0xd, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1f, 0x20, 0x33, 0x34, 0x43, 
                    0x44
                if (*(esi + 8) != 0)
                    *(*(esi + 4) + (edx << 2)) = 0xffffffff
                else
                    *(edx << 2) = 0xffffffff
                
                goto label_5d3abe
            case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
                int32_t edi_1 = *(arg1 + 0x1c)
                int32_t eax_6 = sub_5d5dc0(edi_1)
                *(*(edi_1 + 8) + (eax_6 << 2)) = sub_5d5980(edi_1 + 0x1c)
                
                if (eax_6 s>= 0)
                    void* ecx_6 = *(arg1 + 0x1c)
                    
                    if (eax_6 u< (*(ecx_6 + 0xc) - *(ecx_6 + 8)) s>> 2)
                        void* ecx_7 = *(*(ecx_6 + 8) + (eax_6 << 2))
                        
                        if (ecx_7 != 0)
                            esi = arg1 + 4
                            *(ecx_7 + 0x3c) = *(ebx_2 + 0x18)
                            *(ecx_7 + 0x40) = *(ebx_2 + 0x1c)
                            
                            if (*(esi + 8) != 0)
                                edx = arg4
                                *(*(esi + 4) + (edx << 2)) = eax_6
                            else
                                edx = arg4
                                *(edx << 2) = eax_6
                            
                            goto label_5d3abe
            case 0x3f
                int32_t edi_4 = *(arg1 + 0x1c)
                ebx_3 = sub_5d5dc0(edi_4)
                esi_3 = *(edi_4 + 8) + (ebx_3 << 2)
                eax_3 = sub_5d5ae0(edi_4 + 0x1c)
                goto label_5d3aa1
        
        eax_3.b = 0
        return eax_3

eax_1.b = 1
return eax_1
