// 函数: sub_665970
// 地址: 0x665970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_c4
int32_t eax_1 = __security_cookie ^ &var_c4
int32_t ecx = 0
int32_t* eax_2 = arg1
int32_t var_9c = 0

while (true)
    char* ecx_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edx_2 = zx.d(ecx_2[0xb])
    uint32_t ebx_1 = zx.d(*ecx_2)
    uint32_t ebp_1 = zx.d(ecx_2[8])
    uint32_t edx_3 = edx_2 + ebx_1
    uint32_t edx_4 = zx.d(ecx_2[0xa])
    uint32_t ebx_2 = zx.d(ecx_2[1])
    uint32_t edi_1 = ebx_2 + edx_4
    uint32_t edx_5 = zx.d(ecx_2[9])
    uint32_t ebx_3 = zx.d(ecx_2[2])
    uint32_t edx_6 = edx_5 + ebx_3
    uint32_t edx_7 = zx.d(ecx_2[3])
    var_c4 = ebx_3
    uint32_t ebx_4 = zx.d(ecx_2[7])
    uint32_t edi_2 = zx.d(ecx_2[6])
    uint32_t esi_1 = edx_7 + ebp_1
    uint32_t edx_8 = zx.d(ecx_2[4])
    uint32_t ecx_3 = zx.d(ecx_2[5])
    uint32_t ecx_4 = ecx_3 + edi_2
    uint32_t var_bc_2 = edx_3 - ecx_4
    uint32_t ebp_3 = edx_3 + ecx_4
    uint32_t edx_9 = edx_8 + ebx_4
    uint32_t var_c0_2 = ecx_3 - edi_2
    uint32_t ebp_5 = edi_1 - edx_9
    uint32_t edx_10 = esi_1 + edx_6
    uint32_t ebp_7 = edx_6 - esi_1
    uint32_t esi_3 = ebx_1 - edx_2
    uint32_t esi_5 = ebx_2 - edx_4
    uint32_t var_b8_2 = edx_7 - ebp_1
    uint32_t ebp_10 = edx_8 - ebx_4
    uint32_t esi_7 = var_c4 - edx_5
    *eax_2 = edx_9 + edi_1 - 0x600 + edx_10 + ebp_3
    var_c4 = esi_7
    eax_2[6] = var_bc_2 - ebp_7 - ebp_5
    eax_2[4] = ((ebp_3 - edx_10) * 0x2731 + 0x1000) s>> 0xd
    eax_2[2] = ((var_bc_2 + ebp_7) * 0x2bb6 - ebp_7 + ebp_5 + 0x1000) s>> 0xd
    int32_t ebp_11 = (esi_5 + ebp_10) * 0x1151
    int32_t esi_10 = esi_5 * 0x187e + ebp_11
    int32_t ebp_12 = ebp_11 - ebp_10 * 0x3b21
    int32_t edi_5 = (var_c4 + esi_3) * 0x23e7
    int32_t ebx_7 = (var_b8_2 + esi_3) * 0x1b8d
    int32_t var_94_2 = ebx_7
    int32_t esi_11 = (var_c4 + var_b8_2) * 0xfffffa18
    eax_2[1] = (ebx_7 + 0x1000 + var_c0_2 * 0x5e8 - esi_3 * 0x1296 + edi_5 + esi_10) s>> 0xd
    eax_2[3] =
        ((esi_3 - var_b8_2) * 0x29cf - (var_c0_2 + var_c4) * 0x1151 + 0x1000 + ebp_12) s>> 0xd
    eax_2[5] = (esi_11 + 0x1000 + var_c0_2 * 0x1b8d - var_c4 * 0x4add - ebp_12 + edi_5) s>> 0xd
    eax_2[7] = (ebx_7 + 0x1000 + var_b8_2 * 0x173a - var_c0_2 * 0x23e7 - esi_10 + esi_11) s>> 0xd
    ecx = var_9c + 1
    var_9c = ecx
    
    if (ecx == 8)
        void var_84
        eax_2 = &var_84
    else
        if (ecx == 0xc)
            break
        
        eax_2 = &eax_2[8]

void var_44
void* edx_27 = &var_44
int32_t var_8c_2 = 7
void* var_a8_3 = &var_44
void* esi_12 = &arg1[0x20]
int32_t* ecx_52 = arg1 - &var_44
var_c4 = esi_12
int32_t* var_90_1 = ecx_52
int32_t result
int32_t temp0_1

do
    int32_t ecx_53 = *(ecx_52 + edx_27)
    int32_t ebp_13 = *(edx_27 - 0x20)
    int32_t eax_4 = *(edx_27 + 0x20) + ecx_53
    int32_t ebx_8 = *(edx_27 - 0x40)
    int32_t edi_6 = *(esi_12 + 0x60)
    int32_t ecx_54 = *(esi_12 - 0x60)
    int32_t eax_6 = *edx_27 + ecx_54
    int32_t eax_7 = *(esi_12 - 0x40)
    int32_t eax_8 = eax_7 + ebp_13
    int32_t eax_9 = *(esi_12 - 0x20)
    int32_t edx_28 = eax_9 + ebx_8
    int32_t eax_10 = *esi_12
    int32_t esi_13 = *(esi_12 + 0x40)
    int32_t var_b0_4 = eax_10 - edi_6
    int32_t ecx_55 = edi_6 + eax_10
    int32_t var_bc_4 = eax_9 - ebx_8
    int32_t eax_12 = *(var_c4 + 0x20)
    int32_t eax_13 = eax_12 + esi_13
    int32_t var_b4_4 = eax_4 - eax_13
    int32_t ebp_15 = eax_4 + eax_13
    int32_t var_c0_4 = eax_12 - esi_13
    int32_t ebp_17 = eax_6 - ecx_55
    int32_t ecx_56 = edx_28 + eax_8
    int32_t ebp_19 = eax_8 - edx_28
    int32_t edx_30 = ecx_53 - *(var_a8_3 + 0x20)
    int32_t edx_32 = ecx_54 - *var_a8_3
    int32_t var_b8_4 = eax_7 - ebp_13
    uint32_t ebp_22 = var_c4
    *(var_90_1 + var_a8_3) = ((ecx_55 + eax_6 + ecx_56 + ebp_15) * 0x1c72 + 0x2000) s>> 0xe
    *(ebp_22 + 0x40) = ((var_b4_4 - ebp_19 - ebp_17) * 0x1c72 + 0x2000) s>> 0xe
    *ebp_22 = ((ebp_15 - ecx_56) * 0x22d6 + 0x2000) s>> 0xe
    *(ebp_22 - 0x40) = ((ebp_17 - ebp_19) * 0x1c72 + (ebp_19 + var_b4_4) * 0x26db + 0x2000) s>> 0xe
    int32_t ebx_10 = (var_b0_4 + edx_32) * 0xf65
    int32_t ebp_24 = edx_32 * 0x15c5 + ebx_10
    int32_t ebx_11 = ebx_10 - var_b0_4 * 0x348f
    int32_t esi_17 = (var_b8_4 + edx_30) * 0x1fea
    int32_t edi_9 = (var_bc_4 + edx_30) * 0x187d
    int32_t edx_37 = (var_bc_4 + var_b8_4) * 0xfffffac0
    *(var_c4 - 0x60) =
        (var_c0_4 * 0x540 - edx_30 * 0x1085 + esi_17 + ebp_24 + edi_9 + 0x2000) s>> 0xe
    *(var_c4 - 0x20) =
        ((edx_30 - var_bc_4) * 0x252a - (var_c0_4 + var_b8_4) * 0xf65 + 0x2000 + ebx_11) s>> 0xe
    uint32_t esi_18 = var_c4
    *(esi_18 + 0x20) =
        (edx_37 + 0x2000 + var_c0_4 * 0x187d - var_b8_4 * 0x428c - ebx_11 + esi_17) s>> 0xe
    edx_27 = var_a8_3 + 4
    ecx_52 = var_90_1
    result = (edi_9 + 0x2000 + var_bc_4 * 0x14a5 - var_c0_4 * 0x1fea - ebp_24 + edx_37) s>> 0xe
    *(esi_18 + 0x60) = result
    esi_12 = esi_18 + 4
    temp0_1 = var_8c_2
    var_8c_2 -= 1
    var_a8_3 = edx_27
    var_c4 = esi_12
while (temp0_1 - 1 s>= 0)
@__security_check_cookie@4(eax_1 ^ &var_c4)
return result
