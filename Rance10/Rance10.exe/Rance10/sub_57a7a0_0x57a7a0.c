// 函数: sub_57a7a0
// 地址: 0x57a7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 2
int32_t ebx = 1

if (arg2 s>= 2)
    do
        ebx *= esi
        esi += 1
    while (esi s<= arg2)

int32_t ecx = 2
int32_t edx = 1

if (arg1 s>= 2)
    do
        edx *= ecx
        ecx += 1
    while (ecx s<= arg1)

int32_t edi_1 = arg2 - arg1
_mm_cvtepi32_ps(zx.o(edx))
int32_t ecx_1 = 2
int32_t esi_1 = 1

if (edi_1 s>= 2)
    do
        esi_1 *= ecx_1
        ecx_1 += 1
    while (ecx_1 s<= edi_1)

int32_t eax
long double st0_1

if (arg1 != 2)
    st0_1, eax = sub_40d0b0(arg3, _mm_cvtepi32_ps(zx.o(arg1)))
long double st0_2

if (edi_1 != 2)
    st0_2, eax = sub_40d0b0(1f - arg3, _mm_cvtepi32_ps(zx.o(edi_1)))
_mm_cvtepi32_ps(zx.o(esi_1))
_mm_cvtepi32_ps(zx.o(ebx))
