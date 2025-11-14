// 函数: sub_47b390
// 地址: 0x47b390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_1 = 4
void* esi = arg2 + 0xc
void* edx = arg1 + 4
int32_t i

do
    edx += 0x10
    *(edx - 0x14) = *(esi - 0xc)
    esi += 0x10
    *(edx - 0x10) = *(arg2 - arg1 + edx - 0x10)
    *(edx - 0xc) = *(esi - 0x14)
    *(edx - 8) = *(esi - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
