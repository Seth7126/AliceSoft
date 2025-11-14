// 函数: sub_5d4b10
// 地址: 0x5d4b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x48) == 0)
    return 1

if (*(arg1 + 0x38) != 0)
    uint32_t edi_2 = *(arg1 + 0xc) u>> 2
    int32_t edi_3 = edi_2 - 1
    
    if (edi_2 - 1 s>= 0)
        while (true)
            int32_t eax_1
            
            if (*(arg1 + 0xc) != 0)
                eax_1 = *(arg1 + 8)
            else
                eax_1 = 0
            
            if (sub_5d6620(*(arg1 + 0x1c), *(eax_1 + (edi_3 << 2))) == 0)
                return 0
            
            int32_t temp1_1 = edi_3
            edi_3 -= 1
            
            if (temp1_1 - 1 s< 0)
                return 1
else if (*(arg1 + 0x3c) == 0x11 && sub_5d4b70(arg1) == 0)
    return 0

return 1
