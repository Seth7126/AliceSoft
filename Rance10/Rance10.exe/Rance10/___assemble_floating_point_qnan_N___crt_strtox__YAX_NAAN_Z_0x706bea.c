// 函数: ??$assemble_floating_point_qnan@N@__crt_strtox@@YAX_NAAN@Z
// 地址: 0x706bea
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
eax.b = arg1 != 0
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(eax)
int32_t result = *arg2
arg2[1] = eax_1 << 0x1f | (arg2[1] & 0x7fffffff)
arg2[1] |= 0x7ff00000
*arg2 = result
*arg2 = 0xffffffff
arg2[1] |= 0xfffff
return result
