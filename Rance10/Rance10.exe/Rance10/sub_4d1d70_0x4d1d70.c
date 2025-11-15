// 函数: sub_4d1d70
// 地址: 0x4d1d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 + 0x3c)
int128_t* esi = *(arg1 + 0x38)

if (esi == ebx)
    *(arg1 + 0x3c) = esi
    return esi

do
    sub_4aa740(esi)
    esi += 0xcc
while (esi != ebx)

int32_t eax = *(arg1 + 0x38)
*(arg1 + 0x3c) = eax
return eax
