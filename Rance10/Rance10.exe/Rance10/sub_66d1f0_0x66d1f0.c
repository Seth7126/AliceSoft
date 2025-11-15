// 函数: sub_66d1f0
// 地址: 0x66d1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_130
int32_t eax_1 = __security_cookie ^ &var_130
int16_t* esi = arg3
char* eax_6 = *(arg1 + 0x12c) - 0x180
void var_104
void* edi = &var_104
int32_t i_2 = 8
void* var_12c = &var_104
int32_t* ecx = *(arg2 + 0x54)
var_130 = ecx
int32_t i

do
    int16_t eax_8 = esi[8]
    int32_t eax_10
    
    if (eax_8 != 0 || esi[0x10] != eax_8 || esi[0x18] != eax_8 || esi[0x20] != eax_8
            || esi[0x28] != eax_8 || esi[0x30] != eax_8 || esi[0x38] != eax_8)
        int32_t* edi_1 = var_130
        int32_t eax_12 = sx.d(esi[0x20]) * edi_1[0x20]
        int32_t ebp_2 = sx.d(*esi) * *edi_1
        int32_t edx_2 = sx.d(esi[0x10]) * edi_1[0x10]
        int32_t ecx_2 = sx.d(esi[0x30]) * edi_1[0x30]
        int32_t ebx_1 = eax_12 + ebp_2
        int32_t ebp_3 = ebp_2 - eax_12
        int32_t eax_13 = ecx_2 + edx_2
        int32_t edx_4 = eax_13 + ebx_1
        int32_t ebx_2 = ebx_1 - eax_13
        int32_t edx_6 = sx.d(esi[0x28]) * edi_1[0x28]
        int32_t ecx_5 = (((edx_2 - ecx_2) * 0x16a) s>> 8) - eax_13
        int32_t eax_14 = ecx_5 + ebp_3
        int32_t ebp_4 = ebp_3 - ecx_5
        int32_t ecx_7 = sx.d(esi[0x18]) * edi_1[0x18]
        int32_t ebp_6 = sx.d(esi[8]) * edi_1[8]
        int32_t eax_17 = sx.d(esi[0x38]) * edi_1[0x38]
        int32_t esi_1 = edx_6 + ecx_7
        int32_t edx_7 = edx_6 - ecx_7
        int32_t ecx_8 = eax_17 + ebp_6
        int32_t ebp_7 = ebp_6 - eax_17
        int32_t edi_2 = ecx_8 + esi_1
        int32_t ebx_4 = ((edx_7 + ebp_7) * 0x1d9) s>> 8
        int32_t edx_10 = ebx_4 - ((edx_7 * 0x29d) s>> 8) - edi_2
        int32_t ecx_12 = (((ecx_8 - esi_1) * 0x16a) s>> 8) - edx_10
        *var_12c = edi_2 + edx_4
        edi = var_12c
        int32_t ebx_6 = ebx_4 - ((ebp_7 * 0x115) s>> 8) - ecx_12
        esi = arg3
        *(edi + 0xe0) = edx_4 - edi_2
        *(edi + 0x20) = edx_10 + eax_14
        *(edi + 0xc0) = eax_14 - edx_10
        *(edi + 0x40) = ecx_12 + ebp_4
        *(edi + 0xa0) = ebp_4 - ecx_12
        eax_10 = ebx_6 + ebx_2
        *(edi + 0x80) = ebx_2 - ebx_6
        ecx = var_130
    else
        eax_10 = sx.d(*esi) * *ecx
        *edi = eax_10
        *(edi + 0x20) = eax_10
        *(edi + 0x40) = eax_10
        *(edi + 0x80) = eax_10
        *(edi + 0xa0) = eax_10
        *(edi + 0xc0) = eax_10
        *(edi + 0xe0) = eax_10
    
    *(edi + 0x60) = eax_10
    esi = &esi[1]
    ecx = &ecx[1]
    i = i_2 - 1
    arg3 = esi
    edi += 4
    i_2 = i
    var_130 = ecx
    var_12c = edi
while (i s> 0)
void* ebx_7 = &var_104
int32_t i_1 = 0
void* var_11c_2 = &var_104
int32_t i_3 = 0

do
    int32_t edx_14 = *ebx_7 + 0x4010
    char* eax_28 = *(arg4 + (i_1 << 2)) + arg5
    int32_t* ecx_16 = *(ebx_7 + 4)
    var_130 = ecx_16
    char* ecx_17
    
    if (ecx_16 != 0 || *(ebx_7 + 8) != ecx_16 || *(ebx_7 + 0xc) != ecx_16
            || *(ebx_7 + 0x10) != ecx_16 || *(ebx_7 + 0x14) != ecx_16 || *(ebx_7 + 0x18) != ecx_16
            || *(ebx_7 + 0x1c) != ecx_16)
        int32_t ecx_18 = *(ebx_7 + 0x10)
        int32_t edi_3 = ecx_18 + edx_14
        int32_t edx_17 = edx_14 - ecx_18
        int32_t ecx_19 = *(ebx_7 + 0x18)
        int32_t edx_18 = *(ebx_7 + 8)
        int32_t esi_3 = ecx_19 + edx_18
        int32_t ebp_12 = esi_3 + edi_3
        int32_t edi_4 = edi_3 - esi_3
        int32_t ecx_22 = (((edx_18 - ecx_19) * 0x16a) s>> 8) - esi_3
        int32_t edx_20 = ecx_22 + edx_17
        int32_t esi_5 = edx_17 - ecx_22
        int32_t ecx_23 = *(ebx_7 + 0xc)
        int32_t edx_21 = *(ebx_7 + 0x14)
        int32_t edi_5 = edx_21 + ecx_23
        int32_t edx_22 = edx_21 - ecx_23
        void* ecx_24 = *(ebx_7 + 0x1c)
        int32_t* ebx_8 = var_130
        void* esi_6 = ecx_24 + ebx_8
        var_130 = ebx_8 - ecx_24
        void* ebx_10 = esi_6 + edi_5
        int32_t ecx_28 = ((var_130 + edx_22) * 0x1d9) s>> 8
        void* edx_25 = ecx_28 - ((edx_22 * 0x29d) s>> 8) - ebx_10
        void* esi_10 = (((esi_6 - edi_5) * 0x16a) s>> 8) - edx_25
        void* edi_8 = ecx_28 - ((var_130 * 0x115) s>> 8) - esi_10
        *eax_28 = *(((ebx_10 + ebp_12) s>> 5 & 0x3ff) + eax_6)
        eax_28[7] = eax_6[(ebp_12 - ebx_10) s>> 5 & 0x3ff]
        eax_28[1] = *(((edx_25 + edx_20) s>> 5 & 0x3ff) + eax_6)
        eax_28[6] = *(((edx_20 - edx_25) s>> 5 & 0x3ff) + eax_6)
        eax_28[2] = *(((esi_10 + esi_5) s>> 5 & 0x3ff) + eax_6)
        ebx_7 = var_11c_2
        eax_28[5] = *(((esi_5 - esi_10) s>> 5 & 0x3ff) + eax_6)
        eax_28[3] = *(((edi_8 + edi_4) s>> 5 & 0x3ff) + eax_6)
        ecx_17 = zx.d(*(((edi_4 - edi_8) s>> 5 & 0x3ff) + eax_6))
    else
        ecx_17.b = *((edx_14 s>> 5 & 0x3ff) + eax_6)
        *eax_28 = ecx_17.b
        eax_28[1] = ecx_17.b
        eax_28[2] = ecx_17.b
        eax_28[3] = ecx_17.b
        eax_28[5] = ecx_17.b
        eax_28[6] = ecx_17.b
        eax_28[7] = ecx_17.b
    
    eax_28[4] = ecx_17.b
    ebx_7 += 0x20
    i_1 = i_3 + 1
    var_11c_2 = ebx_7
    i_3 = i_1
while (i_1 s< 8)

@__security_check_cookie@4(eax_1 ^ &var_130)
return i_1
