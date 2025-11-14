// 函数: sub_5a8e80
// 地址: 0x5a8e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0)
    void* edx = data_75d508
    
    if (arg1 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
        void* edi_1 = *(*(edx + 0x50) + (arg1 << 2))
        
        if (edi_1 != 0 && edi_1 != 0xffffffec && arg2 s>= 0
                && arg2 s< (*(edi_1 + 0x200) - *(edi_1 + 0x1fc)) s/ 0x38)
            *(*(edi_1 + 0x1fc) + arg2 * 0x38 + 0x2c) = arg3
            int32_t eax_6
            eax_6.b = 1
            return eax_6

int32_t eax
eax.b = 0
return eax
