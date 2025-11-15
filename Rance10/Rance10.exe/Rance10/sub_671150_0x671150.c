// 函数: sub_671150
// 地址: 0x671150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_1a4
int32_t eax_1 = __security_cookie ^ &var_1a4
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int32_t i_2 = 8
void var_144
void* var_180 = &var_144
int16_t* eax_9 = arg3 + 0x40
int32_t* edx_1 = *(arg2 + 0x54) + 0x80
int16_t* var_18c = eax_9
int32_t* var_188 = edx_1
int32_t i

do
    int32_t ebx_2 = sx.d(*eax_9) * *edx_1
    int32_t edi_2 = sx.d(eax_9[0x10]) * edx_1[0x10]
    int32_t ebp_2 = sx.d(eax_9[-0x10]) * edx_1[-0x10]
    int32_t eax_12 = (ebx_2 - edi_2) * 0x517e
    int32_t ecx_4 = ((sx.d(eax_9[-0x20]) * edx_1[-0x20]) << 0xd) + 0x400
    int32_t esi_1 = edi_2 + ebp_2
    int32_t eax_15 = (ebx_2 - ebp_2) * 0xdc9
    int32_t esi_2 = esi_1 - ebx_2
    int32_t edx_3 = esi_2 * 0x2b6c + ecx_4
    int32_t ecx_8 = edx_3 - ebx_2 * 0x3a4c + eax_15 + eax_12
    int32_t var_19c_2 = eax_12 + edi_2 * 0x43b5 + edx_3
    int32_t var_190_2 = eax_15 + edx_3 - ebp_2 * 0x306f
    int32_t ecx_12 = esi_1 * 0xffffdb05 + edx_3
    int32_t ecx_13 = ecx_12 - edi_2 * 0x193d
    int32_t var_1a0_3 = ecx_12 + ebx_2 * 0x3e39 - ebp_2 * 0x2c83
    int32_t var_17c_2 = ecx_4 - esi_2 * 0x2d41
    int32_t edx_5 = sx.d(var_18c[-0x18]) * var_188[-0x18]
    int32_t ebp_4 = sx.d(var_18c[-8]) * var_188[-8]
    int32_t edi_4 = sx.d(var_18c[0x18]) * var_188[0x18]
    int32_t ebx_4 = sx.d(var_18c[8]) * var_188[8]
    int32_t ecx_17 = edx_5 + ebp_4
    int32_t ecx_18 = ecx_17 * 0x1c6a
    int32_t esi_3 = (ecx_17 + edi_4 + ebx_4) * 0xcc0
    int32_t eax_28 = (ebx_4 + edx_5) * 0x1574
    var_1a4 = ecx_18
    int32_t eax_31 = (edi_4 + edx_5) * 0xbb8 + esi_3
    int32_t edx_9 = eax_31 - edx_5 * 0x1d8a + eax_28 + ecx_18
    int32_t ecx_20 = esi_3 - (ebx_4 + ebp_4) * 0x2537
    var_1a4 += ebp_4 * 0x4258 + ecx_20
    int32_t var_198_2 = eax_28 + ecx_20 - ebx_4 * 0x2626
    int32_t ecx_22 = (edi_4 + ebp_4) * 0xffffc675
    var_1a4 += ecx_22
    int32_t var_194_2 = eax_31 + edi_4 * 0x4347 + ecx_22
    int32_t ecx_25 = ebp_4 * 0xffffd10d - edi_4 * 0x35ea + ebx_4 * 0x200b + esi_3
    int32_t edx_10 = var_1a4
    *(var_180 - 0x20) = (var_19c_2 + edx_9) s>> 0xb
    *(var_180 + 0x120) = (var_19c_2 - edx_9) s>> 0xb
    *var_180 = (edx_10 + ecx_8) s>> 0xb
    *(var_180 + 0x100) = (ecx_8 - edx_10) s>> 0xb
    *(var_180 + 0x20) = (var_198_2 + ecx_13) s>> 0xb
    *(var_180 + 0xe0) = (ecx_13 - var_198_2) s>> 0xb
    *(var_180 + 0x40) = (var_194_2 + var_190_2) s>> 0xb
    *(var_180 + 0xc0) = (var_190_2 - var_194_2) s>> 0xb
    *(var_180 + 0x60) = (ecx_25 + var_1a0_3) s>> 0xb
    *(var_180 + 0xa0) = (var_1a0_3 - ecx_25) s>> 0xb
    *(var_180 + 0x80) = var_17c_2 s>> 0xb
    edx_1 = &var_188[1]
    eax_9 = &var_18c[1]
    var_188 = edx_1
    i = i_2
    i_2 -= 1
    var_18c = eax_9
    var_180 += 4
while (i != 1)
int32_t i_1 = 0
void var_154
void* edx_17 = &var_154
int32_t i_3 = 0
void* var_18c_1 = &var_154

do
    int32_t ebx_14 = *edx_17
    int32_t edi_7 = *(edx_17 + 8)
    int32_t ebp_5 = *(edx_17 - 8)
    char* eax_58 = *(arg4 + (i_1 << 2)) + arg5
    int32_t esi_7 = edi_7 + ebp_5
    int32_t eax_61 = (ebx_14 - edi_7) * 0x517e
    int32_t ecx_29 = (*(edx_17 - 0x10) + 0x4010) << 0xd
    int32_t eax_64 = (ebx_14 - ebp_5) * 0xdc9
    int32_t esi_8 = esi_7 - ebx_14
    var_1a4 = esi_7 * 0xffffdb05
    int32_t edx_19 = esi_8 * 0x2b6c + ecx_29
    int32_t ecx_33 = edx_19 - ebx_14 * 0x3a4c + eax_64 + eax_61
    int32_t var_190_4 = eax_61 + edi_7 * 0x43b5 + edx_19
    int32_t var_19c_4 = eax_64 + edx_19 - ebp_5 * 0x306f
    int32_t ecx_37 = var_1a4 + edx_19
    var_1a4 = ecx_37
    int32_t ecx_38 = ecx_37 - edi_7 * 0x193d
    int32_t edx_20 = *(var_18c_1 - 0xc)
    int32_t ebp_6 = *(var_18c_1 + 4)
    int32_t ebx_15 = *(var_18c_1 - 4)
    int32_t edi_9 = *(var_18c_1 + 0xc)
    var_1a4 += ebx_14 * 0x3e39 - ebp_5 * 0x2c83
    int32_t ecx_41 = ebx_15 + edx_20
    int32_t var_188_2 = ecx_29 - esi_8 * 0x2d41
    int32_t ecx_42 = ecx_41 * 0x1c6a
    int32_t esi_9 = (ecx_41 + edi_9 + ebp_6) * 0xcc0
    int32_t eax_76 = (edx_20 + ebp_6) * 0x1574
    int32_t eax_79 = (edi_9 + edx_20) * 0xbb8 + esi_9
    int32_t edx_24 = eax_79 - edx_20 * 0x1d8a + eax_76 + ecx_42
    int32_t ecx_44 = esi_9 - (ebx_15 + ebp_6) * 0x2537
    int32_t var_194_4 = eax_76 + ecx_44 - ebp_6 * 0x2626
    int32_t ecx_46 = (edi_9 + ebx_15) * 0xffffc675
    int32_t var_1a0_6 = ecx_42 + ebx_15 * 0x4258 + ecx_44 + ecx_46
    int32_t var_198_4 = eax_79 + edi_9 * 0x4347 + ecx_46
    int32_t ecx_49 = ebx_15 * 0xffffd10d - edi_9 * 0x35ea + ebp_6 * 0x200b + esi_9
    *eax_58 = ((var_190_4 + edx_24) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[0xa] = ((var_190_4 - edx_24) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[1] = ((var_1a0_6 + ecx_33) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[9] = ((ecx_33 - var_1a0_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[2] = ((var_194_4 + ecx_38) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[8] = ((ecx_38 - var_194_4) s>> 0x12 & 0x3ff)[eax_6]
    int32_t edx_28 = var_1a4
    eax_58[3] = ((var_198_4 + var_19c_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[7] = ((var_19c_4 - var_198_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[4] = ((ecx_49 + edx_28) s>> 0x12 & 0x3ff)[eax_6]
    eax_58[6] = ((edx_28 - ecx_49) s>> 0x12 & 0x3ff)[eax_6]
    edx_17 = var_18c_1 + 0x20
    eax_58[5] = (var_188_2 s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    var_18c_1 = edx_17
    i_3 = i_1
while (i_1 s< 0xb)

@__security_check_cookie@4(eax_1 ^ &var_1a4)
return i_1
