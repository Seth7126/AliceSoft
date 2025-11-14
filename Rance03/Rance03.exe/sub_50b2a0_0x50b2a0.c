// 函数: sub_50b2a0
// 地址: 0x50b2a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = *(arg2 + 4)

if (&esi[4] u<= *(arg2 + 8))
    *arg1 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(arg2 + 4) += 4
    char* esi_1 = *(arg2 + 4)
    
    if (&esi_1[4] u<= *(arg2 + 8))
        uint32_t eax_6
        eax_6.b = 1
        arg1[1] = ((zx.d(esi_1[3]) << 8 | zx.d(esi_1[2])) << 8 | zx.d(esi_1[1])) << 8 | zx.d(*esi_1)
        *(arg2 + 4) += 4
        return eax_6

void* eax
eax.b = 0
return eax
