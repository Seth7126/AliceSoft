// 函数: sub_55ac20
// 地址: 0x55ac20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_559960(arg1 + 0xcc)
int32_t ebx = *(arg1 + 0xdc)
int32_t* esi = *(arg1 + 0xd8)

if (esi == ebx)
    *(arg1 + 0xdc) = esi
    return esi

do
    (**esi)(0)
    esi = &esi[7]
while (esi != ebx)

int32_t eax_2 = *(arg1 + 0xd8)
*(arg1 + 0xdc) = eax_2
return eax_2
