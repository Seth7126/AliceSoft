// 函数: sub_729678
// 地址: 0x729678
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x20) & 1

if (result == 0)
    return result

*(arg1 - 0x20) &= 0xfffffffe
return sub_4043e0(*(arg1 - 0x24)) __tailcall
