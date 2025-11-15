// 函数: sub_585430
// 地址: 0x585430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg2 + 4)

if (&esi[4] u> *(arg2 + 8))
    return 0

uint32_t eax_3 = zx.d(*esi)
uint32_t edx_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8
*(arg2 + 4) = &esi[4]
sub_586800(arg1 + 0xcc, edx_6 | eax_3)
uint32_t* esi_1 = *(arg1 + 0xcc)
int32_t edi_2 = *(arg1 + 0xd0)

if (esi_1 == edi_2)
    return 1

while (true)
    if (sub_57d0d0(arg2, esi_1) == 0)
        return 0
    
    esi_1 = &esi_1[3]
    
    if (esi_1 == edi_2)
        return 1
