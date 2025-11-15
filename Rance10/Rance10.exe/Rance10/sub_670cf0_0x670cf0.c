// 函数: sub_670cf0
// 地址: 0x670cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_184
int32_t eax_1 = __security_cookie ^ &var_184
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int16_t* esi_1 = arg3 + 0x20
int16_t* var_180 = esi_1
int32_t i_2 = 8
void* ecx_1 = *(arg2 + 0x54) + 0x40
void var_124
void* var_178 = &var_124
var_184 = ecx_1
int32_t i

do
    int32_t eax_9 = sx.d(esi_1[0x10]) * *(ecx_1 + 0x40)
    int32_t ecx_2 = eax_9 * 0x249d
    int32_t eax_10 = eax_9 * 0xdfc
    int32_t edx_4 = ((sx.d(esi_1[-0x10]) * *(ecx_1 - 0x40)) << 0xd) + 0x400
    int32_t edi_2 = edx_4 - eax_10
    int32_t ebp_1 = ecx_2 + edx_4
    void* eax_12 = var_184
    int32_t ebx_4 = (eax_10 * 2 - ecx_2 * 2 + edx_4) s>> 0xb
    int32_t ecx_4 = sx.d(*esi_1) * *eax_12
    int32_t edx_6 = sx.d(esi_1[0x20]) * *(eax_12 + 0x80)
    int32_t esi_2 = (ecx_4 + edx_6) * 0x1a9a
    void* edx_7 = var_184
    int32_t ecx_6 = ecx_4 * 0x1071 + esi_2
    int32_t esi_3 = esi_2 - edx_6 * 0x45a4
    int32_t eax_15 = ecx_6 + ebp_1
    int32_t ebp_2 = ebp_1 - ecx_6
    int32_t eax_16 = esi_3 + edi_2
    int32_t edi_3 = edi_2 - esi_3
    int32_t edi_5 = sx.d(var_180[8]) * *(edx_7 + 0x20)
    int32_t eax_19 = sx.d(var_180[0x28]) * *(edx_7 + 0xa0)
    int32_t ebx_6 = sx.d(var_180[-8]) * *(edx_7 - 0x20)
    int32_t ecx_8 = sx.d(var_180[0x18]) * *(edx_7 + 0x60)
    int32_t edx_8 = edi_5 + eax_19
    int32_t ebp_4 = ecx_8 << 0xd
    int32_t edi_6 = edi_5 - eax_19
    int32_t ecx_9 = edx_8 * 0x1e6f
    int32_t esi_4 = edi_6 * 0x9e3
    int32_t eax_20 = esi_4 + ebp_4
    int32_t edi_9 = ebx_6 * 0x714 - ecx_9 + eax_20
    int32_t ecx_10 = edx_8 * 0x12cf
    int32_t ebx_9 = ebx_6 * 0x2cb3 + ecx_9 + eax_20
    int32_t ebp_6 = ebp_4 - (edi_6 << 0xc) - esi_4
    int32_t edi_13 = (ebx_6 - edi_6 - ecx_8) << 2
    int32_t edx_11 = ebx_6 * 0x2853 - ecx_10 - ebp_6
    int32_t esi_7 = ebx_6 * 0x148c - ecx_10 + ebp_6
    *(var_178 + 0x100) = (eax_15 - ebx_9) s>> 0xb
    *(var_178 - 0x20) = (eax_15 + ebx_9) s>> 0xb
    *(var_178 + 0xe0) = (eax_16 - edx_11) s>> 0xb
    *var_178 = (eax_16 + edx_11) s>> 0xb
    *(var_178 + 0xc0) = ebx_4 - edi_13
    *(var_178 + 0x20) = edi_13 + ebx_4
    esi_1 = &var_180[1]
    *(var_178 + 0xa0) = (edi_3 - esi_7) s>> 0xb
    *(var_178 + 0x40) = (edi_3 + esi_7) s>> 0xb
    var_180 = esi_1
    ecx_1 = var_184 + 4
    *(var_178 + 0x60) = (edi_9 + ebp_2) s>> 0xb
    *(var_178 + 0x80) = (ebp_2 - edi_9) s>> 0xb
    i = i_2
    i_2 -= 1
    var_184 = ecx_1
    var_178 += 4
while (i != 1)
int32_t i_1 = 0
void var_13c
void* ebp_9 = &var_13c
int32_t i_3 = 0
var_184 = &var_13c

do
    int32_t edx_17 = (*(ebp_9 - 8) + 0x4010) << 0xd
    char* eax_34 = *(arg4 + (i_1 << 2)) + arg5
    int32_t ecx_25 = *(ebp_9 + 8) * 0x249d
    int32_t eax_35 = *(ebp_9 + 8) * 0xdfc
    int32_t edi_15 = edx_17 - eax_35
    int32_t ebx_10 = ecx_25 + edx_17
    int32_t ecx_26 = *ebp_9
    int32_t esi_11 = eax_35 * 2 - ecx_25 * 2 + edx_17
    int32_t edx_18 = *(ebp_9 + 0x10)
    int32_t esi_12 = (ecx_26 + edx_18) * 0x1a9a
    int32_t ecx_28 = ecx_26 * 0x1071 + esi_12
    int32_t esi_13 = esi_12 - edx_18 * 0x45a4
    int32_t eax_39 = ecx_28 + ebx_10
    int32_t ebx_11 = ebx_10 - ecx_28
    int32_t eax_40 = esi_13 + edi_15
    int32_t edi_16 = edi_15 - esi_13
    void* eax_41 = var_184
    int32_t edi_17 = *(eax_41 + 4)
    int32_t eax_42 = *(eax_41 + 0x14)
    int32_t ebx_13 = *(eax_41 + 0xc) << 0xd
    int32_t edx_19 = edi_17 + eax_42
    int32_t edi_18 = edi_17 - eax_42
    int32_t esi_14 = edi_18 * 0x9e3
    int32_t ecx_29 = edx_19 * 0x1e6f
    int32_t edx_20 = edx_19 * 0x12cf
    int32_t ebp_13 = *(ebp_9 - 4) * 0x2cb3 + ecx_29 + esi_14 + ebx_13
    void* ebp_14 = var_184
    int32_t var_180_2 = *(ebp_14 - 4) * 0x714 - ecx_29 + esi_14 + ebx_13
    int32_t ecx_32 = ebx_13 - (edi_18 << 0xc) - esi_14
    int32_t eax_52 = ((*(ebp_14 - 4) - edi_18) << 0xd) - ebx_13
    int32_t eax_53 = *(ebp_14 - 4)
    int32_t esi_18 = eax_53 * 0x2853 - edx_20 - ecx_32
    int32_t edi_21 = eax_53 * 0x148c - edx_20 + ecx_32
    *eax_34 = ((eax_39 + ebp_13) s>> 0x12 & 0x3ff)[eax_6]
    eax_34[9] = ((eax_39 - ebp_13) s>> 0x12 & 0x3ff)[eax_6]
    eax_34[1] = ((eax_40 + esi_18) s>> 0x12 & 0x3ff)[eax_6]
    eax_34[8] = ((eax_40 - esi_18) s>> 0x12 & 0x3ff)[eax_6]
    eax_34[2] = ((eax_52 + esi_11) s>> 0x12 & 0x3ff)[eax_6]
    eax_34[7] = ((esi_11 - eax_52) s>> 0x12 & 0x3ff)[eax_6]
    eax_34[3] = ((edi_16 + edi_21) s>> 0x12 & 0x3ff)[eax_6]
    eax_34[6] = ((edi_16 - edi_21) s>> 0x12 & 0x3ff)[eax_6]
    eax_34[4] = ((var_180_2 + ebx_11) s>> 0x12 & 0x3ff)[eax_6]
    void* ebp_17 = var_184
    eax_34[5] = ((ebx_11 - var_180_2) s>> 0x12 & 0x3ff)[eax_6]
    ebp_9 = ebp_17 + 0x20
    i_1 = i_3 + 1
    var_184 = ebp_9
    i_3 = i_1
while (i_1 s< 0xa)

@__security_check_cookie@4(eax_1 ^ &var_184)
return i_1
