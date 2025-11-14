// 函数: sub_5a8bb0
// 地址: 0x5a8bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s< 0)
    return 

void* edx = data_75d508

if (arg1 s>= (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
    return 

void* edi_1 = *(*(edx + 0x50) + (arg1 << 2))

if (edi_1 == 0 || edi_1 == 0xffffffec)
    return 

if (arg2 s>= 0 && arg2 s< (*(edi_1 + 0x200) - *(edi_1 + 0x1fc)) s/ 0x38)
    *(*(edi_1 + 0x1fc) + arg2 * 0x38 + 0x30)
