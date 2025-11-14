// 函数: sub_640790
// 地址: 0x640790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *arg1
int32_t* edi = arg1[3]
void* ebx = arg2 + (esi s>> 1 << 2)
void* ebp = arg1[2] + (esi << 2)
int32_t* edx = arg2 - edi
void* var_c = arg2 + 8
float* esi_1 = ebx + 0xc

do
    int32_t ecx = *edi
    esi_1 -= 0x10
    int32_t eax_4 = edi[1]
    float xmm7_1 = *(ebp + 4)
    float xmm1_1 = *ebp
    float xmm2_1 = *(ebx + (ecx << 2))
    float xmm0_1 = *(ebx + (eax_4 << 2) + 4)
    float xmm3_2 = *(ebx + (ecx << 2) + 4) - xmm0_1
    float xmm2_2 = xmm2_1 f+ *(ebx + (eax_4 << 2))
    float xmm4_3 = xmm1_1 * xmm2_2 + xmm7_1 * xmm3_2
    float xmm2_5 = (xmm0_1 f+ *(ebx + (ecx << 2) + 4)) * 0.5f
    float xmm7_3 = xmm7_1 * xmm2_2 - xmm1_1 * xmm3_2
    float xmm1_5 = (xmm2_1 f- *(ebx + (eax_4 << 2))) * 0.5f
    *(edx + edi) = xmm4_3 + xmm2_5
    esi_1[-1] = xmm2_5 - xmm4_3
    *(var_c - 4) = xmm7_3 + xmm1_5
    *esi_1 = xmm7_3 - xmm1_5
    int32_t ecx_1 = edi[2]
    int32_t eax_6 = edi[3]
    edi = &edi[4]
    float xmm2_7 = *(ebp + 8)
    float xmm7_5 = *(ebp + 0xc)
    ebp += 0x10
    float xmm1_6 = *(ebx + (ecx_1 << 2))
    float xmm0_8 = *(ebx + (eax_6 << 2) + 4)
    float xmm3_4 = *(ebx + (ecx_1 << 2) + 4) - xmm0_8
    float xmm1_7 = xmm1_6 f+ *(ebx + (eax_6 << 2))
    float xmm7_7 = xmm7_5 * xmm1_7 - xmm2_7 * xmm3_4
    float* eax_7 = var_c
    float xmm2_11 = (xmm0_8 f+ *(ebx + (ecx_1 << 2) + 4)) * 0.5f
    float xmm1_10 = (xmm1_6 f- *(ebx + (eax_6 << 2))) * 0.5f
    float xmm4_6 = xmm7_5 * xmm3_4 + xmm2_7 * xmm1_7
    *eax_7 = xmm4_6 + xmm2_11
    esi_1[-3] = xmm2_11 - xmm4_6
    eax_7[1] = xmm7_7 + xmm1_10
    var_c = &eax_7[4]
    esi_1[-2] = xmm7_7 - xmm1_10
while (edx + edi u< &esi_1[-3])

return &esi_1[-3]
