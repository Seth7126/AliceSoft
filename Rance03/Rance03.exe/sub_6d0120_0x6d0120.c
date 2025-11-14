// 函数: sub_6d0120
// 地址: 0x6d0120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 - 0x50) & 1

if (result == 0)
    return result

*(arg1 - 0x50) &= 0xfffffffe
return sub_401fb0(*(arg1 - 0x48)) __tailcall
