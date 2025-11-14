// 函数: sub_5d6460
// 地址: 0x5d6460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    void* edi_1 = *(*(arg1 + 8) + (arg2 << 2))
    
    if (edi_1 != 0)
        int32_t esi = *(edi_1 + 0x30)
        int32_t esi_1 = esi - 1
        
        if (esi - 1 s>= 0)
            while (true)
                switch (*(*(edi_1 + 0x2c) + (esi_1 << 2)))
                    case 0, 0xa, 0xb, 0x1b, 0x2f
                    label_5d64ca:
                        int32_t temp2_1 = esi_1
                        esi_1 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            break
                        
                        continue
                    case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                            0x19, 0x1e, 0x1f, 0x20, 0x32, 0x33, 0x34, 0x3f, 0x42, 0x43, 0x44
                        if (esi_1 u< *(edi_1 + 0xc) u>> 2)
                            int32_t eax_4
                            
                            if (*(edi_1 + 0xc) != 0)
                                eax_4 = *(edi_1 + 8)
                            else
                                eax_4 = 0
                            
                            result = *(eax_4 + (esi_1 << 2))
                            
                            if (result == 0xffffffff)
                                goto label_5d64ca
                            
                            if (sub_5d5fc0(arg1, result).b != 0)
                                goto label_5d64ca
                
                result.b = 0
                return result
        
        result.b = 1
        return result

result.b = 0
return result
