// 函数: sub_676680
// 地址: 0x676680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_4 = *(arg1 + 0x12c) - 0x180
int32_t* esi = *(arg2 + 0x54)
int32_t eax_7 = sx.d(arg3[8]) * esi[8]
int32_t ecx_1 = sx.d(*arg3) * *esi
int32_t edi_1 = sx.d(arg3[2]) * esi[2]
int32_t eax_9 = sx.d(arg3[9]) * esi[9]
int32_t ecx_4 = sx.d(arg3[1]) * esi[1]
int32_t ebp = eax_9 + ecx_4
int32_t ecx_5 = ecx_4 - eax_9
int32_t eax_11 = sx.d(arg3[0xa]) * esi[0xa]
int32_t ecx_6 = eax_11 + edi_1
int32_t edi_2 = edi_1 - eax_11
int32_t eax_13 = sx.d(arg3[0xb]) * esi[0xb]
int32_t edi_4 = sx.d(arg3[3]) * esi[3]
int32_t esi_2 = (ecx_6 + eax_7 + ecx_1 + 0x1004) << 0xd
int32_t ebx_3 = (eax_7 + ecx_1 + 0x1004 - ecx_6) << 0xd
int32_t edx_1 = eax_13 + edi_4
int32_t edi_5 = edi_4 - eax_13
char* eax_16 = *arg4 + arg5
int32_t edi_6 = (edx_1 + ebp) * 0x1151
int32_t ecx_8 = ebp * 0x187e + edi_6
int32_t edi_7 = edi_6 - edx_1 * 0x3b21
*eax_16 = ((ecx_8 + esi_2) s>> 0x10 & 0x3ff)[eax_4]
eax_16[3] = ((esi_2 - ecx_8) s>> 0x10 & 0x3ff)[eax_4]
eax_16[1] = ((ebx_3 + edi_7) s>> 0x10 & 0x3ff)[eax_4]
eax_16[2] = ((ebx_3 - edi_7) s>> 0x10 & 0x3ff)[eax_4]
char* ebx_8 = arg4[1] + arg5
int32_t edx_4 = (edi_2 + ecx_1 - eax_7 + 0x1004) << 0xd
int32_t edi_11 = (ecx_1 - eax_7 + 0x1004 - edi_2) << 0xd
int32_t esi_6 = (ecx_5 + edi_5) * 0x1151
int32_t ecx_11 = ecx_5 * 0x187e + esi_6
int32_t esi_7 = esi_6 - edi_5 * 0x3b21
*ebx_8 = ((ecx_11 + edx_4) s>> 0x10 & 0x3ff)[eax_4]
ebx_8[3] = ((edx_4 - ecx_11) s>> 0x10 & 0x3ff)[eax_4]
ebx_8[1] = ((edi_11 + esi_7) s>> 0x10 & 0x3ff)[eax_4]
char result = ((edi_11 - esi_7) s>> 0x10 & 0x3ff)[eax_4]
ebx_8[2] = result
return result
