// 函数: sub_5434a0
// 地址: 0x5434a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 + 0x1e4)
int32_t* esi = *(arg1 + 0x1e0)

if (esi == ebx)
    *(arg1 + 0x1e4) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[0xb]
while (esi != ebx)

int32_t eax_2 = *(arg1 + 0x1e0)
*(arg1 + 0x1e4) = eax_2
return eax_2
