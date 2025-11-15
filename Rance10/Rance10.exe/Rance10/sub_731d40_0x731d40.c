// 函数: sub_731d40
// 地址: 0x731d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_4ab200(*(arg1 - 0x14)) __tailcall
