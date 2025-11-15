// 函数: sub_632060
// 地址: 0x632060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[4] u< arg2)
    sub_6d0947("invalid string position")
    noreturn

arg1[4] = arg2
int32_t esi

if (arg1[5] u< 8)
    int32_t var_4_1 = esi
    *(arg1 + (arg2 << 1)) = 0
    return arg1

int32_t var_4 = esi
*(*arg1 + (arg2 << 1)) = 0
return arg1
