// 函数: sub_6705c0
// 地址: 0x6705c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_4 = *(arg1 + 0x12c) - 0x180
int32_t* edx = *(arg2 + 0x54)
int32_t eax_8 = sx.d(arg3[0x10]) * edx[0x10] * 0x16a1
int32_t ebx_3 = ((sx.d(*arg3) * *edx) << 0xd) + 0x400
int32_t ebp_3 = ((sx.d(arg3[1]) * edx[1]) << 0xd) + 0x400
int32_t edi = eax_8 + ebx_3
int32_t eax_12 = sx.d(arg3[8]) * edx[8] * 0x2731
int32_t eax_15 = sx.d(arg3[0x11]) * edx[0x11] * 0x16a1
int32_t esi_3 = (((edi + eax_12) s>> 0xb) + 0x4010) << 0xd
int32_t edi_3 = eax_15 + ebp_3
int32_t eax_19 = sx.d(arg3[9]) * edx[9] * 0x2731
int32_t ebp_9 = ((sx.d(arg3[2]) * edx[2]) << 0xd) + 0x400
int32_t eax_22 = sx.d(arg3[0x12]) * edx[0x12] * 0x16a1
int32_t edi_6 = eax_22 + ebp_9
int32_t eax_26 = sx.d(arg3[0xa]) * edx[0xa] * 0x2731
char* edi_11 = *arg4 + arg5
int32_t eax_27 = ((edi_6 + eax_26) s>> 0xb) * 0x16a1
int32_t edx_1 = eax_27 + esi_3
int32_t ecx_3 = ((edi_3 + eax_19) s>> 0xb) * 0x2731
int32_t ecx_4 = ((ebp_3 - eax_15 * 2) s>> 0xb) * 0x2731
*edi_11 = ((edx_1 + ecx_3) s>> 0x12 & 0x3ff)[eax_4]
edi_11[2] = ((edx_1 - ecx_3) s>> 0x12 & 0x3ff)[eax_4]
edi_11[1] = ((esi_3 - eax_27 * 2) s>> 0x12 & 0x3ff)[eax_4]
int32_t esi_9 = (((ebx_3 - eax_8 * 2) s>> 0xb) + 0x4010) << 0xd
char* edi_12 = arg4[1]
int32_t eax_36 = ((ebp_9 - eax_22 * 2) s>> 0xb) * 0x16a1
int32_t edx_5 = eax_36 + esi_9
int32_t ecx_5 = ((edi_3 - eax_19) s>> 0xb) * 0x2731
edi_12[arg5] = ((edx_5 + ecx_4) s>> 0x12 & 0x3ff)[eax_4]
edi_12[arg5 + 2] = ((edx_5 - ecx_4) s>> 0x12 & 0x3ff)[eax_4]
edi_12[arg5 + 1] = ((esi_9 - eax_36 * 2) s>> 0x12 & 0x3ff)[eax_4]
int32_t esi_15 = (((edi - eax_12) s>> 0xb) + 0x4010) << 0xd
char* edi_13 = arg4[2]
int32_t eax_45 = ((edi_6 - eax_26) s>> 0xb) * 0x16a1
int32_t edx_9 = eax_45 + esi_15
edi_13[arg5] = ((edx_9 + ecx_5) s>> 0x12 & 0x3ff)[eax_4]
edi_13[arg5 + 2] = ((edx_9 - ecx_5) s>> 0x12 & 0x3ff)[eax_4]
char result = ((esi_15 - eax_45 * 2) s>> 0x12 & 0x3ff)[eax_4]
edi_13[arg5 + 1] = result
return result
