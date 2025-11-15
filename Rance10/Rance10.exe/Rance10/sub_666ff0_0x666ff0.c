// 函数: sub_666ff0
// 地址: 0x666ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_160
int32_t eax_1 = __security_cookie ^ &var_160
int32_t ecx = 0
void** eax_2 = arg1
int32_t var_128 = 0

while (true)
    char* ecx_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edx_2 = zx.d(ecx_2[0xf])
    uint32_t ebx_1 = zx.d(*ecx_2)
    uint32_t ebp_1 = zx.d(ecx_2[8])
    uint32_t edx_3 = edx_2 + ebx_1
    uint32_t ebx_2 = zx.d(ecx_2[1])
    uint32_t edx_4 = zx.d(ecx_2[0xe])
    uint32_t ebx_3 = ebx_2 + edx_4
    uint32_t ebx_4 = zx.d(ecx_2[2])
    uint32_t edx_5 = zx.d(ecx_2[0xd])
    uint32_t edx_6 = edx_5 + ebx_4
    var_160 = ebx_4
    uint32_t ebx_5 = zx.d(ecx_2[3])
    uint32_t edx_7 = zx.d(ecx_2[0xc])
    uint32_t edi_1 = ebx_5 + edx_7
    uint32_t edx_8 = zx.d(ecx_2[0xb])
    uint32_t ebx_6 = zx.d(ecx_2[4])
    uint32_t edi_2 = ebx_6 + edx_8
    uint32_t edx_9 = zx.d(ecx_2[0xa])
    uint32_t ebx_7 = zx.d(ecx_2[5])
    uint32_t esi_1 = ebx_7 + edx_9
    uint32_t ebx_8 = zx.d(ecx_2[6])
    uint32_t edx_10 = zx.d(ecx_2[9])
    uint32_t ecx_3 = zx.d(ecx_2[7])
    uint32_t ecx_4 = ecx_3 + ebp_1
    uint32_t edx_11 = edx_10 + ebx_8
    uint32_t var_148_2 = edx_3 - ecx_4
    uint32_t ebx_10 = edx_3 + ecx_4
    uint32_t ecx_5 = edx_11 + ebx_3
    uint32_t ebx_12 = ebx_3 - edx_11
    uint32_t ebx_13 = esi_1 + edx_6
    uint32_t ecx_7 = edx_6 - esi_1
    uint32_t edx_12 = edi_2 + edi_1
    uint32_t ecx_9 = edi_1 - edi_2
    uint32_t ecx_11 = ebx_1 - edx_2
    uint32_t ecx_13 = ebx_2 - edx_4
    var_160 -= edx_5
    uint32_t ecx_17 = ebx_5 - edx_7
    uint32_t ecx_19 = ebx_6 - edx_8
    uint32_t ecx_21 = ebx_7 - edx_9
    uint32_t ecx_23 = ebx_8 - edx_10
    uint32_t var_144_2 = ecx_3 - ebp_1
    *eax_2 = ((edx_12 + ebx_13 + ecx_5 + ebx_10) << 2) + 0xffffe000
    eax_2[4] = ((ecx_5 - ebx_13) * 0x1151 + (ebx_10 - edx_12) * 0x29cf + 0x400) s>> 0xb
    int32_t esi_5 = (var_148_2 - ecx_7) * 0x2c63 + (ecx_9 - ebx_12) * 0x8d4
    eax_2[2] = (ebx_12 * 0x2e75 + 0x400 + ecx_7 * 0x4587 + esi_5) s>> 0xb
    eax_2[6] = (var_148_2 * 0xfffff93e - ecx_9 * 0x21f9 + 0x400 + esi_5) s>> 0xb
    int32_t ebp_5 = (ecx_13 + ecx_11) * 0x2b4e + (ecx_23 - var_144_2) * 0xd23
    int32_t edx_20 = (var_160 + ecx_11) * 0x27e9 + (var_144_2 + ecx_21) * 0x1555
    int32_t edx_22 = (ecx_11 + ecx_17) * 0x22fc + (ecx_19 - var_144_2) * 0x1cb6
    int32_t edi_5 = (ecx_23 - ecx_21) * 0x2d09 + (var_160 + ecx_13) * 0x470
    int32_t ebx_17 = (ecx_17 + ecx_13) * 0xffffeaab - (ecx_19 + ecx_23) * 0x27e9
    int32_t esi_9 = (ecx_21 - ecx_19) * 0xd23 - (var_160 + ecx_17) * 0x2b4e
    eax_2[1] = (var_144_2 * 0x18f3 - ecx_11 * 0x492a + edx_22 + edx_20 + 0x400 + ebp_5) s>> 0xb
    eax_2[3] = (edi_5 + 0x400 + ecx_13 * 0x24d - ecx_23 * 0x353f + ebx_17 + ebp_5) s>> 0xb
    eax_2[5] = (edi_5 + 0x400 + ecx_21 * 0x2747 - var_160 * 0x2406 + esi_9 + edx_20) s>> 0xb
    eax_2[7] = (ebx_17 + 0x400 + ecx_17 * 0x2218 + ecx_19 * 0x4560 + edx_22 + esi_9) s>> 0xb
    ecx = var_128 + 1
    var_128 = ecx
    
    if (ecx == 8)
        void var_104
        eax_2 = &var_104
    else
        if (ecx == 0x10)
            break
        
        eax_2 = &eax_2[8]

void var_44
void* ebp_6 = &var_44
int32_t var_120_2 = 7
void* var_150_3 = &var_44
void* ebx_18 = &arg1[0x10]
int32_t* ecx_89 = arg1 - &var_44
void* var_138_3 = ebx_18
int32_t* var_124_1 = ecx_89
int32_t result
int32_t temp0_1

do
    int32_t ecx_90 = *(ecx_89 + ebp_6)
    int32_t eax_4 = *(ebp_6 + 0x20) + ecx_90
    int32_t esi_10 = *(ebp_6 - 0x40)
    int32_t edx_40 = *(ebp_6 - 0x80)
    int32_t eax_5 = *(ebx_18 + 0x80)
    int32_t ecx_91 = *(ebx_18 - 0x20)
    int32_t edi_7 = *ebp_6 + ecx_91
    uint32_t ecx_92 = *ebx_18
    var_160 = ecx_92
    int32_t ecx_93 = ecx_92 + *(ebp_6 - 0x20)
    int32_t ecx_94 = *(ebx_18 + 0x20)
    int32_t esi_11 = esi_10 + ecx_94
    int32_t ecx_95 = *(ebx_18 + 0x40)
    int32_t ebp_7 = *(ebp_6 - 0xa0)
    int32_t esi_13 = *(ebp_6 - 0x60) + ecx_95
    int32_t ecx_96 = *(ebx_18 + 0x60)
    int32_t edx_41 = edx_40 + ecx_96
    int32_t ecx_97 = eax_5 + ebp_7
    int32_t eax_6 = *(ebx_18 + 0xa0)
    int32_t var_13c_4 = eax_5 - ebp_7
    int32_t ebx_20 = *(var_150_3 - 0xc0)
    int32_t eax_7 = eax_6 + ebx_20
    int32_t var_140_4 = eax_4 - eax_7
    int32_t edi_9 = eax_4 + eax_7
    int32_t var_148_4 = eax_6 - ebx_20
    int32_t eax_8 = ecx_97 + edi_7
    int32_t edi_11 = edi_7 - ecx_97
    int32_t edi_12 = edx_41 + ecx_93
    int32_t eax_10 = ecx_93 - edx_41
    int32_t ecx_98 = esi_13 + esi_11
    int32_t eax_12 = esi_11 - esi_13
    int32_t eax_14 = ecx_90 - *(var_150_3 + 0x20)
    int32_t eax_16 = ecx_91 - *var_150_3
    var_160 -= *(var_150_3 - 0x20)
    int32_t eax_20 = ecx_94 - *(var_150_3 - 0x40)
    int32_t eax_22 = ecx_95 - *(var_150_3 - 0x60)
    int32_t eax_24 = ecx_96 - *(var_150_3 - 0x80)
    *(var_124_1 + var_150_3) = (edi_12 + 8 + ecx_98 + eax_8 + edi_9) s>> 4
    *(var_138_3 + 0x40) = ((eax_8 - edi_12) * 0x1151 + (edi_9 - ecx_98) * 0x29cf + 0x10000) s>> 0x11
    int32_t edx_46 = (var_140_4 - eax_10) * 0x2c63 + (eax_12 - edi_11) * 0x8d4
    *var_138_3 = (edi_11 * 0x2e75 + 0x10000 + eax_10 * 0x4587 + edx_46) s>> 0x11
    *(var_138_3 + 0x80) = (var_140_4 * 0xfffff93e - eax_12 * 0x21f9 + 0x10000 + edx_46) s>> 0x11
    int32_t ebx_24 = (eax_16 + eax_14) * 0x2b4e + (var_13c_4 - var_148_4) * 0xd23
    int32_t ebp_11 = (var_160 + eax_14) * 0x27e9 + (eax_24 + var_148_4) * 0x1555
    int32_t ecx_107 = (eax_20 + eax_14) * 0x22fc + (eax_22 - var_148_4) * 0x1cb6
    int32_t esi_16 = (var_13c_4 - eax_24) * 0x2d09 + (eax_16 + var_160) * 0x470
    int32_t edi_15 = (eax_16 + eax_20) * 0xffffeaab - (eax_22 + var_13c_4) * 0x27e9
    int32_t edx_51 = (eax_24 - eax_22) * 0xd23 - (var_160 + eax_20) * 0x2b4e
    *(var_138_3 - 0x20) =
        (var_148_4 * 0x18f3 - eax_14 * 0x492a + ecx_107 + 0x10000 + ebp_11 + ebx_24) s>> 0x11
    *(var_138_3 + 0x20) =
        (esi_16 + 0x10000 + eax_16 * 0x24d - var_13c_4 * 0x353f + edi_15 + ebx_24) s>> 0x11
    ebp_6 = var_150_3 + 4
    *(var_138_3 + 0x60) =
        (esi_16 + 0x10000 + eax_24 * 0x2747 - var_160 * 0x2406 + edx_51 + ebp_11) s>> 0x11
    var_150_3 = ebp_6
    ecx_89 = var_124_1
    result = (edi_15 + 0x10000 + eax_20 * 0x2218 + eax_22 * 0x4560 + ecx_107 + edx_51) s>> 0x11
    *(var_138_3 + 0xa0) = result
    ebx_18 = var_138_3 + 4
    temp0_1 = var_120_2
    var_120_2 -= 1
    var_138_3 = ebx_18
while (temp0_1 - 1 s>= 0)
@__security_check_cookie@4(eax_1 ^ &var_160)
return result
