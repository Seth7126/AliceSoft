// 函数: sub_666470
// 地址: 0x666470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_114
int32_t eax_1 = __security_cookie ^ &var_114
int32_t ecx = 0
int32_t* eax_2 = arg1
int32_t var_ec = 0

while (true)
    char* ecx_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edx_2 = zx.d(ecx_2[0xd])
    uint32_t ebx_1 = zx.d(*ecx_2)
    uint32_t edx_3 = edx_2 + ebx_1
    uint32_t edx_4 = zx.d(ecx_2[0xc])
    uint32_t ebx_2 = zx.d(ecx_2[1])
    uint32_t ebp_1 = ebx_2 + edx_4
    uint32_t edx_5 = zx.d(ecx_2[0xb])
    uint32_t ebx_3 = zx.d(ecx_2[2])
    uint32_t ebp_2 = zx.d(ecx_2[8])
    uint32_t edi_1 = ebx_3 + edx_5
    uint32_t edx_6 = zx.d(ecx_2[0xa])
    uint32_t ebx_4 = zx.d(ecx_2[3])
    uint32_t edx_7 = edx_6 + ebx_4
    uint32_t edx_8 = zx.d(ecx_2[9])
    uint32_t ebx_5 = zx.d(ecx_2[4])
    uint32_t esi_1 = ebx_5 + edx_8
    uint32_t edx_9 = zx.d(ecx_2[5])
    uint32_t ebx_6 = zx.d(ecx_2[7])
    uint32_t ecx_3 = zx.d(ecx_2[6])
    uint32_t edx_10 = edx_9 + ebp_2
    var_114 = ecx_3
    uint32_t ecx_4 = ecx_3 + ebx_6
    uint32_t var_104_2 = edx_3 - ecx_4
    uint32_t edi_3 = edx_3 + ecx_4
    uint32_t var_fc_2 = edx_9 - ebp_2
    var_114 -= ebx_6
    uint32_t ecx_5 = edx_10 + ebp_1
    uint32_t edi_5 = ebp_1 - edx_10
    uint32_t edi_6 = esi_1 + edi_1
    uint32_t edx_12 = edi_1 - esi_1
    uint32_t edx_14 = ebx_1 - edx_2
    uint32_t edx_16 = ebx_2 - edx_4
    uint32_t edx_18 = ebx_3 - edx_5
    uint32_t edx_20 = ebx_4 - edx_6
    uint32_t edx_22 = ebx_5 - edx_8
    *eax_2 = ecx_5 - 0x700 + edi_6 + edi_3 + edx_7
    eax_2[4] = (ecx_5 * 0xa12 + 0x1000 + edi_3 * 0x28c6 - edx_7 * 0x2d42 - edi_6 * 0x1c37) s>> 0xd
    int32_t esi_2 = (var_104_2 + edi_5) * 0x2362
    eax_2[2] = (var_104_2 * 0x8bd + 0x1000 + edx_12 * 0x13a3 + esi_2) s>> 0xd
    uint32_t esi_4 = edx_18 + edx_16
    uint32_t edx_31 = var_fc_2 - edx_22
    eax_2[6] = (esi_2 + 0x1000 + edx_12 * 0xffffd3e1 - edi_5 * 0x3704) s>> 0xd
    eax_2[7] = edx_20 - edx_31 - esi_4 - var_114 + edx_14
    uint32_t ebx_9 = edx_20 << 0xd
    int32_t edi_9 = edx_31 * 0x2cf8 - esi_4 * 0x511 - ebx_9
    int32_t ebx_11 = (edx_18 + edx_14) * 0x2652 + (var_114 + edx_22) * 0x1814
    uint32_t ebp_5 = var_114
    eax_2[5] = (edx_22 * 0x23d7 - edx_18 * 0x4bf7 + 0x1000 + ebx_11 + edi_9) s>> 0xd
    int32_t esi_7 = (edx_16 + edx_14) * 0x2ab7 + (var_fc_2 - ebp_5) * 0xef2
    eax_2[3] = (edx_16 * 0xfffff26e - var_fc_2 * 0x623c + 0x1000 + esi_7 + edi_9) s>> 0xd
    eax_2[1] = (ebp_5 + 0x1000 + ebx_9 - (edx_14 + ebp_5) * 0x2410 + esi_7 + ebx_11) s>> 0xd
    ecx = var_ec + 1
    var_ec = ecx
    
    if (ecx == 8)
        void var_c4
        eax_2 = &var_c4
    else
        if (ecx == 0xe)
            break
        
        eax_2 = &eax_2[8]

void var_44
void* edx_41 = &var_44
int32_t var_e4_2 = 7
void* var_104_3 = &var_44
void* edi_10 = &arg1[0x10]
int32_t* ecx_58 = arg1 - &var_44
var_114 = edi_10
int32_t* var_e8_1 = ecx_58
int32_t result
int32_t temp0_1

do
    int32_t ecx_59 = *(ecx_58 + edx_41)
    int32_t ebp_7 = *(edx_41 + 0x20) + ecx_59
    int32_t ecx_60 = *(edi_10 - 0x20)
    int32_t ebx_13 = *edx_41 + ecx_60
    int32_t ecx_61 = *edi_10
    int32_t esi_9 = *(edx_41 - 0x20) + ecx_61
    int32_t ecx_62 = *(edi_10 + 0x20)
    int32_t eax_4 = *(edx_41 - 0x40) + ecx_62
    int32_t eax_5 = *(edi_10 + 0x60)
    int32_t ecx_63 = *(edi_10 + 0x40)
    int32_t edx_43 = *(edx_41 - 0x60) + ecx_63
    int32_t edi_11 = *(edi_10 + 0xa0)
    int32_t ebx_15 = *(var_104_3 - 0x80)
    int32_t var_100_4 = eax_5 - ebx_15
    int32_t ecx_64 = eax_5 + ebx_15
    int32_t eax_7 = *(var_114 + 0x80)
    int32_t eax_8 = eax_7 + edi_11
    int32_t var_108_5 = eax_7 - edi_11
    int32_t esi_10 = eax_8 + ebp_7
    int32_t ebp_8 = ebp_7 - eax_8
    int32_t ebp_9 = ecx_64 + ebx_13
    int32_t eax_10 = ebx_13 - ecx_64
    int32_t esi_11 = edx_43 + esi_9
    int32_t eax_12 = esi_9 - edx_43
    int32_t eax_14 = ecx_59 - *(var_104_3 + 0x20)
    int32_t eax_16 = ecx_60 - *var_104_3
    int32_t eax_18 = ecx_61 - *(var_104_3 - 0x20)
    int32_t eax_20 = ecx_62 - *(var_104_3 - 0x40)
    int32_t eax_22 = ecx_63 - *(var_104_3 - 0x60)
    *(var_e8_1 + var_104_3) = ((esi_11 + ebp_9 + esi_10 + eax_4) * 0x14e6 + 0x2000) s>> 0xe
    *(var_114 + 0x40) =
        (ebp_9 * 0x694 + esi_10 * 0x1aa1 - eax_4 * 0x1d90 - esi_11 * 0x126d + 0x2000) s>> 0xe
    int32_t edx_44 = (eax_10 + ebp_8) * 0x171b
    uint32_t edi_14 = var_114
    *edi_14 = (ebp_8 * 0x5b5 + 0x2000 + eax_12 * 0xcd3 + edx_44) s>> 0xe
    int32_t ebx_18 = eax_20 * 0x14e6
    int32_t edx_46 = eax_18 + eax_16
    *(edi_14 + 0x80) = (edx_44 + 0x2000 + eax_12 * 0xffffe330 - eax_10 * 0x23ee) s>> 0xe
    int32_t ecx_76 = var_100_4 - eax_22
    *(edi_14 + 0xa0) = ((eax_20 - ecx_76 - edx_46 - var_108_5 + eax_14) * 0x14e6 + 0x2000) s>> 0xe
    int32_t esi_14 = ecx_76 * 0x1d5e - edx_46 * 0x34f - ebx_18
    int32_t edi_16 = (eax_18 + eax_14) * 0x1906 + (var_108_5 + eax_22) * 0xfb9
    *(var_114 + 0x60) = (eax_22 * 0x1768 - eax_18 * 0x319c + 0x2000 + edi_16 + esi_14) s>> 0xe
    int32_t edx_49 = (eax_16 + eax_14) * 0x1be5 + (var_100_4 - var_108_5) * 0x9c3
    *(var_114 + 0x20) =
        (eax_16 * 0xfffff723 - var_100_4 * 0x4027 + 0x2000 + edx_49 + esi_14) s>> 0xe
    result = (edi_16 + 0x2000 + var_108_5 * 0xfffffd59 - eax_14 * 0x178d + ebx_18 + edx_49) s>> 0xe
    uint32_t edi_17 = var_114
    ecx_58 = var_e8_1
    edx_41 = var_104_3 + 4
    var_104_3 = edx_41
    *(edi_17 - 0x20) = result
    edi_10 = edi_17 + 4
    temp0_1 = var_e4_2
    var_e4_2 -= 1
    var_114 = edi_10
while (temp0_1 - 1 s>= 0)
@__security_check_cookie@4(eax_1 ^ &var_114)
return result
