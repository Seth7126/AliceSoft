// 函数: sub_5e9a90
// 地址: 0x5e9a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_10
uint128_t xmm0_2

if (*(arg1 + 0x38) == 0)
    var_10 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14)))
    xmm0_2 = zx.o(*(arg1 + 0x18))
else
    var_10 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
    xmm0_2 = zx.o(*(arg1 + 0x30))

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(*(arg1 + 0x24) - *(arg1 + 0x2c))
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(*(arg1 + 0x28) - *(arg1 + 0x30))
float xmm0_5 = _mm_cvtepi32_ps(xmm0_2)
int32_t ecx_1 = (eax_2 - edx) s>> 1

if (ecx_1 s< 0)
    ecx_1 = 0

int32_t eax_8 = (eax_6 - edx_1) s>> 1

if (eax_8 s< 0)
    eax_8 = 0

int32_t* ecx_2 = *(arg1 + 8)
float var_18 = _mm_cvtepi32_ps(zx.o(ecx_1))
void* eax_9 = *ecx_2
float var_14 = _mm_cvtepi32_ps(zx.o(eax_8))

if ((*(eax_9 + 0x9c))() != 0)
    var_18 = var_18 - 0.5f
    var_14 = var_14 - 0.5f

uint128_t xmm0_14 = zx.o(*(arg1 + 0x1c))
float xmm1_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14)))
int32_t* ecx_3 = *(arg1 + 0x34)
float xmm0_15 = _mm_cvtepi32_ps(xmm0_14)
int32_t eax_12 = *ecx_3
float xmm1_2 = xmm1_1 / xmm0_15
float xmm1_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x18))) / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x20)))
float* result = (*(eax_12 + 0x18))()

if (result == 0)
    result.b = 0
    return result

float xmm0_19 = var_18 + var_10
*result = var_18
result[1] = var_14
result[2] = 0x3f000000
result[3] = 0x3f800000
result[4] = 0xffffffff
result[5] = 0
result[6] = 0
result[7] = xmm0_19
result[8] = var_14
float xmm1_7 = var_14 + xmm0_5
result[9] = 0x3f000000
result[0xa] = 0x3f800000
result[0xb] = 0xffffffff
result[0xc] = xmm1_2
result[0xd] = 0
result[0xe] = var_18
result[0xf] = xmm1_7
result[0x10] = 0x3f000000
result[0x11] = 0x3f800000
result[0x12] = 0xffffffff
result[0x13] = 0
result[0x14] = xmm1_5
result[0x15] = xmm0_19
result[0x16] = xmm1_7
result[0x17] = 0x3f000000
result[0x18] = 0x3f800000
result[0x19] = 0xffffffff
result[0x1a] = xmm1_2
result[0x1b] = xmm1_5
return (*(**(arg1 + 0x34) + 0x1c))() != 0
