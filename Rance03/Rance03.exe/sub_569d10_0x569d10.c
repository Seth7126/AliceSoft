// 函数: sub_569d10
// 地址: 0x569d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edx = arg4
void* esi = arg3 + 0x18
void* edi = &edx[6]

do
    int32_t eax = *(esi - 0x18)
    esi += 0x24
    *edx = eax
    edi += 0x24
    edx = &edx[9]
    *(edi - 0x38) = *(esi - 0x38)
    *(edi - 0x30) = *(esi - 0x30)
    *(edi - 0x28) = *(esi - 0x28)
    *(edi - 0x24) = *(esi - 0x24)
    *(edi - 0x20) = *(esi - 0x20)
    *(edi - 0x1c) = *(esi - 0x1c)
while (esi - 0x18 != arg2)

return edx
