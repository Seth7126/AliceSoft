// 函数: sub_742020
// 地址: 0x742020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_601b50(*(arg1 - 0x14)) __tailcall
