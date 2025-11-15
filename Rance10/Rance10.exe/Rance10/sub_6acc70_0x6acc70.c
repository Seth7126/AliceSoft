// 函数: sub_6acc70
// 地址: 0x6acc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
result.b = *(arg1 + 0x15d)

if (result.b u< 8)
    uint32_t edi_1 = zx.d(result.b)
    *(arg1 + 0x2c4) = 0x11
    int32_t ecx = *(arg1 + 0x5c)
    
    if (ecx == 0)
        sub_6a7500(arg1, "Call to NULL read function")
        noreturn
    
    int32_t eax_2 = ecx(arg1, arg2 + 0x20 + edi_1, 8 - edi_1)
    *(arg1 + 0x15d) = 8
    result = sub_6a3ea0(eax_2, edi_1, arg2 + 0x20, 8 - edi_1)
    
    if (result != 0)
        if (edi_1 u< 4 && sub_6a3ea0(8 - edi_1 - 4, edi_1, arg2 + 0x20, 8 - edi_1 - 4) != 0)
            sub_6a7500(arg1, "Not a PNG file")
            noreturn
        
        sub_6a7500(arg1, "PNG file corrupted by ASCII conversion")
        noreturn
    
    if (edi_1 u< 3)
        *(arg1 + 0x74) |= 0x1000

return result
