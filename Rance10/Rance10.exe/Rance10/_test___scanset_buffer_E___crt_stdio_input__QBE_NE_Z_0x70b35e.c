// 函数: ?test@?$scanset_buffer@E@__crt_stdio_input@@QBE_NE@Z
// 地址: 0x70b35e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edx = zx.d(arg2)
int32_t ecx_1 = edx & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

int32_t result
result.b = (*((edx u>> 3) + arg1) & (1 << ecx_1.b).b) != 0
return result
