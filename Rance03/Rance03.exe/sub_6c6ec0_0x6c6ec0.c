// 函数: sub_6c6ec0
// 地址: 0x6c6ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 - 0x40) & 1

if (result == 0)
    return result

*(arg1 - 0x40) &= 0xfffffffe
return sub_401fb0(*(arg1 - 0x3c)) __tailcall
