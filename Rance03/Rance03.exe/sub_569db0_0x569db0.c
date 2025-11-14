// 函数: sub_569db0
// 地址: 0x569db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edx = arg4
void* esi = arg3 + 0x10
void* edi = &edx[4]

do
    int32_t eax = *(esi - 0x10)
    esi += 0x1c
    *edx = eax
    edi += 0x1c
    edx = &edx[7]
    *(edi - 0x28) = *(esi - 0x28)
    *(edi - 0x20) = *(esi - 0x20)
    *(edi - 0x1c) = *(esi - 0x1c)
    *(edi - 0x18) = *(esi - 0x18)
    *(edi - 0x14) = *(esi - 0x14)
while (esi - 0x10 != arg2)

return edx
