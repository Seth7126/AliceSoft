// 函数: sub_671ba0
// 地址: 0x671ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_1f0
int32_t eax_1 = __security_cookie ^ &var_1f0
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int32_t i_2 = 8
void var_184
void* var_1dc = &var_184
int16_t* eax_9 = arg3 + 0x40
int32_t* ecx_1 = *(arg2 + 0x54) + 0x80
int16_t* var_1d8 = eax_9
int32_t* var_1d4 = ecx_1
int32_t i

do
    int32_t eax_11 = sx.d(eax_9[0x10]) * ecx_1[0x10]
    int32_t esi_2 = sx.d(*eax_9) * *ecx_1
    int32_t edi_2 = sx.d(eax_9[-0x10]) * ecx_1[-0x10]
    int32_t edx_1 = eax_11 + esi_2
    int32_t ebx_4 = ((sx.d(eax_9[-0x20]) * ecx_1[-0x20]) << 0xd) + 0x400
    int32_t esi_3 = esi_2 - eax_11
    int32_t ecx_2 = edx_1 * 0x24f9
    int32_t eax_13 = esi_3 * 0x319 + ebx_4
    int32_t ebp_3 = edi_2 * 0x2bf1 + eax_13 + ecx_2
    int32_t ecx_3 = edx_1 * 0xa20
    int32_t ebp_6 = edi_2 * 0x100c - ecx_2 + eax_13
    int32_t ebp_8 = esi_3 * 0xf95 + ebx_4
    int32_t eax_16 = edi_2 * 0x21e0 - ecx_3 + ebp_8
    int32_t ebp_10 = ebp_8 - edi_2 * 0x2812 + ecx_3
    int32_t ebp_11 = edx_1 * 0xdf2
    int32_t ecx_5 = esi_3 * 0x1dfe - ebx_4
    int32_t edx_5 = neg.d(ecx_5) - edi_2 * 0x574 - ebp_11
    int32_t ebp_13 = ebp_11 - edi_2 * 0x19b5 - ecx_5
    int32_t esi_6 = sx.d(var_1d8[-0x18]) * var_1d4[-0x18]
    int32_t ebp_15 = sx.d(var_1d8[-8]) * var_1d4[-8]
    int32_t ecx_7 = sx.d(var_1d8[8]) * var_1d4[8]
    int32_t ebx_6 = sx.d(var_1d8[0x18]) * var_1d4[0x18]
    int32_t edx_7 = ebx_6 + esi_6
    int32_t edi_3 = edx_7 * 0x1e02
    var_1f0 = (esi_6 + ebp_15) * 0x2a50
    int32_t eax_26 = (ecx_7 + esi_6) * 0x253e
    int32_t edi_6 = edi_3 - esi_6 * 0x40a5 + eax_26 + var_1f0
    int32_t ecx_8 = (ecx_7 + ebp_15) * 0xfffff52b
    var_1f0 += ebp_15 * 0x1acb + ecx_8
    int32_t var_1ec_2 = eax_26 + ecx_8 - ecx_7 * 0x324f
    int32_t ecx_10 = (ebx_6 + ebp_15) * 0xffffdac2
    var_1f0 += ecx_10
    int32_t eax_37 = (ecx_7 + ebx_6) * 0xffffeaf8
    int32_t var_1ec_3 = var_1ec_2 + eax_37
    int32_t ecx_13 = edi_3 + ebx_6 * 0x4694 + ecx_10 + eax_37
    int32_t ecx_14 = edx_7 * 0xad5
    int32_t edx_8 = (ecx_7 - ebp_15) * 0x1e02
    int32_t esi_10 = esi_6 * 0xa33 - ebp_15 * 0xeea + ecx_14 + edx_8
    int32_t edx_10 = ecx_14 + ecx_7 * 0xc4e - ebx_6 * 0x37c1 + edx_8
    *(var_1dc + 0x160) = (ebp_3 - edi_6) s>> 0xb
    int32_t ecx_21 = var_1f0
    *(var_1dc - 0x20) = (ebp_3 + edi_6) s>> 0xb
    *var_1dc = (eax_16 + ecx_21) s>> 0xb
    *(var_1dc + 0x140) = (eax_16 - ecx_21) s>> 0xb
    *(var_1dc + 0x20) = (ebp_6 + var_1ec_3) s>> 0xb
    *(var_1dc + 0x120) = (ebp_6 - var_1ec_3) s>> 0xb
    *(var_1dc + 0x100) = (edx_5 - ecx_13) s>> 0xb
    *(var_1dc + 0x40) = (edx_5 + ecx_13) s>> 0xb
    *(var_1dc + 0xe0) = (ebp_13 - esi_10) s>> 0xb
    *(var_1dc + 0x60) = (esi_10 + ebp_13) s>> 0xb
    *(var_1dc + 0x80) = (edx_10 + ebp_10) s>> 0xb
    *(var_1dc + 0xa0) = ((esi_3 - edi_2) * 0x2d41 + ebx_4) s>> 0xb
    *(var_1dc + 0xc0) = (ebp_10 - edx_10) s>> 0xb
    eax_9 = &var_1d8[1]
    ecx_1 = &var_1d4[1]
    var_1d8 = eax_9
    var_1d4 = ecx_1
    i = i_2
    i_2 -= 1
    var_1dc += 4
while (i != 1)
int32_t i_1 = 0
void var_194
void* ecx_33 = &var_194
int32_t i_3 = 0
void* var_1e4_2 = &var_194

do
    int32_t edi_11 = *ecx_33
    int32_t esi_11 = *(ecx_33 - 8)
    char* eax_58 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_59 = *(ecx_33 + 8)
    int32_t ebx_12 = (*(ecx_33 - 0x10) + 0x4010) << 0xd
    int32_t edx_12 = eax_59 + edi_11
    int32_t edi_12 = edi_11 - eax_59
    int32_t ecx_34 = edx_12 * 0x24f9
    int32_t eax_61 = edi_12 * 0x319 + ebx_12
    int32_t ebp_20 = esi_11 * 0x2bf1 + eax_61 + ecx_34
    int32_t ecx_35 = edx_12 * 0xa20
    int32_t ebp_23 = esi_11 * 0x100c - ecx_34 + eax_61
    int32_t ebp_25 = edi_12 * 0xf95 + ebx_12
    int32_t eax_64 = esi_11 * 0x21e0 - ecx_35 + ebp_25
    int32_t ebp_27 = ebp_25 - esi_11 * 0x2812 + ecx_35
    int32_t ebp_28 = edx_12 * 0xdf2
    int32_t ecx_37 = edi_12 * 0x1dfe - ebx_12
    int32_t edx_16 = neg.d(ecx_37) - esi_11 * 0x574 - ebp_28
    int32_t ebp_30 = ebp_28 - esi_11 * 0x19b5 - ecx_37
    int32_t esi_12 = *(var_1e4_2 - 0xc)
    int32_t edi_14 = *(var_1e4_2 - 4)
    int32_t ecx_38 = *(var_1e4_2 + 4)
    int32_t ebp_31 = *(var_1e4_2 + 0xc)
    int32_t eax_72 = (edi_14 + esi_12) * 0x2a50
    int32_t ebx_13 = (esi_12 + ebp_31) * 0x1e02
    var_1f0 = (ecx_38 + esi_12) * 0x253e
    int32_t ebx_16 = ebx_13 - esi_12 * 0x40a5 + var_1f0 + eax_72
    int32_t ecx_39 = (ecx_38 + edi_14) * 0xfffff52b
    int32_t var_1ec_5 = eax_72 + edi_14 * 0x1acb + ecx_39
    var_1f0 += ecx_39 - *(var_1e4_2 + 4) * 0x324f
    int32_t ecx_41 = (edi_14 + ebp_31) * 0xffffdac2
    int32_t var_1ec_6 = var_1ec_5 + ecx_41
    int32_t var_1e8_4 = ebx_13 + ebp_31 * 0x4694 + ecx_41
    int32_t edx_20 = (esi_12 + ebp_31) * 0xad5
    int32_t ecx_42 = *(var_1e4_2 + 4)
    int32_t eax_85 = (ecx_42 + ebp_31) * 0xffffeaf8
    var_1f0 += eax_85
    int32_t var_1e8_5 = var_1e8_4 + eax_85
    int32_t edx_21 = (ecx_42 - edi_14) * 0x1e02
    int32_t esi_16 = esi_12 * 0xa33 - edi_14 * 0xeea + edx_20 + edx_21
    int32_t edx_23 = edx_20 + ecx_42 * 0xc4e - ebp_31 * 0x37c1 + edx_21
    *eax_58 = ((ebp_20 + ebx_16) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[0xc] = ((ebp_20 - ebx_16) s>> 0x12 & 0x3ff)[eax_6]
    int32_t ecx_51 = var_1f0
    eax_58[1] = ((eax_64 + var_1ec_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[0xb] = ((eax_64 - var_1ec_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[2] = ((ebp_23 + ecx_51) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[0xa] = ((ebp_23 - ecx_51) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[3] = ((edx_16 + var_1e8_5) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[9] = ((edx_16 - var_1e8_5) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[4] = ((esi_16 + ebp_30) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[8] = ((ebp_30 - esi_16) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[5] = ((edx_23 + ebp_27) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[7] = ((ebp_27 - edx_23) s>> 0x12 & 0x3ff)[eax_6]
    ecx_33 = var_1e4_2 + 0x20
    var_1e4_2 = ecx_33
    eax_58[6] = (((edi_12 - esi_11) * 0x2d41 + ebx_12) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xd)

@__security_check_cookie@4(eax_1 ^ &var_1f0)
return i_1
