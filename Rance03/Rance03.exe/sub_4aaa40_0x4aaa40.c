// 函数: sub_4aaa40
// 地址: 0x4aaa40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0
int32_t var_8
int32_t* eax = &var_8
int32_t edx_1 = *(arg1 + 0x44) - *(arg1 + 0x48)
var_8 = edx_1

if (edx_1 s<= 0)
    eax = &var_4

float arg_4
int32_t* ecx = &arg_4
int32_t edx_2 = *eax
bool cond:1 = arg_4 s>= edx_2
var_4 = edx_2

if (cond:1)
    ecx = &var_4

var_8 = 0
int32_t* eax_1 = &var_8
float xmm0_1 = _mm_cvtepi32_ps(zx.o(edx_2))

if (*ecx s> 0)
    eax_1 = ecx

int32_t* result_1 = &arg_4
int32_t edi = *eax_1
var_4 = 0x3f800000
var_8 = 0
float xmm2_2 = _mm_cvtepi32_ps(zx.o(edi)) / xmm0_1
arg_4 = xmm2_2

if (1f <= xmm2_2)
    result_1 = &var_4

int32_t* result = &var_8

if (*result_1 f> 0)
    result = result_1

float xmm1 = *result
bool p_2

if (*(arg1 + 0x4c) == edi)
    float xmm0_3 = *(arg1 + 0x50)
    xmm0_3 - xmm1
    result:1.b = (xmm0_3 == xmm1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, xmm1) ? 1 : 0) << 2
        | (xmm0_3 < xmm1 ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if (*(arg1 + 0x4c) != edi || p_2)
    int32_t* ecx_1 = *(arg1 + 0x148)
    *(arg1 + 0x4c) = edi
    *(arg1 + 0x50) = xmm1
    
    if (ecx_1 != 0)
        return (**ecx_1)()

return result
