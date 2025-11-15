// 函数: sub_4d5000
// 地址: 0x4d5000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* esi = arg3

if (esi == arg2)
    return arg4

int128_t* edi = arg4

do
    sub_526cb0(edi, esi)
    sub_4d5050(&edi[0xc], &esi[0xc])
    esi += 0xcc
    edi += 0xcc
while (esi != arg2)

return edi
