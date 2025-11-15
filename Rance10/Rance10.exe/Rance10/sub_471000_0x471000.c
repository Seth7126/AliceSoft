// 函数: sub_471000
// 地址: 0x471000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x20) = 0
*(arg1 + 0x1c) = 1
int32_t ebx = *(arg1 + 0x14)

for (int32_t* i = *(arg1 + 0x10); i != ebx; i = &i[0xe])
    sub_408940(i)

*(arg1 + 0x14) = *(arg1 + 0x10)
int32_t ebx_1 = *(arg1 + 8)
int32_t* esi = *(arg1 + 4)

if (esi == ebx_1)
    *(arg1 + 8) = esi
    return esi

do
    sub_408940(esi)
    esi = &esi[0xe]
while (esi != ebx_1)

int32_t eax_1 = *(arg1 + 4)
*(arg1 + 8) = eax_1
return eax_1
