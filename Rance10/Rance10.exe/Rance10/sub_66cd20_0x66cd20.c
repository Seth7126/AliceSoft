// 函数: sub_66cd20
// 地址: 0x66cd20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

_memset(arg1, 0, 0x100)
uint32_t esi = zx.d(*(*arg2 + arg3))
uint32_t ecx_1 = zx.d(*(arg2[1] + arg3))
int32_t result = (esi - 0x100 + ecx_1) << 5
arg1[2][0] = (esi - ecx_1) << 5
*arg1 = result
return result
