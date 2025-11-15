// 函数: sub_745510
// 地址: 0x745510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_403320(*(arg1 - 0x1c)) __tailcall
