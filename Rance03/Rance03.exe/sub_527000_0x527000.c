// 函数: sub_527000
// 地址: 0x527000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = data_75d508

if (arg1 s>= 0 && arg1 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
    void* ecx_1 = *(*(edx + 0x50) + (arg1 << 2))
    
    if (ecx_1 != 0 && arg2 s>= 0 && arg2 s< (*(ecx_1 + 0x20) - *(ecx_1 + 0x1c)) s>> 2)
        return *(*(ecx_1 + 0x1c) + (arg2 << 2))

return 0
