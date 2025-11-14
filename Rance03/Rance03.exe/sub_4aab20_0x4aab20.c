// 函数: sub_4aab20
// 地址: 0x4aab20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_c
float* edx = &var_c
float var_8 = 1f
float var_4 = 0f
int32_t ecx = *(arg1 + 0x44)
var_c = arg2

if (1f <= arg2)
    edx = &var_8

float* eax = &var_4

if (*edx f> 0)
    eax = edx

float ecx_1 = ecx - *(arg1 + 0x48)
float xmm1 = *eax
float* eax_1 = &var_4

if (ecx_1 s<= 0)
    eax_1 = &var_8

var_4 = ecx_1
var_8 = 0f
float* result_1 = &var_4
var_c = 0f
float edx_1 = *eax_1
var_8 = edx_1
int32_t eax_2 = int.d(_mm_cvtepi32_ps(zx.o(edx_1)) * xmm1)
var_4 = eax_2
float* result = &var_c

if (eax_2 s>= edx_1)
    result_1 = &var_8

if (*result_1 s> 0)
    result = result_1

float ecx_2 = *result
bool p_2

if (*(arg1 + 0x4c) == ecx_2)
    float xmm0_4 = *(arg1 + 0x50)
    xmm0_4 - xmm1
    result:1.b = (xmm0_4 == xmm1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, xmm1) ? 1 : 0) << 2
        | (xmm0_4 < xmm1 ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if (*(arg1 + 0x4c) != ecx_2 || p_2)
    *(arg1 + 0x4c) = ecx_2
    int32_t* ecx_3 = *(arg1 + 0x148)
    *(arg1 + 0x50) = xmm1
    
    if (ecx_3 != 0)
        jump(**ecx_3)

return result
