// 函数: sub_66ad70
// 地址: 0x66ad70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_14c
int32_t eax_1 = __security_cookie ^ &var_14c
int32_t ecx = 0
void** eax_2 = arg1
int32_t var_140 = 0

while (true)
    char* ecx_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edx_2 = zx.d(ecx_2[7])
    uint32_t ebx_1 = zx.d(*ecx_2)
    uint32_t ebp_1 = zx.d(ecx_2[6])
    uint32_t esi_1 = ebx_1 + edx_2
    uint32_t edx_3 = zx.d(ecx_2[1])
    uint32_t ebx_2 = zx.d(ecx_2[5])
    var_14c = edx_3
    var_14c -= ebp_1
    uint32_t edi_1 = edx_3 + ebp_1
    uint32_t edx_4 = zx.d(ecx_2[2])
    uint32_t edx_5 = edx_4 + ebx_2
    uint32_t ebp_3 = edx_4 - ebx_2
    uint32_t edi_2 = zx.d(ecx_2[4])
    uint32_t ecx_3 = zx.d(ecx_2[3])
    uint32_t ecx_4 = ecx_3 + edi_2
    uint32_t var_134_2 = esi_1 - ecx_4
    uint32_t esi_2 = esi_1 + ecx_4
    uint32_t var_13c_2 = ecx_3 - edi_2
    uint32_t esi_3 = edx_5 + edi_1
    uint32_t ecx_6 = edi_1 - edx_5
    uint32_t ecx_8 = ebx_1 - edx_2
    *eax_2 = ((esi_3 + esi_2) << 2) + 0xfffff000
    eax_2[4] = (esi_2 - esi_3) << 2
    int32_t edx_9 = (ecx_6 + var_134_2) * 0x1151
    uint32_t esi_4 = var_14c
    eax_2[2] = (var_134_2 * 0x187e + 0x400 + edx_9) s>> 0xb
    uint32_t esi_5 = esi_4 + var_13c_2
    eax_2[6] = (edx_9 - ecx_6 * 0x3b21 + 0x400) s>> 0xb
    uint32_t edx_14 = ecx_8 + ebp_3
    int32_t ebx_4 = (esi_5 + edx_14) * 0x25a1
    int32_t ebp_5 = ebx_4 - edx_14 * 0xc7c
    int32_t ebx_5 = ebx_4 - esi_5 * 0x3ec5
    int32_t ecx_21 = (var_13c_2 + ecx_8) * 0xffffe333
    int32_t esi_6 = (var_14c + ebp_3) * 0xffffadfd
    eax_2[1] = (ecx_8 * 0x300b + 0x400 + ecx_21 + ebp_5) s>> 0xb
    eax_2[3] = (var_14c * 0x6254 + 0x400 + esi_6 + ebx_5) s>> 0xb
    eax_2[5] = (ebp_3 * 0x41b3 + 0x400 + esi_6 + ebp_5) s>> 0xb
    eax_2[7] = (var_13c_2 * 0x98e + 0x400 + ecx_21 + ebx_5) s>> 0xb
    ecx = var_140 + 1
    var_140 = ecx
    
    if (ecx == 8)
        void var_104
        eax_2 = &var_104
    else
        if (ecx == 0x10)
            break
        
        eax_2 = &eax_2[8]

void var_44
void* ebp_6 = &var_44
int32_t var_114_2 = 7
void* var_144_3 = &var_44
void* ebx_6 = &arg1[0x10]
int32_t* ecx_40 = arg1 - &var_44
void* var_134_3 = ebx_6
int32_t* var_118_1 = ecx_40
int32_t result
int32_t temp0_1

do
    int32_t ecx_41 = *(ecx_40 + ebp_6)
    int32_t eax_4 = *(ebp_6 + 0x20) + ecx_41
    int32_t edx_19 = *(ebp_6 - 0x80)
    int32_t eax_5 = *(ebx_6 + 0x80)
    int32_t ecx_42 = *(ebx_6 - 0x20)
    int32_t edi_9 = *ebp_6 + ecx_42
    int32_t ecx_43 = *ebx_6
    int32_t ecx_44 = ecx_43 + *(ebp_6 - 0x20)
    uint32_t ecx_45 = *(ebx_6 + 0x20)
    int32_t esi_8 = *(ebp_6 - 0x40) + ecx_45
    var_14c = ecx_45
    int32_t ecx_46 = *(ebx_6 + 0x40)
    int32_t ebp_7 = *(ebp_6 - 0xa0)
    int32_t esi_10 = *(ebp_6 - 0x60) + ecx_46
    int32_t ecx_47 = *(ebx_6 + 0x60)
    int32_t edx_20 = edx_19 + ecx_47
    int32_t ecx_48 = eax_5 + ebp_7
    int32_t eax_6 = *(ebx_6 + 0xa0)
    int32_t var_138_4 = eax_5 - ebp_7
    int32_t ebx_8 = *(var_144_3 - 0xc0)
    int32_t eax_7 = eax_6 + ebx_8
    int32_t var_120_2 = eax_4 - eax_7
    int32_t edi_11 = eax_4 + eax_7
    int32_t var_13c_4 = eax_6 - ebx_8
    int32_t eax_8 = ecx_48 + edi_9
    int32_t edi_13 = edi_9 - ecx_48
    int32_t edi_14 = edx_20 + ecx_44
    int32_t eax_10 = ecx_44 - edx_20
    int32_t ecx_49 = esi_10 + esi_8
    int32_t eax_12 = esi_8 - esi_10
    int32_t eax_14 = ecx_41 - *(var_144_3 + 0x20)
    int32_t eax_16 = ecx_42 - *var_144_3
    int32_t eax_18 = ecx_43 - *(var_144_3 - 0x20)
    var_14c -= *(var_144_3 - 0x40)
    int32_t eax_22 = ecx_46 - *(var_144_3 - 0x60)
    int32_t eax_24 = ecx_47 - *(var_144_3 - 0x80)
    *(var_118_1 + var_144_3) = (eax_8 + 4 + ecx_49 + edi_14 + edi_11) s>> 3
    *(var_134_3 + 0x40) = ((eax_8 - edi_14) * 0x1151 + (edi_11 - ecx_49) * 0x29cf + 0x8000) s>> 0x10
    int32_t edx_25 = (var_120_2 - eax_10) * 0x2c63 + (eax_12 - edi_13) * 0x8d4
    *var_134_3 = (edi_13 * 0x2e75 + 0x8000 + eax_10 * 0x4587 + edx_25) s>> 0x10
    *(var_134_3 + 0x80) = (var_120_2 * 0xfffff93e - eax_12 * 0x21f9 + 0x8000 + edx_25) s>> 0x10
    int32_t ebx_12 = (eax_16 + eax_14) * 0x2b4e + (var_138_4 - var_13c_4) * 0xd23
    int32_t ebp_11 = (eax_18 + eax_14) * 0x27e9 + (eax_24 + var_13c_4) * 0x1555
    int32_t ecx_58 = (var_14c + eax_14) * 0x22fc + (eax_22 - var_13c_4) * 0x1cb6
    int32_t esi_13 = (var_138_4 - eax_24) * 0x2d09 + (eax_16 + eax_18) * 0x470
    int32_t edi_17 = (eax_16 + var_14c) * 0xffffeaab - (eax_22 + var_138_4) * 0x27e9
    int32_t edx_30 = (eax_24 - eax_22) * 0xd23 - (eax_18 + var_14c) * 0x2b4e
    *(var_134_3 - 0x20) =
        (ebp_11 + 0x8000 + var_13c_4 * 0x18f3 - eax_14 * 0x492a + ecx_58 + ebx_12) s>> 0x10
    *(var_134_3 + 0x20) =
        (ebx_12 + 0x8000 + eax_16 * 0x24d - var_138_4 * 0x353f + edi_17 + esi_13) s>> 0x10
    ebp_6 = var_144_3 + 4
    var_144_3 = ebp_6
    int32_t ecx_74 = var_14c * 0x2218
    *(var_134_3 + 0x60) =
        (ebp_11 + 0x8000 + eax_24 * 0x2747 - eax_18 * 0x2406 + edx_30 + esi_13) s>> 0x10
    ecx_40 = var_118_1
    result = (ecx_58 + 0x8000 + ecx_74 + eax_22 * 0x4560 + edx_30 + edi_17) s>> 0x10
    *(var_134_3 + 0xa0) = result
    ebx_6 = var_134_3 + 4
    temp0_1 = var_114_2
    var_114_2 -= 1
    var_134_3 = ebx_6
while (temp0_1 - 1 s>= 0)
@__security_check_cookie@4(eax_1 ^ &var_14c)
return result
