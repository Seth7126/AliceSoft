// 函数: sub_4e0470
// 地址: 0x4e0470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg1 + 0x13c

if (arg1 + 0xa8 != eax)
    eax = sub_401ff0(arg1 + 0xa8, eax, 0, 0xffffffff)

bool cond:0 = *(arg1 + 0xd4) u< 0x10
*(arg1 + 0xd0) = 0

if (cond:0)
    *(arg1 + 0xc0) = 0
    *(arg1 + 0x98) = 0
    return eax

char* eax_1 = *(arg1 + 0xc0)
*eax_1 = 0
*(arg1 + 0x98) = 0
return eax_1
