// 函数: sub_6256d0
// 地址: 0x6256d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax

if (*(arg1 + 0x14) != 0)
    eax = *(arg1 + 0x10)
else
    eax = nullptr

do
    arg1.b = *eax
    eax = &eax[1]
while (arg1.b != 0)

return eax - &eax[1] + 1
