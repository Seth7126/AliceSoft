// 函数: sub_6727a0
// 地址: 0x6727a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_238
int32_t eax_1 = __security_cookie ^ &var_238
int16_t* ecx_1 = arg3 + 0x40
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int16_t* var_220 = ecx_1
int32_t i_3 = 8
void var_1c4
void* eax_8 = &var_1c4
int32_t* edx_1 = *(arg2 + 0x54) + 0x80
int32_t* var_234 = edx_1
int32_t i

do
    int32_t esi_2 = sx.d(ecx_1[-0x10]) * edx_1[-0x10]
    int32_t ecx_3 = sx.d(ecx_1[0x10]) * edx_1[0x10]
    int32_t ebp_2 = sx.d(*ecx_1) * *edx_1
    int32_t edi_4 = ((sx.d(ecx_1[-0x20]) * edx_1[-0x20]) << 0xd) + 0x400
    int32_t edx_2 = ecx_3 * 0xdfc
    int32_t ecx_4 = ecx_3 * 0x249d
    var_238 = edi_4 - edx_2
    int32_t ebx_3 = ecx_4 + edi_4
    int32_t edi_5 = edi_4 + edx_2 * 2 - ecx_4 * 2
    int32_t edi_7 = esi_2 - ebp_2
    int32_t ebp_3 = ebp_2 + esi_2
    int32_t ecx_6 = edi_7 * 0x176
    int32_t edx_5 = ebp_3 * 0x2ace
    int32_t esi_3 = esi_2 * 0x2e13
    int32_t ebx_5 = ebx_3 + ecx_6 + edx_5
    int32_t edx_8 = var_238 - edx_5 + ecx_6 + esi_3
    int32_t ebx_8 = var_238
    int32_t ecx_7 = edi_7 * 0xcc7
    int32_t edx_9 = ebp_3 * 0x1182
    int32_t var_22c_3 = ebx_3 - ecx_7 - edx_9
    int32_t ecx_10 = ebx_8 - ecx_7 - esi_3 + edx_9
    int32_t edx_10 = edi_7 * 0xb50
    int32_t ecx_11 = ebp_3 * 0x194c
    int32_t esi_5 = ebx_8 + edx_10 + ecx_11
    int32_t ecx_12 = edx_10 * 2
    int32_t ebx_11 = ebx_3 - ecx_11 + edx_10
    int32_t edx_11 = ecx_12 + edi_5
    int32_t esi_9 = sx.d(var_220[-8]) * var_234[-8]
    int32_t ebp_5 = sx.d(var_220[-0x18]) * var_234[-0x18]
    int32_t edi_8 = sx.d(var_220[8]) * var_234[8] * 0x2731
    int32_t ebx_14 = sx.d(var_220[0x18]) * var_234[0x18]
    int32_t edx_14 = esi_9 - ebx_14
    int32_t ecx_18 = (edx_14 + ebp_5) * 0x1a9a
    int32_t ecx_20 = ebp_5 * 0x1071 + ecx_18
    int32_t var_218_2 = ecx_18 - edx_14 * 0x45a4
    int32_t ecx_22 = esi_9 * 0xffffe566
    int32_t ecx_23 = esi_9 * 0xffffd4f6
    int32_t esi_11 = ebp_5 - ebx_14
    int32_t edx_16 = esi_11 * 0x2d02 + edi_8
    int32_t esi_13 = esi_11 * 0x2731 - edi_8
    int32_t edi_11 = ebx_14 * 0x4ea3 - ecx_23 + edx_16
    var_238 = ecx_22 - ebp_5 * 0x2399
    var_238 += edx_16
    int32_t edx_17 = (ebx_14 + ebp_5) * 0x1268
    int32_t var_21c_2 = ecx_22 + ebp_5 * 0xf39 - edi_8 + edx_17
    int32_t ebx_16 = ecx_23 + edi_8 - ebx_14 * 0x1bd1 + edx_17
    *(eax_8 + 0x1a0) = (ebx_5 - edi_11) s>> 0xb
    *(eax_8 - 0x20) = (ebx_5 + edi_11) s>> 0xb
    *eax_8 = (esi_5 + ecx_20) s>> 0xb
    *(eax_8 + 0x180) = (esi_5 - ecx_20) s>> 0xb
    *(eax_8 + 0x160) = (edx_11 - esi_13) s>> 0xb
    *(eax_8 + 0x20) = (edx_11 + esi_13) s>> 0xb
    *(eax_8 + 0x140) = (edx_8 - var_21c_2) s>> 0xb
    *(eax_8 + 0x40) = (edx_8 + var_21c_2) s>> 0xb
    *(eax_8 + 0x60) = (var_218_2 + ebx_11) s>> 0xb
    *(eax_8 + 0x120) = (ebx_11 - var_218_2) s>> 0xb
    eax_8 += 4
    *(eax_8 + 0xfc) = (var_22c_3 - ebx_16) s>> 0xb
    int32_t edx_30 = var_238
    *(eax_8 + 0x7c) = (ebx_16 + var_22c_3) s>> 0xb
    edx_1 = &var_234[1]
    *(eax_8 + 0x9c) = (edx_30 + ecx_10) s>> 0xb
    *(eax_8 + 0xbc) = (edi_5 - ecx_12 * 2) s>> 0xb
    ecx_1 = &var_220[1]
    i = i_3
    i_3 -= 1
    *(eax_8 + 0xdc) = (ecx_10 - edx_30) s>> 0xb
    var_220 = ecx_1
    var_234 = edx_1
while (i != 1)
int32_t i_1 = 0
void var_1d4
void* ecx_47 = &var_1d4
int32_t i_2 = 0
void* var_230_3 = &var_1d4

do
    int32_t ebx_20 = *ecx_47
    char* eax_10 = *(arg4 + (i_1 << 2)) + arg5
    int32_t edx_33 = *(ecx_47 - 8)
    int32_t eax_11 = *(ecx_47 + 8)
    int32_t ecx_48 = eax_11 * 0xdfc
    int32_t eax_12 = eax_11 * 0x249d
    int32_t esi_22 = (*(ecx_47 - 0x10) + 0x4010) << 0xd
    int32_t edi_19 = esi_22 - ecx_48
    int32_t ebp_9 = eax_12 + esi_22
    var_238 = esi_22 + ecx_48 * 2 - eax_12 * 2
    int32_t esi_25 = edx_33 - ebx_20
    int32_t ebx_21 = ebx_20 + edx_33
    int32_t eax_14 = esi_25 * 0x176
    int32_t ecx_51 = ebx_21 * 0x2ace
    int32_t edx_34 = edx_33 * 0x2e13
    int32_t ebp_11 = ebp_9 + eax_14 + ecx_51
    int32_t ecx_52 = ebx_21 * 0x1182
    int32_t eax_15 = esi_25 * 0xcc7
    int32_t ebp_15 = edi_19 - ecx_51 + eax_14 + edx_34
    int32_t ebp_18 = ebp_9 - eax_15 - ecx_52
    int32_t eax_16 = ebx_21 * 0x194c
    int32_t ebp_22 = edi_19 - eax_15 - edx_34 + ecx_52
    int32_t ecx_53 = esi_25 * 0xb50
    int32_t ebp_23 = *(var_230_3 + 4) * 0x2731
    int32_t edi_20 = *(var_230_3 - 0xc)
    int32_t edx_36 = edi_19 + ecx_53 + eax_16
    int32_t eax_17 = ecx_53 * 2
    int32_t edx_39 = ebp_9 - eax_16 + ecx_53
    int32_t edx_40 = var_238
    int32_t ecx_54 = eax_17 + edx_40
    var_238 = edx_40 - eax_17 * 2
    int32_t edx_42 = *(var_230_3 - 4)
    int32_t ebx_23 = *(var_230_3 + 0xc)
    int32_t ecx_56 = edx_42 - ebx_23
    int32_t esi_26 = (ecx_56 + edi_20) * 0x1a9a
    int32_t eax_21 = edi_20 * 0x1071 + esi_26
    int32_t esi_27 = esi_26 - ecx_56 * 0x45a4
    int32_t eax_23 = edx_42 * 0xffffe566
    int32_t eax_24 = edx_42 * 0xffffd4f6
    int32_t edx_44 = edi_20 - ebx_23
    int32_t ecx_58 = edx_44 * 0x2d02 + ebp_23
    int32_t esi_30 = ebx_23 * 0x4ea3 - eax_24 + ecx_58
    int32_t edx_46 = edx_44 * 0x2731 - ebp_23
    int32_t var_224_4 = eax_23 - edi_20 * 0x2399 + ecx_58
    int32_t ecx_59 = (ebx_23 + edi_20) * 0x1268
    int32_t edi_22 = eax_23 + edi_20 * 0xf39 - ebp_23 + ecx_59
    int32_t var_220_2 = eax_24 + ebp_23 - ebx_23 * 0x1bd1 + ecx_59
    *eax_10 = ((ebp_11 + esi_30) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xe] = ((ebp_11 - esi_30) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[1] = ((edx_36 + eax_21) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xd] = ((edx_36 - eax_21) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[2] = ((ecx_54 + edx_46) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xc] = ((ecx_54 - edx_46) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[3] = ((ebp_15 + edi_22) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xb] = ((ebp_15 - edi_22) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[4] = ((esi_27 + edx_39) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xa] = ((edx_39 - esi_27) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[5] = ((var_220_2 + ebp_18) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[9] = ((ebp_18 - var_220_2) s>> 0x12 & 0x3ff)[eax_6]
    ecx_47 = var_230_3 + 0x20
    var_230_3 = ecx_47
    eax_10[6] = ((var_224_4 + ebp_22) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[8] = ((ebp_22 - var_224_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[7] = (var_238 s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_2 + 1
    i_2 = i_1
while (i_1 s< 0xf)

@__security_check_cookie@4(eax_1 ^ &var_238)
return i_1
