// 函数: sub_5270f0
// 地址: 0x5270f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
*(arg1 + 0x80) = int.d(_mm_cvtepi32_ps(zx.o(*(arg2 + 0x80) * *(arg1 + 0x80))) * 0.00392156886f)
*(arg1 + 0x84) = int.d(_mm_cvtepi32_ps(zx.o(*(arg2 + 0x84) * *(arg1 + 0x84))) * 0.00392156886f)
*(arg1 + 0x88) = int.d(_mm_cvtepi32_ps(zx.o(*(arg2 + 0x88) * *(arg1 + 0x88))) * 0.00392156886f)
*(arg1 + 0x8c) += *(arg2 + 0x8c)
*(arg1 + 0x90) += *(arg2 + 0x90)
*(arg1 + 0x94) += *(arg2 + 0x94)
bool cond:0 = *(arg1 + 0xa8) == 0
*(arg1 + 0xa4) = int.d(_mm_cvtepi32_ps(zx.o(*(arg2 + 0xa4) * *(arg1 + 0xa4))) * 0.00392156886f)
char eax_15

if (cond:0 || *(arg2 + 0xa8) == 0)
    eax_15 = 0
else
    eax_15 = 1

*(arg1 + 0xa8) = eax_15
int32_t eax_16 = *(arg2 + 0x98)

if (eax_16 == 0)
    eax_16 = *(arg1 + 0x98)

*(arg1 + 0x98) = eax_16
int32_t eax_17

if (*(arg2 + 0x9c) != 0)
    eax_17 = *(arg1 + 0x9c)
else
    eax_17 = 0

*(arg1 + 0x9c) = eax_17
int32_t eax_18 = 1

if (*(arg2 + 0xa0) != 1)
    eax_18 = *(arg1 + 0xa0)

int32_t* ecx = *(arg1 + 0xb4)
*(arg1 + 0xa0) = eax_18
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x5c) = *(arg2 + 0x5c)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x64) = *(arg2 + 0x64)
*(arg1 + 0x7c) = *(arg2 + 0x7c)

if (ecx != 0)
    (*(*ecx + 4))()

int32_t* ecx_1 = *(arg2 + 0xb4)

if (ecx_1 == 0)
    ecx_1 = *(arg1 + 0xb4)

*(arg1 + 0xb4) = ecx_1

if (ecx_1 != 0)
    (**ecx_1)()

int32_t* ecx_2 = *(arg1 + 0xb8)

if (ecx_2 != 0)
    int32_t esi_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(esi_1 - 1)

void* ecx_3 = *(arg2 + 0xb8)

if (ecx_3 == 0)
    ecx_3 = *(arg1 + 0xb8)

*(arg1 + 0xb8) = ecx_3

if (ecx_3 != 0)
    *(ecx_3 + 4)
    *(ecx_3 + 4) += 1

sub_4b9cb0(arg1, arg2)
return arg1
