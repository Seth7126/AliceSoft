// 函数: sub_5b3920
// 地址: 0x5b3920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (*(arg1 + 4) s< 2)
    eax.b = 1
    return eax

char* ecx = *(arg2 + 4)

if (&ecx[4] u> *(arg2 + 8))
    eax.b = 0
    return eax

uint32_t esi_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(arg2 + 4) = &ecx[4]
sub_405950(arg3, esi_6)

if (*(arg2 + 4) + esi_6 u> *(arg2 + 8))
    int32_t eax_5
    eax_5.b = 0
    return eax_5

void* ecx_2 = *arg3
void* eax_6 = arg3[1]
int32_t esi_7 = 0
void* ebx_2 = eax_6 - ecx_2

if (ecx_2 u> eax_6)
    ebx_2 = nullptr

if (ebx_2 != 0)
    do
        char* eax_7 = *(arg2 + 4)
        ecx_2 += 1
        esi_7 += 1
        char edx_1 = *eax_7
        *(arg2 + 4) = &eax_7[1]
        *(ecx_2 - 1) = edx_1
    while (esi_7 != ebx_2)

eax_6.b = 1
return eax_6
