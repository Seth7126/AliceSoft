// 函数: sub_427460
// 地址: 0x427460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

void* edi = arg4
void* esi = arg3 + 8

do
    *(edi + 4) = *(esi - 4)
    sub_4274a0(edi + 8, esi)
    int32_t ecx_1 = *(esi + 0xc)
    esi += 0x18
    *(edi + 0x14) = ecx_1
    edi += 0x18
while (esi - 8 != arg2)

return edi
