// 函数: sub_54b9b0
// 地址: 0x54b9b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    return 

int32_t* eax = arg1 + 0x28
int32_t i

do
    if (eax != 0x28)
        eax[-5] = 0xf
        eax[-6] = 0
        eax[-0xa].b = 0
        eax[-4] = 0xffffffff
        eax[-3] = 0xffffffff
        eax[-2] = 0
        eax[-1] = 0
        *eax = 0
    
    eax = &eax[0xb]
    i = arg2
    arg2 -= 1
while (i != 1)
