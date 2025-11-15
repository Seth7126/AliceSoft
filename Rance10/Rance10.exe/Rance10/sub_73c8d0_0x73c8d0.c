// 函数: sub_73c8d0
// 地址: 0x73c8d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x28) & 1

if (result == 0)
    return result

*(arg1 - 0x28) &= 0xfffffffe
return sub_4f23d0(*(arg1 + 8)) __tailcall
