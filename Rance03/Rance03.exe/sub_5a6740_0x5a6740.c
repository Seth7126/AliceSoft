// 函数: sub_5a6740
// 地址: 0x5a6740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s< 0)
    return 

void* esi_1 = data_75d508

if (arg1 s>= (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
    return 

void* ecx = *(*(esi_1 + 0x50) + (arg1 << 2))

if (ecx == 0 || arg2 s< 0 || arg2 s>= (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
    return 

int32_t eax = *(*(ecx + 0x1c) + (arg2 << 2))

if (eax != 0)
    *(eax + 0x1f0)
