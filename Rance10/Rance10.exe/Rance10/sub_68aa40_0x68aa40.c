// 函数: sub_68aa40
// 地址: 0x68aa40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t ebx = *(arg1 + 0x14)

for (int32_t* i = *(arg1 + 0x10); i != ebx; i = &i[2])
    (**i)(0)

*(arg1 + 0x14) = *(arg1 + 0x10)
int32_t ebx_1 = *(arg1 + 8)
int32_t* esi = *(arg1 + 4)

if (esi == ebx_1)
    *(arg1 + 8) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[2]
while (esi != ebx_1)

int32_t eax_4 = *(arg1 + 4)
*(arg1 + 8) = eax_4
return eax_4
