// 函数: sub_5131c0
// 地址: 0x5131c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x3c) != 0)
    return int.d(fconvert.t(*(arg1 + 0x10)))

void* ebx = arg1 + 0x18
void* esi = ebx

if (*(arg1 + 0x20) f> *(arg1 + 0x18))
    esi = arg1 + 0x20

void* edi_1 = arg1 + 8
void* edx = edi_1

if (*(arg1 + 0x10) f> *edi_1)
    edx = arg1 + 0x10

if (*ebx f> *(arg1 + 0x20))
    ebx = arg1 + 0x20

if (*edi_1 f> *(arg1 + 0x10))
    edi_1 = arg1 + 0x10

if (*esi f> *edx)
    edx = esi

if (*edi_1 f> *ebx)
    edi_1 = ebx

return int.d(*edx f- *edi_1)
