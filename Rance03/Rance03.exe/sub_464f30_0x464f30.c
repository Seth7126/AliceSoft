// 函数: sub_464f30
// 地址: 0x464f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x20) = 0
*(arg1 + 0x1c) = 0
int32_t ebx = *(arg1 + 0x14)

for (int32_t* i = *(arg1 + 0x10); i != ebx; i = &i[9])
    (**i)(0)

*(arg1 + 0x14) = *(arg1 + 0x10)
int32_t ebx_2 = *(arg1 + 8)
int32_t* esi = *(arg1 + 4)

if (esi == ebx_2)
    *(arg1 + 8) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[9]
while (esi != ebx_2)

int32_t eax_4 = *(arg1 + 4)
*(arg1 + 8) = eax_4
return eax_4
