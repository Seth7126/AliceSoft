// 函数: sub_6721a0
// 地址: 0x6721a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_214
int32_t eax_1 = __security_cookie ^ &var_214
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int32_t i_2 = 8
void var_1a4
void* var_1d4 = &var_1a4
void* eax_9 = arg3 + 0x20
void* ecx_1 = *(arg2 + 0x54) + 0x40
int16_t* var_204 = eax_9
void* var_210 = ecx_1
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
    int32_t ecx_9 = sx.d(var_204[0x20]) * *(var_210 + 0x80)
    int32_t esi_3 = sx.d(*var_204) * *var_210
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
    int32_t edi_8 = sx.d(var_204[-8]) * *(var_210 - 0x20)
    int32_t ebx_5 = sx.d(var_204[8]) * *(var_210 + 0x20)
    int32_t ebp_4 = sx.d(var_204[0x18]) * *(var_210 + 0x60)
    int32_t edx_6 = sx.d(var_204[0x28]) * *(var_210 + 0xa0)
    var_214 = edi_8
    int32_t eax_24 = (ebx_5 + edi_8) * 0x2ab7
    int32_t esi_7 = edx_6 << 0xd
    int32_t ecx_13 = edi_8 + ebp_4
    int32_t eax_25 = ecx_13 * 0x2652
    int32_t ecx_14 = ecx_13 * 0x1814
    int32_t edi_12 = esi_7 - edi_8 * 0x2410 + eax_25 + eax_24
    int32_t ecx_15 = ecx_14 - var_214 * 0x21f5
    int32_t eax_29 = var_214 - ebx_5
    var_214 = eax_29
    var_214 += edx_6
    int32_t eax_31 = eax_29 * 0xef2 - esi_7
    int32_t ecx_16 = ecx_15 + eax_31
    int32_t edx_9 = neg.d(esi_7) - (ebx_5 + ebp_4) * 0x511
    int32_t var_20c_2 = eax_24 + edx_9 - ebx_5 * 0xd92
    int32_t var_208_2 = eax_25 + edx_9 - ebp_4 * 0x4bf7
    int32_t ecx_19 = (ebp_4 - ebx_5) * 0x2cf8
    int32_t edx_12 = ecx_14 + esi_7 - ebp_4 * 0x361a + ecx_19
    int32_t esi_11 = eax_31 + ebx_5 * 0x1599 + ecx_19
    var_214 = (var_214 - ebp_4) << 2
    *(var_1d4 + 0x180) = (eax_19 - edi_12) s>> 0xb
    *(var_1d4 - 0x20) = (eax_19 + edi_12) s>> 0xb
    *var_1d4 = (eax_20 + var_20c_2) s>> 0xb
    *(var_1d4 + 0x160) = (eax_20 - var_20c_2) s>> 0xb
    int32_t ecx_25 = var_214
    *(var_1d4 + 0x20) = (eax_21 + var_208_2) s>> 0xb
    *(var_1d4 + 0x140) = (eax_21 - var_208_2) s>> 0xb
    *(var_1d4 + 0x40) = ecx_25 + ecx_7
    *(var_1d4 + 0x120) = ecx_7 - ecx_25
    *(var_1d4 + 0x100) = (ebx_3 - edx_12) s>> 0xb
    *(var_1d4 + 0x60) = (ebx_3 + edx_12) s>> 0xb
    *(var_1d4 + 0xe0) = (ebp_2 - esi_11) s>> 0xb
    *(var_1d4 + 0x80) = (ebp_2 + esi_11) s>> 0xb
    *(var_1d4 + 0xa0) = (ecx_16 + esi_5) s>> 0xb
    ecx_1 = var_210 + 4
    eax_9 = &var_204[1]
    *(var_1d4 + 0xc0) = (esi_5 - ecx_16) s>> 0xb
    i = i_2
    i_2 -= 1
    var_204 = eax_9
    var_210 = ecx_1
    var_1d4 += 4
while (i != 1)
int32_t i_1 = 0
void var_1bc
void* ecx_34 = &var_1bc
int32_t i_3 = 0
void* var_210_1 = &var_1bc

do
    int32_t edi_17 = (*(ecx_34 - 8) + 0x4010) << 0xd
    char* eax_59 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_60 = *(ecx_34 + 8)
    int32_t esi_12 = eax_60 * 0x28c6
    int32_t edx_17 = eax_60 * 0xa12
    int32_t ecx_35 = eax_60 * 0x1c37
    int32_t ebx_13 = edi_17 - ecx_35
    int32_t eax_61 = esi_12 + edi_17
    int32_t ebp_7 = edx_17 + edi_17
    int32_t ecx_39 = ecx_35 * 2 - edx_17 * 2 - esi_12 * 2 + edi_17
    int32_t edx_18 = *var_210_1
    int32_t ecx_41 = *(var_210_1 + 0x10)
    int32_t edi_18 = (ecx_41 + edx_18) * 0x2362
    int32_t esi_14 = edx_18 * 0x8bd + edi_18
    int32_t edi_19 = edi_18 - ecx_41 * 0x3704
    int32_t ecx_43 = edx_18 * 0x13a3 - ecx_41 * 0x2c1f
    int32_t eax_67 = esi_14 + eax_61
    int32_t edx_20 = eax_61 - esi_14
    int32_t eax_68 = edi_19 + ebp_7
    int32_t ebp_8 = ebp_7 - edi_19
    int32_t eax_69 = ecx_43 + ebx_13
    int32_t ebx_14 = ebx_13 - ecx_43
    int32_t eax_70 = *(var_210_1 - 4)
    int32_t ebx_15 = *(var_210_1 + 0xc)
    int32_t esi_15 = *(var_210_1 + 4)
    int32_t ebp_9 = *(var_210_1 + 0x14)
    var_214 = eax_70
    int32_t ecx_45 = ebx_15 + eax_70
    int32_t ebp_10 = ebp_9 << 0xd
    int32_t edi_20 = ecx_45 * 0x2652
    int32_t edx_21 = (eax_70 + esi_15) * 0x2ab7
    int32_t ecx_46 = ecx_45 * 0x1814
    int32_t edx_22 = var_214
    int32_t edi_23 = edi_20 - var_214 * 0x2410 + edx_21 + ebp_10
    int32_t edx_23 = edx_22 - esi_15
    var_214 = edx_23
    int32_t eax_75 = edx_23 * 0xef2 - ebp_10
    int32_t ecx_48 = ecx_46 - edx_22 * 0x21f5 + eax_75
    int32_t edx_26 = neg.d(ebp_10) - (ebx_15 + esi_15) * 0x511
    int32_t var_200_4 = edx_21 + edx_26 - esi_15 * 0xd92
    int32_t var_204_2 = edi_20 + edx_26 - ebx_15 * 0x4bf7
    int32_t edx_28 = (ebx_15 - esi_15) * 0x2cf8
    int32_t var_208_4 = ecx_46 + edx_28 - ebx_15 * 0x361a + ebp_10
    int32_t esi_17 = eax_75 + esi_15 * 0x1599 + edx_28
    var_214 = ((var_214 - ebx_15) << 0xd) + ebp_10
    *eax_59 = ((eax_67 + edi_23) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[0xd] = ((eax_67 - edi_23) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[1] = ((eax_68 + var_200_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[0xc] = ((eax_68 - var_200_4) s>> 0x12 & 0x3ff)[eax_6]
    int32_t ecx_60 = var_214
    eax_59[2] = ((eax_69 + var_204_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[0xb] = ((eax_69 - var_204_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[3] = ((ecx_60 + ecx_39) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[0xa] = ((ecx_39 - ecx_60) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[4] = ((ebx_14 + var_208_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[9] = ((ebx_14 - var_208_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[5] = ((ebp_8 + esi_17) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[8] = ((ebp_8 - esi_17) s>> 0x12 & 0x3ff)[eax_6]
    ecx_34 = var_210_1 + 0x20
    var_210_1 = ecx_34
    eax_59[6] = ((ecx_48 + edx_20) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[7] = ((edx_20 - ecx_48) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xe)

@__security_check_cookie@4(eax_1 ^ &var_214)
return i_1
