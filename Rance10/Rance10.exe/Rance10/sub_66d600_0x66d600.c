// 函数: sub_66d600
// 地址: 0x66d600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_138
int32_t eax_1 = __security_cookie ^ &var_138
int16_t* ebp = arg3
int32_t eax_6 = *(arg1 + 0x12c) - 0x180
int32_t i_2 = 8
void var_104
void* edi = &var_104
int32_t* esi = *(arg2 + 0x54)
var_138 = esi
void* var_130 = &var_104
int32_t i

do
    int16_t eax_8 = ebp[8]
    int32_t eax_11
    
    if (eax_8 != 0 || ebp[0x10] != eax_8 || ebp[0x18] != eax_8 || ebp[0x20] != eax_8
            || ebp[0x28] != eax_8 || ebp[0x30] != eax_8 || ebp[0x38] != eax_8)
        int32_t ecx_2 = sx.d(ebp[0x10]) * esi[0x10]
        int32_t edx_2 = sx.d(ebp[0x30]) * esi[0x30]
        int32_t eax_14 = (sx.d(ebp[0x20]) * esi[0x20]) << 0xd
        int32_t ebx_4 = ((sx.d(*ebp) * *esi) << 0xd) + 0x400
        int32_t edi_1 = eax_14 + ebx_4
        int32_t ebx_5 = ebx_4 - eax_14
        int32_t esi_1 = (edx_2 + ecx_2) * 0x1151
        int32_t* edx_3 = var_138
        int32_t ecx_4 = ecx_2 * 0x187e + esi_1
        int32_t ebp_2 = sx.d(ebp[0x38]) * edx_3[0x38]
        int32_t esi_2 = esi_1 - edx_2 * 0x3b21
        int32_t eax_17 = ecx_4 + edi_1
        int32_t edi_2 = edi_1 - ecx_4
        int32_t eax_18 = esi_2 + ebx_5
        int32_t ebx_6 = ebx_5 - esi_2
        int32_t eax_20 = sx.d(arg3[0x28]) * edx_3[0x28]
        int32_t ecx_7 = sx.d(arg3[0x18]) * edx_3[0x18]
        int32_t esi_5 = sx.d(eax_8) * edx_3[8]
        int32_t ecx_8 = ecx_7 + ebp_2
        int32_t edx_4 = esi_5 + eax_20
        int32_t edi_3 = (edx_4 + ecx_8) * 0x25a1
        int32_t ebx_8 = edi_3 - ecx_8 * 0x3ec5
        int32_t edi_4 = edi_3 - edx_4 * 0xc7c
        int32_t eax_25 = (esi_5 + ebp_2) * 0xffffe333
        int32_t ecx_11 = ebp_2 * 0x98e + eax_25 + ebx_8
        int32_t edx_7 = esi_5 * 0x300b + eax_25 + edi_4
        int32_t eax_27 = (eax_20 + ecx_7) * 0xffffadfd
        int32_t ecx_15 = ecx_7 * 0x6254 + eax_27 + ebx_8
        int32_t esi_8 = eax_20 * 0x41b3 + eax_27 + edi_4
        edi = var_130
        *edi = (eax_17 + edx_7) s>> 0xb
        *(edi + 0xe0) = (eax_17 - edx_7) s>> 0xb
        *(edi + 0x20) = (eax_18 + ecx_15) s>> 0xb
        ebp = arg3
        *(edi + 0xc0) = (eax_18 - ecx_15) s>> 0xb
        esi = var_138
        *(edi + 0xa0) = (ebx_6 - esi_8) s>> 0xb
        *(edi + 0x40) = (ebx_6 + esi_8) s>> 0xb
        eax_11 = (edi_2 + ecx_11) s>> 0xb
        *(edi + 0x80) = (edi_2 - ecx_11) s>> 0xb
    else
        eax_11 = (sx.d(*ebp) * *esi) << 2
        *edi = eax_11
        *(edi + 0x20) = eax_11
        *(edi + 0x40) = eax_11
        *(edi + 0x80) = eax_11
        *(edi + 0xa0) = eax_11
        *(edi + 0xc0) = eax_11
        *(edi + 0xe0) = eax_11
    
    *(edi + 0x60) = eax_11
    ebp = &ebp[1]
    esi = &esi[1]
    i = i_2 - 1
    arg3 = ebp
    edi += 4
    i_2 = i
    var_138 = esi
    var_130 = edi
while (i s> 0)
int32_t esi_9 = eax_6
void* ebp_4 = &var_104
int32_t i_1 = 0
void* var_134 = &var_104
int32_t i_3 = 0

do
    int32_t edx_15 = *ebp_4 + 0x4010
    uint32_t ecx_21 = *(ebp_4 + 4)
    char* eax_37 = *(arg4 + (i_1 << 2)) + arg5
    
    if (ecx_21 != 0 || *(ebp_4 + 8) != ecx_21 || *(ebp_4 + 0xc) != ecx_21
            || *(ebp_4 + 0x10) != ecx_21 || *(ebp_4 + 0x14) != ecx_21 || *(ebp_4 + 0x18) != ecx_21
            || *(ebp_4 + 0x1c) != ecx_21)
        int32_t ecx_22 = *(ebp_4 + 0x10)
        int32_t esi_10 = *(ebp_4 + 0x18)
        var_138 = (edx_15 - ecx_22) << 0xd
        int32_t edx_20 = *(ebp_4 + 8)
        int32_t ebx_13 = (ecx_22 + edx_15) << 0xd
        int32_t edi_5 = (esi_10 + edx_20) * 0x1151
        int32_t esi_12 = *(ebp_4 + 4) + *(ebp_4 + 0x14)
        int32_t edx_22 = edx_20 * 0x187e + edi_5
        void* edi_6 = edi_5 - esi_10 * 0x3b21
        int32_t ecx_25 = edx_22 + ebx_13
        int32_t ebx_14 = ebx_13 - edx_22
        int32_t* edx_23 = var_138
        void* ecx_26 = edi_6 + edx_23
        int32_t edi_7 = *(ebp_4 + 0x1c)
        var_138 = edx_23 - edi_6
        int32_t edx_26 = *(ebp_4 + 0xc) + edi_7
        int32_t ebx_15 = (esi_12 + edx_26) * 0x25a1
        int32_t ebp_6 = ebx_15 - edx_26 * 0x3ec5
        int32_t ebx_16 = ebx_15 - esi_12 * 0xc7c
        int32_t ecx_31 = (ecx_21 + edi_7) * 0xffffe333
        int32_t edx_29 = edi_7 * 0x98e + ecx_31 + ebp_6
        int32_t edx_32 = ecx_21 * 0x300b + ecx_31 + ebx_16
        int32_t esi_14 = *(var_134 + 0x14)
        int32_t edi_8 = *(var_134 + 0xc)
        int32_t ecx_34 = (edi_8 + esi_14) * 0xffffadfd
        int32_t esi_17 = esi_14 * 0x41b3 + ecx_34 + ebx_16
        int32_t esi_20 = edi_8 * 0x6254 + ecx_34 + ebp_6
        *eax_37 = ((ecx_25 + edx_32) s>> 0x12 & 0x3ff)[eax_6]
        eax_37[7] = ((ecx_25 - edx_32) s>> 0x12 & 0x3ff)[eax_6]
        eax_37[1] = ((ecx_26 + esi_20) s>> 0x12 & 0x3ff)[eax_6]
        eax_37[6] = ((ecx_26 - esi_20) s>> 0x12 & 0x3ff)[eax_6]
        int32_t* ebx_21 = var_138
        esi_9 = eax_6
        eax_37[2] = ((ebx_21 + esi_17) s>> 0x12 & 0x3ff)[eax_6]
        eax_37[5] = ((ebx_21 - esi_17) s>> 0x12 & 0x3ff)[eax_6]
        eax_37[3] = ((ebx_14 + edx_29) s>> 0x12 & 0x3ff)[eax_6]
        ecx_21 = zx.d(*(((ebx_14 - edx_29) s>> 0x12 & 0x3ff) + eax_6))
        ebp_4 = var_134
    else
        ecx_21.b = (edx_15 s>> 5 & 0x3ff)[esi_9]
        *eax_37 = ecx_21.b
        eax_37[1] = ecx_21.b
        eax_37[2] = ecx_21.b
        eax_37[3] = ecx_21.b
        eax_37[5] = ecx_21.b
        eax_37[6] = ecx_21.b
        eax_37[7] = ecx_21.b
    
    eax_37[4] = ecx_21.b
    ebp_4 += 0x20
    i_1 = i_3 + 1
    var_134 = ebp_4
    i_3 = i_1
while (i_1 s< 8)

@__security_check_cookie@4(eax_1 ^ &var_138)
return i_1
