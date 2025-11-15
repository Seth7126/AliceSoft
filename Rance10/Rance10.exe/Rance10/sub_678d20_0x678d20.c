// 函数: sub_678d20
// 地址: 0x678d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_3 = *(arg1 + 0x12c) - 0x180
int32_t* ebx = *(arg2 + 0x54)
int32_t ecx_1 = sx.d(*arg3) * *ebx
int32_t eax_6 = sx.d(arg3[0x10]) * ebx[0x10]
int32_t edx_2 = sx.d(arg3[0x18]) * ebx[0x18]
int32_t ecx_3 = (ecx_1 - eax_6) << 0xd
int32_t ecx_5 = sx.d(arg3[8]) * ebx[8]
int32_t ebp_1 = (eax_6 + ecx_1) << 0xd
int32_t esi = (edx_2 + ecx_5) * 0x1151
int32_t ecx_7 = ecx_5 * 0x187e + esi
int32_t esi_1 = esi - edx_2 * 0x3b21
int32_t eax_11 = sx.d(arg3[0x11]) * ebx[0x11]
int32_t ecx_11 = sx.d(arg3[1]) * ebx[1]
int32_t ecx_13 = (ecx_11 - eax_11) << 0xd
int32_t edx_4 = (eax_11 + ecx_11) << 0xd
int32_t ecx_15 = sx.d(arg3[9]) * ebx[9]
int32_t edx_6 = sx.d(arg3[0x19]) * ebx[0x19]
int32_t esi_2 = (edx_6 + ecx_15) * 0x1151
int32_t ecx_17 = ecx_15 * 0x187e + esi_2
int32_t esi_3 = esi_2 - edx_6 * 0x3b21
int32_t edi_1 = edx_4 + ecx_17
int32_t eax_15 = edx_4 - ecx_17
int32_t ebx_1 = ecx_13 + esi_3
int32_t eax_17 = ecx_13 - esi_3
char* edx_8 = *arg4 + arg5
*edx_8 = ((edi_1 + ebp_1 + ecx_7 + 0x2008000) s>> 0x10 & 0x3ff)[eax_3]
edx_8[1] = ((ebp_1 + ecx_7 + 0x2008000 - edi_1) s>> 0x10 & 0x3ff)[eax_3]
char* edx_9 = arg4[1]
edx_9[arg5] = ((ebx_1 + ecx_3 + esi_1 + 0x2008000) s>> 0x10 & 0x3ff)[eax_3]
edx_9[arg5 + 1] = ((ecx_3 + esi_1 + 0x2008000 - ebx_1) s>> 0x10 & 0x3ff)[eax_3]
char* edx_10 = arg4[2]
edx_10[arg5] = ((eax_17 + ecx_3 - esi_1 + 0x2008000) s>> 0x10 & 0x3ff)[eax_3]
edx_10[arg5 + 1] = ((ecx_3 - esi_1 + 0x2008000 - eax_17) s>> 0x10 & 0x3ff)[eax_3]
char* edx_12 = arg4[3]
edx_12[arg5] = ((eax_15 + ebp_1 - ecx_7 + 0x2008000) s>> 0x10 & 0x3ff)[eax_3]
char result = ((ebp_1 - ecx_7 + 0x2008000 - eax_15) s>> 0x10 & 0x3ff)[eax_3]
edx_12[arg5 + 1] = result
return result
