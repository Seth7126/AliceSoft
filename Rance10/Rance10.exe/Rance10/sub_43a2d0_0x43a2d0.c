// 函数: sub_43a2d0
// 地址: 0x43a2d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg4
void* ebp = arg2
arg4 = 8
int32_t result = ebp << 1
void* edx_1 = arg5 * 2
arg2 = edx_1
void* i

do
    *(result + *(arg1 + 0x14)) = *(edx_1 + result + *(ebx + 0x14))
    *(result + *(arg1 + 0x14) + 2) = *(*(ebx + 0x14) + arg2 + result + 2)
    *(result + *(arg1 + 0x14) + 4) = *((arg5 << 1) + 4 + result + *(ebx + 0x14))
    *(result + *(arg1 + 0x14) + 6) = *((arg5 << 1) + 6 + result + *(ebx + 0x14))
    *(result + *(arg1 + 0x14) + 8) = *((arg5 << 1) + 8 + result + *(ebx + 0x14))
    *(result + *(arg1 + 0x14) + 0xa) = *((arg5 << 1) + 0xa + result + *(ebx + 0x14))
    *(result + *(arg1 + 0x14) + 0xc) = *((arg5 << 1) + 0xc + result + *(ebx + 0x14))
    *(result + *(arg1 + 0x14) + 0xe) = *((arg5 << 1) + 0xe + result + *(ebx + 0x14))
    result += arg3 * 2
    edx_1 = arg2
    ebp = ebp + 8 + arg3 - 8
    i = arg4
    arg4 -= 1
while (i != 1)
return result
