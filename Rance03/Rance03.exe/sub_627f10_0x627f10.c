// 函数: sub_627f10
// 地址: 0x627f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result = zx.d(*(arg2 + 0x72))

if ((result & 0x8000) != 0)
    *(arg2 + 8) &= 0xffffe7fa
    return sub_6275c0(result, arg2, arg1, 0x10, 0xffffffff)

if (result.b s>= 0)
    *(arg2 + 8) &= 0xfffff7ff
else
    *(arg2 + 8) |= 0x800

if ((result.b & 2) == 0)
    *(arg2 + 8) &= 0xfffffffb
else
    *(arg2 + 8) |= 4

if ((result.b & 1) == 0)
    *(arg2 + 8) &= 0xfffffffe
    return result

*(arg2 + 8) |= 1
return result
