// 函数: sub_5aa770
// 地址: 0x5aa770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t var_d0
int32_t eax_1 = __security_cookie ^ &var_d0
float xmm6 = *arg4
int32_t i_1 = 8
float xmm5 = arg4[1]
float xmm3 = arg4[2]
float xmm4_1 = xmm6 * -0.5f
float xmm2_1 = xmm5 * -0.5f
float xmm1_1 = xmm3 * -0.5f
float var_68
int32_t* edi = &var_68
float xmm6_1 = xmm6 * 0.5f
float xmm5_1 = xmm5 * 0.5f
float xmm3_1 = xmm3 * 0.5f
float var_6c = xmm2_1
var_68 = xmm1_1
float var_60 = xmm2_1
float var_54 = xmm5_1
float var_48 = xmm5_1
float var_3c = xmm2_1
float var_30 = xmm2_1
float var_24 = xmm5_1
float var_18 = xmm5_1
int32_t i

do
    float var_b0[0x10]
    float* eax_3 = sub_6cbac0(arg6, &var_b0)
    float xmm1_2 = edi[-2]
    float xmm3_2 = edi[-1]
    float xmm2_2 = *edi
    float xmm4_6 = eax_3[4] * xmm3_2 + xmm1_2 * *eax_3 + eax_3[8] * xmm2_2 + eax_3[0xc]
    float xmm5_6 = eax_3[1] * xmm1_2 + eax_3[5] * xmm3_2 + eax_3[9] * xmm2_2 + eax_3[0xd]
    float xmm6_6 = eax_3[2] * xmm1_2 + eax_3[6] * xmm3_2 + eax_3[0xa] * xmm2_2 + eax_3[0xe]
    float xmm7_5 = eax_3[3] * xmm1_2 + eax_3[7] * xmm3_2 + eax_3[0xb] * xmm2_2 + eax_3[0xf]
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
            float xmm1_3 = 1f / xmm7_5
            xmm6_6 = xmm6_6 * xmm1_3
            xmm4_6 = xmm4_6 * xmm1_3
            xmm5_6 = xmm5_6 * xmm1_3
    
    float xmm0_19 = arg2[2] f+ xmm6_6
    *(edi - 8) = _mm_unpacklo_ps(*arg2 + xmm4_6, arg2[1] f+ xmm5_6)
    *edi = xmm0_19
    edi = &edi[3]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t eax_5
int32_t ecx_2
eax_5, ecx_2 = sub_6cab20(arg5)
float ebp = var_68
float var_b8 = xmm1_1
int32_t eax_7 = arg3[1]
int32_t var_b4 = eax_5
var_d0 = xmm4_1.q
float var_c8_2 = ebp
int32_t var_c4 = eax_5

if (eax_7 == arg3[2])
    int32_t var_e4_2 = ecx_2
    sub_571180(arg3)

int128_t* eax_8 = arg3[1]

if (eax_8 != 0)
    *eax_8 = var_d0.o
    eax_8[1] = xmm6_1.q.o

arg3[1] += 0x20
int32_t eax_9 = arg3[1]
var_d0 = xmm6_1.q
float var_c8_3 = xmm1_1
int32_t var_c4_1 = eax_5
float var_b8_1 = xmm1_1
int32_t var_b4_1 = eax_5

if (eax_9 == arg3[2])
    float var_e4_3 = xmm1_1
    sub_571180(arg3)

int128_t* eax_10 = arg3[1]

if (eax_10 != 0)
    *eax_10 = xmm4_1.q.o
    eax_10[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_11 = arg3[1]
var_d0 = xmm6_1.q
float var_c8_4 = xmm3_1
int32_t var_c4_2 = eax_5
float var_b8_2 = xmm3_1
int32_t var_b4_2 = eax_5

if (eax_11 == arg3[2])
    float var_e4_4 = xmm3_1
    sub_571180(arg3)

int128_t* eax_12 = arg3[1]

if (eax_12 != 0)
    *eax_12 = xmm4_1.q.o
    eax_12[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_13 = arg3[1]
var_d0 = xmm6_1.q
float var_c8_5 = xmm3_1
int32_t var_c4_3 = eax_5
float var_b8_3 = xmm3_1
int32_t var_b4_3 = eax_5

if (eax_13 == arg3[2])
    float var_e4_5 = xmm3_1
    sub_571180(arg3)

int128_t* eax_14 = arg3[1]

if (eax_14 != 0)
    *eax_14 = xmm4_1.q.o
    eax_14[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_15 = arg3[1]
var_d0 = xmm4_1.q
float var_c8_6 = xmm1_1
int32_t var_c4_4 = eax_5
float var_b8_4 = ebp
int32_t var_b4_4 = eax_5

if (eax_15 == arg3[2])
    float var_e4_6 = xmm1_1
    sub_571180(arg3)

int128_t* eax_16 = arg3[1]

if (eax_16 != 0)
    *eax_16 = xmm4_1.q.o
    eax_16[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_17 = arg3[1]
var_d0 = xmm6_1.q
float var_c8_7 = xmm1_1
int32_t var_c4_5 = eax_5
float var_b8_5 = xmm1_1
int32_t var_b4_5 = eax_5

if (eax_17 == arg3[2])
    float var_e4_7 = xmm1_1
    sub_571180(arg3)

int128_t* eax_18 = arg3[1]

if (eax_18 != 0)
    *eax_18 = xmm6_1.q.o
    eax_18[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_19 = arg3[1]
var_d0 = xmm4_1.q
float var_c8_8 = xmm3_1
int32_t var_c4_6 = eax_5
float var_b8_6 = xmm3_1
int32_t var_b4_6 = eax_5

if (eax_19 == arg3[2])
    float var_e4_8 = xmm3_1
    sub_571180(arg3)

int128_t* eax_20 = arg3[1]

if (eax_20 != 0)
    *eax_20 = xmm4_1.q.o
    eax_20[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_21 = arg3[1]
var_d0 = xmm6_1.q
float var_c8_9 = xmm3_1
float ecx_20 = xmm3_1
int32_t var_c4_7 = eax_5
float var_b8_7 = ecx_20
int32_t var_b4_7 = eax_5

if (eax_21 == arg3[2])
    float var_e4_9 = ecx_20
    ecx_20 = sub_571180(arg3)

int128_t* eax_22 = arg3[1]

if (eax_22 != 0)
    *eax_22 = xmm6_1.q.o
    eax_22[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_23 = arg3[1]
var_d0 = xmm4_1.q
float var_c8_10 = xmm3_1
int32_t var_c4_8 = eax_5
float var_b8_8 = ebp
int32_t var_b4_8 = eax_5

if (eax_23 == arg3[2])
    float var_e4_10 = ecx_20
    sub_571180(arg3)

int128_t* eax_24 = arg3[1]

if (eax_24 != 0)
    *eax_24 = xmm4_1.q.o
    eax_24[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_25 = arg3[1]
var_d0 = xmm6_1.q
float var_c8_11 = xmm3_1
int32_t var_c4_9 = eax_5
float var_b8_9 = xmm1_1
int32_t var_b4_9 = eax_5

if (eax_25 == arg3[2])
    float var_e4_11 = xmm1_1
    sub_571180(arg3)

int128_t* eax_26 = arg3[1]

if (eax_26 != 0)
    *eax_26 = xmm6_1.q.o
    eax_26[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_27 = arg3[1]
var_d0 = xmm4_1.q
float var_c8_12 = xmm3_1
int32_t var_c4_10 = eax_5
float var_b8_10 = xmm1_1
int32_t var_b4_10 = eax_5

if (eax_27 == arg3[2])
    float var_e4_12 = xmm1_1
    sub_571180(arg3)

int128_t* eax_28 = arg3[1]

if (eax_28 != 0)
    *eax_28 = xmm4_1.q.o
    eax_28[1] = var_d0.o

arg3[1] += 0x20
int32_t eax_29 = arg3[1]
var_d0 = xmm6_1.q
float var_c8_13 = xmm3_1
int32_t var_c4_11 = eax_5
float var_b8_11 = xmm1_1
int32_t var_b4_11 = eax_5

if (eax_29 == arg3[2])
    float var_e4_13 = xmm1_1
    sub_571180(arg3)

int128_t* result = arg3[1]

if (result != 0)
    *result = xmm6_1.q.o
    result[1] = var_d0.o

arg3[1] += 0x20
@__security_check_cookie@4(eax_1 ^ &var_d0)
return result
