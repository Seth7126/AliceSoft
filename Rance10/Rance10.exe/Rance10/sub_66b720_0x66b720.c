// 函数: sub_66b720
// 地址: 0x66b720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_bc
int32_t eax_1 = __security_cookie ^ &var_bc
_memset(arg1, 0, 0x100)
uint32_t (* eax_2)[0x4] = arg1
int32_t ecx = 0
int32_t var_a8 = 0

while (true)
    char* ecx_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edi_1 = zx.d(ecx_2[5])
    uint32_t edx_2 = zx.d(*ecx_2)
    uint32_t esi_1 = zx.d(ecx_2[4])
    var_bc = edx_2
    var_bc -= edi_1
    uint32_t ebx_1 = edx_2 + edi_1
    uint32_t edx_3 = zx.d(ecx_2[1])
    uint32_t ebp_1 = edx_3 + esi_1
    uint32_t edi_3 = edx_3 - esi_1
    uint32_t edx_4 = zx.d(ecx_2[3])
    uint32_t ecx_3 = zx.d(ecx_2[2])
    uint32_t ecx_4 = ecx_3 + edx_4
    uint32_t var_b8_2 = ebx_1 - ecx_4
    uint32_t ebx_2 = ebx_1 + ecx_4
    uint32_t esi_3 = ecx_3 - edx_4
    *eax_2 = ((ebx_2 + ebp_1) << 2) + 0xfffff400
    (*eax_2)[2] = (var_b8_2 * 0x2731 + 0x400) s>> 0xb
    uint32_t ebx_4 = var_bc
    eax_2[1][0] = ((ebx_2 - (ebp_1 << 1)) * 0x16a1 + 0x400) s>> 0xb
    (*eax_2)[3] = (ebx_4 - edi_3 - esi_3) << 2
    int32_t edx_7 = ((esi_3 + ebx_4) * 0xbb6 + 0x400) s>> 0xb
    (*eax_2)[1] = edx_7 + ((edi_3 + ebx_4) << 2)
    (*eax_2)[5] = edx_7 + ((esi_3 - edi_3) << 2)
    ecx = var_a8 + 1
    var_a8 = ecx
    
    if (ecx == 8)
        void var_84
        eax_2 = &var_84
    else
        if (ecx == 0xc)
            break
        
        eax_2 = &eax_2[2]

void var_44
void* edx_8 = &var_44
void* var_b8_3 = &var_44
int32_t i_1 = 6
void* edi_4 = &arg1[8]
void* ecx_20 = arg1 - &var_44
void* var_b4 = edi_4
void* var_94_1 = ecx_20
int32_t result
int32_t i

do
    int32_t ecx_21 = *(ecx_20 + edx_8)
    int32_t eax_4 = *(edx_8 + 0x20) + ecx_21
    int32_t ebp_2 = *(edx_8 - 0x40)
    int32_t ebx_8 = *(edi_4 + 0x60)
    int32_t ecx_22 = *(edi_4 - 0x60)
    int32_t eax_6 = *edx_8 + ecx_22
    int32_t eax_7 = *(edi_4 - 0x20)
    int32_t ecx_23 = *(edi_4 - 0x40)
    int32_t esi_6 = *(edx_8 - 0x20) + ecx_23
    int32_t edx_9 = eax_7 + ebp_2
    uint32_t eax_8 = *edi_4
    int32_t edi_5 = *(edi_4 + 0x40)
    var_bc = eax_8
    int32_t ecx_24 = ebx_8 + eax_8
    var_bc -= ebx_8
    int32_t var_ac_2 = eax_7 - ebp_2
    int32_t eax_10 = *(var_b4 + 0x20)
    int32_t eax_11 = eax_10 + edi_5
    int32_t var_98_2 = eax_4 - eax_11
    int32_t esi_8 = eax_4 + eax_11
    int32_t var_b0_2 = eax_10 - edi_5
    int32_t eax_13 = eax_6 - ecx_24
    int32_t ecx_25 = edx_9 + esi_6
    int32_t eax_15 = esi_6 - edx_9
    int32_t eax_17 = ecx_21 - *(var_b8_3 + 0x20)
    int32_t eax_19 = ecx_22 - *var_b8_3
    int32_t eax_21 = ecx_23 - *(var_b8_3 - 0x20)
    *(var_94_1 + var_b8_3) = ((ecx_25 + esi_8 + ecx_24 + eax_6) * 0x1c72 + 0x4000) s>> 0xf
    *(var_b4 + 0x40) = ((var_98_2 - eax_15 - eax_13) * 0x1c72 + 0x4000) s>> 0xf
    *var_b4 = ((esi_8 - ecx_25) * 0x22d6 + 0x4000) s>> 0xf
    *(var_b4 - 0x40) = ((eax_13 - eax_15) * 0x1c72 + (eax_15 + var_98_2) * 0x26db + 0x4000) s>> 0xf
    int32_t ebx_11 = (var_bc + eax_19) * 0xf65
    int32_t ebp_5 = eax_19 * 0x15c5 + ebx_11
    int32_t ebx_12 = ebx_11 - var_bc * 0x348f
    int32_t edx_14 = (eax_21 + eax_17) * 0x1fea
    int32_t edi_8 = (var_ac_2 + eax_17) * 0x187d
    int32_t esi_13 = (var_ac_2 + eax_21) * 0xfffffac0
    *(var_b4 - 0x60) =
        (edx_14 + 0x4000 + var_b0_2 * 0x540 - eax_17 * 0x1085 + ebp_5 + edi_8) s>> 0xf
    *(var_b4 - 0x20) =
        ((eax_17 - var_ac_2) * 0x252a - (var_b0_2 + eax_21) * 0xf65 + 0x4000 + ebx_12) s>> 0xf
    edx_8 = var_b8_3 + 4
    *(var_b4 + 0x20) =
        (esi_13 + 0x4000 + var_b0_2 * 0x187d - eax_21 * 0x428c - ebx_12 + edx_14) s>> 0xf
    var_b8_3 = edx_8
    ecx_20 = var_94_1
    result = (esi_13 + 0x4000 + var_ac_2 * 0x14a5 - var_b0_2 * 0x1fea - ebp_5 + edi_8) s>> 0xf
    *(var_b4 + 0x60) = result
    edi_4 = var_b4 + 4
    i = i_1
    i_1 -= 1
    var_b4 = edi_4
while (i != 1)
@__security_check_cookie@4(eax_1 ^ &var_bc)
return result
