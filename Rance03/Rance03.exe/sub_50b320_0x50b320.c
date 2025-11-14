// 函数: sub_50b320
// 地址: 0x50b320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = *(arg2 + 4)

if (&esi[4] u<= *(arg2 + 8))
    uint32_t ecx_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(arg2 + 4) = &esi[4]
    *arg1 = ecx_6
    char* esi_1 = *(arg2 + 4)
    
    if (&esi_1[4] u<= *(arg2 + 8))
        uint32_t ecx_13 =
            ((zx.d(esi_1[3]) << 8 | zx.d(esi_1[2])) << 8 | zx.d(esi_1[1])) << 8 | zx.d(*esi_1)
        *(arg2 + 4) = &esi_1[4]
        uint32_t eax_5
        eax_5.b = 1
        arg1[1] = ecx_13
        return eax_5

uint32_t eax
eax.b = 0
return eax
