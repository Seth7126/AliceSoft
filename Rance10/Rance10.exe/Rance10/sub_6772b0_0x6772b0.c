// 函数: sub_6772b0
// 地址: 0x6772b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_16c
int32_t eax_1 = __security_cookie ^ &var_16c
int16_t* edx_1 = arg3 + 0x20
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int16_t* var_164 = edx_1
int32_t i_2 = 6
int32_t* ecx_1 = *(arg2 + 0x54) + 0x40
void var_10c
void* var_140 = &var_10c
int32_t* var_160 = ecx_1
int32_t i

do
    int32_t edx_3 = sx.d(*edx_1) * *ecx_1
    int32_t eax_10 = sx.d(edx_1[0x10]) * ecx_1[0x10] * 0x2731
    int32_t edi_4 = ((sx.d(edx_1[-0x10]) * ecx_1[-0x10]) << 0xd) + 0x400
    int32_t esi_1 = edx_3 * 0x2bb6
    int32_t ebx_2 = edi_4 - eax_10
    int32_t edx_4 = edx_3 << 0xd
    int32_t ebp_1 = eax_10 + edi_4
    int32_t ecx_4 = (sx.d(var_164[0x20]) * var_160[0x20]) << 0xd
    int32_t eax_14 = edx_4 - ecx_4
    int32_t var_154_2 = edi_4 - eax_14
    int32_t edi_5 = edi_4 + eax_14
    int32_t eax_15 = ecx_4 + esi_1
    int32_t edi_6 = eax_15 + ebp_1
    int32_t ebp_2 = ebp_1 - eax_15
    int32_t esi_3 = esi_1 - ecx_4 - edx_4
    int32_t eax_16 = esi_3 + ebx_2
    int32_t ebx_3 = ebx_2 - esi_3
    int32_t ebp_4 = sx.d(var_164[0x18]) * var_160[0x18]
    int32_t edi_8 = sx.d(var_164[0x28]) * var_160[0x28]
    int32_t eax_18 = sx.d(var_164[8]) * var_160[8]
    int32_t ebx_5 = sx.d(var_164[-8]) * var_160[-8]
    int32_t esi_4 = eax_18 * 0xffffeeaf
    int32_t edx_6 = eax_18 * 0x29cf
    int32_t ecx_6 = ebx_5 + ebp_4
    var_16c = (ecx_6 + edi_8) * 0x1b8d
    int32_t eax_22 = ecx_6 * 0x85b + var_16c
    int32_t ebx_8 = ebx_5 * 0x8f7 + eax_22 + edx_6
    int32_t ecx_7 = (edi_8 + ebp_4) * 0xffffde8b
    int32_t var_15c_2 = eax_22 + ecx_7 - ebp_4 * 0x2f50 + esi_4
    int32_t edx_7 = var_16c
    int32_t var_158_2 = ecx_7 + edi_8 * 0x32c6 - edx_6 + edx_7
    var_16c = edx_7 + ebx_5 * 0xffffea5c - edi_8 * 0x3f74 + esi_4
    int32_t ecx_14 = ebx_5 - edi_8
    int32_t esi_6 = eax_18 - ebp_4
    int32_t edx_9 = (esi_6 + ecx_14) * 0x1151
    int32_t ecx_16 = ecx_14 * 0x187e + edx_9
    int32_t edx_10 = edx_9 - esi_6 * 0x3b21
    *(var_140 - 0x18) = (edi_6 + ebx_8) s>> 0xb
    *(var_140 + 0xf0) = (edi_6 - ebx_8) s>> 0xb
    *var_140 = (edi_5 + ecx_16) s>> 0xb
    *(var_140 + 0xd8) = (edi_5 - ecx_16) s>> 0xb
    *(var_140 + 0x18) = (eax_16 + var_15c_2) s>> 0xb
    *(var_140 + 0xc0) = (eax_16 - var_15c_2) s>> 0xb
    *(var_140 + 0x30) = (var_158_2 + ebx_3) s>> 0xb
    *(var_140 + 0xa8) = (ebx_3 - var_158_2) s>> 0xb
    *(var_140 + 0x90) = (var_154_2 - edx_10) s>> 0xb
    int32_t ecx_22 = var_16c
    *(var_140 + 0x48) = (edx_10 + var_154_2) s>> 0xb
    ecx_1 = &var_160[1]
    *(var_140 + 0x78) = (ebp_2 - ecx_22) s>> 0xb
    edx_1 = &var_164[1]
    *(var_140 + 0x60) = (ecx_22 + ebp_2) s>> 0xb
    i = i_2
    i_2 -= 1
    var_164 = edx_1
    var_160 = ecx_1
    var_140 += 4
while (i != 1)
int32_t i_1 = 0
void var_11c
void* result = &var_11c
int32_t i_3 = 0

do
    result += 0x18
    int32_t ebp_5 = *(result - 0x1c)
    char* ecx_25 = *(arg4 + (i_1 << 2)) + arg5
    int32_t ecx_26 = *(result - 0x10) * 0x16a1
    int32_t edx_18 = (*(result - 0x20) + 0x4010) << 0xd
    int32_t esi_13 = ecx_26 + edx_18
    int32_t edx_19 = edx_18 - ecx_26 * 2
    int32_t ecx_28 = *(result - 0x18) * 0x2731
    int32_t edx_20 = *(result - 0x14)
    int32_t ebx_15 = esi_13 + ecx_28
    int32_t esi_14 = esi_13 - ecx_28
    int32_t esi_15 = *(result - 0xc)
    var_16c = esi_15
    var_16c -= edx_20
    var_16c <<= 0xd
    int32_t ecx_30 = (esi_15 + ebp_5) * 0xbb6
    int32_t ebp_8 = (ebp_5 - edx_20 - esi_15) << 0xd
    var_16c += ecx_30
    int32_t edi_13 = ((edx_20 + ebp_5) << 0xd) + ecx_30
    *ecx_25 = ((ebx_15 + edi_13) s>> 0x12 & 0x3ff)[eax_6]
    ecx_25[5] = ((ebx_15 - edi_13) s>> 0x12 & 0x3ff)[eax_6]
    ecx_25[1] = ((edx_19 + ebp_8) s>> 0x12 & 0x3ff)[eax_6]
    int32_t edx_26 = var_16c
    ecx_25[4] = ((edx_19 - ebp_8) s>> 0x12 & 0x3ff)[eax_6]
    ecx_25[2] = ((esi_14 + edx_26) s>> 0x12 & 0x3ff)[eax_6]
    ecx_25[3] = ((esi_14 - edx_26) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xc)

@__security_check_cookie@4(eax_1 ^ &var_16c)
return result
