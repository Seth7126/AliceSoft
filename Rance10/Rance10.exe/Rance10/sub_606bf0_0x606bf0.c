// 函数: sub_606bf0
// 地址: 0x606bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return 

int32_t* eax = arg1 + 0x20
int32_t i

do
    if (eax != 0x20)
        __builtin_memset(&eax[-8], 0, 0x20)
        *eax = 0
        eax[-3] = 0xf
        eax[-4] = 0
        eax[-8].b = 0
        eax[-2] = 0
        eax[-1] = 0
        *eax = 0
    
    eax = &eax[9]
    i = arg2
    arg2 -= 1
while (i != 1)
