// 函数: sub_4f7c10
// 地址: 0x4f7c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const var_4 = arg1
void* edx = nullptr
void* eax_1 = *(arg1 + 0x44) - *(arg1 + 0x48)

if (eax_1 s> 0)
    edx = eax_1

float arg_4
bool cond:1 = arg_4 s>= edx
int32_t* eax_2 = &arg_4
var_4 = edx

if (cond:1)
    eax_2 = &var_4

int32_t esi = 0
float xmm0_1 = _mm_cvtepi32_ps(zx.o(edx))
int32_t eax_3 = *eax_2
var_4 = 0x3f800000

if (eax_3 s> 0)
    esi = eax_3

int32_t* result = &arg_4
float xmm1_2 = _mm_cvtepi32_ps(zx.o(esi)) / xmm0_1
arg_4 = xmm1_2

if (1f <= xmm1_2)
    result = &var_4

float xmm1_3 = *result
float xmm1_4

xmm1_4 = xmm1_3 f> 0 ? xmm1_3 : 0f

bool p_2

if (*(arg1 + 0x4c) == esi)
    float xmm0_2 = *(arg1 + 0x50)
    xmm0_2 - xmm1_4
    result:1.b = (xmm0_2 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, xmm1_4) ? 1 : 0) << 2
        | (xmm0_2 < xmm1_4 ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if (*(arg1 + 0x4c) != esi || p_2)
    *(arg1 + 0x4c) = esi
    *(arg1 + 0x50) = xmm1_4
    *(arg1 + 0x150) = 1

return result
