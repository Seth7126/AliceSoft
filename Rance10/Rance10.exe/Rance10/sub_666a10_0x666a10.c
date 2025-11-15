// 函数: sub_666a10
// 地址: 0x666a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_134
int32_t eax_1 = __security_cookie ^ &var_134
int32_t* eax_2 = arg1
int32_t ecx = 0
int32_t* var_f8 = eax_2
int32_t var_fc = 0

while (true)
    char* ecx_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edx_2 = zx.d(ecx_2[0xe])
    uint32_t ebx_1 = zx.d(*ecx_2)
    uint32_t ebp_1 = zx.d(ecx_2[0xd])
    uint32_t edi_1 = zx.d(ecx_2[0xb])
    uint32_t esi_1 = zx.d(ecx_2[0xa])
    uint32_t edx_3 = edx_2 + ebx_1
    uint32_t edx_4 = zx.d(ecx_2[1])
    uint32_t edx_5 = edx_4 + ebp_1
    uint32_t edx_6 = zx.d(ecx_2[2])
    uint32_t ebx_2 = zx.d(ecx_2[0xc])
    uint32_t edx_7 = edx_6 + ebx_2
    uint32_t ebx_3 = zx.d(ecx_2[5])
    uint32_t edx_8 = zx.d(ecx_2[3])
    var_134 = edx_8
    uint32_t edx_9 = edx_8 + edi_1
    uint32_t edx_10 = zx.d(ecx_2[4])
    uint32_t edx_11 = edx_10 + esi_1
    uint32_t edx_12 = zx.d(ecx_2[9])
    uint32_t ecx_3 = zx.d(ecx_2[8])
    uint32_t var_12c_2 = edx_10 - esi_1
    uint32_t ebp_2 = ebx_3 + edx_12
    var_134 -= edi_1
    uint32_t edi_4 = ebp_2 + edx_11 + edx_3
    uint32_t ebx_4 = zx.d(ecx_2[6])
    uint32_t var_130_2 = ebx_3 - edx_12
    uint32_t var_110_2 = ebx_4 - ecx_3
    uint32_t ebp_4 = ebx_4 + ecx_3
    uint32_t ebx_6 = ebx_1 - edx_2
    uint32_t var_10c_2 = edx_6 - ebx_2
    uint32_t ebp_6 = zx.d(ecx_2[7])
    uint32_t edx_14 = edx_7 + ebp_6
    uint32_t var_128_2 = edx_4 - ebp_1
    uint32_t esi_4 = edx_9 + ebp_4 + edx_5
    *eax_2 = edx_14 - 0x780 + esi_4 + edi_4
    eax_2[6] = (edi_4 * 0x249d - edx_14 * 0x2d42 - esi_4 * 0xdfc + 0x1000) s>> 0xd
    int32_t edi_7 = (edx_3 - edx_9) * 0x2c44 + (ebp_4 - ebp_2) * 0x1e48 + (edx_5 - edx_11) * 0x194c
    int32_t ebx_9 = var_10c_2 * 0x2731
    int32_t esi_5 = (((edx_11 + edx_5) u>> 1) - ebp_6 * 2 + edx_7) * 0x16a1
    eax_2[2] = (edi_7 + 0x1000 + edx_9 * 0x30ff - ebp_4 * 0x47a0 + esi_5) s>> 0xd
    eax_2[4] = (edi_7 + 0x1000 + ebp_2 * 0x198d - edx_3 * 0x2ec - esi_5) s>> 0xd
    int32_t esi_6 = (var_110_2 - var_134 - var_10c_2 + var_130_2 + ebx_6) * 0x2731
    int32_t edi_12 = (ebx_6 - var_110_2) * 0x2d02 + (var_128_2 + var_12c_2) * 0x2b0a
        + (var_134 + var_130_2) * 0x1268
    eax_2[1] = (var_134 * 0xf39 + 0x1000 + var_110_2 * 0x366a - var_12c_2 * 0x1071 + ebx_9 + edi_12)
        s>> 0xd
    eax_2[3] = ((var_128_2 - var_110_2 - var_134) * 0x1a9a
        + (ebx_6 - var_130_2 - var_12c_2) * 0x2b0a + 0x1000) s>> 0xd
    eax_2[5] = (esi_6 + 0x1000) s>> 0xd
    eax_2[7] = (var_130_2 * 0xffffe42f - var_128_2 * 0x45a4 - ebx_6 * 0xb60 - ebx_9 + 0x1000
        + edi_12) s>> 0xd
    ecx = var_fc + 1
    var_fc = ecx
    
    if (ecx == 8)
        void var_e4
        eax_2 = &var_e4
    else
        if (ecx == 0xf)
            break
        
        eax_2 = &eax_2[8]

void var_44
void* edx_40 = &var_44
int32_t var_f0_2 = 7
void* var_128_3 = &var_44
void* ecx_60 = &var_f8[0x10]
int32_t* result = var_f8 - &var_44
var_134 = ecx_60
int32_t* result_1 = result
int32_t temp0_1

do
    int32_t eax_4 = *(result + edx_40)
    int32_t ebp_10 = *(edx_40 + 0x20)
    int32_t ebx_10 = *edx_40
    int32_t edi_13 = *(edx_40 - 0x20)
    int32_t eax_5 = eax_4 + ebp_10
    int32_t esi_7 = *(edx_40 - 0x40)
    int32_t eax_6 = *(ecx_60 - 0x20)
    int32_t eax_7 = eax_6 + ebx_10
    int32_t edx_41 = *(edx_40 - 0x60)
    int32_t eax_8 = *ecx_60
    int32_t eax_9 = eax_8 + edi_13
    int32_t eax_10 = *(ecx_60 + 0x20)
    int32_t eax_11 = eax_10 + esi_7
    int32_t eax_12 = *(ecx_60 + 0x40)
    int32_t eax_13 = eax_12 + edx_41
    int32_t var_118_4 = eax_12 - edx_41
    int32_t var_11c_3 = eax_6 - ebx_10
    int32_t var_130_4 = eax_10 - esi_7
    int32_t ecx_61 = *(var_128_3 - 0x80)
    uint32_t ebp_11 = var_134
    int32_t var_114_3 = eax_8 - edi_13
    int32_t eax_15 = *(ebp_11 + 0x60)
    int32_t ebp_12 = *(ebp_11 + 0x80)
    int32_t eax_16 = eax_15 + ecx_61
    int32_t var_12c_4 = eax_15 - ecx_61
    int32_t ebx_11 = *(var_134 + 0xa0)
    int32_t eax_18 = *(var_128_3 - 0xa0)
    int32_t ecx_64 = eax_9 + ebx_11
    int32_t esi_10 = eax_16 + eax_13 + eax_5
    int32_t ebp_13 = ebp_12 + eax_18
    int32_t var_110_4 = ebp_12 - eax_18
    int32_t edx_44 = ebp_13 + eax_11 + eax_7
    int32_t var_124_4 = eax_4 - ebp_10
    *(result_1 + var_128_3) = ((ecx_64 + edx_44 + esi_10) * 0x2469 + 0x4000) s>> 0xf
    *(var_134 + 0x80) = (esi_10 * 0x29a8 - ecx_64 * 0x337e - edx_44 * 0xfe9 + 0x4000) s>> 0xf
    int32_t var_120_3 = eax_9 + ((eax_7 + eax_13) s>> 1) - ebx_11 * 2
    int32_t edi_15 = var_114_3 * 0x2c97
    uint32_t esi_13 = var_134
    int32_t edx_47 =
        (eax_5 - eax_11) * 0x325d + (ebp_13 - eax_16) * 0x2274 + (eax_7 - eax_13) * 0x1cc9
    *esi_13 = (var_120_3 * 0x19bf + 0x4000 + eax_11 * 0x37bf - ebp_13 * 0x517e + edx_47) s>> 0xf
    *(esi_13 + 0x40) =
        (eax_16 * 0x1d12 - var_120_3 * 0x19be - eax_5 * 0x354 + 0x4000 + edx_47) s>> 0xf
    int32_t esi_18 = (var_124_4 - var_110_4) * 0x3335 + (var_11c_3 + var_118_4) * 0x30f8
        + (var_12c_4 + var_130_4) * 0x14f1
    *(var_134 - 0x20) = (var_130_4 * 0x1152 + 0x4000 + var_110_4 * 0x3dea - var_118_4 * 0x12b4
        + edi_15 + esi_18) s>> 0xf
    uint32_t ecx_85 = var_134
    *(ecx_85 + 0x20) = ((var_11c_3 - var_110_4 - var_130_4) * 0x1e44
        + (var_124_4 - var_12c_4 - var_118_4) * 0x30f8 + 0x4000) s>> 0xf
    *(ecx_85 + 0x60) =
        ((var_110_4 - var_130_4 - var_114_3 + var_12c_4 + var_124_4) * 0x2c97 + 0x4000) s>> 0xf
    edx_40 = var_128_3 + 4
    var_128_3 = edx_40
    uint32_t ecx_90 = var_134
    *(ecx_90 + 0xa0) = (var_12c_4 * 0xffffe05a - var_11c_3 * 0x4f3c - var_124_4 * 0xcf2 - edi_15
        + 0x4000 + esi_18) s>> 0xf
    ecx_60 = ecx_90 + 4
    temp0_1 = var_f0_2
    var_f0_2 -= 1
    result = result_1
    var_134 = ecx_60
while (temp0_1 - 1 s>= 0)
@__security_check_cookie@4(eax_1 ^ &var_134)
return result
