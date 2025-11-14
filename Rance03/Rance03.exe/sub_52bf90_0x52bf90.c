// 函数: sub_52bf90
// 地址: 0x52bf90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 + 8)
int32_t* esi = *(arg1 + 4)

if (esi == ebx)
    *(arg1 + 8) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[0xe]
while (esi != ebx)

int32_t eax_2 = *(arg1 + 4)
*(arg1 + 8) = eax_2
return eax_2
