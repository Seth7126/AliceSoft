// 函数: sub_5854b0
// 地址: 0x5854b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)

if (&edx[4] u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
sub_5864d0(arg1 + 0xd8, ecx_6)
uint32_t* i = *(arg1 + 0xd8)

for (int32_t ecx_8 = *(arg1 + 0xdc); i != ecx_8; i = &i[2])
    char* ebx_1 = *(arg2 + 4)
    
    if (&ebx_1[4] u> *(arg2 + 8))
        i.b = 0
        return i
    
    uint32_t esi_7 =
        ((zx.d(ebx_1[3]) << 8 | zx.d(ebx_1[2])) << 8 | zx.d(ebx_1[1])) << 8 | zx.d(*ebx_1)
    *(arg2 + 4) = &ebx_1[4]
    *i = esi_7
    char* ebx_2 = *(arg2 + 4)
    
    if (&ebx_2[4] u> *(arg2 + 8))
        i.b = 0
        return i
    
    uint32_t esi_14 =
        ((zx.d(ebx_2[3]) << 8 | zx.d(ebx_2[2])) << 8 | zx.d(ebx_2[1])) << 8 | zx.d(*ebx_2)
    *(arg2 + 4) = &ebx_2[4]
    i[1] = esi_14

i.b = 1
return i
