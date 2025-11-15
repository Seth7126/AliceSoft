// 函数: sub_520730
// 地址: 0x520730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = arg1 + 0x150

if (arg1 + 0xc0 != eax)
    eax = sub_403590(arg1 + 0xc0, eax, 0, 0xffffffff)

bool cond:0 = *(arg1 + 0xec) u< 0x10
*(arg1 + 0xe8) = 0

if (cond:0)
    *(arg1 + 0xd8) = 0
    *(arg1 + 0xb0) = 0
    return eax

char* eax_1 = *(arg1 + 0xd8)
*eax_1 = 0
*(arg1 + 0xb0) = 0
return eax_1
