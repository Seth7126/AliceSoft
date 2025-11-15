// 函数: sub_72cc38
// 地址: 0x72cc38
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x80) & 1

if (result == 0)
    return result

*(arg1 - 0x80) &= 0xfffffffe
return sub_403320(*(arg1 - 0x84)) __tailcall
