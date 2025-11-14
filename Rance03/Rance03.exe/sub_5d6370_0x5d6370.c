// 函数: sub_5d6370
// 地址: 0x5d6370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    void* esi_1 = *(*(arg1 + 8) + (arg2 << 2))
    
    if (esi_1 != 0)
        int32_t edi = *(esi_1 + 0x30)
        int32_t edi_1 = edi - 1
        
        if (edi - 1 s>= 0)
            while (true)
                switch (*(*(esi_1 + 0x2c) + (edi_1 << 2)))
                    case 0, 0xa, 0xb, 0x1b, 0x2f
                    label_5d63e4:
                        int32_t temp2_1 = edi_1
                        edi_1 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            break
                        
                        continue
                    case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                            0x19, 0x1e, 0x1f, 0x20, 0x32, 0x33, 0x34, 0x3f, 0x42, 0x43, 0x44
                        if (*(esi_1 + 0xc) != 0)
                            result = *(esi_1 + 8)
                        else
                            result = 0
                        
                        int32_t ecx = *(result + (edi_1 << 2))
                        
                        if (ecx == 0xffffffff)
                            goto label_5d63e4
                        
                        int32_t eax_3
                        
                        if (*(esi_1 + 0xc) != 0)
                            eax_3 = *(esi_1 + 8)
                        else
                            eax_3 = 0
                        
                        *(eax_3 + (edi_1 << 2)) = 0xffffffff
                        
                        if (sub_5d5e80(arg1, ecx).b != 0)
                            goto label_5d63e4
                
                result.b = 0
                return result
        
        result.b = 1
        return result

result.b = 0
return result
