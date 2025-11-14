// 函数: sub_47ce80
// 地址: 0x47ce80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = 1
int32_t esi = 1

if (arg2 s>= 1)
    do
        ebx *= esi
        esi += 1
    while (esi s<= arg2)

int32_t ecx = 1
int32_t eax = 1

if (arg1 s>= 1)
    do
        ecx *= eax
        eax += 1
    while (eax s<= arg1)

int32_t esi_1 = 1
int32_t result_1 = arg2 - arg1
int32_t eax_1 = 1

if (result_1 s>= 1)
    do
        esi_1 *= eax_1
        eax_1 += 1
    while (eax_1 s<= result_1)

float xmm2 = arg3
int32_t eax_2 = arg1

if (arg1 s< 0)
    eax_2 = neg.d(eax_2)

float xmm1 = 1f

while (true)
    if ((eax_2.b & 1) != 0)
        xmm1 = xmm1 * xmm2
    
    eax_2 u>>= 1
    
    if (eax_2 == 0)
        break
    
    xmm2 = xmm2 * xmm2

int32_t result = result_1
float xmm2_1 = 1f - arg3

if (result_1 s< 0)
    result = neg.d(result)

float xmm1_1 = 1f

while (true)
    if ((result.b & 1) != 0)
        xmm1_1 = xmm1_1 * xmm2_1
    
    result u>>= 1
    
    if (result == 0)
        break
    
    xmm2_1 = xmm2_1 * xmm2_1

_mm_cvtepi32_ps(zx.o(esi_1))
_mm_cvtepi32_ps(zx.o(ecx))
_mm_cvtepi32_ps(zx.o(ebx))
return result
