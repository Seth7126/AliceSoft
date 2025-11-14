// 函数: sub_5838f0
// 地址: 0x5838f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_1 = 3
void* edx = arg2 + 0x10
int32_t* eax = arg1 + 8
int32_t i

do
    edx += 0x3c
    *eax = *(arg2 - arg1 + eax)
    eax = &eax[0xf]
    eax[-0xe] = *(edx - 0x40)
    eax[-0xd] = *(edx - 0x3c)
    eax[-0xc] = *(edx - 0x38)
    eax[-0xb] = *(edx - 0x34)
    eax[-0xa] = *(edx - 0x30)
    eax[-9] = *(edx - 0x2c)
    eax[-8] = *(edx - 0x28)
    eax[-7] = *(edx - 0x24)
    eax[-6] = *(edx - 0x20)
    eax[-5] = *(edx - 0x1c)
    eax[-4] = *(edx - 0x18)
    eax[-3] = *(edx - 0x14)
    eax[-2] = *(edx - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
eax.b = *(arg2 + 0xb8)
*(arg1 + 0xb8) = eax.b
return arg1
