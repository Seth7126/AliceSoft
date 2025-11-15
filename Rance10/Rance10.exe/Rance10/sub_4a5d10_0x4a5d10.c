// 函数: sub_4a5d10
// 地址: 0x4a5d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::CPoint::VTable* var_1c
uint128_t xmm0_2

if (*(arg1 + 0x44) == 0)
    var_1c = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14)))
    xmm0_2 = zx.o(*(arg1 + 0x18))
else
    var_1c = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
    xmm0_2 = zx.o(*(arg1 + 0x3c))

float xmm0_5 = _mm_cvtepi32_ps(xmm0_2)
struct common::CPoint::VTable* eax = var_1c
struct common::CPoint::VTable** eax_2 = sub_4a61f0(arg1, &var_1c)
uint128_t xmm1 = zx.o(*(arg1 + 0x24))
uint128_t xmm2 = zx.o(*(arg1 + 0x14))
uint128_t xmm3 = zx.o(*(arg1 + 0x18))
float xmm0_7 = _mm_cvtepi32_ps(zx.o(eax_2[1]))
int32_t* ecx_1 = *(arg1 + 0x40)
float xmm1_1 = _mm_cvtepi32_ps(xmm1)
float xmm0_9 = _mm_cvtepi32_ps(zx.o(eax_2[2]))
int32_t eax_3 = *ecx_1
float xmm2_2 = _mm_cvtepi32_ps(xmm2) / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x20)))
var_1c = _mm_cvtepi32_ps(xmm3) / xmm1_1
float* result = (*(eax_3 + 0x18))()

if (result == 0)
    result.b = 0
    return result

float xmm1_3 = xmm0_7 f+ data_7fd4d0
float xmm0_13 = xmm0_9 f+ data_7fd4d4
result[2] = 0x3f000000
result[3] = 0x3f800000
*result = xmm1_3
float xmm1_5 = xmm0_7 f+ eax
result[1] = xmm0_13
result[4] = 0xffffffff
result[5] = data_7fd504
result[6] = data_7fd508
struct common::CPoint::VTable* xmm0_16 = var_1c
result[8] = xmm0_9
float xmm3_4 = xmm0_9 + xmm0_5
result[7] = xmm1_5
result[9] = 0x3f000000
result[0xa] = 0x3f800000
result[0xb] = 0xffffffff
result[0xc] = xmm2_2
result[0xd] = 0
result[0xe] = xmm0_7
result[0xf] = xmm3_4
result[0x10] = 0x3f000000
result[0x11] = 0x3f800000
result[0x12] = 0xffffffff
result[0x13] = 0
result[0x14] = xmm0_16
result[0x15] = xmm1_5
result[0x16] = xmm3_4
result[0x17] = 0x3f000000
result[0x18] = 0x3f800000
result[0x19] = 0xffffffff
result[0x1a] = xmm2_2
result[0x1b] = xmm0_16
return (*(**(arg1 + 0x40) + 0x1c))() != 0
