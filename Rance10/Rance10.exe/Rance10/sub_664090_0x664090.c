// 函数: sub_664090
// 地址: 0x664090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t (* edi)[0x4] = arg1
_memset(edi, 0, 0x100)
void* ecx = *arg2
uint32_t eax = zx.d(*(ecx + arg3 + 2))
uint32_t esi = zx.d(*(ecx + arg3))
uint32_t ecx_1 = zx.d(*(ecx + arg3 + 1))
uint32_t edx = esi + eax
*edi = (ecx_1 - 0x180 + edx) << 4
(*edi)[2] = ((edx - ecx_1 * 2) * 0x16a1 + 0x100) s>> 9
(*edi)[1] = ((esi - eax) * 0x2731 + 0x100) s>> 9
void* eax_11 = arg2[1]
uint32_t ecx_2 = zx.d(*(eax_11 + arg3 + 2))
uint32_t edi_1 = zx.d(*(eax_11 + arg3))
uint32_t edx_2 = zx.d(*(eax_11 + arg3 + 1))
uint32_t esi_2 = ecx_2 + edi_1
arg1[8] = (edx_2 - 0x180 + esi_2) << 4
arg1[0xa] = ((esi_2 - edx_2 * 2) * 0x16a1 + 0x100) s>> 9
arg1[9] = ((edi_1 - ecx_2) * 0x2731 + 0x100) s>> 9
void* eax_22 = arg2[2]
uint32_t ecx_4 = zx.d(*(eax_22 + arg3 + 2))
uint32_t esi_4 = zx.d(*(eax_22 + arg3))
uint32_t eax_23 = zx.d(*(eax_22 + arg3 + 1))
uint32_t edx_3 = ecx_4 + esi_4
int32_t ecx_7 = (eax_23 - 0x180 + edx_3) << 4
arg1[0x10] = ecx_7
arg1[0x12] = ((edx_3 - eax_23 * 2) * 0x16a1 + 0x100) s>> 9
int32_t esi_6 = *arg1
int32_t edx_5 = esi_6 + ecx_7
int32_t ecx_8 = arg1[8]
int32_t esi_7 = esi_6 - arg1[0x10]
arg1[0x11] = ((esi_4 - ecx_4) * 0x2731 + 0x100) s>> 9
*arg1 = ((ecx_8 + edx_5) * 0x38e4 + 0x4000) s>> 0xf
int32_t ecx_9 = arg1[9]
arg1[0x10] = ((edx_5 - ecx_8 * 2) * 0x283a + 0x4000) s>> 0xf
int32_t esi_8 = arg1[1]
arg1[8] = (esi_7 * 0x45ad + 0x4000) s>> 0xf
int32_t eax_42 = arg1[0x11]
int32_t edx_7 = esi_8 + eax_42
arg1[1] = ((ecx_9 + edx_7) * 0x38e4 + 0x4000) s>> 0xf
int32_t ecx_10 = arg1[0xa]
arg1[0x11] = ((edx_7 - ecx_9 * 2) * 0x283a + 0x4000) s>> 0xf
int32_t esi_10 = arg1[2]
arg1[9] = ((esi_8 - eax_42) * 0x45ad + 0x4000) s>> 0xf
int32_t eax_54 = arg1[0x12]
int32_t edx_9 = esi_10 + eax_54
arg1[2] = ((ecx_10 + edx_9) * 0x38e4 + 0x4000) s>> 0xf
arg1[0x12] = ((edx_9 - ecx_10 * 2) * 0x283a + 0x4000) s>> 0xf
int32_t result = ((esi_10 - eax_54) * 0x45ad + 0x4000) s>> 0xf
arg1[0xa] = result
return result
