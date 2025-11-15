// 函数: sub_4f7cb0
// 地址: 0x4f7cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_8
int32_t* eax = &var_8
float var_4 = 1f
var_8 = arg2

if (1f <= arg2)
    eax = &var_4

float xmm1 = *eax
float xmm1_1

xmm1_1 = xmm1 f> 0 ? xmm1 : 0f

float* ecx = &var_4
float eax_2 = *(arg1 + 0x44) - *(arg1 + 0x48)
float edx = 0f

if (eax_2 s> 0)
    edx = eax_2

var_8 = edx
float eax_3 = int.d(_mm_cvtepi32_ps(zx.o(edx)) * xmm1_1)
var_4 = eax_3

if (eax_3 s>= edx)
    ecx = &var_8

float result = *ecx
float result_1 = 0f

if (result s> 0)
    result_1 = result

bool p_2

if (*(arg1 + 0x4c) == result_1)
    float xmm0_3 = *(arg1 + 0x50)
    xmm0_3 - xmm1_1
    result:1.b = (xmm0_3 == xmm1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, xmm1_1) ? 1 : 0) << 2
        | (xmm0_3 < xmm1_1 ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if (*(arg1 + 0x4c) != result_1 || p_2)
    *(arg1 + 0x50) = xmm1_1
    *(arg1 + 0x4c) = result_1
    *(arg1 + 0x150) = 1

return result
