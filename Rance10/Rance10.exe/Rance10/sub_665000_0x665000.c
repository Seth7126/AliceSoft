// 函数: sub_665000
// 地址: 0x665000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_78
int32_t eax_1 = __security_cookie ^ &var_78
int32_t ecx = 0
void** eax_2 = arg1
int32_t var_60 = 0
void var_44

while (true)
    char* ecx_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edx_2 = zx.d(ecx_2[9])
    uint32_t ebx_1 = zx.d(*ecx_2)
    uint32_t ebp_1 = zx.d(ecx_2[7])
    uint32_t edi_1 = ebx_1 + edx_2
    uint32_t edx_3 = zx.d(ecx_2[8])
    uint32_t ebx_2 = zx.d(ecx_2[1])
    uint32_t esi_1 = ebx_2 + edx_3
    uint32_t edx_4 = zx.d(ecx_2[2])
    uint32_t ebx_3 = zx.d(ecx_2[6])
    var_78 = edx_4
    uint32_t edx_5 = edx_4 + ebp_1
    uint32_t edx_6 = zx.d(ecx_2[3])
    uint32_t esi_2 = zx.d(ecx_2[5])
    uint32_t ecx_3 = zx.d(ecx_2[4])
    uint32_t ecx_4 = ecx_3 + esi_2
    uint32_t var_68_2 = edi_1 - ecx_4
    uint32_t edi_2 = edi_1 + ecx_4
    uint32_t edx_7 = edx_6 + ebx_3
    var_78 -= ebp_1
    uint32_t var_6c_2 = edx_6 - ebx_3
    uint32_t edi_3 = edx_7 + esi_1
    uint32_t ecx_6 = esi_1 - edx_7
    uint32_t ebp_3 = ecx_3 - esi_2
    uint32_t ecx_8 = ebx_1 - edx_2
    uint32_t ecx_10 = ebx_2 - edx_3
    *eax_2 = ((edi_3 + edi_2 + edx_5) << 1) + 0xfffff600
    uint32_t edi_5 = ecx_10 - var_6c_2
    eax_2[4] = (edi_2 * 0x249d - edx_5 * 0x2d42 - edi_3 * 0xdfc + 0x800) s>> 0xc
    int32_t edx_14 = (ecx_6 + var_68_2) * 0x1a9a
    eax_2[2] = (var_68_2 * 0x1071 + 0x800 + edx_14) s>> 0xc
    uint32_t ebx_5 = ecx_8 + ebp_3
    uint32_t ecx_24 = ebx_5 - var_78 - edi_5
    eax_2[6] = (edx_14 - ecx_6 * 0x45a4 + 0x800) s>> 0xc
    eax_2[5] = ecx_24 * 2
    var_78 <<= 0xd
    eax_2[1] = (ebp_3 * 0x714 + var_6c_2 * 0x148c + var_78 + ecx_8 * 0x2cb3 + ecx_10 * 0x2853
        + 0x800) s>> 0xc
    int32_t esi_9 = (ecx_8 - ebp_3) * 0x1e6f - (var_6c_2 + ecx_10) * 0x12cf
    int32_t edx_23 = edi_5 * 0x19e3 + ebx_5 * 0x9e3 - var_78
    eax_2[3] = (esi_9 + 0x800 + edx_23) s>> 0xc
    ecx = var_60 + 1
    eax_2[7] = (esi_9 - edx_23 + 0x800) s>> 0xc
    var_60 = ecx
    
    if (ecx == 8)
        eax_2 = &var_44
    else
        if (ecx == 0xa)
            break
        
        eax_2 = &eax_2[8]

void* edx_24 = &var_44
int32_t var_58_2 = 7
void* var_68_3 = &var_44
void* ebx_6 = &arg1[0x10]
int32_t* ecx_41 = arg1 - &var_44
void* var_70_3 = ebx_6
int32_t* var_5c_1 = ecx_41
int32_t result
int32_t temp0_1

do
    int32_t ecx_42 = *(ecx_41 + edx_24)
    int32_t eax_3 = *ebx_6
    int32_t ebp_4 = *(ebx_6 + 0xa0)
    int32_t edi_6 = *(ebx_6 + 0x80)
    int32_t esi_14 = *(edx_24 + 0x20) + ecx_42
    int32_t eax_4 = eax_3 + ebp_4
    int32_t eax_5 = *(ebx_6 + 0x20)
    uint32_t ecx_43 = *(ebx_6 - 0x20)
    int32_t edx_26 = *edx_24 + ecx_43
    var_78 = ecx_43
    int32_t ecx_44 = eax_5 + edi_6
    int32_t eax_6 = *(ebx_6 + 0x40)
    int32_t edx_27 = *(ebx_6 + 0x60)
    int32_t eax_7 = eax_6 + edx_27
    int32_t var_60_2 = eax_3 - ebp_4
    int32_t var_74_4 = eax_5 - edi_6
    int32_t ebx_7 = eax_7 + esi_14
    int32_t ebp_6 = eax_6 - edx_27
    int32_t esi_15 = esi_14 - eax_7
    int32_t esi_16 = ecx_44 + edx_26
    int32_t eax_9 = edx_26 - ecx_44
    int32_t eax_11 = ecx_42 - *(var_68_3 + 0x20)
    var_78 -= *var_68_3
    *(var_5c_1 + var_68_3) = ((esi_16 + ebx_7 + eax_4) * 0x28f6 + 0x4000) s>> 0xf
    int32_t edi_9 = var_78 - var_74_4
    *(var_70_3 + 0x40) = (ebx_7 * 0x2edd - eax_4 * 0x39ee - esi_16 * 0x11e6 + 0x4000) s>> 0xf
    int32_t ecx_51 = (eax_9 + esi_15) * 0x220c
    *var_70_3 = (esi_15 * 0x150b + 0x4000 + ecx_51) s>> 0xf
    *(var_70_3 + 0x80) = (ecx_51 - eax_9 * 0x5924 + 0x4000) s>> 0xf
    int32_t ebx_9 = eax_11 + ebp_6
    *(var_70_3 + 0x60) = ((ebx_9 - var_60_2 - edi_9) * 0x28f6 + 0x4000) s>> 0xf
    int32_t esi_19 = var_60_2 * 0x28f6
    *(var_70_3 - 0x20) = (ebp_6 * 0x910 + var_74_4 * 0x1a4c + esi_19 + eax_11 * 0x3937
        + var_78 * 0x339d + 0x4000) s>> 0xf
    int32_t edx_35 = (eax_11 - ebp_6) * 0x26f5 - (var_74_4 + var_78) * 0x1813
    int32_t ecx_61 = edi_9 * 0x2123 + ebx_9 * 0xca8 - esi_19
    ecx_41 = var_5c_1
    *(var_70_3 + 0xa0) = (edx_35 - ecx_61 + 0x4000) s>> 0xf
    result = (edx_35 + 0x4000 + ecx_61) s>> 0xf
    edx_24 = var_68_3 + 4
    *(var_70_3 + 0x20) = result
    ebx_6 = var_70_3 + 4
    temp0_1 = var_58_2
    var_58_2 -= 1
    var_68_3 = edx_24
    var_70_3 = ebx_6
while (temp0_1 - 1 s>= 0)
@__security_check_cookie@4(eax_1 ^ &var_78)
return result
