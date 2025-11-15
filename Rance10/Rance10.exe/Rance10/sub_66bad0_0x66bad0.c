// 函数: sub_66bad0
// 地址: 0x66bad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_74
int32_t eax_1 = __security_cookie ^ &var_74
_memset(arg1, 0, 0x100)
uint32_t (* eax_2)[0x4] = arg1
int32_t ecx = 0
int32_t var_70 = 0
void var_44

while (true)
    char* edx_3 = *(arg2 + (ecx << 2)) + arg3
    uint32_t edi_1 = zx.d(edx_3[4])
    uint32_t ecx_1 = zx.d(*edx_3)
    uint32_t esi_1 = zx.d(edx_3[3])
    var_74 = ecx_1
    var_74 -= edi_1
    uint32_t ebp_1 = ecx_1 + edi_1
    uint32_t ecx_2 = zx.d(edx_3[1])
    uint32_t edx_4 = zx.d(edx_3[2])
    uint32_t ecx_3 = ecx_2 + esi_1
    uint32_t edi_3 = ecx_2 - esi_1
    uint32_t ebx_1 = ecx_3 + ebp_1
    int32_t esi_2 = (ebp_1 - ecx_3) * 0x194c
    *eax_2 = ((ebx_1 + edx_4) << 2) + 0xfffff600
    int32_t edx_5 = (ebx_1 - (edx_4 << 2)) * 0xb50
    (*eax_2)[2] = (edx_5 + 0x400 + esi_2) s>> 0xb
    eax_2[1][0] = (esi_2 - edx_5 + 0x400) s>> 0xb
    uint32_t esi_6 = var_74
    int32_t edx_6 = (edi_3 + esi_6) * 0x1a9a
    (*eax_2)[1] = (esi_6 * 0x1071 + 0x400 + edx_6) s>> 0xb
    ecx = var_70 + 1
    (*eax_2)[3] = (edx_6 - edi_3 * 0x45a4 + 0x400) s>> 0xb
    var_70 = ecx
    
    if (ecx == 8)
        eax_2 = &var_44
    else
        if (ecx == 0xa)
            break
        
        eax_2 = &eax_2[2]

void* edx_10 = &var_44
var_74 = &var_44
int32_t i_1 = 5
int32_t* ebx_3 = &arg1[4]
int32_t* ecx_18 = arg1 - &var_44
int32_t* var_64 = ebx_3
int32_t* var_5c_1 = ecx_18
int32_t result
int32_t i

do
    int32_t ecx_19 = *(ecx_18 + edx_10)
    int32_t eax_3 = *ebx_3
    int32_t ebp_3 = ebx_3[0x28]
    int32_t edi_4 = ebx_3[0x20]
    int32_t esi_8 = *(edx_10 + 0x20) + ecx_19
    int32_t eax_4 = eax_3 + ebp_3
    int32_t eax_5 = ebx_3[8]
    int32_t ecx_20 = ebx_3[-8]
    int32_t edx_12 = *edx_10 + ecx_20
    int32_t ecx_21 = eax_5 + edi_4
    int32_t eax_6 = ebx_3[0x10]
    int32_t edx_13 = ebx_3[0x18]
    int32_t eax_7 = eax_6 + edx_13
    int32_t var_70_2 = eax_3 - ebp_3
    int32_t var_6c_2 = eax_5 - edi_4
    int32_t ebx_4 = eax_7 + esi_8
    int32_t esi_9 = esi_8 - eax_7
    int32_t ebp_5 = eax_6 - edx_13
    int32_t esi_10 = ecx_21 + edx_12
    int32_t eax_9 = edx_12 - ecx_21
    uint32_t ecx_22 = var_74
    int32_t eax_11 = ecx_19 - *(ecx_22 + 0x20)
    int32_t eax_13 = ecx_20 - *ecx_22
    *(var_5c_1 + var_74) = ((eax_4 + esi_10 + ebx_4) * 0x28f6 + 0x4000) s>> 0xf
    int32_t edi_7 = eax_13 - var_6c_2
    var_64[0x10] = (ebx_4 * 0x2edd - eax_4 * 0x39ee - esi_10 * 0x11e6 + 0x4000) s>> 0xf
    int32_t ecx_29 = (eax_9 + esi_9) * 0x220c
    *var_64 = (esi_9 * 0x150b + 0x4000 + ecx_29) s>> 0xf
    var_64[0x20] = (ecx_29 - eax_9 * 0x5924 + 0x4000) s>> 0xf
    int32_t ebx_6 = eax_11 + ebp_5
    var_64[0x18] = ((ebx_6 - edi_7 - var_70_2) * 0x28f6 + 0x4000) s>> 0xf
    int32_t esi_13 = var_70_2 * 0x28f6
    var_64[-8] = (ebp_5 * 0x910 + var_6c_2 * 0x1a4c + esi_13 + eax_11 * 0x3937 + eax_13 * 0x339d
        + 0x4000) s>> 0xf
    int32_t edx_21 = (eax_11 - ebp_5) * 0x26f5 - (var_6c_2 + eax_13) * 0x1813
    int32_t ecx_39 = edi_7 * 0x2123 + ebx_6 * 0xca8 - esi_13
    ecx_18 = var_5c_1
    var_64[0x28] = (edx_21 - ecx_39 + 0x4000) s>> 0xf
    result = (edx_21 + 0x4000 + ecx_39) s>> 0xf
    edx_10 = var_74 + 4
    var_64[8] = result
    ebx_3 = &var_64[1]
    i = i_1
    i_1 -= 1
    var_74 = edx_10
    var_64 = ebx_3
while (i != 1)
@__security_check_cookie@4(eax_1 ^ &var_74)
return result
