// 函数: sub_56b5e0
// 地址: 0x56b5e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* edi = arg3

if (edi == arg2)
    return arg4

int128_t* esi = arg4

do
    *esi = *edi
    esi[1] = edi[1]
    esi[2].d = edi[2].d
    sub_4274a0(esi + 0x24, edi + 0x24)
    edi = &edi[3]
    esi = &esi[3]
while (edi != arg2)

return esi
