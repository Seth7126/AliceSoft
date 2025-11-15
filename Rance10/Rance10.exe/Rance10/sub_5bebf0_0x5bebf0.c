// 函数: sub_5bebf0
// 地址: 0x5bebf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return 

int32_t* ecx = arg1 + 0x28
int32_t i

do
    if (ecx != 0x28)
        ecx[-5] = 0xf
        ecx[-6] = 0
        ecx[-0xa].b = 0
        ecx[-4] = 0xffffffff
        ecx[-3] = 0x3dcccccd
        ecx[-2] = 0
        ecx[-1] = 0
        *ecx = 0
        ecx[1] = 0x3f800000
        *(ecx + 8) = data_7fd4d8.q
        ecx[4] = data_7fd4e0
    
    ecx = &ecx[0xf]
    i = arg2
    arg2 -= 1
while (i != 1)
