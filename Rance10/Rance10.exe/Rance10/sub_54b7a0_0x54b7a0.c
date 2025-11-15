// 函数: sub_54b7a0
// 地址: 0x54b7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 + 0x80)
int32_t* esi = *(arg1 + 0x7c)

if (esi == ebx)
    *(arg1 + 0x80) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[0x32]
while (esi != ebx)

int32_t eax_2 = *(arg1 + 0x7c)
*(arg1 + 0x80) = eax_2
return eax_2
