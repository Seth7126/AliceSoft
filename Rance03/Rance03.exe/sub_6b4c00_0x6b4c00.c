// 函数: sub_6b4c00
// 地址: 0x6b4c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_401fb0(*(arg1 + 4)) __tailcall
