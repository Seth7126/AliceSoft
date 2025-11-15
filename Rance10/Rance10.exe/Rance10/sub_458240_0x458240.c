// 函数: sub_458240
// 地址: 0x458240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return 

void* eax = arg1 + 0x24
int32_t i

do
    if (eax != 0x24)
        *(eax - 0x10) = 0xf
        *(eax - 0x14) = 0
        *(eax - 0x24) = 0
        *(eax - 0xc) = 0
        *(eax - 8) = 0
        *(eax - 4) = 0
        __builtin_memset(eax, 0, 0x18)
    
    eax += 0x3c
    i = arg2
    arg2 -= 1
while (i != 1)
