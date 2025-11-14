// 函数: sub_4c6740
// 地址: 0x4c6740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = 0
int32_t var_1c = 0

if (*(arg1 + 0x94) == 0)
    ebp = (*(*sub_4a3ac0(nullptr) + 0x28))(1)

if (*(arg1 + 0x98) == 0)
    var_1c = (*(*sub_4a3b70(nullptr) + 0x2c))(1)

int32_t* eax_5 = sub_4a4020(*(arg1 + 0x90))
void* ecx_3 = *(arg1 + 0x90)
int32_t eax_6 = *eax_5
float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x17c))) f+ *(ecx_3 + 0x7c)
float xmm0_5 = _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x180))) f+ *(ecx_3 + 0x80)
int32_t eax_7 = (*(eax_6 + 0x28))(1)
int32_t eax_8 = (*(*eax_5 + 0x2c))(1)
void* ecx_6 = *(arg1 + 0x88)
float xmm0_8 = _mm_cvtepi32_ps(zx.o(eax_8)) + xmm0_5
int32_t* eax_9 = sub_4a4020(ecx_6)
void* ecx_7 = *(arg1 + 0x88)
float xmm0_10 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xa0)))
int32_t eax_10 = *eax_9
float xmm1_3 = _mm_cvtepi32_ps(zx.o(*(ecx_7 + 0x17c))) f+ *(ecx_7 + 0x7c) + xmm0_10
float xmm1_7 = _mm_cvtepi32_ps(zx.o(*(ecx_7 + 0x180))) f+ *(ecx_7 + 0x80) + xmm0_10
int32_t eax_11 = (*(eax_10 + 0x28))(1)
int32_t ecx_9 = *(arg1 + 0xa0)
int32_t eax_12 = (*(*eax_9 + 0x2c))(1)
int32_t ecx_12 = *(arg1 + 0xa0)
float xmm0_12 = _mm_cvtepi32_ps(zx.o(eax_11 - ecx_9 * 2 - ebp))
float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_12 - ecx_12 * 2 - var_1c)) + xmm1_7

if (xmm0_2 <= xmm0_12 + xmm1_3 && not(xmm1_3 > _mm_cvtepi32_ps(zx.o(eax_7)) + xmm0_2)
        && not(xmm0_5 > xmm4_2) && not(xmm1_7 > xmm0_8))
    if (arg3 != 0 && arg2 s% 0x3e8 s< 0x1f4)
        return 1
    
    return 0

int32_t result
result.b = 0
return result
