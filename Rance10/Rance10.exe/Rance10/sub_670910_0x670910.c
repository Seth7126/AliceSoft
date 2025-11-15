// 函数: sub_670910
// 地址: 0x670910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_15c
int32_t eax_1 = __security_cookie ^ &var_15c
int16_t* ebp_1 = arg3 + 0x40
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int16_t* var_158 = ebp_1
int32_t i_2 = 8
int32_t* ebx_1 = *(arg2 + 0x54) + 0x80
void var_104
void* var_134 = &var_104
int32_t* var_154 = ebx_1
int32_t i

do
    int32_t edx_2 = sx.d(ebp_1[-0x10]) * ebx_1[-0x10]
    int32_t ecx_2 = sx.d(*ebp_1) * *ebx_1
    int32_t eax_10 = sx.d(ebp_1[0x10]) * ebx_1[0x10] * 0x16a1
    int32_t edi_4 = ((sx.d(ebp_1[-0x20]) * ebx_1[-0x20]) << 0xd) + 0x400
    int32_t ebx_2 = eax_10 + edi_4
    int32_t edi_5 = edi_4 - eax_10 * 2
    int32_t eax_14 = (edx_2 - ecx_2) * 0x16a1
    int32_t esi_1 = edi_5 + eax_14
    int32_t eax_17 = (ecx_2 + edx_2) * 0x2a87
    int32_t ecx_3 = ecx_2 * 0x7dc
    int32_t edx_3 = edx_2 * 0x22ab
    void* esi_4 = ebx_2 - ecx_3 + eax_17
    void* esi_7 = edx_3 - eax_17 + ebx_2
    int32_t ebx_4 = ebx_2 - edx_3 + ecx_3
    int32_t ebx_6 = sx.d(var_158[8]) * var_154[8]
    int32_t ebp_3 = sx.d(ebp_1[-0x18]) * var_154[-0x18]
    int32_t edi_8 = sx.d(var_158[0x18]) * var_154[0x18]
    int32_t edx_4 = sx.d(var_158[-8]) * var_154[-8] * 0xffffd8cf
    void* ecx_5 = (ebx_6 + ebp_3) * 0x1d17
    int32_t eax_23 = (edi_8 + ebp_3) * 0xf7a
    var_15c = ecx_5
    void* esi_10 = ecx_5 - edx_4 + eax_23
    int32_t ecx_6 = (ebx_6 - edi_8) * 0x2c91
    var_15c += edx_4 - ecx_6
    int32_t edx_6 = eax_23 + ecx_6 + edx_4
    int32_t ecx_7 = (ebp_3 - edi_8 - ebx_6) * 0x2731
    *(var_134 + 0xe0) = (esi_4 - esi_10) s>> 0xb
    *(var_134 - 0x20) = (esi_4 + esi_10) s>> 0xb
    *var_134 = (esi_1 + ecx_7) s>> 0xb
    void* ecx_8 = var_15c
    ebp_1 = &var_158[1]
    *(var_134 + 0xc0) = (esi_1 - ecx_7) s>> 0xb
    var_158 = ebp_1
    *(var_134 + 0x20) = (esi_7 + ecx_8) s>> 0xb
    *(var_134 + 0xa0) = (esi_7 - ecx_8) s>> 0xb
    ebx_1 = &var_154[1]
    *(var_134 + 0x40) = (ebx_4 + edx_6) s>> 0xb
    *(var_134 + 0x80) = (ebx_4 - edx_6) s>> 0xb
    *(var_134 + 0x60) = (edi_5 - eax_14 * 2) s>> 0xb
    i = i_2
    i_2 -= 1
    var_154 = ebx_1
    var_134 += 4
while (i != 1)
int32_t i_1 = 0
void var_114
void* ebp_7 = &var_114
int32_t i_3 = 0
var_15c = &var_114

do
    int32_t esi_11 = *ebp_7
    int32_t ebx_19 = (*(ebp_7 - 0x10) + 0x4010) << 0xd
    char* eax_40 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_41 = *(ebp_7 + 8) * 0x16a1
    int32_t ecx_13 = *(ebp_7 - 8)
    int32_t ebp_8 = *(ebp_7 - 0xc)
    int32_t edi_11 = eax_41 + ebx_19
    int32_t ebx_20 = ebx_19 - eax_41 * 2
    int32_t eax_45 = (ecx_13 - esi_11) * 0x16a1
    int32_t edx_7 = ebx_20 + eax_45
    int32_t edx_8 = ecx_13 * 0x22ab
    int32_t eax_48 = (esi_11 + ecx_13) * 0x2a87
    int32_t ecx_14 = esi_11 * 0x7dc
    int32_t esi_14 = edi_11 - ecx_14 + eax_48
    void* eax_49 = var_15c
    int32_t esi_17 = edx_8 - eax_48 + edi_11
    int32_t edi_13 = edi_11 - edx_8 + ecx_14
    int32_t ebx_22 = *(eax_49 + 4)
    int32_t edx_9 = *(eax_49 - 4) * 0xffffd8cf
    int32_t esi_18 = *(eax_49 + 0xc)
    int32_t ecx_15 = (ebx_22 + ebp_8) * 0x1d17
    int32_t eax_52 = (esi_18 + ebp_8) * 0xf7a
    int32_t edi_16 = ecx_15 - edx_9 + eax_52
    int32_t ecx_16 = (ebx_22 - esi_18) * 0x2c91
    int32_t var_154_2 = ecx_15 + edx_9 - ecx_16
    int32_t var_158_2 = eax_52 + ecx_16 + edx_9
    int32_t ecx_17 = (ebp_8 - esi_18 - ebx_22) * 0x2731
    *eax_40 = ((esi_14 + edi_16) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[8] = ((esi_14 - edi_16) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[1] = ((edx_7 + ecx_17) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[7] = ((edx_7 - ecx_17) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[2] = ((esi_17 + var_154_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[6] = ((esi_17 - var_154_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[3] = ((edi_13 + var_158_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[5] = ((edi_13 - var_158_2) s>> 0x12 & 0x3ff)[eax_6]
    void* ebp_12 = var_15c
    eax_40[4] = ((ebx_20 - eax_45 * 2) s>> 0x12 & 0x3ff)[eax_6]
    ebp_7 = ebp_12 + 0x20
    i_1 = i_3 + 1
    var_15c = ebp_7
    i_3 = i_1
while (i_1 s< 9)

@__security_check_cookie@4(eax_1 ^ &var_15c)
return i_1
