// 函数: sub_5b0910
// 地址: 0x5b0910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* edi = arg4
void* edx = arg2 + 0x18
int32_t* esi = edi + 0x18

do
    int32_t eax = *(edx - 0x3c)
    edx -= 0x24
    *(edi - 0x24) = eax
    esi = &esi[-9]
    edi -= 0x24
    esi[-5] = *(edx - 0x14)
    *(esi - 0xc) = *(edx - 0xc)
    esi[-1] = *(edx - 4)
    *esi = *edx
    esi[1] = *(edx + 4)
    esi[2] = *(edx + 8)
while (edx - 0x18 != arg3)

return edi
