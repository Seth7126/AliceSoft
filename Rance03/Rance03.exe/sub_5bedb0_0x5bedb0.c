// 函数: sub_5bedb0
// 地址: 0x5bedb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = *(arg2 + 4)

if (&esi[4] u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t edx_4 = (zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])
uint32_t eax_3 = zx.d(*esi)
*(arg2 + 4) = &esi[4]
uint32_t edx_6 = edx_4 << 8 | eax_3
eax_3.b = 1
*(arg1 + 0xec) = edx_6
return eax_3
