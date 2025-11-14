// 函数: sub_5b0ac0
// 地址: 0x5b0ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* edi = arg4
void* edx = arg2 + 0x10
int32_t* esi = edi + 0x10

do
    int32_t eax = *(edx - 0x2c)
    edx -= 0x1c
    *(edi - 0x1c) = eax
    esi = &esi[-7]
    edi -= 0x1c
    esi[-3] = *(edx - 0xc)
    esi[-1] = *(edx - 4)
    *esi = *edx
    esi[1] = *(edx + 4)
    esi[2] = *(edx + 8)
while (edx - 0x10 != arg3)

return edi
