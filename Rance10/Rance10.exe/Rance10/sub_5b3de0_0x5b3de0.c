// 函数: sub_5b3de0
// 地址: 0x5b3de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg1 + 4)
uint32_t edi_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
*(arg1 + 4) = &esi[4]
*arg2 = edi_6
char* ecx = *(arg1 + 4)
uint32_t edx_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(arg1 + 4) = &ecx[4]
arg2[1] = edx_6
char* ecx_1 = *(arg1 + 4)
uint32_t edx_13 = ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
*(arg1 + 4) = &ecx_1[4]
arg2[2] = edx_13
return &ecx_1[4]
