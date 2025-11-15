// 函数: sub_4ac500
// 地址: 0x4ac500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg4

void* edi = arg4
void* esi = arg3 + 0xd

do
    sub_4ac650(edi, esi - 0xd)
    char eax_1 = *(esi - 1)
    esi += 0x10
    *(edi + 0xc) = eax_1
    *(edi + 0xd) = *(esi - 0x10)
    *(edi + 0xe) = *(esi - 0xf)
    *(edi + 0xf) = *(esi - 0xe)
    edi += 0x10
while (esi - 0xd != arg2)

return edi
