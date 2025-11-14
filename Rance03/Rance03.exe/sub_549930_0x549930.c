// 函数: sub_549930
// 地址: 0x549930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx
int128_t xmm0_1

if (arg3 == 0 || (arg3 s> 3 && arg3 s<= 5))
    ecx = arg2
    *(ecx + 0x50) = *(arg1 + 0x90)
    xmm0_1 = *(arg1 + 0xa0)
else
    ecx = arg2
    *(ecx + 0x50) = data_709450
    xmm0_1 = zx.o(0)

*(ecx + 0x60) = xmm0_1
*(ecx + 0x70) = 0x3f800000
int32_t result = *(arg1 + 0xb4)
*(ecx + 0xd8) = result
return result
