// 函数: sub_52c340
// 地址: 0x52c340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* ebx = arg4
int64_t* esi = arg3 + 0xc
void* edi = ebx + 0xc

do
    *(edi - 4) = *(esi - 4)
    *edi = *esi
    *(edi + 8) = esi[1].d
    *(edi + 0xc) = *(esi + 0xc)
    *(edi + 0x14) = *(esi + 0x14)
    *(edi + 0x18) = esi[3].d
    *(edi + 0x1c) = *(esi + 0x1c)
    sub_4a6db0(edi + 0x20, &esi[4])
    esi = &esi[7]
    ebx += 0x38
    edi += 0x38
while (esi - 0xc != arg2)

return ebx
