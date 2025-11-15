// 函数: sub_6baa70
// 地址: 0x6baa70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg3 + 0x10
int32_t eax_1 = arg4 s>> 1
int32_t* edi_1 = arg2 - 0x20 + (eax_1 << 2)
int32_t* result = &edi_1[arg4 - eax_1 + 7]

do
    float xmm2_1 = result[-1]
    float xmm0_1 = *result
    float xmm4_2 = xmm2_1 f- edi_1[6]
    float xmm3_2 = xmm0_1 f- edi_1[7]
    result[-1] = xmm2_1 f+ edi_1[6]
    *result = xmm0_1 f+ edi_1[7]
    edi_1[6] = *(ecx - 0xc) * xmm3_2 + xmm4_2 f* *(ecx - 0x10)
    edi_1[7] = xmm3_2 f* *(ecx - 0x10) - *(ecx - 0xc) * xmm4_2
    float xmm3_5 = result[-3]
    float xmm0_7 = result[-2]
    float xmm4_4 = xmm3_5 f- edi_1[4]
    float xmm2_4 = xmm0_7 f- edi_1[5]
    result[-3] = xmm3_5 f+ edi_1[4]
    result[-2] = xmm0_7 f+ edi_1[5]
    edi_1[4] = *ecx * xmm4_4 + xmm2_4 f* *(ecx + 4)
    edi_1[5] = *ecx * xmm2_4 - xmm4_4 f* *(ecx + 4)
    float xmm2_5 = result[-5]
    float xmm0_14 = result[-4]
    float xmm4_7 = xmm2_5 f- edi_1[2]
    float xmm3_8 = xmm0_14 f- edi_1[3]
    result[-5] = xmm2_5 f+ edi_1[2]
    result[-4] = xmm0_14 f+ edi_1[3]
    edi_1[2] = xmm3_8 f* *(ecx + 0x14) + xmm4_7 f* *(ecx + 0x10)
    float xmm1_10 = *edi_1
    edi_1[3] = xmm3_8 f* *(ecx + 0x10) - xmm4_7 f* *(ecx + 0x14)
    float xmm0_18 = result[-6]
    float xmm4_10 = result[-7] f- xmm1_10
    float xmm3_12 = xmm0_18 f- edi_1[1]
    result[-7] = xmm1_10 f+ result[-7]
    result[-6] = xmm0_18 f+ edi_1[1]
    *edi_1 = xmm3_12 f* *(ecx + 0x24) + xmm4_10 f* *(ecx + 0x20)
    edi_1[1] = xmm3_12 f* *(ecx + 0x20) - xmm4_10 f* *(ecx + 0x24)
    result -= 0x20
    edi_1 -= 0x20
    ecx += 0x40
while (edi_1 u>= arg2)

return result
