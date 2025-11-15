// 函数: ?align@std@@YAPAXIIAAPAXAAI@Z
// 地址: 0x6d557f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *arg3
int32_t edx_1 = (arg1 - 1) & ebx

if (edx_1 u> 0)
    edx_1 = arg1 - edx_1

int32_t ecx = *arg4

if (ecx u< edx_1 || ecx - edx_1 u< arg2)
    return 0

*arg3 = ebx + edx_1
*arg4 -= edx_1
return *arg3
