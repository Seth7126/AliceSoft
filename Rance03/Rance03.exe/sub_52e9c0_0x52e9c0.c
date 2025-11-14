// 函数: sub_52e9c0
// 地址: 0x52e9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

void* esi = arg4
void* ecx = arg3 + 8

do
    int32_t eax = *(ecx - 4)
    ecx += 0x14
    *(esi + 4) = eax
    *(esi + 8) = *(ecx - 0x14)
    *(esi + 0xc) = *(ecx - 0x10)
    *(esi + 0x10) = *(ecx - 0xc)
    esi += 0x14
while (ecx - 8 != arg2)

return esi
