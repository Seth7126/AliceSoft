// 函数: sub_6768b0
// 地址: 0x6768b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_25c
int32_t eax_1 = __security_cookie ^ &var_25c
int16_t* ebp_1 = arg3 + 0x20
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int16_t* var_24c = ebp_1
int32_t i_2 = 8
int32_t* esi_1 = *(arg2 + 0x54) + 0x40
void var_1e4
void* var_254 = &var_1e4
int32_t* var_23c = esi_1
int32_t i

do
    int32_t eax_9 = sx.d(ebp_1[0x10]) * esi_1[0x10]
    int32_t edi_2 = sx.d(ebp_1[0x20]) * esi_1[0x20]
    int32_t ecx_1 = eax_9 * 0x29cf
    int32_t eax_10 = eax_9 * 0x1151
    int32_t ebx_4 = ((sx.d(ebp_1[-0x10]) * esi_1[-0x10]) << 0xd) + 0x400
    int32_t edx_1 = ecx_1 + ebx_4
    int32_t edx_3 = ebx_4 - ecx_1
    int32_t ecx_2 = eax_10 + ebx_4
    int32_t ebx_5 = ebx_4 - eax_10
    int32_t edx_5 = sx.d(*ebp_1) * *esi_1
    int32_t eax_12 = edx_5 - edi_2
    int32_t ebp_2 = eax_12 * 0x8d4
    int32_t ebx_6 = eax_12 * 0x2c63
    int32_t esi_3 = edx_5 * 0x1ccd + ebp_2
    int32_t ecx_4 = edi_2 * 0x5203 + ebx_6
    int32_t ebx_7 = ebx_6 - edx_5 * 0x133e
    int32_t ebp_3 = ebp_2 - edi_2 * 0x1050
    int32_t eax_15 = edx_1 + ecx_4
    int32_t edx_7 = edx_1 - ecx_4
    int32_t eax_16 = ecx_2 + esi_3
    int32_t ecx_6 = ecx_2 - esi_3
    int32_t eax_17 = ebx_5 + ebx_7
    int32_t ecx_8 = ebx_5 - ebx_7
    int32_t eax_18 = edx_3 + ebp_3
    int32_t ecx_10 = edx_3 - ebp_3
    int32_t edx_9 = sx.d(var_24c[-8]) * var_23c[-8]
    int32_t edi_4 = sx.d(var_24c[8]) * var_23c[8]
    int32_t ebp_5 = sx.d(var_24c[0x18]) * var_23c[0x18]
    int32_t ebx_9 = sx.d(var_24c[0x28]) * var_23c[0x28]
    int32_t ecx_12 = edx_9 + ebp_5
    var_25c = (edi_4 + edx_9) * 0x2b4e
    int32_t eax_22 = ecx_12 * 0x27e9
    int32_t ecx_13 = ecx_12 * 0x1555
    int32_t esi_4 = (ebx_9 + edx_9) * 0x22fc
    int32_t eax_26 = (edx_9 - ebx_9) * 0x1cb6
    int32_t eax_29 = (edx_9 - edi_4) * 0xd23
    int32_t esi_7 = esi_4 - edx_9 * 0x492a + eax_22 + var_25c
    int32_t ecx_14 = (edi_4 + ebp_5) * 0x470
    int32_t edx_13 = eax_29 - edx_9 * 0x3abe + ecx_13 + eax_26
    var_25c += edi_4 * 0x24d + ecx_14
    int32_t var_244_2 = eax_22 + ecx_14 - ebp_5 * 0x2406
    int32_t edx_14 = (ebp_5 - edi_4) * 0x2d09
    int32_t var_250_2 = ecx_13 + edx_14 - ebp_5 * 0x1886
    int32_t edi_5 = edi_4 + ebx_9
    int32_t ecx_18 = edi_5 * 0xffffd817
    int32_t edx_15 = edi_5 * 0xffffeaab
    int32_t var_258_3 = eax_29 + edi_4 * 0x3f1a + edx_14 + ecx_18
    var_25c += edx_15
    int32_t ecx_19 = (ebx_9 + ebp_5) * 0xffffd4b2
    int32_t edi_7 = var_244_2 + ecx_19
    int32_t edx_17 = esi_4 + ebx_9 * 0x2218 + ecx_19 + edx_15
    int32_t eax_47 = (ebx_9 - ebp_5) * 0xd23
    int32_t var_250_3 = var_250_2 + eax_47
    int32_t ebx_12 = eax_26 + ebx_9 * 0x6485 + ecx_18 + eax_47
    *(var_254 - 0x20) = (eax_15 + esi_7) s>> 0xb
    *(var_254 + 0x1c0) = (eax_15 - esi_7) s>> 0xb
    int32_t ecx_23 = var_25c
    *var_254 = (eax_16 + ecx_23) s>> 0xb
    *(var_254 + 0x1a0) = (eax_16 - ecx_23) s>> 0xb
    *(var_254 + 0x180) = (eax_17 - edi_7) s>> 0xb
    *(var_254 + 0x20) = (eax_17 + edi_7) s>> 0xb
    *(var_254 + 0x40) = (eax_18 + edx_17) s>> 0xb
    *(var_254 + 0x160) = (eax_18 - edx_17) s>> 0xb
    var_23c = &var_23c[1]
    *(var_254 + 0x140) = (ecx_10 - ebx_12) s>> 0xb
    *(var_254 + 0x60) = (ecx_10 + ebx_12) s>> 0xb
    ebp_1 = &var_24c[1]
    *(var_254 + 0x120) = (ecx_8 - var_250_3) s>> 0xb
    *(var_254 + 0x80) = (ecx_8 + var_250_3) s>> 0xb
    var_24c = ebp_1
    *(var_254 + 0x100) = (ecx_6 - var_258_3) s>> 0xb
    *(var_254 + 0xa0) = (ecx_6 + var_258_3) s>> 0xb
    *(var_254 + 0xc0) = (edx_7 + edx_13) s>> 0xb
    *(var_254 + 0xe0) = (edx_7 - edx_13) s>> 0xb
    i = i_2
    i_2 -= 1
    var_254 += 4
    esi_1 = var_23c
while (i != 1)
int32_t i_1 = 0
void var_1fc
void* result = &var_1fc
int32_t i_3 = 0

do
    int32_t esi_13 = *(result + 0x10)
    int32_t ebx_14 = *(result - 8) + 0x4010
    char* ecx_39 = *(arg4 + (i_1 << 2)) + arg5
    int32_t edx_25 = *result
    int32_t ecx_40 = *(result + 8)
    int32_t ebp_10 = (ecx_40 + ebx_14) << 0xd
    int32_t edi_8 = (esi_13 + edx_25) * 0x1151
    int32_t ebx_16 = (ebx_14 - ecx_40) << 0xd
    int32_t edx_27 = edx_25 * 0x187e + edi_8
    int32_t edi_9 = edi_8 - esi_13 * 0x3b21
    int32_t ecx_43 = edx_27 + ebp_10
    int32_t ebp_11 = ebp_10 - edx_27
    int32_t ecx_44 = edi_9 + ebx_16
    int32_t ebx_17 = ebx_16 - edi_9
    int32_t edi_10 = *(result + 0x14)
    int32_t edx_29 = *(result + 4) + edi_10
    int32_t ebx_18 = *(result - 4)
    int32_t esi_15 = *(result + 0xc) + ebx_18
    int32_t ebp_12 = (esi_15 + edx_29) * 0x25a1
    int32_t edx_31 = ebp_12 - edx_29 * 0x3ec5
    int32_t ebp_13 = ebp_12 - esi_15 * 0xc7c
    int32_t edi_11 = *(result + 4)
    int32_t ecx_49 = (ebx_18 + edi_10) * 0xffffe333
    int32_t esi_18 = edi_10 * 0x98e + edx_31 + ecx_49
    int32_t esi_19 = *(result + 0xc)
    int32_t edx_34 = ebx_18 * 0x300b + ebp_13 + ecx_49
    int32_t ecx_51 = (edi_11 + esi_19) * 0xffffadfd
    int32_t ebx_21 = esi_19 * 0x41b3 + ebp_13 + ecx_51
    int32_t esi_22 = edi_11 * 0x6254 + edx_31 + ecx_51
    *ecx_39 = ((edx_34 + ecx_43) s>> 0x12 & 0x3ff)[eax_6]
    ecx_39[7] = ((ecx_43 - edx_34) s>> 0x12 & 0x3ff)[eax_6]
    ecx_39[1] = ((ecx_44 + esi_22) s>> 0x12 & 0x3ff)[eax_6]
    result += 0x20
    ecx_39[6] = ((ecx_44 - esi_22) s>> 0x12 & 0x3ff)[eax_6]
    ecx_39[2] = ((ebx_17 + ebx_21) s>> 0x12 & 0x3ff)[eax_6]
    ecx_39[5] = ((ebx_17 - ebx_21) s>> 0x12 & 0x3ff)[eax_6]
    ecx_39[3] = ((ebp_11 + esi_18) s>> 0x12 & 0x3ff)[eax_6]
    ecx_39[4] = ((ebp_11 - esi_18) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0x10)

@__security_check_cookie@4(eax_1 ^ &var_25c)
return result
