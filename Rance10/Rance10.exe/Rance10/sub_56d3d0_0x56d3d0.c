// 函数: sub_56d3d0
// 地址: 0x56d3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

void* edi = arg4
void* ecx = arg3 + 0xc
void* esi = edi + 0xc

do
    int32_t eax = *(ecx - 4)
    ecx += 0x1c
    *(esi - 4) = eax
    esi += 0x1c
    edi += 0x1c
    *(esi - 0x1c) = *(ecx - 0x1c)
    *(esi - 0x14) = *(ecx - 0x14)
    *(esi - 0x10) = *(ecx - 0x10)
while (ecx - 0xc != arg2)

return edi
