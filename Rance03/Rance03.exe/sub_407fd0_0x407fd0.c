// 函数: sub_407fd0
// 地址: 0x407fd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax

if (arg2[5] u< 0x10)
    eax = arg2
else
    eax = *arg2

if (*eax != 0x5c)
    return 0

if (arg2[5] u>= 0x10)
    arg2 = *arg2

switch (sx.d(*(arg2 + 1)) - 0x22)
    case 0
        *arg1 = 0x22
        return 2
    case 5
        *arg1 = 0x27
        return 2
    case 0x3a
        *arg1 = 0x5c
        return 2
    case 0x4c
        *arg1 = 0xa
        return 2
    case 0x50
        *arg1 = 0xd
        return 2
    case 0x52
        *arg1 = 9
        return 2

*arg1 = 0x5c
return 1
