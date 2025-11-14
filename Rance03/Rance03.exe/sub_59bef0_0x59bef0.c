// 函数: sub_59bef0
// 地址: 0x59bef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_59bf90(arg1)
int32_t var_14 = 0x3f800000
int32_t var_18 = 0x3f800000
char xmm0_1 = _mm_cvtepi32_ps(zx.o(arg3))
int32_t var_1c

if (sub_59b800(arg1 + 0xc, (zx.o(0)).d, (zx.o(0)).d, arg4, _mm_cvtepi32_ps(zx.o(arg2)), xmm0_1, 1, 
        var_1c) != 0 && sub_58d270(arg1 + 0x38, arg3, arg2, arg3, 1, 0, 0, arg4) != 0
        && sub_52b030(arg1 + 0x54, arg3, 1, arg2, arg3, 3, arg4, 0, 1) != 0)
    *(arg1 + 8) = arg3
    *(arg1 + 4) = arg2
    return 1

return 0
