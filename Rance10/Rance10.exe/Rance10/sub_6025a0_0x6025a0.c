// 函数: sub_6025a0
// 地址: 0x6025a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_4 = arg1[1]
int32_t esi = *arg1

if (arg3 s< 0 && edx_4 u< neg.d(arg3))
    int32_t edx = edx_4 + arg3
    *arg2 = esi + 0xfffffffc - ((0xffffffff - edx) u>> 5 << 2)
    arg2[1] = edx & 0x1f
    return arg2

int32_t edx_2 = edx_4 + arg3
*arg2 = esi + (edx_2 u>> 5 << 2)
arg2[1] = edx_2 & 0x1f
return arg2
