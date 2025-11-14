// 函数: sub_516200
// 地址: 0x516200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_4b51e0(arg1 + 0xd4)
int32_t ebx = *(arg1 + 0xcc)
int32_t* esi = *(arg1 + 0xc8)

if (esi == ebx)
    *(arg1 + 0xcc) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[7]
while (esi != ebx)

int32_t eax_2 = *(arg1 + 0xc8)
*(arg1 + 0xcc) = eax_2
return eax_2
