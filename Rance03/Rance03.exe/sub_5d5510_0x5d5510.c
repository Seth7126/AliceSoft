// 函数: sub_5d5510
// 地址: 0x5d5510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi_1 = *(arg2 + 0xc) u>> 2

if (edi_1 s< 3)
    return 1

int32_t ebx_1

if (*(arg2 + 0xc) != 0)
    ebx_1 = *(arg2 + 8)
else
    ebx_1 = 0

int32_t esi = 0

if (edi_1 s> 0)
    do
        if (sub_5d5100(arg1, *(ebx_1 + (esi << 2)), *(ebx_1 + (esi << 2) + 4)) == 0)
            return 0
        
        esi += 3
    while (esi s< edi_1)

return 1
