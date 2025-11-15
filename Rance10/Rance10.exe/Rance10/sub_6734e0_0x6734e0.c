// 函数: sub_6734e0
// 地址: 0x6734e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_158
int32_t eax_1 = __security_cookie ^ &var_158
int16_t* ebp = arg3
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int32_t i_2 = 8
int32_t* ebx = *(arg2 + 0x54)
void var_104
void* eax_8 = &var_104
var_158 = ebx
int32_t i

do
    int16_t ecx_1 = ebp[8]
    int32_t ecx_4
    
    if (ecx_1 != 0 || ebp[0x10] != ecx_1 || ebp[0x18] != ecx_1 || ebp[0x20] != ecx_1
            || ebp[0x28] != ecx_1 || ebp[0x30] != ecx_1 || ebp[0x38] != ecx_1)
        int32_t edx_2 = sx.d(ebp[0x10]) * ebx[0x10]
        int32_t esi_2 = sx.d(ebp[0x30]) * ebx[0x30]
        int32_t edi_1 = (esi_2 + edx_2) * 0x1151
        int32_t edx_4 = edx_2 * 0x187e + edi_1
        int32_t edi_2 = edi_1 - esi_2 * 0x3b21
        int32_t ecx_9 = (sx.d(ebp[0x20]) * ebx[0x20]) << 0xd
        int32_t ebx_4 = ((sx.d(*ebp) * *var_158) << 0xd) + 0x400
        int32_t esi_4 = ecx_9 + ebx_4
        int32_t ebx_5 = ebx_4 - ecx_9
        int32_t ecx_10 = esi_4 + edx_4
        int32_t esi_5 = esi_4 - edx_4
        int32_t ecx_11 = ebx_5 + edi_2
        int32_t* esi_6 = var_158
        int32_t ebx_6 = ebx_5 - edi_2
        int32_t ecx_13 = sx.d(ebp[0x38]) * esi_6[0x38]
        int32_t edx_6 = sx.d(ebp[0x18]) * esi_6[0x18]
        int32_t ebx_8 = sx.d(ebp[0x28]) * esi_6[0x28]
        int32_t edi_5 = sx.d(ebp[8]) * esi_6[8]
        int32_t edx_7 = edx_6 + ecx_13
        int32_t esi_7 = ebx_8 + edi_5
        int32_t ebx_9 = (esi_7 + edx_7) * 0x25a1
        int32_t ebp_2 = ebx_9 - edx_7 * 0x3ec5
        int32_t ebx_10 = ebx_9 - esi_7 * 0xc7c
        int32_t ecx_18 = (ecx_13 + edi_5) * 0xffffe333
        int32_t esi_10 = edi_5 * 0x300b + ecx_18 + ebx_10
        int32_t edx_11 = ecx_13 * 0x98e + ecx_18 + ebp_2
        int32_t ecx_21 = (edx_6 + ebx_8) * 0xffffadfd
        int32_t edi_8 = ebx_8 * 0x41b3 + ecx_21 + ebx_10
        int32_t edx_14 = edx_6 * 0x6254 + ecx_21 + ebp_2
        *(eax_8 + 0xe0) = (ecx_10 - esi_10) s>> 0xb
        *eax_8 = (ecx_10 + esi_10) s>> 0xb
        *(eax_8 + 0x20) = (ecx_11 + edx_14) s>> 0xb
        ebp = arg3
        *(eax_8 + 0xc0) = (ecx_11 - edx_14) s>> 0xb
        *(eax_8 + 0xa0) = (ebx_6 - edi_8) s>> 0xb
        *(eax_8 + 0x40) = (ebx_6 + edi_8) s>> 0xb
        ecx_4 = (esi_5 + edx_11) s>> 0xb
        *(eax_8 + 0x80) = (esi_5 - edx_11) s>> 0xb
        ebx = var_158
    else
        ecx_4 = (sx.d(*ebp) * *ebx) << 2
        *eax_8 = ecx_4
        *(eax_8 + 0x20) = ecx_4
        *(eax_8 + 0x40) = ecx_4
        *(eax_8 + 0x80) = ecx_4
        *(eax_8 + 0xa0) = ecx_4
        *(eax_8 + 0xc0) = ecx_4
        *(eax_8 + 0xe0) = ecx_4
    
    *(eax_8 + 0x60) = ecx_4
    ebp = &ebp[1]
    ebx = &ebx[1]
    i = i_2 - 1
    arg3 = ebp
    eax_8 += 4
    i_2 = i
    var_158 = ebx
while (i s> 0)
int32_t i_1 = 0
void var_fc
void* esi_11 = &var_fc
int32_t i_3 = 0
void* var_148_2 = &var_fc

do
    int32_t ebx_22 = (*(esi_11 - 8) + 0x4010) << 0xd
    char* eax_10 = *(arg4 + (i_1 << 2)) + arg5
    int32_t ecx_31 = *(esi_11 + 8) * 0x29cf
    int32_t eax_11 = *(esi_11 + 8) * 0x1151
    int32_t edx_19 = ecx_31 + ebx_22
    int32_t edx_21 = ebx_22 - ecx_31
    int32_t ecx_32 = ebx_22 + eax_11
    int32_t ebx_23 = ebx_22 - eax_11
    int32_t ecx_33 = *esi_11
    int32_t esi_12 = *(esi_11 + 0x10)
    int32_t eax_13 = ecx_33 - esi_12
    int32_t ebp_3 = eax_13 * 0x8d4
    int32_t ebx_24 = eax_13 * 0x2c63
    int32_t edi_10 = ecx_33 * 0x1ccd + ebp_3
    int32_t edx_23 = esi_12 * 0x5203 + ebx_24
    int32_t ebx_25 = ebx_24 - ecx_33 * 0x133e
    int32_t ebp_4 = ebp_3 - esi_12 * 0x1050
    int32_t eax_16 = edx_19 + edx_23
    void* ecx_35 = edx_19 - edx_23
    int32_t eax_17 = ecx_32 + edi_10
    int32_t ecx_37 = ecx_32 - edi_10
    int32_t eax_18 = ebx_23 + ebx_25
    void* ecx_39 = ebx_23 - ebx_25
    int32_t eax_19 = edx_21 + ebp_4
    int32_t ecx_41 = edx_21 - ebp_4
    int32_t edx_24 = *(var_148_2 - 4)
    int32_t esi_13 = *(var_148_2 + 4)
    int32_t ebx_26 = *(var_148_2 + 0xc)
    int32_t ebp_6 = *(var_148_2 + 0x14)
    int32_t edi_11 = (edx_24 + esi_13) * 0x2b4e
    int32_t ecx_42 = edx_24 + ebx_26
    int32_t eax_21 = ecx_42 * 0x27e9
    int32_t* ecx_43 = ecx_42 * 0x1555
    int32_t eax_23 = (edx_24 + ebp_6) * 0x22fc
    var_158 = ecx_43
    int32_t eax_26 = (edx_24 - ebp_6) * 0x1cb6
    int32_t eax_29 = (edx_24 - esi_13) * 0xd23
    int32_t edi_14 = edi_11 - edx_24 * 0x492a + eax_23 + eax_21
    int32_t ecx_44 = (ebx_26 + esi_13) * 0x470
    void* edx_28 = eax_29 - edx_24 * 0x3abe + ecx_43 + eax_26
    int32_t var_140_2 = edi_11 + esi_13 * 0x24d + ecx_44
    int32_t var_130_2 = eax_21 + ecx_44 - ebx_26 * 0x2406
    int32_t edx_29 = (ebx_26 - esi_13) * 0x2d09
    var_158 += edx_29 - ebx_26 * 0x1886
    int32_t esi_14 = esi_13 + ebp_6
    int32_t ecx_48 = esi_14 * 0xffffd817
    int32_t edx_30 = esi_14 * 0xffffeaab
    int32_t var_154_3 = eax_29 + esi_13 * 0x3f1a + edx_29 + ecx_48
    int32_t var_140_3 = var_140_2 + edx_30
    int32_t var_12c_2 = eax_26 + ebp_6 * 0x6485 + ecx_48
    int32_t ecx_49 = (ebx_26 + ebp_6) * 0xffffd4b2
    int32_t esi_16 = var_130_2 + ecx_49
    int32_t ecx_51 = eax_23 + ebp_6 * 0x2218 + edx_30 + ecx_49
    int32_t eax_47 = (ebp_6 - ebx_26) * 0xd23
    var_158 += eax_47
    int32_t ebx_28 = var_12c_2 + eax_47
    *eax_10 = ((eax_16 + edi_14) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xf] = ((eax_16 - edi_14) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[1] = ((eax_17 + var_140_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xe] = ((eax_17 - var_140_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[2] = ((eax_18 + esi_16) s>> 0x12 & 0x3ff)[eax_6]
    int32_t* ebp_13 = var_158
    eax_10[0xd] = ((eax_18 - esi_16) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[3] = ((eax_19 + ecx_51) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xc] = ((eax_19 - ecx_51) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[4] = ((ecx_41 + ebx_28) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xb] = ((ecx_41 - ebx_28) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[5] = ((ecx_39 + ebp_13) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xa] = ((ecx_39 - ebp_13) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[6] = ((ecx_37 + var_154_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[9] = ((ecx_37 - var_154_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[7] = ((ecx_35 + edx_28) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[8] = ((ecx_35 - edx_28) s>> 0x12 & 0x3ff)[eax_6]
    esi_11 = var_148_2 + 0x20
    i_1 = i_3 + 1
    var_148_2 = esi_11
    i_3 = i_1
while (i_1 s< 8)

@__security_check_cookie@4(eax_1 ^ &var_158)
return i_1
