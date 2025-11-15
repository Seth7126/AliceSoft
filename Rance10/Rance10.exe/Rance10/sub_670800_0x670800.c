// 函数: sub_670800
// 地址: 0x670800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_1 = *(arg1 + 0x12c) - 0x180
int32_t* edx = *(arg2 + 0x54)
int32_t eax_4 = sx.d(arg3[8]) * edx[8]
int32_t ebp_1 = sx.d(arg3[1]) * edx[1]
int32_t esi_2 = sx.d(*arg3) * *edx + 0x1004
int32_t ebx = eax_4 + esi_2
void* esi_3 = esi_2 - eax_4
int32_t eax_6 = sx.d(arg3[9]) * edx[9]
char* ecx_1 = *arg4
int32_t esi_4 = eax_6 + ebp_1
int32_t ebp_2 = ebp_1 - eax_6
ecx_1[arg5] = *(((esi_4 + ebx) s>> 3 & 0x3ff) + eax_1)
ecx_1[arg5 + 1] = *(((ebx - esi_4) s>> 3 & 0x3ff) + eax_1)
char* ecx_3 = arg4[1] + arg5
*ecx_3 = *(((esi_3 + ebp_2) s>> 3 & 0x3ff) + eax_1)
char result = *(((esi_3 - ebp_2) s>> 3 & 0x3ff) + eax_1)
ecx_3[1] = result
return result
