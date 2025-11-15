// 函数: sub_677670
// 地址: 0x677670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_10c
int32_t eax_1 = __security_cookie ^ &var_10c
void* ecx_1 = arg3 + 0x20
char* eax_6 = *(arg1 + 0x12c) - 0x180
int16_t* var_fc = ecx_1
int32_t i_1 = 5
int32_t var_bc
int32_t* eax_8 = &var_bc
void* edx_1 = *(arg2 + 0x54) + 0x40
void* var_f8 = edx_1
int32_t i

do
    int32_t ecx_3 = sx.d(*(ecx_1 + 0x20)) * *(edx_1 + 0x40)
    int32_t edx_2 = ecx_3 * 0x249d
    int32_t ecx_4 = ecx_3 * 0xdfc
    int32_t esi_4 = ((sx.d(*(ecx_1 - 0x20)) * *(edx_1 - 0x40)) << 0xd) + 0x400
    int32_t ebp_2 = esi_4 - ecx_4
    int32_t edi_1 = edx_2 + esi_4
    int32_t ebx_4 = (ecx_4 * 2 - edx_2 * 2 + esi_4) s>> 0xb
    int32_t edx_4 = sx.d(*var_fc) * *var_f8
    int32_t esi_6 = sx.d(var_fc[0x20]) * *(var_f8 + 0x80)
    int32_t edi_3 = (edx_4 + esi_6) * 0x1a9a
    int32_t edx_6 = edx_4 * 0x1071 + edi_3
    int32_t edi_4 = edi_3 - esi_6 * 0x45a4
    int32_t ecx_9 = edx_6 + edi_1
    int32_t ebx_6 = edi_1 - edx_6
    int32_t ecx_10 = edi_4 + ebp_2
    var_10c = ebp_2 - edi_4
    int32_t ebx_8 = sx.d(var_fc[8]) * *(var_f8 + 0x20)
    int32_t ecx_13 = sx.d(var_fc[0x28]) * *(var_f8 + 0xa0)
    int32_t ebp_5 = sx.d(var_fc[-8]) * *(var_f8 - 0x20)
    int32_t edx_8 = sx.d(var_fc[0x18]) * *(var_f8 + 0x60)
    int32_t esi_8 = ebx_8 + ecx_13
    int32_t ebx_9 = ebx_8 - ecx_13
    int32_t edi_5 = ebx_9 * 0x9e3
    int32_t ebx_11 = edx_8 << 0xd
    int32_t edx_9 = esi_8 * 0x1e6f
    int32_t ebp_8 = ebp_5 * 0x2cb3 + edx_9 + ebx_11 + edi_5
    int32_t edx_10 = esi_8 * 0x12cf
    int32_t var_f4_2 = ebp_5 * 0x714 - edx_9 + ebx_11 + edi_5
    int32_t ebx_13 = ebx_11 - (ebx_9 << 0xc) - edi_5
    int32_t ebx_17 = (ebp_5 - ebx_9 - edx_8) << 2
    int32_t esi_12 = ebp_5 * 0x2853 - edx_10 - ebx_13
    eax_8 = &eax_8[1]
    int32_t edi_9 = ebp_5 * 0x148c - edx_10 + ebx_13
    eax_8[0x27] = (ecx_9 - ebp_8) s>> 0xb
    eax_8[-6] = (ecx_9 + ebp_8) s>> 0xb
    eax_8[0x22] = (ecx_10 - esi_12) s>> 0xb
    eax_8[-1] = (ecx_10 + esi_12) s>> 0xb
    eax_8[0x1d] = ebx_4 - ebx_17
    char* edx_19 = var_10c
    eax_8[4] = ebx_17 + ebx_4
    eax_8[0x18] = (edx_19 - edi_9) s>> 0xb
    eax_8[9] = &edx_19[edi_9] s>> 0xb
    edx_1 = var_f8 + 4
    eax_8[0xe] = (var_f4_2 + ebx_6) s>> 0xb
    ecx_1 = &var_fc[1]
    i = i_1
    i_1 -= 1
    eax_8[0x13] = (ebx_6 - var_f4_2) s>> 0xb
    var_fc = ecx_1
    var_f8 = edx_1
while (i != 1)
var_10c = *arg4 + arg5
int32_t var_c8
int32_t var_c0
int32_t esi_13 = (var_c0 + var_c8) * 0x194c
int32_t var_d0
int32_t ebp_11 = (var_d0 + 0x4010) << 0xd
int32_t eax_13 = (var_c8 - var_c0) * 0xb50
int32_t ebx_21 = eax_13 + ebp_11
int32_t edi_10 = esi_13 + ebx_21
int32_t ebx_22 = ebx_21 - esi_13
int32_t var_cc
int32_t var_c4
int32_t esi_14 = (var_c4 + var_cc) * 0x1a9a
int32_t ecx_33 = var_cc * 0x1071 + esi_14
int32_t esi_15 = esi_14 - var_c4 * 0x45a4
char* edx_28 = var_10c
*edx_28 = *(((ecx_33 + edi_10) s>> 0x12 & 0x3ff) + eax_6)
edx_28[4] = *(((edi_10 - ecx_33) s>> 0x12 & 0x3ff) + eax_6)
edx_28[1] = *(((esi_15 + ebx_22) s>> 0x12 & 0x3ff) + eax_6)
edx_28[3] = *(((ebx_22 - esi_15) s>> 0x12 & 0x3ff) + eax_6)
int32_t ebp_15 = var_bc
edx_28[2] = eax_6[(ebp_11 - (eax_13 << 2)) s>> 0x12 & 0x3ff]
int32_t ebp_17 = (ebp_15 + 0x4010) << 0xd
var_10c = arg4[1] + arg5
int32_t var_b4
int32_t var_ac
int32_t esi_16 = (var_ac + var_b4) * 0x194c
int32_t eax_32 = (var_b4 - var_ac) * 0xb50
int32_t ebx_26 = eax_32 + ebp_17
int32_t edi_14 = esi_16 + ebx_26
int32_t ebx_27 = ebx_26 - esi_16
int32_t var_b8
int32_t var_b0
int32_t esi_17 = (var_b0 + var_b8) * 0x1a9a
int32_t ecx_38 = var_b8 * 0x1071 + esi_17
int32_t esi_18 = esi_17 - var_b0 * 0x45a4
char* edx_33 = var_10c
*edx_33 = *(((ecx_38 + edi_14) s>> 0x12 & 0x3ff) + eax_6)
edx_33[4] = *(((edi_14 - ecx_38) s>> 0x12 & 0x3ff) + eax_6)
edx_33[1] = *(((esi_18 + ebx_27) s>> 0x12 & 0x3ff) + eax_6)
edx_33[3] = *(((ebx_27 - esi_18) s>> 0x12 & 0x3ff) + eax_6)
edx_33[2] = eax_6[(ebp_17 - (eax_32 << 2)) s>> 0x12 & 0x3ff]
var_10c = arg4[2] + arg5
int32_t var_a0
int32_t var_98
int32_t esi_19 = (var_98 + var_a0) * 0x194c
int32_t var_a8
int32_t ebp_23 = (var_a8 + 0x4010) << 0xd
int32_t eax_51 = (var_a0 - var_98) * 0xb50
int32_t ebx_31 = eax_51 + ebp_23
int32_t edi_18 = esi_19 + ebx_31
int32_t ebx_32 = ebx_31 - esi_19
int32_t var_a4
int32_t var_9c
int32_t esi_20 = (var_9c + var_a4) * 0x1a9a
int32_t ecx_43 = var_a4 * 0x1071 + esi_20
int32_t esi_21 = esi_20 - var_9c * 0x45a4
char* edx_38 = var_10c
*edx_38 = *(((ecx_43 + edi_18) s>> 0x12 & 0x3ff) + eax_6)
edx_38[4] = *(((edi_18 - ecx_43) s>> 0x12 & 0x3ff) + eax_6)
edx_38[1] = *(((esi_21 + ebx_32) s>> 0x12 & 0x3ff) + eax_6)
edx_38[3] = *(((ebx_32 - esi_21) s>> 0x12 & 0x3ff) + eax_6)
edx_38[2] = eax_6[(ebp_23 - (eax_51 << 2)) s>> 0x12 & 0x3ff]
var_10c = arg4[3] + arg5
int32_t var_8c
int32_t var_84
int32_t esi_22 = (var_84 + var_8c) * 0x194c
int32_t eax_70 = (var_8c - var_84) * 0xb50
int32_t var_94
int32_t ebp_29 = (var_94 + 0x4010) << 0xd
int32_t ebx_36 = eax_70 + ebp_29
int32_t edi_22 = esi_22 + ebx_36
int32_t ebx_37 = ebx_36 - esi_22
int32_t var_90
int32_t var_88
int32_t esi_23 = (var_88 + var_90) * 0x1a9a
int32_t ecx_48 = var_90 * 0x1071 + esi_23
int32_t esi_24 = esi_23 - var_88 * 0x45a4
char* edx_43 = var_10c
*edx_43 = *(((ecx_48 + edi_22) s>> 0x12 & 0x3ff) + eax_6)
edx_43[4] = *(((edi_22 - ecx_48) s>> 0x12 & 0x3ff) + eax_6)
edx_43[1] = *(((esi_24 + ebx_37) s>> 0x12 & 0x3ff) + eax_6)
edx_43[3] = *(((ebx_37 - esi_24) s>> 0x12 & 0x3ff) + eax_6)
edx_43[2] = eax_6[(ebp_29 - (eax_70 << 2)) s>> 0x12 & 0x3ff]
int32_t var_80
int32_t ebp_35 = (var_80 + 0x4010) << 0xd
var_10c = arg4[4] + arg5
int32_t var_78
int32_t var_70
int32_t esi_25 = (var_70 + var_78) * 0x194c
int32_t eax_89 = (var_78 - var_70) * 0xb50
int32_t ebx_41 = eax_89 + ebp_35
int32_t edi_26 = esi_25 + ebx_41
int32_t ebx_42 = ebx_41 - esi_25
int32_t var_7c
int32_t var_74
int32_t esi_26 = (var_74 + var_7c) * 0x1a9a
int32_t ecx_53 = var_7c * 0x1071 + esi_26
int32_t esi_27 = esi_26 - var_74 * 0x45a4
char* edx_48 = var_10c
*edx_48 = *(((ecx_53 + edi_26) s>> 0x12 & 0x3ff) + eax_6)
edx_48[4] = *(((edi_26 - ecx_53) s>> 0x12 & 0x3ff) + eax_6)
edx_48[1] = *(((esi_27 + ebx_42) s>> 0x12 & 0x3ff) + eax_6)
edx_48[3] = *(((ebx_42 - esi_27) s>> 0x12 & 0x3ff) + eax_6)
edx_48[2] = eax_6[(ebp_35 - (eax_89 << 2)) s>> 0x12 & 0x3ff]
var_10c = arg4[5] + arg5
int32_t var_64
int32_t var_5c
int32_t esi_28 = (var_5c + var_64) * 0x194c
int32_t var_6c
int32_t ebp_41 = (var_6c + 0x4010) << 0xd
int32_t eax_108 = (var_64 - var_5c) * 0xb50
int32_t ebx_46 = eax_108 + ebp_41
int32_t edi_30 = esi_28 + ebx_46
int32_t ebx_47 = ebx_46 - esi_28
int32_t var_68
int32_t var_60
int32_t esi_29 = (var_60 + var_68) * 0x1a9a
int32_t ecx_58 = var_68 * 0x1071 + esi_29
int32_t esi_30 = esi_29 - var_60 * 0x45a4
char* edx_53 = var_10c
*edx_53 = *(((ecx_58 + edi_30) s>> 0x12 & 0x3ff) + eax_6)
edx_53[4] = *(((edi_30 - ecx_58) s>> 0x12 & 0x3ff) + eax_6)
edx_53[1] = *(((esi_30 + ebx_47) s>> 0x12 & 0x3ff) + eax_6)
edx_53[3] = *(((ebx_47 - esi_30) s>> 0x12 & 0x3ff) + eax_6)
edx_53[2] = eax_6[(ebp_41 - (eax_108 << 2)) s>> 0x12 & 0x3ff]
var_10c = arg4[6] + arg5
int32_t var_58
int32_t ebp_47 = (var_58 + 0x4010) << 0xd
int32_t var_50
int32_t var_48
int32_t esi_31 = (var_48 + var_50) * 0x194c
int32_t eax_127 = (var_50 - var_48) * 0xb50
int32_t ebx_51 = eax_127 + ebp_47
int32_t edi_34 = esi_31 + ebx_51
int32_t ebx_52 = ebx_51 - esi_31
int32_t var_54
int32_t var_4c
int32_t esi_32 = (var_4c + var_54) * 0x1a9a
int32_t ecx_63 = var_54 * 0x1071 + esi_32
int32_t esi_33 = esi_32 - var_4c * 0x45a4
char* edx_58 = var_10c
*edx_58 = *(((ecx_63 + edi_34) s>> 0x12 & 0x3ff) + eax_6)
edx_58[4] = *(((edi_34 - ecx_63) s>> 0x12 & 0x3ff) + eax_6)
edx_58[1] = *(((esi_33 + ebx_52) s>> 0x12 & 0x3ff) + eax_6)
edx_58[3] = *(((ebx_52 - esi_33) s>> 0x12 & 0x3ff) + eax_6)
edx_58[2] = eax_6[(ebp_47 - (eax_127 << 2)) s>> 0x12 & 0x3ff]
int32_t var_44
int32_t ebp_53 = (var_44 + 0x4010) << 0xd
var_10c = arg4[7] + arg5
int32_t var_3c
int32_t var_34
int32_t esi_34 = (var_34 + var_3c) * 0x194c
int32_t eax_146 = (var_3c - var_34) * 0xb50
int32_t ebx_56 = eax_146 + ebp_53
int32_t edi_38 = esi_34 + ebx_56
int32_t ebx_57 = ebx_56 - esi_34
int32_t var_40
int32_t var_38
int32_t esi_35 = (var_38 + var_40) * 0x1a9a
int32_t ecx_68 = var_40 * 0x1071 + esi_35
int32_t esi_36 = esi_35 - var_38 * 0x45a4
char* edx_63 = var_10c
*edx_63 = *(((ecx_68 + edi_38) s>> 0x12 & 0x3ff) + eax_6)
edx_63[4] = *(((edi_38 - ecx_68) s>> 0x12 & 0x3ff) + eax_6)
edx_63[1] = *(((esi_36 + ebx_57) s>> 0x12 & 0x3ff) + eax_6)
edx_63[3] = *(((ebx_57 - esi_36) s>> 0x12 & 0x3ff) + eax_6)
edx_63[2] = eax_6[(ebp_53 - (eax_146 << 2)) s>> 0x12 & 0x3ff]
var_10c = arg4[8] + arg5
int32_t var_28
int32_t var_20
int32_t esi_37 = (var_20 + var_28) * 0x194c
int32_t var_30
int32_t ebp_59 = (var_30 + 0x4010) << 0xd
int32_t eax_165 = (var_28 - var_20) * 0xb50
int32_t ebx_61 = eax_165 + ebp_59
int32_t edi_42 = esi_37 + ebx_61
int32_t ebx_62 = ebx_61 - esi_37
int32_t var_2c
int32_t var_24
int32_t esi_38 = (var_24 + var_2c) * 0x1a9a
int32_t ecx_73 = var_2c * 0x1071 + esi_38
int32_t esi_39 = esi_38 - var_24 * 0x45a4
char* edx_68 = var_10c
*edx_68 = *(((ecx_73 + edi_42) s>> 0x12 & 0x3ff) + eax_6)
edx_68[4] = *(((edi_42 - ecx_73) s>> 0x12 & 0x3ff) + eax_6)
edx_68[1] = *(((esi_39 + ebx_62) s>> 0x12 & 0x3ff) + eax_6)
edx_68[3] = *(((ebx_62 - esi_39) s>> 0x12 & 0x3ff) + eax_6)
edx_68[2] = eax_6[(ebp_59 - (eax_165 << 2)) s>> 0x12 & 0x3ff]
var_10c = arg4[9] + arg5
int32_t var_1c
int32_t ebp_65 = (var_1c + 0x4010) << 0xd
int32_t var_14
int32_t var_c
int32_t esi_40 = (var_c + var_14) * 0x194c
int32_t eax_184 = (var_14 - var_c) * 0xb50
int32_t ebx_66 = eax_184 + ebp_65
int32_t edi_46 = esi_40 + ebx_66
int32_t ebx_67 = ebx_66 - esi_40
int32_t var_18
int32_t var_10
int32_t esi_41 = (var_10 + var_18) * 0x1a9a
int32_t ecx_78 = var_18 * 0x1071 + esi_41
int32_t esi_42 = esi_41 - var_10 * 0x45a4
char* edx_73 = var_10c
*edx_73 = *(((ecx_78 + edi_46) s>> 0x12 & 0x3ff) + eax_6)
edx_73[4] = *(((edi_46 - ecx_78) s>> 0x12 & 0x3ff) + eax_6)
edx_73[1] = *(((esi_42 + ebx_67) s>> 0x12 & 0x3ff) + eax_6)
edx_73[3] = *(((ebx_67 - esi_42) s>> 0x12 & 0x3ff) + eax_6)
char result = eax_6[(ebp_65 - (eax_184 << 2)) s>> 0x12 & 0x3ff]
edx_73[2] = result
@__security_check_cookie@4(eax_1 ^ &var_10c)
return result
