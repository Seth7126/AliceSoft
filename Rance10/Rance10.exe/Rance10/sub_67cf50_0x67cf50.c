// 函数: sub_67cf50
// 地址: 0x67cf50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HGDIOBJ ho = *(arg1 + 0x6c)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x6c) = 0

(*(*(arg1 + 0x34) + 4))()

if (sub_6ce000(arg1 + 0x68) == 0)
    return 0xffffffff

void* ecx_2 = *(arg1 + 0x98)

if (ecx_2 != 0)
    *(arg1 + 0x20) = *(ecx_2 + 0x10)
    *(arg1 + 0x2c) = (*(ecx_2 + 8) - *(ecx_2 + 4)) s>> 2

void* eax_7 = *(arg1 + 0x9c)

if (eax_7 != 0)
    sub_6ce330(arg1 + 4, 0xa02b, *(eax_7 + 4))

sub_67e190(arg1 + 0x18, arg2)
sub_67e310(arg1 + 0x24, arg2)
return 0
