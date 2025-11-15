// 函数: sub_63e5f0
// 地址: 0x63e5f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = arg2
char* eax = *(esi + 4)

if (&eax[2] u> *(esi + 8))
    eax.b = 0
    return eax

uint16_t ecx = zx.w(eax[1]) << 8 | zx.w(*eax)
*(esi + 4) = &eax[2]
*(arg1 + 4) = zx.d(ecx)
char* ecx_1 = *(esi + 4)

if (&ecx_1[4] u<= *(esi + 8))
    uint32_t edx_7 =
        ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
    *(esi + 4) = &ecx_1[4]
    *(arg1 + 8) = edx_7
    
    if (sub_61ec90(esi, &arg2).b != 0)
        *(arg1 + 0xc) = arg2
        uint32_t eax_6
        eax_6.b = 1
        return eax_6

uint32_t* eax_2
eax_2.b = 0
return eax_2
