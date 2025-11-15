// 函数: sub_66b2a0
// 地址: 0x66b2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_104
int32_t eax_1 = __security_cookie ^ &var_104
_memset(arg1, 0, 0x100)
uint32_t (* eax_2)[0x4] = arg1
int32_t ecx = 0
int32_t var_f4 = 0

while (true)
    char* esi_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edi_1 = zx.d(esi_2[6])
    uint32_t ecx_1 = zx.d(*esi_2)
    uint32_t edx_2 = zx.d(esi_2[5])
    uint32_t ecx_2 = ecx_1 + edi_1
    uint32_t ebp_1 = zx.d(esi_2[2])
    uint32_t ecx_3 = zx.d(esi_2[1])
    uint32_t var_fc_2 = ecx_3 - edx_2
    uint32_t var_100_2 = ecx_1 - edi_1
    uint32_t ebx_1 = ecx_3 + edx_2
    var_104 = ebp_1
    uint32_t ecx_4 = zx.d(esi_2[4])
    var_104 -= ecx_4
    uint32_t ebp_2 = ebp_1 + ecx_4
    uint32_t esi_3 = zx.d(esi_2[3])
    uint32_t edx_4 = ecx_2 + ebp_2
    uint32_t edi_2 = esi_3 * 2
    *eax_2 = ((edx_4 + esi_3 + ebx_1) << 2) + 0xfffff200
    int32_t ebx_2 = (edx_4 - edi_2 * 2) * 0xb50
    int32_t edx_6 = (ecx_2 - ebp_2) * 0x1d76
    int32_t esi_4 = (ebx_1 - ebp_2) * 0xa12
    (*eax_2)[2] = (edx_6 + 0x400 + esi_4 + ebx_2) s>> 0xb
    int32_t edx_9 = (ecx_2 - ebx_1) * 0x1c37
    eax_2[1][0] = ((edi_2 - ebx_1) * 0x16a1 + esi_4 + 0x400 + edx_9) s>> 0xb
    (*eax_2)[6] = (edx_9 + 0x400 + ebx_2 - edx_6) s>> 0xb
    int32_t ebx_4 = (var_fc_2 + var_100_2) * 0x1def
    int32_t ecx_27 = (var_100_2 - var_fc_2) * 0x573
    int32_t edi_4 = (var_104 + var_fc_2) * 0xffffd3e1
    int32_t edx_11 = (var_104 + var_100_2) * 0x13a3
    (*eax_2)[1] = (edx_11 + 0x400 + ebx_4 - ecx_27) s>> 0xb
    (*eax_2)[3] = (edi_4 + 0x400 + ebx_4 + ecx_27) s>> 0xb
    (*eax_2)[5] = (var_104 * 0x3bde + 0x400 + edx_11 + edi_4) s>> 0xb
    ecx = var_f4 + 1
    var_f4 = ecx
    
    if (ecx == 8)
        void var_c4
        eax_2 = &var_c4
    else
        if (ecx == 0xe)
            break
        
        eax_2 = &eax_2[2]

void var_44
void* edx_12 = &var_44
void* var_100_3 = &var_44
int32_t i_1 = 7
uint32_t edi_5 = &arg1[4]
void* ecx_45 = arg1 - &var_44
var_104 = edi_5
void* var_e0_1 = ecx_45
int32_t result
int32_t i

do
    int32_t ecx_46 = *(ecx_45 + edx_12)
    int32_t ebp_5 = *(edx_12 + 0x20) + ecx_46
    int32_t ecx_47 = *(edi_5 - 0x20)
    int32_t ebx_7 = *edx_12 + ecx_47
    int32_t ecx_48 = *edi_5
    int32_t esi_9 = *(edx_12 - 0x20) + ecx_48
    int32_t ecx_49 = *(edi_5 + 0x20)
    int32_t eax_4 = *(edx_12 - 0x40) + ecx_49
    int32_t eax_5 = *(edi_5 + 0x60)
    int32_t ecx_50 = *(edi_5 + 0x40)
    int32_t edx_14 = *(edx_12 - 0x60) + ecx_50
    int32_t edi_6 = *(edi_5 + 0xa0)
    int32_t ebx_9 = *(var_100_3 - 0x80)
    int32_t var_f8_3 = eax_5 - ebx_9
    int32_t ecx_51 = eax_5 + ebx_9
    int32_t eax_7 = *(var_104 + 0x80)
    int32_t eax_8 = eax_7 + edi_6
    int32_t var_ec_2 = eax_7 - edi_6
    int32_t esi_10 = eax_8 + ebp_5
    int32_t ebp_6 = ebp_5 - eax_8
    int32_t ebp_7 = ecx_51 + ebx_7
    int32_t eax_10 = ebx_7 - ecx_51
    int32_t esi_11 = edx_14 + esi_9
    int32_t eax_12 = esi_9 - edx_14
    int32_t eax_14 = ecx_46 - *(var_100_3 + 0x20)
    int32_t eax_16 = ecx_47 - *var_100_3
    int32_t eax_18 = ecx_48 - *(var_100_3 - 0x20)
    int32_t eax_20 = ecx_49 - *(var_100_3 - 0x40)
    int32_t eax_22 = ecx_50 - *(var_100_3 - 0x60)
    *(var_e0_1 + var_100_3) = ((eax_4 + esi_11 + ebp_7 + esi_10) * 0x14e6 + 0x4000) s>> 0xf
    *(var_104 + 0x40) =
        (ebp_7 * 0x694 + esi_10 * 0x1aa1 - eax_4 * 0x1d90 - esi_11 * 0x126d + 0x4000) s>> 0xf
    int32_t edx_16 = (eax_10 + ebp_6) * 0x171b
    uint32_t edi_9 = var_104
    *edi_9 = (ebp_6 * 0x5b5 + 0x4000 + eax_12 * 0xcd3 + edx_16) s>> 0xf
    int32_t ebx_12 = eax_20 * 0x14e6
    *(edi_9 + 0x80) = (edx_16 + 0x4000 + eax_12 * 0xffffe330 - eax_10 * 0x23ee) s>> 0xf
    int32_t edx_18 = eax_18 + eax_16
    int32_t ecx_63 = var_f8_3 - eax_22
    *(edi_9 + 0xa0) = ((eax_20 - var_ec_2 - ecx_63 - edx_18 + eax_14) * 0x14e6 + 0x4000) s>> 0xf
    int32_t esi_14 = ecx_63 * 0x1d5e - edx_18 * 0x34f - ebx_12
    int32_t edi_11 = (eax_18 + eax_14) * 0x1906 + (var_ec_2 + eax_22) * 0xfb9
    *(var_104 + 0x60) = (eax_22 * 0x1768 - eax_18 * 0x319c + 0x4000 + edi_11 + esi_14) s>> 0xf
    int32_t edx_21 = (eax_16 + eax_14) * 0x1be5 + (var_f8_3 - var_ec_2) * 0x9c3
    *(var_104 + 0x20) = (eax_16 * 0xfffff723 - var_f8_3 * 0x4027 + 0x4000 + edx_21 + esi_14) s>> 0xf
    uint32_t edi_12 = var_104
    ecx_45 = var_e0_1
    edx_12 = var_100_3 + 4
    result = (ebx_12 + 0x4000 + var_ec_2 * 0xfffffd59 - eax_14 * 0x178d + edx_21 + edi_11) s>> 0xf
    *(edi_12 - 0x20) = result
    edi_5 = edi_12 + 4
    i = i_1
    i_1 -= 1
    var_100_3 = edx_12
    var_104 = edi_5
while (i != 1)
@__security_check_cookie@4(eax_1 ^ &var_104)
return result
