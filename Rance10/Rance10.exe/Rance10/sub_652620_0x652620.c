// 函数: sub_652620
// 地址: 0x652620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*arg2 == 0)
    arg1 = (*arg3[1])(arg3, 0, 0x112)
    *(arg1 + 0x111) = 0
    *arg2 = arg1

void* esi = nullptr
int128_t* ecx = *arg2
int32_t i_1 = 8
*ecx = *arg4
arg1.b = arg4[1].b
ecx[1].b = arg1.b
int32_t ecx_1 = 0
void* edx_1 = arg4 + 2
int32_t i

do
    uint32_t eax_2 = zx.d(*(edx_1 - 1))
    edx_1 += 2
    esi += eax_2
    ecx_1 += zx.d(*(edx_1 - 2))
    i = i_1
    i_1 -= 1
while (i != 1)
void* esi_1 = esi + ecx_1

if (esi_1 s< 1 || esi_1 s> 0x100)
    *(*arg3 + 0x14) = 9
    (**arg3)(arg3)

sub_700660(*arg2 + 0x11, arg5, esi_1)
int32_t result = *arg2
*(result + 0x111) = 0
return result
