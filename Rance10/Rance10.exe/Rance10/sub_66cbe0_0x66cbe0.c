// 函数: sub_66cbe0
// 地址: 0x66cbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

_memset(arg1, 0, 0x100)
void* eax = *arg2
uint32_t ecx = zx.d(*(eax + arg3 + 1))
uint32_t edx = zx.d(*(eax + arg3))
*arg1 = ((ecx + edx) << 3) + 0xfffff800
(*arg1)[1] = (edx - ecx) << 3
void* eax_3 = arg2[1]
uint32_t ecx_1 = zx.d(*(eax_3 + arg3 + 1))
uint32_t edx_3 = zx.d(*(eax_3 + arg3))
arg1[2][0] = ((ecx_1 + edx_3) << 3) + 0xfffff800
(*arg1)[9] = (edx_3 - ecx_1) << 3
void* eax_6 = arg2[2]
uint32_t ebx = (*arg1)[9]
uint32_t ecx_2 = zx.d(*(eax_6 + arg3 + 1))
uint32_t edx_6 = zx.d(*(eax_6 + arg3))
arg1[4][0] = ((ecx_2 + edx_6) << 3) + 0xfffff800
(*arg1)[0x11] = (edx_6 - ecx_2) << 3
void* eax_9 = arg2[3]
uint32_t edi_1 = arg1[2][0]
uint32_t ecx_3 = zx.d(*(eax_9 + arg3 + 1))
uint32_t edx_9 = zx.d(*(eax_9 + arg3))
uint32_t esi_1 = *arg1
arg1[6][0] = ((ecx_3 + edx_9) << 3) + 0xfffff800
(*arg1)[0x19] = (edx_9 - ecx_3) << 3
void* edx_12 = esi_1 + ((ecx_3 + edx_9) << 3) + 0xfffff800
uint32_t eax_12 = arg1[4][0]
uint32_t esi_2 = esi_1 - arg1[6][0]
uint32_t ecx_4 = edi_1 + eax_12
uint32_t edi_2 = edi_1 - eax_12
*arg1 = ecx_4 + edx_12
arg1[4][0] = edx_12 - ecx_4
arg1[2][0] = (esi_2 * 0x187e + (edi_2 + esi_2) * 0x1151 + 0x1000) s>> 0xd
uint32_t edi_3 = (*arg1)[1]
uint32_t eax_19 = (*arg1)[0x11]
arg1[6][0] = ((edi_2 + esi_2) * 0x1151 + 0x1000 - edi_2 * 0x3b21) s>> 0xd
uint32_t ecx_9 = (*arg1)[0x19]
uint32_t edx_14 = ebx + eax_19
uint32_t ebx_1 = ebx - eax_19
uint32_t esi_3 = edi_3 + ecx_9
uint32_t edi_4 = edi_3 - ecx_9
(*arg1)[1] = edx_14 + esi_3
(*arg1)[0x11] = esi_3 - edx_14
(*arg1)[9] = (edi_4 * 0x187e + (ebx_1 + edi_4) * 0x1151 + 0x1000) s>> 0xd
int32_t result = ebx_1 * 0x3b21
(*arg1)[0x19] = ((ebx_1 + edi_4) * 0x1151 + 0x1000 - result) s>> 0xd
return result
