// 函数: sub_5b3e70
// 地址: 0x5b3e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg2 + 4)
uint32_t eax_2 = zx.d(*esi)
uint32_t edi_5 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8
*(arg2 + 4) = &esi[4]
uint32_t ecx_6 = ((zx.d(esi[7]) << 8 | zx.d(esi[6])) << 8 | zx.d(esi[5])) << 8 | zx.d(esi[4])
*(arg2 + 4) = &esi[8]
uint32_t ecx_9 = zx.d(esi[0xb]) << 8 | zx.d(esi[0xa])
*arg1 = ecx_6
uint32_t ecx_13 = (ecx_9 << 8 | zx.d(esi[9])) << 8 | zx.d(esi[8])
*(arg2 + 4) = &esi[0xc]
uint32_t ecx_16 = zx.d(esi[0xf]) << 8 | zx.d(esi[0xe])
arg1[1] = ecx_13
arg1[2] = (ecx_16 << 8 | zx.d(esi[0xd])) << 8 | zx.d(esi[0xc])
*(arg2 + 4) = &esi[0x10]
arg1[3] = edi_5 | eax_2
return arg1
