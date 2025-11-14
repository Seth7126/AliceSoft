// 函数: sub_537eb0
// 地址: 0x537eb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = 1
int32_t ecx = 1

if (arg3 s>= 1)
    do
        ebx *= ecx
        ecx += 1
    while (ecx s<= arg3)

int32_t ecx_1 = 1
int32_t eax = 1

if (arg2 s>= 1)
    do
        ecx_1 *= eax
        eax += 1
    while (eax s<= arg2)

int32_t esi = 1
int32_t result_1 = arg3 - arg2
int32_t eax_1 = 1

if (result_1 s>= 1)
    do
        esi *= eax_1
        eax_1 += 1
    while (eax_1 s<= result_1)

float xmm2 = arg1
int32_t eax_2 = arg2

if (arg2 s< 0)
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
float xmm2_1 = 1f - arg1

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

_mm_cvtepi32_ps(zx.o(esi))
_mm_cvtepi32_ps(zx.o(ecx_1))
_mm_cvtepi32_ps(zx.o(ebx))
return result
