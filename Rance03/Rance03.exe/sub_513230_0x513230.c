// 函数: sub_513230
// 地址: 0x513230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x3c) != 0)
    return int.d(fconvert.t(*(arg1 + 0x1c)))

void* ebx = arg1 + 0x1c
void* esi = ebx

if (*(arg1 + 0x24) f> *(arg1 + 0x1c))
    esi = arg1 + 0x24

void* edi_1 = arg1 + 0xc
void* edx = edi_1

if (*(arg1 + 0x14) f> *edi_1)
    edx = arg1 + 0x14

if (*ebx f> *(arg1 + 0x24))
    ebx = arg1 + 0x24

if (*edi_1 f> *(arg1 + 0x14))
    edi_1 = arg1 + 0x14

if (*esi f> *edx)
    edx = esi

if (*edi_1 f> *ebx)
    edi_1 = ebx

return int.d(*edx f- *edi_1)
