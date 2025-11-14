// 函数: sub_5a9a90
// 地址: 0x5a9a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s< 0)
    return 

void* esi_1 = data_75d508

if (arg1 s>= (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
    return 

void* ecx = *(*(esi_1 + 0x50) + (arg1 << 2))

if (ecx == 0)
    return 

void* ecx_1 = *(ecx + 0x1c8)

if (arg2 s>= 0 && arg2 s< (*(ecx_1 + 0x14) - *(ecx_1 + 0x10)) s>> 2)
    *(*(ecx_1 + 0x10) + (arg2 << 2))
