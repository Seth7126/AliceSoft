// 函数: sub_72f220
// 地址: 0x72f220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x48) & 1

if (result == 0)
    return result

*(arg1 - 0x48) &= 0xfffffffe
return sub_403320(*(arg1 - 0x50)) __tailcall
