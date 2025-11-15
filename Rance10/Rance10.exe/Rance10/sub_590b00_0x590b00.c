// 函数: sub_590b00
// 地址: 0x590b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2 = arg3 * 0x30
void* edi_1 = *(arg1 + 0x28) + eax_2
void* esi_2 = *(arg7 + 0x28) + eax_2
void* ecx = *(edi_1 + 0x24)
int32_t ebp_1 = arg5 * 7
int128_t* edx = ecx + (ebp_1 << 2)
int32_t ebx_2 = arg4 * 0x1c
int32_t* ecx_1 = ecx + ebx_2
float xmm1_3 = (*(ecx + (ebp_1 << 2) + 0x10) f- ecx_1[4]) * arg6 f+ ecx_1[4]
float xmm1_7 = (*(edx + 0x14) f- ecx_1[5]) * arg6 f+ ecx_1[5]
float xmm1_11 = (*(edx + 0x18) f- ecx_1[6]) * arg6 f+ ecx_1[6]
float var_b4[0x4]
float (* eax_5)[0x4] = sub_6cbf50(ecx_1, arg6, &var_b4, edx)
void* ecx_2 = *(esi_2 + 0x24)
float var_d4 = xmm1_11
float var_ec[0x4] = *eax_5
int64_t var_dc = _mm_unpacklo_ps(xmm1_3, xmm1_7)
int32_t edx_3 = arg9 * 0x1c
int128_t* edx_4 = edx_3 + ecx_2
int32_t ebx_5 = arg8 * 0x1c
int32_t* ecx_3 = ecx_2 + ebx_5
float xmm1_24 = (*(edx_4 + 0x18) f- ecx_3[6]) * arg10 f+ ecx_3[6]
uint128_t xmm2 = zx.o((edx_4[1].d f- ecx_3[4]) * arg10 f+ ecx_3[4])
int64_t xmm1_25 = (*(edx_4 + 0x14) f- ecx_3[5]) * arg10 f+ ecx_3[5]
float var_f0 = xmm1_24
float var_a4[0x4]
float var_108[0x4] = *sub_6cbf50(ecx_3, arg10, &var_a4, edx_4)
int64_t var_f8 = _mm_unpacklo_ps(xmm2, xmm1_25)
float var_b8 = (xmm1_24 - xmm1_11) * arg11 + xmm1_11
float var_94[0x4]
float var_d0[0x4] = *sub_6cbf50(&var_ec, arg11, &var_94, &var_108)
int64_t var_c0 =
    _mm_unpacklo_ps(zx.o((xmm2 f- xmm1_3) * arg11 + xmm1_3), (xmm1_25 f- xmm1_7) * arg11 + xmm1_7)
float var_84[0x10]
float* eax_13 = sub_5dcbc0(&var_d0, &var_84)
float var_44[0x4][0x4]
float (* eax_14)[0x4] = sub_6cb020(eax_13, arg2, &var_44, eax_13)
*arg2 = *eax_14
arg2[1] = eax_14[1]
arg2[2] = eax_14[2]
arg2[3] = eax_14[3]
int32_t i
void* edi_3

for (i = *(edi_1 + 0x20); i != 0xffffffff; i = *(edi_3 + 0x20))
    int32_t eax_16 = i * 0x30
    edi_3 = *(arg1 + 0x28) + eax_16
    int32_t esi_4 = *(arg7 + 0x28) + eax_16
    int32_t eax_17 = *(edi_3 + 0x24)
    int128_t* edx_6 = eax_17 + (ebp_1 << 2)
    int32_t* ecx_10 = ebx_2 + eax_17
    float xmm1_34 = (*(eax_17 + (ebp_1 << 2) + 0x10) f- ecx_10[4]) * arg6 f+ ecx_10[4]
    float xmm1_38 = (*(edx_6 + 0x14) f- ecx_10[5]) * arg6 f+ ecx_10[5]
    float xmm1_42 = (*(edx_6 + 0x18) f- ecx_10[6]) * arg6 f+ ecx_10[6]
    float (* eax_18)[0x4] = sub_6cbf50(ecx_10, arg6, &var_b4, edx_6)
    int128_t* edx_8 = edx_3 + *(esi_4 + 0x24)
    int32_t* ecx_12 = ebx_5 + *(esi_4 + 0x24)
    var_ec = *eax_18
    float var_d4_1 = xmm1_42
    int64_t var_dc_1 = _mm_unpacklo_ps(xmm1_34, xmm1_38)
    float xmm1_55 = (*(edx_8 + 0x18) f- ecx_12[6]) * arg10 f+ ecx_12[6]
    uint128_t xmm2_6 = zx.o((edx_8[1].d f- ecx_12[4]) * arg10 f+ ecx_12[4])
    int64_t xmm1_56 = (*(edx_8 + 0x14) f- ecx_12[5]) * arg10 f+ ecx_12[5]
    float var_f0_1 = xmm1_55
    var_108 = *sub_6cbf50(ecx_12, arg10, &var_a4, edx_8)
    int64_t var_f8_1 = _mm_unpacklo_ps(xmm2_6, xmm1_56)
    float var_b8_1 = (xmm1_55 - xmm1_42) * arg11 + xmm1_42
    var_d0 = *sub_6cbf50(&var_ec, arg11, &var_94, &var_108)
    int64_t var_c0_1 = _mm_unpacklo_ps(zx.o((xmm2_6 f- xmm1_34) * arg11 + xmm1_34), 
        (xmm1_56 f- xmm1_38) * arg11 + xmm1_38)
    float* eax_24 = sub_5dcbc0(&var_d0, &var_84)
    float (* eax_25)[0x4] = sub_6cb020(eax_24, arg2, &var_44, eax_24)
    *arg2 = *eax_25
    arg2[1] = eax_25[1]
    arg2[2] = eax_25[2]
    arg2[3] = eax_25[3]

return i
