// 函数: sub_62fae0
// 地址: 0x62fae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result
result.b = *(arg1 + 0x15d)

if (result.b u< 8)
    int32_t ecx = *(arg1 + 0x5c)
    uint32_t edi_1 = zx.d(result.b)
    *(arg1 + 0x2c4) = 0x11
    
    if (ecx == 0)
        sub_62a520(arg1, "Call to NULL read function")
        noreturn
    
    int32_t eax_2 = ecx(arg1, arg2 + 0x20 + edi_1, 8 - edi_1)
    *(arg1 + 0x15d) = 8
    result = sub_627050(eax_2, edi_1, arg2 + 0x20, 8 - edi_1)
    
    if (result != 0)
        if (edi_1 u< 4 && sub_627050(8 - edi_1 - 4, edi_1, arg2 + 0x20, 8 - edi_1 - 4) != 0)
            sub_62a520(arg1, "Not a PNG file")
            noreturn
        
        sub_62a520(arg1, "PNG file corrupted by ASCII conversion")
        noreturn
    
    if (edi_1 u< 3)
        *(arg1 + 0x74) |= 0x1000

return result
