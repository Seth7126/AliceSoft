// 函数: sub_5a8f60
// 地址: 0x5a8f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* edx = data_75d508
    
    if (arg3 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
        void* edi_1 = *(*(edx + 0x50) + (arg3 << 2))
        
        if (edi_1 != 0 && edi_1 != 0xffffffec && arg2 s>= 0
                && arg2 s< (*(edi_1 + 0x200) - *(edi_1 + 0x1fc)) s/ 0x38)
            arg1.b = arg4
            *(*(edi_1 + 0x1fc) + arg2 * 0x38 + 0x34) = arg1.b
            arg1.b = 1
            return arg1

arg1.b = 0
return arg1
