// 函数: sub_51a0e0
// 地址: 0x51a0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 4)

if (eax != *(arg1 + 8))
    *(arg1 + 8) = eax
    *(arg1 + 0x10) = 1

uint32_t esi = arg2
char* ecx = *(esi + 4)

if (&ecx[4] u> *(esi + 8))
    eax.b = 0
    return eax

arg2 = 0
uint32_t ebp_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(esi + 4) = &ecx[4]
uint32_t eax_3

if (ebp_6 s> 0)
    do
        char* edx_1 = *(esi + 4)
        
        if (&edx_1[4] u> *(esi + 8))
            eax_3.b = 0
            return eax_3
        
        void* ecx_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(esi + 4) = &edx_1[4]
        sub_51a030(arg1, ecx_7)
        eax_3 = arg2 + 1
        arg2 = eax_3
    while (eax_3 s< ebp_6)

*(arg1 + 0x10) = 1
eax_3.b = 1
return eax_3
