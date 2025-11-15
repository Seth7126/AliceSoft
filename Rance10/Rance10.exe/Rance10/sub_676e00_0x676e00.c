// 函数: sub_676e00
// 地址: 0x676e00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_1dc
int32_t eax_1 = __security_cookie ^ &var_1dc
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int32_t i_2 = 7
void var_170
void* var_1ac = &var_170
void* eax_9 = arg3 + 0x20
void* ecx_1 = *(arg2 + 0x54) + 0x40
int16_t* var_1c8 = eax_9
void* var_1c4 = ecx_1
int32_t i

do
    int32_t eax_11 = sx.d(*(eax_9 + 0x20)) * *(ecx_1 + 0x40)
    int32_t edi_4 = ((sx.d(*(eax_9 - 0x20)) * *(ecx_1 - 0x40)) << 0xd) + 0x400
    int32_t esi_1 = eax_11 * 0x28c6
    int32_t edx_1 = eax_11 * 0xa12
    int32_t ecx_2 = eax_11 * 0x1c37
    int32_t ebx_2 = edi_4 - ecx_2
    int32_t eax_12 = esi_1 + edi_4
    int32_t ebp_1 = edx_1 + edi_4
    int32_t ecx_7 = (ecx_2 * 2 - edx_1 * 2 - esi_1 * 2 + edi_4) s>> 0xb
    int32_t ecx_9 = sx.d(var_1c8[0x20]) * *(var_1c4 + 0x80)
    int32_t esi_3 = sx.d(*var_1c8) * *var_1c4
    int32_t edi_5 = (ecx_9 + esi_3) * 0x2362
    int32_t edx_4 = esi_3 * 0x8bd + edi_5
    int32_t edi_6 = edi_5 - ecx_9 * 0x3704
    int32_t ecx_11 = esi_3 * 0x13a3 - ecx_9 * 0x2c1f
    int32_t eax_19 = edx_4 + eax_12
    int32_t esi_5 = eax_12 - edx_4
    int32_t eax_20 = edi_6 + ebp_1
    int32_t ebp_2 = ebp_1 - edi_6
    int32_t eax_21 = ecx_11 + ebx_2
    int32_t ebx_3 = ebx_2 - ecx_11
    int32_t edi_8 = sx.d(var_1c8[-8]) * *(var_1c4 - 0x20)
    int32_t ebx_5 = sx.d(var_1c8[8]) * *(var_1c4 + 0x20)
    int32_t ebp_4 = sx.d(var_1c8[0x18]) * *(var_1c4 + 0x60)
    int32_t edx_6 = sx.d(var_1c8[0x28]) * *(var_1c4 + 0xa0)
    var_1dc = edi_8
    int32_t eax_24 = (ebx_5 + edi_8) * 0x2ab7
    int32_t esi_7 = edx_6 << 0xd
    int32_t ecx_13 = edi_8 + ebp_4
    int32_t eax_25 = ecx_13 * 0x2652
    int32_t ecx_14 = ecx_13 * 0x1814
    int32_t edi_12 = esi_7 - edi_8 * 0x2410 + eax_25 + eax_24
    int32_t ecx_15 = ecx_14 - var_1dc * 0x21f5
    int32_t eax_29 = var_1dc - ebx_5
    var_1dc = eax_29
    var_1dc += edx_6
    int32_t eax_31 = eax_29 * 0xef2 - esi_7
    int32_t ecx_16 = ecx_15 + eax_31
    int32_t edx_9 = neg.d(esi_7) - (ebx_5 + ebp_4) * 0x511
    int32_t var_1d0_2 = eax_24 + edx_9 - ebx_5 * 0xd92
    int32_t var_1cc_2 = eax_25 + edx_9 - ebp_4 * 0x4bf7
    int32_t ecx_19 = (ebp_4 - ebx_5) * 0x2cf8
    int32_t edx_12 = ecx_14 + esi_7 - ebp_4 * 0x361a + ecx_19
    int32_t esi_11 = eax_31 + ebx_5 * 0x1599 + ecx_19
    var_1dc = (var_1dc - ebp_4) << 2
    *(var_1ac + 0x150) = (eax_19 - edi_12) s>> 0xb
    *(var_1ac - 0x1c) = (eax_19 + edi_12) s>> 0xb
    *var_1ac = (eax_20 + var_1d0_2) s>> 0xb
    *(var_1ac + 0x134) = (eax_20 - var_1d0_2) s>> 0xb
    int32_t ecx_25 = var_1dc
    *(var_1ac + 0x1c) = (eax_21 + var_1cc_2) s>> 0xb
    *(var_1ac + 0x118) = (eax_21 - var_1cc_2) s>> 0xb
    *(var_1ac + 0x38) = ecx_25 + ecx_7
    *(var_1ac + 0xfc) = ecx_7 - ecx_25
    *(var_1ac + 0xe0) = (ebx_3 - edx_12) s>> 0xb
    *(var_1ac + 0x54) = (ebx_3 + edx_12) s>> 0xb
    *(var_1ac + 0xc4) = (ebp_2 - esi_11) s>> 0xb
    *(var_1ac + 0x70) = (ebp_2 + esi_11) s>> 0xb
    *(var_1ac + 0x8c) = (ecx_16 + esi_5) s>> 0xb
    ecx_1 = var_1c4 + 4
    eax_9 = &var_1c8[1]
    *(var_1ac + 0xa8) = (esi_5 - ecx_16) s>> 0xb
    i = i_2
    i_2 -= 1
    var_1c8 = eax_9
    var_1c4 = ecx_1
    var_1ac += 4
while (i != 1)
int32_t i_1 = 0
void var_17c
void* result = &var_17c
int32_t i_3 = 0

do
    int32_t ebx_12 = *result
    int32_t edi_15 = *(result - 8)
    char* ecx_35 = *(arg4 + (i_1 << 2)) + arg5
    int32_t edx_17 = *(result + 8)
    var_1dc = (*(result - 0x10) + 0x4010) << 0xd
    int32_t ebp_7 = (ebx_12 - edx_17) * 0x1c37
    int32_t esi_12 = (edi_15 - ebx_12) * 0xa12
    int32_t ecx_44 = edx_17 + edi_15
    int32_t esi_15 = esi_12 - ebx_12 * 0x3aeb + ebp_7 + var_1dc
    int32_t esi_17 = ecx_44 * 0x28c6 + var_1dc
    int32_t edi_16 = *(result + 4)
    int32_t ebp_8 = ebp_7 + esi_17 - edx_17 * 0x27d
    int32_t edx_20 = *(result - 4)
    int32_t var_1d8_4 = esi_12 + esi_17 - edi_15 * 0x4f0f
    int32_t esi_19 = *(result - 0xc)
    var_1dc += (ebx_12 - ecx_44) * 0x2d41
    int32_t ebp_9 = (edx_20 + esi_19) * 0x1def
    int32_t ecx_51 = (esi_19 - edx_20) * 0x573
    int32_t ecx_53 = (edi_16 + edx_20) * 0xffffd3e1
    int32_t ebp_11 = ebp_9 + ecx_51 + ecx_53
    int32_t edx_21 = (edi_16 + esi_19) * 0x13a3
    int32_t ebx_16 = ebp_9 - ecx_51 + edx_21
    int32_t edx_23 = ecx_53 + edi_16 * 0x3bde + edx_21
    *ecx_35 = ((ebp_8 + ebx_16) s>> 0x12 & 0x3ff)[eax_6]
    ecx_35[6] = ((ebp_8 - ebx_16) s>> 0x12 & 0x3ff)[eax_6]
    ecx_35[1] = ((esi_15 + ebp_11) s>> 0x12 & 0x3ff)[eax_6]
    result += 0x1c
    ecx_35[5] = ((esi_15 - ebp_11) s>> 0x12 & 0x3ff)[eax_6]
    ecx_35[2] = ((var_1d8_4 + edx_23) s>> 0x12 & 0x3ff)[eax_6]
    ecx_35[4] = ((var_1d8_4 - edx_23) s>> 0x12 & 0x3ff)[eax_6]
    ecx_35[3] = (var_1dc s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xe)

@__security_check_cookie@4(eax_1 ^ &var_1dc)
return result
