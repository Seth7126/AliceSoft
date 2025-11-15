// 函数: sub_6716a0
// 地址: 0x6716a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1cc
int32_t eax_1 = __security_cookie ^ &var_1cc
int16_t* edx_1 = arg3 + 0x20
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
var_1cc = edx_1
int32_t i_2 = 8
int32_t* ecx_1 = *(arg2 + 0x54) + 0x40
void var_164
void* var_194 = &var_164
int32_t* var_1b4 = ecx_1
int32_t i

do
    int32_t edx_3 = sx.d(*edx_1) * *ecx_1
    int32_t eax_10 = sx.d(edx_1[0x10]) * ecx_1[0x10] * 0x2731
    int32_t edi_4 = ((sx.d(edx_1[-0x10]) * ecx_1[-0x10]) << 0xd) + 0x400
    int32_t esi_1 = edx_3 * 0x2bb6
    int32_t ebx_2 = edi_4 - eax_10
    int32_t edx_4 = edx_3 << 0xd
    int32_t ebp_1 = eax_10 + edi_4
    int32_t ecx_4 = (sx.d(*(var_1cc + 0x40)) * var_1b4[0x20]) << 0xd
    int32_t eax_14 = edx_4 - ecx_4
    int32_t var_1bc_2 = edi_4 - eax_14
    int32_t edi_5 = edi_4 + eax_14
    int32_t eax_15 = ecx_4 + esi_1
    void* ecx_5 = var_1cc
    int32_t edi_6 = eax_15 + ebp_1
    int32_t ebp_2 = ebp_1 - eax_15
    int32_t esi_3 = esi_1 - ecx_4 - edx_4
    int32_t eax_16 = esi_3 + ebx_2
    int32_t ebx_3 = ebx_2 - esi_3
    int32_t ebp_4 = sx.d(*(ecx_5 + 0x30)) * var_1b4[0x18]
    int32_t edi_8 = sx.d(*(ecx_5 + 0x50)) * var_1b4[0x28]
    int32_t eax_18 = sx.d(*(ecx_5 + 0x10)) * var_1b4[8]
    int32_t ebx_5 = sx.d(*(ecx_5 - 0x10)) * var_1b4[-8]
    int32_t esi_4 = eax_18 * 0xffffeeaf
    int32_t edx_6 = eax_18 * 0x29cf
    int32_t ecx_6 = ebx_5 + ebp_4
    int32_t eax_20 = (ecx_6 + edi_8) * 0x1b8d
    int32_t eax_22 = ecx_6 * 0x85b + eax_20
    int32_t ebx_8 = ebx_5 * 0x8f7 + eax_22 + edx_6
    int32_t ecx_7 = (edi_8 + ebp_4) * 0xffffde8b
    int32_t var_1c4_2 = eax_22 + ecx_7 - ebp_4 * 0x2f50 + esi_4
    int32_t var_1c0_2 = ecx_7 + edi_8 * 0x32c6 - edx_6 + eax_20
    int32_t edx_8 = eax_20 + ebx_5 * 0xffffea5c - edi_8 * 0x3f74 + esi_4
    int32_t ecx_14 = ebx_5 - edi_8
    int32_t esi_6 = eax_18 - ebp_4
    int32_t edx_9 = (esi_6 + ecx_14) * 0x1151
    int32_t ecx_16 = ecx_14 * 0x187e + edx_9
    int32_t edx_10 = edx_9 - esi_6 * 0x3b21
    *(var_194 - 0x20) = (edi_6 + ebx_8) s>> 0xb
    *(var_194 + 0x140) = (edi_6 - ebx_8) s>> 0xb
    *var_194 = (edi_5 + ecx_16) s>> 0xb
    *(var_194 + 0x120) = (edi_5 - ecx_16) s>> 0xb
    *(var_194 + 0x20) = (eax_16 + var_1c4_2) s>> 0xb
    *(var_194 + 0x100) = (eax_16 - var_1c4_2) s>> 0xb
    *(var_194 + 0x40) = (var_1c0_2 + ebx_3) s>> 0xb
    *(var_194 + 0xe0) = (ebx_3 - var_1c0_2) s>> 0xb
    *(var_194 + 0xc0) = (var_1bc_2 - edx_10) s>> 0xb
    *(var_194 + 0x60) = (edx_10 + var_1bc_2) s>> 0xb
    ecx_1 = &var_1b4[1]
    *(var_194 + 0xa0) = (ebp_2 - edx_8) s>> 0xb
    edx_1 = var_1cc + 2
    *(var_194 + 0x80) = (edx_8 + ebp_2) s>> 0xb
    i = i_2
    i_2 -= 1
    var_1cc = edx_1
    var_1b4 = ecx_1
    var_194 += 4
while (i != 1)
int32_t i_1 = 0
void var_17c
void* edi_11 = &var_17c
int32_t i_3 = 0
void* var_1c8_3 = &var_17c

do
    int32_t edx_15 = *edi_11
    int32_t ebp_7 = (*(edi_11 - 8) + 0x4010) << 0xd
    char* eax_44 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_45 = *(edi_11 + 8) * 0x2731
    int32_t esi_13 = edx_15 * 0x2bb6
    int32_t edx_16 = edx_15 << 0xd
    int32_t ebx_16 = ebp_7 - eax_45
    int32_t ecx_25 = eax_45 + ebp_7
    int32_t ecx_27 = *(edi_11 + 0x10) << 0xd
    int32_t eax_47 = edx_16 - ecx_27
    int32_t edi_12 = eax_47 + ebp_7
    int32_t ebp_8 = ebp_7 - eax_47
    void* eax_48 = ecx_27 + esi_13
    void* esi_15 = esi_13 - ecx_27 - edx_16
    void* edi_13 = eax_48 + ecx_25
    void* ebp_10 = ecx_25 - eax_48
    int32_t edx_17 = *(var_1c8_3 + 4) * 0x29cf
    void* eax_49 = esi_15 + ebx_16
    void* ebx_17 = ebx_16 - esi_15
    int32_t esi_16 = *(var_1c8_3 + 4) * 0xffffeeaf
    int32_t ebp_11 = *(var_1c8_3 - 4)
    int32_t edi_14 = *(var_1c8_3 + 0x14)
    int32_t ebx_18 = *(var_1c8_3 + 0xc)
    int32_t ecx_29 = ebx_18 + ebp_11
    var_1cc = (ecx_29 + edi_14) * 0x1b8d
    void* eax_53 = ecx_29 * 0x85b + var_1cc
    void* ebp_14 = ebp_11 * 0x8f7 + eax_53 + edx_17
    void* ecx_30 = (edi_14 + ebx_18) * 0xffffde8b
    void* var_1bc_4 = eax_53 + ecx_30 - ebx_18 * 0x2f50 + esi_16
    void* var_1c0_4 = ecx_30 + edi_14 * 0x32c6 - edx_17 + var_1cc
    int32_t edx_18 = *(var_1c8_3 - 4)
    int32_t edx_19 = edx_18 - edi_14
    var_1cc += edx_18 * 0xffffea5c - edi_14 * 0x3f74 + esi_16
    int32_t esi_18 = *(var_1c8_3 + 4) - ebx_18
    int32_t edi_15 = (esi_18 + edx_19) * 0x1151
    int32_t ecx_38 = edx_19 * 0x187e + edi_15
    int32_t edi_16 = edi_15 - esi_18 * 0x3b21
    *eax_44 = ((edi_13 + ebp_14) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[0xb] = ((edi_13 - ebp_14) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[1] = ((edi_12 + ecx_38) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[0xa] = ((edi_12 - ecx_38) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[2] = ((eax_49 + var_1bc_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[9] = ((eax_49 - var_1bc_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[3] = ((var_1c0_4 + ebx_17) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[8] = ((ebx_17 - var_1c0_4) s>> 0x12 & 0x3ff)[eax_6]
    edi_11 = var_1c8_3 + 0x20
    var_1c8_3 = edi_11
    eax_44[4] = ((edi_16 + ebp_8) s>> 0x12 & 0x3ff)[eax_6]
    void* ecx_45 = var_1cc
    eax_44[7] = ((ebp_8 - edi_16) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[5] = ((ecx_45 + ebp_10) s>> 0x12 & 0x3ff)[eax_6]
    eax_44[6] = ((ebp_10 - ecx_45) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xc)

@__security_check_cookie@4(eax_1 ^ &var_1cc)
return i_1
