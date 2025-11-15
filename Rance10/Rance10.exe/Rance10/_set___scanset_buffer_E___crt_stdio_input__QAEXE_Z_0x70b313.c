// 函数: ?set@?$scanset_buffer@E@__crt_stdio_input@@QAEXE@Z
// 地址: 0x70b313
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = zx.d(arg2)
uint32_t edx_1 = esi u>> 3
int32_t esi_1 = esi & 0x80000007

if (esi_1 s< 0)
    esi_1 = ((esi_1 - 1) | 0xfffffff8) + 1

char result = *(edx_1 + arg1) | (1 << (esi_1 u% 0x20)).b
*(edx_1 + arg1) = result
return result
