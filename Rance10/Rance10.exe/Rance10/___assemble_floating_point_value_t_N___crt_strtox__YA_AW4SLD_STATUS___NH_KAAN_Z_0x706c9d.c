// 函数: ??$assemble_floating_point_value_t@N@__crt_strtox@@YA?AW4SLD_STATUS@@_NH_KAAN@Z
// 地址: 0x706c9d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(zx.d(arg1))
int32_t ecx = arg5[1]
*arg5 = *arg5
arg5[1] = eax_1 << 0x1f | (ecx & 0x7fffffff)
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q((arg2 + 0x3ff) & 0x7ff)
int32_t edx_2 = *arg5
int32_t eax_9 = eax_7 << 0x14 | (arg5[1] & 0x800fffff)
arg5[1] = eax_9
arg5[1] ^= (eax_9 ^ arg4) & 0xfffff
*arg5 = edx_2
*arg5 ^= edx_2 ^ arg3
return 0
