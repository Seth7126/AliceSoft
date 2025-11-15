// 函数: sub_676840
// 地址: 0x676840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 + 0x12c)
int32_t* edx = *(arg2 + 0x54)
char* edi_1 = *arg4 + arg5
int32_t ecx_1 = sx.d(arg3[1]) * edx[1]
int32_t esi_2 = sx.d(*arg3) * *edx + 0x1004
*edi_1 = *(((ecx_1 + esi_2) s>> 3 & 0x3ff) + ebx - 0x180)
char result = *(((esi_2 - ecx_1) s>> 3 & 0x3ff) + ebx - 0x180)
edi_1[1] = result
return result
