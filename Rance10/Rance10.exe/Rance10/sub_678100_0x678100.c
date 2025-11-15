// 函数: sub_678100
// 地址: 0x678100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_b8
int32_t eax_1 = __security_cookie ^ &var_b8
var_b8 = arg4
int16_t* ebp = arg3
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int32_t i_1 = 4
int32_t* ebx = *(arg2 + 0x54)
int32_t var_88
int32_t* eax_8 = &var_88
int32_t* var_ac = ebx
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
        int32_t ebx_4 = ((sx.d(*ebp) * *var_ac) << 0xd) + 0x400
        int32_t esi_4 = ecx_9 + ebx_4
        int32_t ebx_5 = ebx_4 - ecx_9
        int32_t ecx_10 = esi_4 + edx_4
        int32_t esi_5 = esi_4 - edx_4
        int32_t ecx_11 = ebx_5 + edi_2
        int32_t ebx_6 = ebx_5 - edi_2
        int32_t ecx_13 = sx.d(ebp[0x38]) * var_ac[0x38]
        int32_t edx_6 = sx.d(ebp[0x18]) * var_ac[0x18]
        int32_t ebx_8 = sx.d(ebp[0x28]) * var_ac[0x28]
        int32_t edi_5 = sx.d(ebp[8]) * var_ac[8]
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
        eax_8[0x1c] = (ecx_10 - esi_10) s>> 0xb
        *eax_8 = (ecx_10 + esi_10) s>> 0xb
        eax_8[4] = (ecx_11 + edx_14) s>> 0xb
        ebp = arg3
        eax_8[0x18] = (ecx_11 - edx_14) s>> 0xb
        eax_8[0x14] = (ebx_6 - edi_8) s>> 0xb
        eax_8[8] = (ebx_6 + edi_8) s>> 0xb
        ecx_4 = (esi_5 + edx_11) s>> 0xb
        eax_8[0x10] = (esi_5 - edx_11) s>> 0xb
        ebx = var_ac
    else
        ecx_4 = (sx.d(*ebp) * *ebx) << 2
        *eax_8 = ecx_4
        eax_8[4] = ecx_4
        eax_8[8] = ecx_4
        eax_8[0x10] = ecx_4
        eax_8[0x14] = ecx_4
        eax_8[0x18] = ecx_4
        eax_8[0x1c] = ecx_4
    
    eax_8[0xc] = ecx_4
    ebp = &ebp[1]
    ebx = &ebx[1]
    i = i_1 - 1
    arg3 = ebp
    eax_8 = &eax_8[1]
    i_1 = i
    var_ac = ebx
while (i s> 0)
int32_t var_80
int32_t edi_10 = (var_80 + var_88 + 0x4010) << 0xd
int32_t ebx_23 = (var_88 + 0x4010 - var_80) << 0xd
int32_t var_84
int32_t var_7c
int32_t esi_11 = (var_7c + var_84) * 0x1151
char* ebp_5 = *var_b8 + arg5
int32_t ecx_32 = var_84 * 0x187e + esi_11
int32_t esi_12 = esi_11 - var_7c * 0x3b21
*ebp_5 = ((edi_10 + ecx_32) s>> 0x12 & 0x3ff)[eax_6]
ebp_5[3] = ((edi_10 - ecx_32) s>> 0x12 & 0x3ff)[eax_6]
ebp_5[1] = ((ebx_23 + esi_12) s>> 0x12 & 0x3ff)[eax_6]
ebp_5[2] = ((ebx_23 - esi_12) s>> 0x12 & 0x3ff)[eax_6]
char* ebp_7 = var_b8[1] + arg5
int32_t var_78
int32_t var_70
int32_t edi_15 = (var_70 + var_78 + 0x4010) << 0xd
int32_t var_74
int32_t var_6c
int32_t esi_13 = (var_6c + var_74) * 0x1151
int32_t ebx_30 = (var_78 + 0x4010 - var_70) << 0xd
int32_t ecx_35 = var_74 * 0x187e + esi_13
int32_t esi_14 = esi_13 - var_6c * 0x3b21
*ebp_7 = ((edi_15 + ecx_35) s>> 0x12 & 0x3ff)[eax_6]
ebp_7[3] = ((edi_15 - ecx_35) s>> 0x12 & 0x3ff)[eax_6]
ebp_7[1] = ((ebx_30 + esi_14) s>> 0x12 & 0x3ff)[eax_6]
ebp_7[2] = ((ebx_30 - esi_14) s>> 0x12 & 0x3ff)[eax_6]
char* ebp_9 = var_b8[2] + arg5
int32_t var_68
int32_t var_60
int32_t edi_20 = (var_60 + var_68 + 0x4010) << 0xd
int32_t ebx_37 = (var_68 + 0x4010 - var_60) << 0xd
int32_t var_64
int32_t var_5c
int32_t esi_15 = (var_5c + var_64) * 0x1151
int32_t ecx_38 = var_64 * 0x187e + esi_15
int32_t esi_16 = esi_15 - var_5c * 0x3b21
*ebp_9 = ((edi_20 + ecx_38) s>> 0x12 & 0x3ff)[eax_6]
ebp_9[3] = ((edi_20 - ecx_38) s>> 0x12 & 0x3ff)[eax_6]
ebp_9[1] = ((ebx_37 + esi_16) s>> 0x12 & 0x3ff)[eax_6]
ebp_9[2] = ((ebx_37 - esi_16) s>> 0x12 & 0x3ff)[eax_6]
char* ebp_11 = var_b8[3] + arg5
int32_t var_58
int32_t var_50
int32_t edi_25 = (var_50 + var_58 + 0x4010) << 0xd
int32_t var_54
int32_t var_4c
int32_t esi_17 = (var_4c + var_54) * 0x1151
int32_t ebx_44 = (var_58 + 0x4010 - var_50) << 0xd
int32_t ecx_41 = var_54 * 0x187e + esi_17
int32_t esi_18 = esi_17 - var_4c * 0x3b21
*ebp_11 = ((edi_25 + ecx_41) s>> 0x12 & 0x3ff)[eax_6]
ebp_11[3] = ((edi_25 - ecx_41) s>> 0x12 & 0x3ff)[eax_6]
ebp_11[1] = ((ebx_44 + esi_18) s>> 0x12 & 0x3ff)[eax_6]
ebp_11[2] = ((ebx_44 - esi_18) s>> 0x12 & 0x3ff)[eax_6]
char* ebp_13 = var_b8[4] + arg5
int32_t var_48
int32_t var_40
int32_t edi_30 = (var_40 + var_48 + 0x4010) << 0xd
int32_t ebx_51 = (var_48 + 0x4010 - var_40) << 0xd
int32_t var_44
int32_t var_3c
int32_t esi_19 = (var_3c + var_44) * 0x1151
int32_t ecx_44 = var_44 * 0x187e + esi_19
int32_t esi_20 = esi_19 - var_3c * 0x3b21
*ebp_13 = ((edi_30 + ecx_44) s>> 0x12 & 0x3ff)[eax_6]
ebp_13[3] = ((edi_30 - ecx_44) s>> 0x12 & 0x3ff)[eax_6]
ebp_13[1] = ((ebx_51 + esi_20) s>> 0x12 & 0x3ff)[eax_6]
ebp_13[2] = ((ebx_51 - esi_20) s>> 0x12 & 0x3ff)[eax_6]
char* ebp_15 = var_b8[5] + arg5
int32_t var_38
int32_t var_30
int32_t edi_35 = (var_30 + var_38 + 0x4010) << 0xd
int32_t var_34
int32_t var_2c
int32_t esi_21 = (var_2c + var_34) * 0x1151
int32_t ebx_58 = (var_38 + 0x4010 - var_30) << 0xd
int32_t ecx_47 = var_34 * 0x187e + esi_21
int32_t esi_22 = esi_21 - var_2c * 0x3b21
*ebp_15 = ((edi_35 + ecx_47) s>> 0x12 & 0x3ff)[eax_6]
ebp_15[3] = ((edi_35 - ecx_47) s>> 0x12 & 0x3ff)[eax_6]
ebp_15[1] = ((ebx_58 + esi_22) s>> 0x12 & 0x3ff)[eax_6]
ebp_15[2] = ((ebx_58 - esi_22) s>> 0x12 & 0x3ff)[eax_6]
char* ebp_17 = var_b8[6] + arg5
int32_t var_28
int32_t var_20
int32_t edi_40 = (var_20 + var_28 + 0x4010) << 0xd
int32_t ebx_65 = (var_28 + 0x4010 - var_20) << 0xd
int32_t var_24
int32_t var_1c
int32_t esi_23 = (var_1c + var_24) * 0x1151
int32_t ecx_50 = var_24 * 0x187e + esi_23
int32_t esi_24 = esi_23 - var_1c * 0x3b21
*ebp_17 = ((edi_40 + ecx_50) s>> 0x12 & 0x3ff)[eax_6]
ebp_17[3] = ((edi_40 - ecx_50) s>> 0x12 & 0x3ff)[eax_6]
ebp_17[1] = ((ebx_65 + esi_24) s>> 0x12 & 0x3ff)[eax_6]
ebp_17[2] = ((ebx_65 - esi_24) s>> 0x12 & 0x3ff)[eax_6]
char* ebp_19 = var_b8[7] + arg5
int32_t var_18
int32_t var_10
int32_t edi_45 = (var_10 + var_18 + 0x4010) << 0xd
int32_t var_14
int32_t var_c
int32_t esi_25 = (var_c + var_14) * 0x1151
int32_t ebx_72 = (var_18 + 0x4010 - var_10) << 0xd
int32_t ecx_53 = var_14 * 0x187e + esi_25
int32_t esi_26 = esi_25 - var_c * 0x3b21
*ebp_19 = ((edi_45 + ecx_53) s>> 0x12 & 0x3ff)[eax_6]
ebp_19[3] = ((edi_45 - ecx_53) s>> 0x12 & 0x3ff)[eax_6]
ebp_19[1] = ((ebx_72 + esi_26) s>> 0x12 & 0x3ff)[eax_6]
char result = ((ebx_72 - esi_26) s>> 0x12 & 0x3ff)[eax_6]
ebp_19[2] = result
@__security_check_cookie@4(eax_1 ^ &var_b8)
return result
