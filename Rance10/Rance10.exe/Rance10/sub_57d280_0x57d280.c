// 函数: sub_57d280
// 地址: 0x57d280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ecx = *(arg1 + 4)

if (&ecx[4] u> *(arg1 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t esi_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(arg1 + 4) = &ecx[4]
sub_42c9c0(arg2, esi_6)

if (*(arg1 + 4) + (esi_6 << 2) u> *(arg1 + 8))
    int32_t eax_5
    eax_5.b = 0
    return eax_5

void* ecx_2 = *arg2
void* eax_6 = arg2[1]
uint32_t edi_4 = (eax_6 - ecx_2 + 3) u>> 2
int32_t ebp = 0

if (ecx_2 u> eax_6)
    edi_4 = 0

if (edi_4 != 0)
    do
        char* edx_1 = *(arg1 + 4)
        ecx_2 += 4
        ebp += 1
        uint32_t esi_13 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg1 + 4) = &edx_1[4]
        *(ecx_2 - 4) = esi_13
    while (ebp != edi_4)

eax_6.b = 1
return eax_6
