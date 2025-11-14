// 函数: sub_5282f0
// 地址: 0x5282f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
        ecx[-3] = 0x3f800000
        ecx[-2] = 0
        ecx[-1] = 0
        *ecx = 0
        ecx[1] = 0x3f800000
        ecx[2] = 0x3f800000
        ecx[3].b = 1
    
    ecx = &ecx[0xe]
    i = arg2
    arg2 -= 1
while (i != 1)
