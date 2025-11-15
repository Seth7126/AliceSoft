// 函数: sub_678f10
// 地址: 0x678f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = *(arg1 + 0x12c)
int32_t* ecx = *(arg2 + 0x54)
int32_t edi_1 = sx.d(arg3[8]) * ecx[8]
int32_t ebx_2 = sx.d(*arg3) * *ecx + 0x1004
arg5[*arg4] = *(((edi_1 + ebx_2) s>> 3 & 0x3ff) + ebp - 0x180)
char result = *(((ebx_2 - edi_1) s>> 3 & 0x3ff) + ebp - 0x180)
arg5[arg4[1]] = result
return result
