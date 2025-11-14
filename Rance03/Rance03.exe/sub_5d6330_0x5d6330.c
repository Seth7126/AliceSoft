// 函数: sub_5d6330
// 地址: 0x5d6330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = sub_5d5dc0(arg1)
int32_t* eax_1 = sub_5d5920(arg1 + 0x1c)

if (eax_1 == 0)
    return 0xffffffff

*(*(arg1 + 8) + (result << 2)) = eax_1

if (sub_5d3d90(eax_1, arg2) == 0)
    return 0xffffffff

return result
