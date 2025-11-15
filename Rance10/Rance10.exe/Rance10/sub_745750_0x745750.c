// 函数: sub_745750
// 地址: 0x745750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_630db0(*(arg1 - 0x14)) __tailcall
