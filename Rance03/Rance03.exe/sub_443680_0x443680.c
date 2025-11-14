// 函数: sub_443680
// 地址: 0x443680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_2 = 8
int32_t* var_20 = arg2 + 0x40
int32_t* ebx_2 = arg2 + 0x40
int32_t i

do
    int32_t edi_1 = ebx_2[0x20]
    int32_t edx_1 = ebx_2[0x18]
    int32_t eax_2 = *ebx_2 + edi_1
    int32_t ecx_1 = ebx_2[8]
    int32_t ebp_2 = edx_1 - ecx_1
    int32_t eax_3 = ebx_2[0x28]
    int32_t ecx_2 = ecx_1 + edx_1
    int32_t ebx_3 = ebx_2[-8]
    int32_t esi_1 = eax_3 + ebx_3
    int32_t ebx_4 = ebx_3 - eax_3
    int32_t eax_4 = ecx_2 + esi_1
    int32_t edx_2 = var_20[-0x10]
    int32_t ebx_9 = ((ebx_4 * 0x1d9 - ebp_2 * 0xc4 + 0x80) s>> 8) - eax_4
    int32_t ebx_11 = edx_2 - var_20[0x10]
    int32_t edx_3 = edx_2 + var_20[0x10]
    int32_t ebp_4 = ebx_9 - (((esi_1 - ecx_2) * 0x16a + 0x80) s>> 8)
    int32_t edi_2 = edx_3 + eax_2
    int32_t edx_4 = edx_3 - eax_2
    int32_t eax_15 = (((*var_20 - edi_1) * 0x16a + 0x80) s>> 8) - eax_2
    int32_t esi_4 = eax_15 + ebx_11
    int32_t ebx_12 = ebx_11 - eax_15
    int32_t ecx_8 = neg.d(((ebp_2 * 0x1d9 + ebx_4 * 0xc4 + 0x80) s>> 8) + ebp_4)
    var_20[-0x10] = eax_4 + edi_2
    var_20[-8] = ebx_9 + esi_4
    *var_20 = ebx_12 - ebp_4
    var_20[8] = edx_4 - ecx_8
    var_20[0x10] = ecx_8 + edx_4
    var_20[0x18] = ebx_12 + ebp_4
    var_20[0x20] = esi_4 - ebx_9
    var_20[0x28] = edi_2 - eax_4
    ebx_2 = &var_20[1]
    var_20 = ebx_2
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t i_3 = 8
void* var_20_1 = arg1 + 4
void* result = arg2 + 0x14
void* result_1 = result
int32_t i_1

do
    int32_t ebx_14 = *(result + 4)
    int32_t ebp_5 = *(result - 0xc)
    int32_t edx_5 = *(result - 8)
    int32_t edi_7 = *(result - 0x10) + *(result + 8)
    int32_t ecx_10 = ebx_14 + ebp_5
    int32_t ecx_12 = *result - edx_5
    int32_t esi_7 = *(result - 0x10) - *(result + 8)
    int32_t edx_6 = edx_5 + *result
    int32_t esi_8 = *(result - 0x14)
    int32_t ecx_13 = edx_6 + edi_7
    void* ecx_19 = ((esi_7 * 0x1d9 - ecx_12 * 0xc4 + 0x80) s>> 8) - ecx_13
    void* edx_8 = ecx_19 - (((edi_7 - edx_6) * 0x16a + 0x80) s>> 8)
    int32_t ecx_24 = esi_8 - *(result - 4)
    int32_t esi_9 = esi_8 + *(result - 4)
    int32_t ecx_28 = (((ebp_5 - ebx_14) * 0x16a + 0x80) s>> 8) - ecx_10
    int32_t ebx_15 = esi_9 + ecx_10
    int32_t esi_10 = esi_9 - ecx_10
    int32_t edi_9 = ecx_28 + ecx_24
    int32_t ebp_8 = ecx_24 - ecx_28
    int32_t edx_14 = neg.d(((ecx_12 * 0x1d9 + esi_7 * 0xc4 + 0x80) s>> 8) + edx_8)
    *(var_20_1 - 4) = ((ecx_13 + 0x80 + ebx_15) s>> 8).w
    *(var_20_1 - 2) = ((ecx_19 + 0x80 + edi_9) s>> 8).w
    *var_20_1 = ((ebp_8 - edx_8 + 0x80) s>> 8).w
    *(var_20_1 + 2) = ((esi_10 - edx_14 + 0x80) s>> 8).w
    *(var_20_1 + 4) = ((edx_14 + 0x80 + esi_10) s>> 8).w
    result = result_1 + 0x20
    *(var_20_1 + 6) = ((edx_8 + 0x80 + ebp_8) s>> 8).w
    *(var_20_1 + 8) = ((edi_9 - ecx_19 + 0x80) s>> 8).w
    *(var_20_1 + 0xa) = ((ebx_15 - ecx_13 + 0x80) s>> 8).w
    i_1 = i_3
    i_3 -= 1
    result_1 = result
    var_20_1 += 0x10
while (i_1 != 1)
return result
