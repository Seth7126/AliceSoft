// 函数: sub_631a20
// 地址: 0x631a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = arg1[5] u< 8
arg1[4] = arg2

if (cond:0)
    *(arg1 + (arg2 << 1)) = 0
    return 0

int32_t result = *arg1
*(result + (arg2 << 1)) = 0
return result
