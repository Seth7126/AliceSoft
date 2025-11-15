// 函数: sub_664280
// 地址: 0x664280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

_memset(arg1, 0, 0x100)
void* eax = *arg2
uint32_t ecx = zx.d(*(eax + arg3 + 1))
uint32_t ebx = zx.d(*(eax + arg3))
void* eax_1 = arg2[1]
uint32_t edi = ebx + ecx
uint32_t ebx_1 = ebx - ecx
uint32_t ecx_1 = zx.d(*(eax_1 + arg3 + 1))
uint32_t esi_1 = zx.d(*(eax_1 + arg3))
uint32_t edx_1 = esi_1 + ecx_1
uint32_t esi_2 = esi_1 - ecx_1
*arg1 = (edx_1 - 0x200 + edi) << 4
arg1[2][0] = (edi - edx_1) << 4
uint32_t result = (esi_2 + ebx_1) << 4
(*arg1)[9] = (ebx_1 - esi_2) << 4
(*arg1)[1] = result
return result
