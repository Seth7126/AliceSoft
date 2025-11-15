// 函数: sub_43a180
// 地址: 0x43a180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg4
void* ebp = arg2
arg4 = 8
int32_t result = ebp << 1
void* edx_1 = arg5 * 2
arg2 = edx_1
void* i

do
    *(result + *(arg1 + 8)) = *(edx_1 + result + *(ebx + 8))
    *(result + *(arg1 + 8) + 2) = *(*(ebx + 8) + arg2 + result + 2)
    *(result + *(arg1 + 8) + 4) = *((arg5 << 1) + 4 + result + *(ebx + 8))
    *(result + *(arg1 + 8) + 6) = *((arg5 << 1) + 6 + result + *(ebx + 8))
    *(result + *(arg1 + 8) + 8) = *((arg5 << 1) + 8 + result + *(ebx + 8))
    *(result + *(arg1 + 8) + 0xa) = *((arg5 << 1) + 0xa + result + *(ebx + 8))
    *(result + *(arg1 + 8) + 0xc) = *((arg5 << 1) + 0xc + result + *(ebx + 8))
    *(result + *(arg1 + 8) + 0xe) = *((arg5 << 1) + 0xe + result + *(ebx + 8))
    result += arg3 * 2
    edx_1 = arg2
    ebp = ebp + 8 + arg3 - 8
    i = arg4
    arg4 -= 1
while (i != 1)
return result
