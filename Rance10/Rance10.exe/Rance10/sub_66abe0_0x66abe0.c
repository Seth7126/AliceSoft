// 函数: sub_66abe0
// 地址: 0x66abe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

_memset(arg1, 0, 0x100)
char* ecx_2 = *arg2 + arg3
uint32_t edx = zx.d(ecx_2[3])
uint32_t edi = zx.d(*ecx_2)
uint32_t eax = zx.d(ecx_2[2])
uint32_t ebx = zx.d(ecx_2[1])
uint32_t esi = edi + edx
uint32_t edi_1 = edi - edx
uint32_t ecx_3 = ebx + eax
uint32_t ebx_1 = ebx - eax
*arg1 = (esi - 0x200 + ecx_3) << 5
arg1[2] = (esi - ecx_3) << 5
arg1[1] = (edi_1 * 0x187e + (ebx_1 + edi_1) * 0x1151 + 0x80) s>> 8
arg1[3] = ((ebx_1 + edi_1) * 0x1151 + 0x80 - ebx_1 * 0x3b21) s>> 8
char* eax_11 = arg2[1] + arg3
uint32_t edx_2 = zx.d(eax_11[3])
uint32_t ebx_2 = zx.d(*eax_11)
uint32_t ecx_8 = zx.d(eax_11[2])
uint32_t ebp = zx.d(eax_11[1])
uint32_t edi_2 = edx_2 + ebx_2
uint32_t ebx_3 = ebx_2 - edx_2
uint32_t esi_3 = ecx_8 + ebp
uint32_t ebp_1 = ebp - ecx_8
uint32_t edi_4 = (edi_2 - esi_3) << 5
arg1[8] = (edi_2 - 0x200 + esi_3) << 5
int32_t edx_4 = *arg1 + 2
arg1[9] = (ebx_3 * 0x187e + (ebx_3 + ebp_1) * 0x1151 + 0x80) s>> 8
arg1[0xb] = ((ebx_3 + ebp_1) * 0x1151 + 0x80 - ebp_1 * 0x3b21) s>> 8
int32_t ecx_14 = arg1[8]
arg1[8] = (edx_4 - ecx_14) s>> 2
int32_t edx_8 = arg1[1] + 2
*arg1 = (ecx_14 + edx_4) s>> 2
int32_t ecx_15 = arg1[9]
arg1[9] = (edx_8 - ecx_15) s>> 2
int32_t edx_12 = arg1[2] + 2
arg1[1] = (ecx_15 + edx_8) s>> 2
int32_t ecx_17 = arg1[0xb]
arg1[0xa] = (edx_12 - edi_4) s>> 2
int32_t edx_16 = arg1[3] + 2
arg1[2] = (edi_4 + edx_12) s>> 2
int32_t result = (ecx_17 + edx_16) s>> 2
arg1[3] = result
arg1[0xb] = (edx_16 - ecx_17) s>> 2
return result
