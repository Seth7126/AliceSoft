// 函数: sub_6c8253
// 地址: 0x6c8253
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 - 0x80) & 1

if (result == 0)
    return result

*(arg1 - 0x80) &= 0xfffffffe
return sub_401fb0(arg1 - 0x44) __tailcall
