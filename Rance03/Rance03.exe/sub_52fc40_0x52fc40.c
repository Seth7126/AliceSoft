// 函数: sub_52fc40
// 地址: 0x52fc40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2
int64_t* eax = *esi
*(arg1 + 4) = *eax
*(arg1 + 0xc) = eax[1].d
void* eax_2 = *esi
*(arg1 + 0x10) = *(eax_2 + 0xc)
*(arg1 + 0x18) = *(eax_2 + 0x14)
void* eax_4 = *esi
*(arg1 + 0x1c) = *(eax_4 + 0x18)
*(arg1 + 0x24) = *(eax_4 + 0x20)
float* ecx = *esi
float xmm1 = ecx[2]
float xmm5_1 = ecx[3] - *ecx
float xmm3_2 = ecx[5] * *ecx - xmm1 * ecx[3]
*(arg1 + 0x34) = xmm1 - ecx[5]
*(arg1 + 0x38) = xmm5_1
*(arg1 + 0x3c) = xmm3_2
float xmm4 = ecx[6]
float xmm0_5 = ecx[5]
float xmm3_4 = ecx[8] * ecx[3]
float xmm0_6 = xmm0_5 - ecx[8]
*(arg1 + 0x44) = xmm4 - ecx[3]
*(arg1 + 0x40) = xmm0_6
*(arg1 + 0x48) = xmm3_4 - xmm4 * xmm0_5
float xmm3_6 = *ecx
float xmm1_2 = ecx[8]
float xmm5_4 = ecx[6]
float xmm5_5 = xmm5_4 * ecx[2]
*(arg1 + 0x4c) = xmm1_2 - ecx[2]
*(arg1 + 0x50) = xmm3_6 - xmm5_4
*(arg1 + 0x54) = xmm5_5 - xmm1_2 * xmm3_6
float xmm0_9 = ecx[4]
float xmm4_4 = ecx[5]
float xmm3_8 = ecx[8] - xmm4_4
float xmm7 = ecx[1]
float xmm2_1 = ecx[7] - xmm0_9
float xmm4_5 = xmm4_4 - ecx[2]
float xmm6 = *ecx
float xmm5_8 = xmm0_9 - xmm7
float xmm1_6 = xmm3_8 * xmm5_8 - xmm2_1 * xmm4_5
float xmm0_12 = ecx[3]
float xmm1_8 = ecx[6] - xmm0_12
float xmm0_13 = xmm0_12 - xmm6
float xmm2_2 = (zx.o(0)).d
float xmm3_10 = xmm1_8 * xmm4_5 - xmm0_13 * xmm3_8
float xmm4_8 = xmm0_13 * xmm2_1 - xmm1_8 * xmm5_8
float xmm0_22 = _mm_sqrt_ss(0, xmm3_10 * xmm3_10 + xmm1_6 * xmm1_6 + xmm4_8 * xmm4_8)
xmm0_22 f- 0
int32_t eax_5
eax_5:1.b = (xmm0_22 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_22, 0f) ? 1 : 0) << 2
    | (xmm0_22 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm2_2 = 1f / xmm0_22

float xmm1_15 = xmm2_2 * xmm3_10
float xmm0_24 = xmm2_2 * xmm1_6
float xmm2_3 = xmm2_2 * xmm4_8
float var_10 = xmm2_3
float var_14 = xmm1_15
float var_c = ((xmm6 * xmm0_24) ^ (data_7094c0).d) - xmm7 * xmm1_15 - ecx[2] * xmm2_3
*(arg1 + 0x58) = xmm0_24.o
int32_t* eax_6 = *esi
float result = (eax_6[8] f+ eax_6[5] f+ eax_6[2]) * 0.333333343f
*(arg1 + 0x68) = _mm_unpacklo_ps((*eax_6 f+ eax_6[3] f+ eax_6[6]) * 0.333333343f, 
    (eax_6[7] f+ eax_6[4] f+ eax_6[1]) * 0.333333343f)
*(arg1 + 0x70) = result
return result
