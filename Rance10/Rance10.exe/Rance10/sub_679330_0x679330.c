// 函数: sub_679330
// 地址: 0x679330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1[1]

if (arg2 != 1)
    *(*arg1 + 0x14) = 0xf
    *(*arg1 + 0x18) = arg2
    (**arg1)(arg1)

void* result = sub_678fc0(arg1, arg2, 0x78)
*(result + 4) = arg5
*(result + 8) = arg4
*(result + 0xc) = arg6
int32_t ecx_2
ecx_2.b = arg3
*result = 0
*(result + 0x20) = ecx_2.b
*(result + 0x22) = 0
*(result + 0x24) = *(ebx + 0x44)
*(ebx + 0x44) = result
return result
