// 函数: sub_488570
// 地址: 0x488570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 0x1c) u< 0x10
void** eax = arg1 + 8
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
*(arg1 + 0x20) = 5
__builtin_memset(arg1 + 0x24, 0, 0x49)
__builtin_memset(arg1 + 0x70, 0, 0x18)
__builtin_memset(arg1 + 0x90, 0, 0x35)
*(arg1 + 0x8c) = 2
*(arg1 + 0x88) = 2
__builtin_memset(arg1 + 0xc8, 0, 0x11)
__builtin_memset(arg1 + 0xdc, 0, 0x31)
__builtin_memset(arg1 + 0x110, 0, 0x29)
bool cond:1 = *(arg1 + 0x14c) u< 0x10
*(arg1 + 0x148) = 0

if (cond:1)
    return eax

char* eax_1 = *(arg1 + 0x138)
*eax_1 = 0
return eax_1
