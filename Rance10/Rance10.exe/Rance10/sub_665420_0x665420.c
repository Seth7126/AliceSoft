// 函数: sub_665420
// 地址: 0x665420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_98
int32_t eax_1 = __security_cookie ^ &var_98
int32_t ecx = 0
void** eax_2 = arg1
int32_t var_74 = 0

while (true)
    char* ebx_2 = *(arg2 + (ecx << 2)) + arg3
    uint32_t ebp_1 = zx.d(ebx_2[0xa])
    uint32_t ecx_1 = zx.d(*ebx_2)
    uint32_t edi_1 = zx.d(ebx_2[9])
    uint32_t esi_1 = zx.d(ebx_2[8])
    uint32_t ecx_2 = ecx_1 + ebp_1
    uint32_t ecx_3 = zx.d(ebx_2[1])
    uint32_t edx_2 = zx.d(ebx_2[7])
    uint32_t ecx_4 = ecx_3 + edi_1
    uint32_t ecx_5 = zx.d(ebx_2[2])
    var_98 = ecx_5
    uint32_t ecx_6 = ecx_5 + esi_1
    uint32_t ecx_7 = zx.d(ebx_2[3])
    uint32_t ecx_8 = ecx_7 + edx_2
    uint32_t var_94_2 = ecx_7 - edx_2
    uint32_t ecx_9 = zx.d(ebx_2[6])
    var_98 -= esi_1
    uint32_t var_84_2 = ecx_3 - edi_1
    uint32_t ebp_2 = zx.d(ebx_2[4])
    uint32_t ebx_3 = zx.d(ebx_2[5])
    uint32_t ebp_3 = ebp_2 + ecx_9
    uint32_t var_8c_2 = ebp_2 - ecx_9
    uint32_t var_7c_2 = ecx_1 - ebp_1
    *eax_2 = ((ebx_3 + ebp_3 + ecx_8 + ecx_6 + ecx_4 + ecx_2) << 1) + 0xfffff500
    uint32_t ecx_16 = ebx_3 * 2
    uint32_t edx_4 = ecx_8 - ecx_16
    uint32_t ebx_5 = ecx_2 - ecx_16
    uint32_t esi_3 = ecx_6 - ecx_16
    uint32_t edi_3 = ecx_4 - ecx_16
    uint32_t ebp_6 = ebp_3 - ecx_16
    int32_t ebx_7 = (edx_4 + ebx_5) * 0x2b6c + (esi_3 + ebp_6) * 0x671
    int32_t esi_4 = (edi_3 - edx_4) * 0x1da3
    int32_t edi_4 = (ebx_5 - edi_3) * 0x2612
    eax_2[2] = (edx_4 * 0xffffdf6a - ebp_6 * 0x2c83 + 0x800 + esi_4 + ebx_7) s>> 0xc
    eax_2[4] = (edi_3 * 0x1ff + ebp_6 * 0x12cd - esi_3 * 0x2b6c + edi_4 + esi_4 + 0x800) s>> 0xc
    eax_2[6] = (ebx_7 + 0x800 + esi_3 * 0xffffe6c3 - ebx_5 * 0x33db + edi_4) s>> 0xc
    int32_t ebp_7 = (var_84_2 + var_7c_2) * 0x292a
    int32_t ebx_8 = (var_98 + var_7c_2) * 0x2234
    int32_t esi_6 = (var_94_2 + var_7c_2) * 0x1877
    int32_t esi_7 = (var_98 + var_84_2) * 0xffffe789
    int32_t ebx_10 = (var_94_2 + var_84_2) * 0xffffd335
    int32_t edi_6 = (var_98 + var_94_2) * 0xcc0
    eax_2[1] = (var_8c_2 * 0xcc0 - var_7c_2 * 0x370a + esi_6 + ebx_8 + 0x800 + ebp_7) s>> 0xc
    eax_2[3] = (ebp_7 + 0x800 + var_84_2 * 0x28d8 - var_8c_2 * 0x2234 + ebx_10 + esi_7) s>> 0xc
    eax_2[5] = (ebx_8 + 0x800 + var_8c_2 * 0x2ccb - var_98 * 0x3fa6 + edi_6 + esi_7) s>> 0xc
    eax_2[7] = (esi_6 + 0x800 + var_94_2 * 0x29c7 - var_8c_2 * 0x292a + edi_6 + ebx_10) s>> 0xc
    ecx = var_74 + 1
    var_74 = ecx
    
    if (ecx == 8)
        void var_64
        eax_2 = &var_64
    else
        if (ecx == 0xb)
            break
        
        eax_2 = &eax_2[8]

void var_44
void* ecx_67 = &var_44
int32_t var_70_3 = 7
void* var_74_1 = &var_44
void* esi_8 = &arg1[0x20]
int32_t* result = arg1 - &var_44
var_98 = esi_8
int32_t* result_1 = result
int32_t temp0_1

do
    int32_t eax_4 = *(result + ecx_67)
    int32_t ebx_11 = *(ecx_67 + 0x20)
    int32_t edi_7 = *ecx_67
    int32_t edx_30 = *(ecx_67 - 0x20)
    int32_t eax_5 = eax_4 + ebx_11
    int32_t ecx_68 = *(esi_8 + 0x60)
    int32_t eax_6 = *(esi_8 - 0x60)
    int32_t eax_7 = eax_6 + edi_7
    int32_t eax_8 = *(esi_8 - 0x40)
    int32_t var_6c_3 = eax_4 - ebx_11
    int32_t var_8c_4 = eax_8 - edx_30
    int32_t ebp_8 = eax_8 + edx_30
    int32_t var_80_4 = eax_6 - edi_7
    int32_t eax_9 = *(esi_8 - 0x20)
    int32_t var_94_4 = eax_9 - ecx_68
    int32_t ebp_9 = ecx_68 + eax_9
    int32_t eax_10 = *(esi_8 + 0x40)
    int32_t esi_9 = *esi_8
    int32_t esi_10 = esi_9 + eax_10
    int32_t var_90_4 = esi_9 - eax_10
    int32_t esi_12 = *(var_98 + 0x20)
    *(result_1 + var_74_1) =
        ((esi_12 + esi_10 + ebp_9 + ebp_8 + eax_7 + eax_5) * 0x21da + 0x4000) s>> 0xf
    int32_t eax_19 = esi_12 * 2
    int32_t ecx_70 = eax_7 - eax_19
    int32_t esi_14 = eax_5 - eax_19
    int32_t ebp_10 = ebp_9 - eax_19
    int32_t edx_33 = ebp_8 - eax_19
    int32_t ebx_13 = esi_10 - eax_19
    int32_t esi_16 = (esi_14 - ecx_70) * 0x2846
    int32_t edi_10 = (esi_14 + ebp_10) * 0x2def + (ebx_13 + edx_33) * 0x6d0
    int32_t edx_34 = (ecx_70 - ebp_10) * 0x1f5a
    *(var_98 - 0x40) = (ebp_10 * 0xffffdd87 - ebx_13 * 0x2f16 + 0x4000 + edx_34 + edi_10) s>> 0xf
    uint32_t edx_35 = var_98
    *edx_35 =
        (ecx_70 * 0x21c + 0x4000 + ebx_13 * 0x13e3 - edx_33 * 0x2def + esi_16 + edx_34) s>> 0xf
    *(edx_35 + 0x40) = (edx_33 * 0xffffe54d - esi_14 * 0x36db + 0x4000 + esi_16 + edi_10) s>> 0xf
    int32_t ebx_14 = (var_80_4 + var_6c_3) * 0x2b8c
    int32_t ebp_11 = (var_8c_4 + var_6c_3) * 0x242e
    int32_t edx_36 = (var_94_4 + var_6c_3) * 0x19e2
    int32_t edx_38 = (var_8c_4 + var_80_4) * 0xffffe61e
    int32_t edi_12 = (var_94_4 + var_80_4) * 0xffffd09d
    int32_t esi_18 = (var_8c_4 + var_94_4) * 0xd7d
    *(var_98 - 0x60) =
        (var_90_4 * 0xd7d - var_6c_3 * 0x3a39 + edx_36 + 0x4000 + ebp_11 + ebx_14) s>> 0xf
    *(var_98 - 0x20) =
        (ebx_14 + 0x4000 + var_80_4 * 0x2b35 - var_90_4 * 0x242e + edi_12 + edx_38) s>> 0xf
    *(var_98 + 0x20) =
        (ebp_11 + 0x4000 + var_90_4 * 0x2f63 - var_8c_4 * 0x4355 + esi_18 + edx_38) s>> 0xf
    uint32_t esi_19 = var_98
    ecx_67 = var_74_1 + 4
    var_74_1 = ecx_67
    *(esi_19 + 0x60) =
        (edx_36 + 0x4000 + var_94_4 * 0x2c32 - var_90_4 * 0x2b8c + esi_18 + edi_12) s>> 0xf
    esi_8 = esi_19 + 4
    temp0_1 = var_70_3
    var_70_3 -= 1
    result = result_1
    var_98 = esi_8
while (temp0_1 - 1 s>= 0)
@__security_check_cookie@4(eax_1 ^ &var_98)
return result
