// 函数: sub_6402e0
// 地址: 0x6402e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = arg3 + 0x10
int32_t eax_1 = arg4 s>> 1
float* edi_1 = arg2 - 0x20 + (eax_1 << 2)
int32_t* result = &edi_1[arg4 - eax_1 + 7]

do
    float xmm2_1 = result[-1]
    float xmm0_1 = *result
    float xmm4_2 = xmm2_1 - edi_1[6]
    float xmm3_2 = xmm0_1 - edi_1[7]
    result[-1] = xmm2_1 + edi_1[6]
    *result = xmm0_1 + edi_1[7]
    edi_1[6] = *(ecx - 0x10) * xmm4_2 + *(ecx - 0xc) * xmm3_2
    edi_1[7] = *(ecx - 0x10) * xmm3_2 - *(ecx - 0xc) * xmm4_2
    float xmm2_3 = result[-3]
    float xmm0_7 = result[-2]
    float xmm4_4 = xmm2_3 - edi_1[4]
    float xmm3_4 = xmm0_7 - edi_1[5]
    result[-3] = xmm2_3 + edi_1[4]
    result[-2] = xmm0_7 + edi_1[5]
    edi_1[4] = *(ecx + 4) * xmm3_4 + xmm4_4 f* *ecx
    edi_1[5] = xmm3_4 f* *ecx - *(ecx + 4) * xmm4_4
    float xmm2_5 = result[-5]
    float xmm0_13 = result[-4]
    float xmm4_6 = xmm2_5 - edi_1[2]
    float xmm3_8 = xmm0_13 - edi_1[3]
    result[-5] = xmm2_5 + edi_1[2]
    result[-4] = xmm0_13 + edi_1[3]
    edi_1[2] = *(ecx + 0x14) * xmm3_8 + *(ecx + 0x10) * xmm4_6
    edi_1[3] = *(ecx + 0x10) * xmm3_8 - *(ecx + 0x14) * xmm4_6
    float xmm2_7 = result[-7]
    float xmm0_19 = result[-6]
    float xmm4_8 = xmm2_7 - *edi_1
    float xmm3_10 = xmm0_19 - edi_1[1]
    result[-7] = xmm2_7 + *edi_1
    result[-6] = xmm0_19 + edi_1[1]
    *edi_1 = *(ecx + 0x24) * xmm3_10 + *(ecx + 0x20) * xmm4_8
    float xmm1_19 = *(ecx + 0x20)
    result -= 0x20
    float xmm0_23 = *(ecx + 0x24)
    ecx += 0x40
    edi_1[1] = xmm1_19 * xmm3_10 - xmm0_23 * xmm4_8
    edi_1 -= 0x20
while (edi_1 u>= arg2)

return result
