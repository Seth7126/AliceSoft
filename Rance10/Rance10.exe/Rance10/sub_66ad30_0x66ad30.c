// 函数: sub_66ad30
// 地址: 0x66ad30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

_memset(arg1, 0, 0x100)
char* eax_2 = *arg2 + arg3
uint32_t edx = zx.d(*eax_2)
uint32_t ecx = zx.d(eax_2[1])
int32_t result = (edx - 0x100 + ecx) << 5
*arg1 = result
arg1[1] = (edx - ecx) << 5
return result
