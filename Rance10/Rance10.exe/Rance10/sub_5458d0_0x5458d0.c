// 函数: sub_5458d0
// 地址: 0x5458d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg1)

if (eax == 0)
    return 0xffffffff

void* esi = *(eax + 0x44)
sub_555e00(esi, 0x1b, arg2)
return *(*(esi + (arg2 << 2) + 0x7c) + 0x7c)
