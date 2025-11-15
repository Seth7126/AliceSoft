// 函数: sub_745100
// 地址: 0x745100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x18) & 1

if (result == 0)
    return result

*(arg1 - 0x18) &= 0xfffffffe
return sub_60ffd0(*(arg1 - 0x20)) __tailcall
