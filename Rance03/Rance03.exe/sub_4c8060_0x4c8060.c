// 函数: sub_4c8060
// 地址: 0x4c8060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x94)

if (ecx == 0 || *(arg1 + 0x98) == 0)
    return 

int32_t* eax_1 = sub_4a3ac0(ecx)
int32_t* eax_2 = sub_4a3b70(*(arg1 + 0x98))
int32_t eax_3 = (*(*eax_1 + 0x28))(1)
int32_t eax_4 = (*(*eax_2 + 0x2c))(1)
int32_t* eax_5 = sub_4a4020(*(arg1 + 0x90))
void* ecx_6 = *(arg1 + 0x90)
int32_t eax_6 = *eax_5
float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(ecx_6 + 0x17c))) f+ *(ecx_6 + 0x7c)
float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(ecx_6 + 0x180))) f+ *(ecx_6 + 0x80)
int32_t eax_7 = (*(eax_6 + 0x28))(1)
int32_t* eax_8 = (*(*eax_5 + 0x2c))(1)
float xmm0_8 = _mm_cvtepi32_ps(zx.o(eax_7))
void* ecx_9 = *(arg1 + 0x88)
float xmm0_9 = xmm0_8 + xmm0_3
float xmm0_12 = _mm_cvtepi32_ps(zx.o(eax_8)) + xmm0_6
int32_t* eax_9 = sub_4a4020(ecx_9)
void* ecx_10 = *(arg1 + 0x88)
float xmm0_14 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xa0)))
int32_t eax_10 = *eax_9
float xmm1_4 = _mm_cvtepi32_ps(zx.o(*(ecx_10 + 0x17c))) f+ *(ecx_10 + 0x7c) + xmm0_14
float xmm1_8 = _mm_cvtepi32_ps(zx.o(*(ecx_10 + 0x180))) f+ *(ecx_10 + 0x80) + xmm0_14
int32_t eax_11 = (*(eax_10 + 0x28))(1)
int32_t eax_14 = *eax_9
float xmm0_17 = _mm_cvtepi32_ps(zx.o(eax_11 - *(arg1 + 0xa0) * 2 - eax_3)) + xmm1_4
float xmm1_9 = xmm1_8
float xmm4_1 = xmm0_6
float xmm2_1 = xmm0_12
int32_t ebx_2
ebx_2:1.b = xmm1_9 > xmm4_1
float xmm5_3 = _mm_cvtepi32_ps(zx.o((*(eax_14 + 0x2c))(1) - *(arg1 + 0xa0) * 2 - eax_4)) + xmm1_9
ebx_2.b = xmm2_1 > xmm5_3

if (eax_8 == 0)
    return 

int32_t eax_18
int32_t edx_4
edx_4:eax_18 = sx.q(eax_8)

if ((eax_18 - edx_4) s>> 1 == 0)
    return 

int32_t* edx_5

if (not(xmm1_4 <= xmm0_3))
    edx_5 = eax_2
    int32_t var_40_1 = edx_5[0x40] - int.d(xmm1_4 - xmm0_3)
label_4c826c:
    sub_4aaa40(&edx_5[0x2d])
    xmm4_1 = xmm0_6
    xmm2_1 = xmm0_12
    xmm1_9 = xmm1_8
else if (not(xmm0_9 <= xmm0_17))
    edx_5 = eax_2
    int32_t var_40_2 = int.d(xmm0_9 - xmm0_17) + edx_5[0x40]
    goto label_4c826c

if (ebx_2:1.b != 0)
    int32_t var_40_3 = eax_1[0x40] - int.d(xmm1_9 - xmm4_1)
    sub_4aaa40(&eax_1[0x2d])
    return 

if (ebx_2.b != 0)
    int32_t var_40_4 = int.d(xmm2_1 - xmm5_3) + eax_1[0x40]
    sub_4aaa40(&eax_1[0x2d])
