// 函数: sub_665e70
// 地址: 0x665e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_e4
int32_t eax_1 = __security_cookie ^ &var_e4
int32_t* eax_2 = arg1
int32_t ecx = 0
int32_t* var_b8 = eax_2
int32_t var_bc = 0

while (true)
    char* ebp_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t ecx_1 = zx.d(ebp_2[0xc])
    uint32_t edx_2 = zx.d(*ebp_2)
    uint32_t ebx_1 = zx.d(ebp_2[0xb])
    uint32_t edi_1 = zx.d(ebp_2[0xa])
    uint32_t esi_1 = zx.d(ebp_2[9])
    var_e4 = ecx_1 + edx_2
    uint32_t ecx_3 = zx.d(ebp_2[1])
    uint32_t ecx_4 = ecx_3 + ebx_1
    uint32_t ecx_5 = zx.d(ebp_2[2])
    uint32_t ecx_6 = ecx_5 + edi_1
    uint32_t ecx_7 = zx.d(ebp_2[3])
    uint32_t ecx_8 = ecx_7 + esi_1
    uint32_t ecx_9 = zx.d(ebp_2[4])
    uint32_t edx_3 = zx.d(ebp_2[8])
    uint32_t ecx_10 = ecx_9 + edx_3
    uint32_t var_d4_2 = ecx_9 - edx_3
    uint32_t var_e0_2 = ecx_7 - esi_1
    uint32_t ecx_11 = zx.d(ebp_2[7])
    uint32_t var_d0_2 = ecx_5 - edi_1
    uint32_t ebx_2 = zx.d(ebp_2[5])
    uint32_t ebp_3 = zx.d(ebp_2[6])
    uint32_t ebx_3 = ebx_2 + ecx_11
    uint32_t var_c4_2 = ebx_2 - ecx_11
    uint32_t ebx_5 = edx_2 - ecx_1
    uint32_t var_c8_2 = ecx_3 - ebx_1
    *eax_2 = ebx_3 + ebp_3 + ecx_10 + ecx_8 + ecx_6 + ecx_4 + var_e4 - 0x680
    uint32_t ecx_18 = ebp_3 << 1
    var_e4 -= ecx_18
    uint32_t edx_5 = ecx_4 - ecx_18
    uint32_t edi_5 = ecx_6 - ecx_18
    uint32_t ebx_8 = ebx_3 - ecx_18
    uint32_t ebp_5 = ecx_8 - ecx_18
    uint32_t esi_3 = ecx_10 - ecx_18
    uint32_t ecx_25 = var_e4 - edi_5
    eax_2[2] = (var_e4 * 0x2bf1 - ebx_8 * 0x2812 + edx_5 * 0x21e0 - esi_3 * 0x19b5 + edi_5 * 0x100c
        - ebp_5 * 0x574 + 0x1000) s>> 0xd
    int32_t edi_8 = ecx_25 * 0x24f9 + (esi_3 - ebp_5) * 0xdf2 + (ebx_8 - edx_5) * 0xa20
    int32_t esi_6 = (edx_5 + ebx_8) * 0xf95 - (esi_3 + ebp_5) * 0x1dfe + (edi_5 + var_e4) * 0x319
    eax_2[4] = (edi_8 + 0x1000 + esi_6) s>> 0xd
    int32_t ebp_6 = (var_c8_2 + ebx_5) * 0x2a50
    int32_t ecx_44 = (var_d0_2 + ebx_5) * 0x253e
    eax_2[6] = (edi_8 - esi_6 + 0x1000) s>> 0xd
    int32_t edx_17 = (var_e0_2 + ebx_5) * 0x1e02 + (var_d4_2 + var_c4_2) * 0xad5
    int32_t edi_13 = (var_d4_2 - var_c4_2) * 0x1e02 - (var_d0_2 + var_c8_2) * 0xad5
    int32_t ebx_10 = (var_e0_2 + var_c8_2) * 0xffffdac2
    int32_t esi_8 = (var_e0_2 + var_d0_2) * 0xffffeaf8
    eax_2[1] = (ebp_6 + 0x1000 + var_d4_2 * 0xa33 - ebx_5 * 0x40a5 + edx_17 + ecx_44) s>> 0xd
    eax_2[3] = (ebp_6 + 0x1000 + var_c8_2 * 0x1acb - var_d4_2 * 0x4aef + ebx_10 + edi_13) s>> 0xd
    eax_2[5] = (ecx_44 + 0x1000 + var_c4_2 * 0x4853 - var_d0_2 * 0x324f + esi_8 + edi_13) s>> 0xd
    eax_2[7] = (edx_17 + 0x1000 + var_e0_2 * 0x4694 - var_c4_2 * 0x37c1 + esi_8 + ebx_10) s>> 0xd
    ecx = var_bc + 1
    var_bc = ecx
    
    if (ecx == 8)
        void var_a4
        eax_2 = &var_a4
    else
        if (ecx == 0xd)
            break
        
        eax_2 = &eax_2[8]

void var_44
void* ecx_77 = &var_44
int32_t var_b4_2 = 7
void* var_c0_3 = &var_44
void* edi_14 = &var_b8[0x20]
int32_t* result = var_b8 - &var_44
var_e4 = edi_14
int32_t* result_1 = result
int32_t temp0_1

do
    int32_t eax_4 = *(result + ecx_77)
    int32_t ebp_7 = *(ecx_77 + 0x20)
    int32_t ebx_11 = *ecx_77
    int32_t esi_9 = *(ecx_77 - 0x20)
    int32_t edx_34 = *(ecx_77 - 0x40)
    int32_t eax_5 = eax_4 + ebp_7
    int32_t eax_6 = *(edi_14 - 0x60)
    int32_t ecx_78 = *(ecx_77 - 0x60)
    int32_t eax_7 = eax_6 + ebx_11
    int32_t eax_8 = *(edi_14 - 0x40)
    int32_t eax_9 = eax_8 + esi_9
    int32_t eax_10 = *(edi_14 - 0x20)
    int32_t eax_11 = eax_10 + edx_34
    int32_t eax_12 = *edi_14
    int32_t var_e0_4 = eax_10 - edx_34
    int32_t eax_13 = eax_12 + ecx_78
    int32_t eax_14 = *(edi_14 + 0x60)
    int32_t edi_15 = *(edi_14 + 0x20)
    int32_t var_cc_4 = eax_6 - ebx_11
    int32_t var_c8_4 = eax_4 - ebp_7
    int32_t var_d4_4 = eax_12 - ecx_78
    int32_t edi_16 = edi_15 + eax_14
    int32_t var_dc_5 = edi_15 - eax_14
    int32_t var_d8_4 = eax_8 - esi_9
    int32_t edi_18 = *(var_e4 + 0x40)
    *(result_1 + var_c0_3) =
        ((edi_18 + edi_16 + eax_13 + eax_11 + eax_9 + eax_7 + eax_5) * 0x183d + 0x2000) s>> 0xe
    int32_t eax_24 = edi_18 * 2
    int32_t edx_36 = edi_16 - eax_24
    int32_t ecx_81 = eax_5 - eax_24
    int32_t esi_12 = eax_9 - eax_24
    int32_t edi_20 = eax_7 - eax_24
    int32_t ebp_9 = eax_11 - eax_24
    int32_t ebx_13 = eax_13 - eax_24
    *(var_e4 - 0x40) = (ecx_81 * 0x2148 - edx_36 * 0x1e5a + edi_20 * 0x19a8 - ebx_13 * 0x1379
        + esi_12 * 0xc28 - ebp_9 * 0x422 + 0x2000) s>> 0xe
    int32_t esi_15 =
        (ecx_81 - esi_12) * 0x1c01 + (ebx_13 - ebp_9) * 0xa90 + (edx_36 - edi_20) * 0x7ab
    uint32_t ecx_91 = var_e4
    int32_t edx_39 =
        (edx_36 + edi_20) * 0xbcd - (ebx_13 + ebp_9) * 0x16b8 + (esi_12 + ecx_81) * 0x259
    *ecx_91 = (esi_15 + 0x2000 + edx_39) s>> 0xe
    *(ecx_91 + 0x40) = (esi_15 - edx_39 + 0x2000) s>> 0xe
    int32_t ebx_14 = (var_cc_4 + var_c8_4) * 0x200c
    int32_t ebp_10 = (var_d8_4 + var_c8_4) * 0x1c35
    int32_t ecx_94 = (var_e0_4 + var_c8_4) * 0x16bb + (var_d4_4 + var_dc_5) * 0x834
    int32_t esi_20 = (var_d4_4 - var_dc_5) * 0x16bb - (var_d8_4 + var_cc_4) * 0x834
    int32_t edi_22 = (var_e0_4 + var_cc_4) * 0xffffe3cb
    int32_t edx_41 = (var_e0_4 + var_d8_4) * 0xfffff012
    *(var_e4 - 0x60) =
        (ebx_14 + 0x2000 + var_d4_4 * 0x7ba - var_c8_4 * 0x30f6 + ecx_94 + ebp_10) s>> 0xe
    *(var_e4 - 0x20) =
        (ebx_14 + 0x2000 + var_cc_4 * 0x144b - var_d4_4 * 0x38c1 + edi_22 + esi_20) s>> 0xe
    *(var_e4 + 0x20) =
        (ebp_10 + 0x2000 + var_dc_5 * 0x36c7 - var_d8_4 * 0x261a + edx_41 + esi_20) s>> 0xe
    uint32_t edi_23 = var_e4
    ecx_77 = var_c0_3 + 4
    var_c0_3 = ecx_77
    *(edi_23 + 0x60) =
        (ecx_94 + 0x2000 + var_e0_4 * 0x3575 - var_dc_5 * 0x2a3b + edx_41 + edi_22) s>> 0xe
    edi_14 = edi_23 + 4
    temp0_1 = var_b4_2
    var_b4_2 -= 1
    result = result_1
    var_e4 = edi_14
while (temp0_1 - 1 s>= 0)
@__security_check_cookie@4(eax_1 ^ &var_e4)
return result
