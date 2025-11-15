// 函数: sub_5aaeb0
// 地址: 0x5aaeb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_dc
int32_t eax_1 = __security_cookie ^ &var_dc
float var_d8 = arg4
float var_d4 = arg4
float var_d0 = arg4
sub_5aa770(&var_d8, arg2, arg3, &var_d8, arg5, arg6)
int32_t var_6c
int32_t* edx = &var_6c
float xmm0_1 = arg4 * -0.5f
int32_t i_1 = 8
float xmm1_1[0x4] = arg4 * 0.5f
float var_70 = xmm0_1
float var_64 = xmm0_1
float xmm0_3 = arg4 * -0.75f
float xmm2_1[0x4] = arg4 * 0.75f
float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
var_6c = xmm1_2
float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
int32_t var_68 = xmm1_2
int32_t var_60 = xmm1_2
int32_t var_48 = xmm1_2
float var_40 = xmm0_3
int32_t var_3c = xmm2_2
int32_t var_38 = xmm2_2
float var_34 = xmm0_3
int32_t var_30 = xmm2_2
int32_t var_18 = xmm2_2
int32_t i

do
    float var_b4[0x10]
    float* eax_3 = sub_6cbac0(arg6, &var_b4)
    float xmm3_1 = edx[-1]
    float xmm1_3 = edx[-2]
    float xmm2_3 = *edx
    float xmm4_5 = eax_3[4] * xmm3_1 + *eax_3 * xmm1_3 + eax_3[8] * xmm2_3 + eax_3[0xc]
    float xmm6_5 = eax_3[1] * xmm1_3 + eax_3[5] * xmm3_1 + eax_3[9] * xmm2_3 + eax_3[0xd]
    float xmm5_5 = eax_3[2] * xmm1_3 + eax_3[6] * xmm3_1 + eax_3[0xa] * xmm2_3 + eax_3[0xe]
    float xmm7_5 = eax_3[3] * xmm1_3 + eax_3[7] * xmm3_1 + eax_3[0xb] * xmm2_3 + eax_3[0xf]
    xmm7_5 - 1f
    eax_3:1.b = (xmm7_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_5, 1f) ? 1 : 0) << 2
        | (xmm7_5 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm7_5 f- 0
        eax_3:1.b = (xmm7_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_5, 0f) ? 1 : 0) << 2
            | (xmm7_5 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm0_20 = 1f / xmm7_5
            xmm4_5 = xmm4_5 * xmm0_20
            xmm6_5 = xmm6_5 * xmm0_20
            xmm5_5 = xmm5_5 * xmm0_20
    
    float xmm5_6 = xmm5_5 f+ arg2[2]
    *(edx - 8) = _mm_unpacklo_ps(xmm4_5 f+ *arg2, xmm6_5 f+ arg2[1])
    *edx = xmm5_6
    edx = &edx[3]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t eax_5
int32_t ecx_2
eax_5, ecx_2 = sub_6cab20(arg5)
int32_t var_c0 = var_3c
int32_t var_d0_2 = var_6c
int32_t var_bc = eax_5
var_d8.q = xmm0_1.q
int32_t var_cc = eax_5

if (arg3[1] == arg3[2])
    int32_t var_f0_2 = ecx_2
    sub_571180(arg3)

int128_t* eax_9 = arg3[1]

if (eax_9 != 0)
    *eax_9 = var_d8.o
    eax_9[1] = xmm0_3.q.o

arg3[1] += 0x20
int32_t ecx_4 = arg3[1]
var_d8.q = var_38.q
int32_t var_d0_3 = var_30
int32_t var_cc_1 = eax_5
int32_t var_c0_1 = var_60
int32_t var_bc_1 = eax_5

if (ecx_4 == arg3[2])
    int32_t var_f0_3 = ecx_4
    sub_571180(arg3)

int128_t* eax_12 = arg3[1]

if (eax_12 != 0)
    *eax_12 = var_68.q.o
    eax_12[1] = var_d8.o

arg3[1] += 0x20
int32_t ecx_6 = arg3[1]
float ebp_1 = xmm2_2[1]
var_d8.q = xmm0_3.q
float var_d0_4 = ebp_1
int32_t var_cc_2 = eax_5
float var_c0_2 = xmm1_2[1]
int32_t var_bc_2 = eax_5

if (ecx_6 == arg3[2])
    int32_t var_f0_4 = ecx_6
    sub_571180(arg3)

int128_t* eax_14 = arg3[1]

if (eax_14 != 0)
    *eax_14 = xmm0_1.q.o
    eax_14[1] = var_d8.o

int64_t xmm0_33 = xmm2_2[2].q
arg3[1] += 0x20
int32_t ecx_8 = arg3[1]
var_d8.q = xmm0_33
int64_t xmm0_34 = xmm1_2[2].q
int32_t var_d0_5 = var_18
int32_t var_cc_3 = eax_5
int32_t var_c0_3 = var_48
int32_t var_bc_3 = eax_5

if (ecx_8 == arg3[2])
    int32_t var_f0_5 = ecx_8
    sub_571180(arg3)

int128_t* eax_16 = arg3[1]

if (eax_16 != 0)
    *eax_16 = xmm0_34.o
    eax_16[1] = var_d8.o

arg3[1] += 0x20
var_d8.q = var_38.q
int32_t var_d0_6 = var_30
int32_t ecx_11 = var_3c
int32_t var_cc_4 = eax_5
int32_t var_c0_4 = ecx_11
int32_t var_bc_4 = eax_5

if (arg3[1] == arg3[2])
    int32_t var_f0_6 = ecx_11
    ecx_11 = sub_571180(arg3)

int128_t* eax_18 = arg3[1]

if (eax_18 != 0)
    *eax_18 = xmm0_3.q.o
    eax_18[1] = var_d8.o

arg3[1] += 0x20
int64_t xmm1_4 = xmm0_3.q
var_d8.q = xmm2_2[2].q
int32_t var_d0_7 = var_18
int32_t var_cc_5 = eax_5
int64_t var_c8_5 = xmm1_4
float var_c0_5 = ebp_1
int32_t var_bc_5 = eax_5

if (arg3[1] == arg3[2])
    int32_t var_f0_7 = ecx_11
    sub_571180(arg3)
    xmm1_4 = xmm0_3.q

int128_t* eax_20 = arg3[1]

if (eax_20 != 0)
    *eax_20 = var_c8_5.o
    eax_20[1] = var_d8.o

arg3[1] += 0x20
var_d8.q = xmm1_4
float var_d0_8 = ebp_1
int32_t var_cc_6 = eax_5
int32_t var_c0_6 = var_3c
int32_t var_bc_6 = eax_5

if (arg3[1] == arg3[2])
    int32_t var_f0_8 = var_3c
    sub_571180(arg3)

int128_t* eax_22 = arg3[1]

if (eax_22 != 0)
    *eax_22 = xmm0_3.q.o
    eax_22[1] = var_d8.o

int64_t xmm0_47 = xmm2_2[2].q
arg3[1] += 0x20
var_d8.q = xmm0_47
int32_t var_d0_9 = var_18
int32_t var_cc_7 = eax_5
int32_t var_c0_7 = var_30
int32_t var_bc_7 = eax_5

if (arg3[1] == arg3[2])
    int32_t var_f0_9 = var_30
    sub_571180(arg3)

int128_t* result = arg3[1]

if (result != 0)
    *result = var_38.q.o
    result[1] = var_d8.o

arg3[1] += 0x20
@__security_check_cookie@4(eax_1 ^ &var_dc)
return result
