// 函数: sub_5fb670
// 地址: 0x5fb670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
int32_t* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    (**esi)(0)
    esi = &esi[4]
while (esi != ebx)

int32_t eax_2 = *arg1
arg1[1] = eax_2
return eax_2
