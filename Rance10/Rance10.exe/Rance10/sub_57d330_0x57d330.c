// 函数: sub_57d330
// 地址: 0x57d330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg2 + 4)
uint32_t eax_2 = zx.d(*esi)
uint32_t edi_5 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8
*(arg2 + 4) = &esi[4]
uint32_t ecx_2 = zx.d(esi[7]) << 8 | zx.d(esi[6])
*arg1 = edi_5 | eax_2
uint32_t ecx_6 = (ecx_2 << 8 | zx.d(esi[5])) << 8 | zx.d(esi[4])
*(arg2 + 4) = &esi[8]
uint32_t ecx_9 = zx.d(esi[0xb]) << 8 | zx.d(esi[0xa])
arg1[1] = ecx_6
uint32_t ecx_13 = (ecx_9 << 8 | zx.d(esi[9])) << 8 | zx.d(esi[8])
*(arg2 + 4) = &esi[0xc]
arg1[2] = ecx_13
return arg1
