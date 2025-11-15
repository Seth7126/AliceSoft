// 函数: sub_58b0c0
// 地址: 0x58b0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_140
int32_t eax_1 = __security_cookie ^ &var_140
int32_t var_f0
int32_t* eax_2 = &var_f0
int32_t i_4 = 0x14
int32_t i

do
    eax_2[-2] = 0
    eax_2 = &eax_2[3]
    eax_2[-4] = 0
    eax_2[-3] = 0
    i = i_4
    i_4 -= 1
while (i != 1)
int64_t var_f8
int64_t* ebx = &var_f8
int32_t i_1 = 0
float xmm0 = arg6[0xc]
float xmm5_1
float xmm7_6

do
    float var_10c_1 = _mm_cvtepi32_ps(zx.o(i_1)) * 0.314159274f
    float xmm0_5 = sub_48ca30() * arg2
    *(ebx + 4) = 0
    *ebx = xmm0_5
    double* eax_3
    float xmm0_7
    eax_3, xmm0_7 = sub_484cb0()
    float xmm2_1 = xmm0_7 * arg2
    xmm5_1 = arg6[4]
    ebx[1].d = xmm2_1
    float xmm3_4 = xmm0_5 * *arg6 + xmm5_1 * 0f + xmm2_1 * arg6[8] + arg6[0xc]
    float xmm4_5 = xmm0_5 * arg6[1] + arg6[5] * 0f + xmm2_1 * arg6[9] + arg6[0xd]
    float xmm1_7 = xmm0_5 * arg6[2] + arg6[6] * 0f + xmm2_1 * arg6[0xa] + arg6[0xe]
    float xmm7_5 = xmm0_5 * arg6[3] + arg6[7] * 0f + xmm2_1 * arg6[0xb] + arg6[0xf]
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
            xmm3_4 = xmm3_4 * xmm0_20
            xmm4_5 = xmm4_5 * xmm0_20
            xmm1_7 = xmm1_7 * xmm0_20
    
    xmm7_6 = *arg4
    i_1 += 1
    float xmm1_8 = xmm1_7 f+ arg4[2]
    *ebx = _mm_unpacklo_ps(xmm3_4 + xmm7_6, xmm4_5 f+ arg4[1])
    ebx[1].d = xmm1_8
    ebx += 0xc
while (i_1 s< 0x14)

float xmm5_5 = xmm5_1 * arg3 + *arg6 * 0f + arg6[8] * 0f + xmm0
float xmm1_13 = arg6[5] * arg3 + arg6[1] * 0f + arg6[9] * 0f + arg6[0xd]
float xmm2_7 = arg6[6] * arg3 + arg6[2] * 0f + arg6[0xa] * 0f + arg6[0xe]
float xmm3_11 = arg6[7] * arg3 + arg6[3] * 0f + arg6[0xb] * 0f + arg6[0xf]
xmm3_11 - 1f
float eax_4
eax_4:1.b = (xmm3_11 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_11, 1f) ? 1 : 0) << 2
    | (xmm3_11 < 1f ? 1 : 0)
bool p_6 = unimplemented  {test ah, 0x44}

if (p_6)
    xmm3_11 f- 0
    eax_4:1.b = (xmm3_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_11, 0f) ? 1 : 0) << 2
        | (xmm3_11 < 0f ? 1 : 0)
    bool p_8 = unimplemented  {test ah, 0x44}
    
    if (p_8)
        float xmm0_37 = 1f / xmm3_11
        xmm5_5 = xmm5_5 * xmm0_37
        xmm1_13 = xmm1_13 * xmm0_37
        xmm2_7 = xmm2_7 * xmm0_37

float xmm2_8 = xmm2_7 f+ arg4[2]
float var_114 = xmm1_13 f+ arg4[1]
int32_t eax_5 = sub_6cab20(arg5)
int64_t* ecx_1 = &var_f8
int32_t var_11c = eax_5
int32_t i_5 = 0x13
int32_t var_130 = eax_5
int32_t i_2

do
    int64_t xmm0_38 = *(ecx_1 + 0xc)
    int32_t var_120_1 = *(ecx_1 + 0x14)
    int64_t xmm0_39 = *ecx_1
    int32_t var_134_1 = ecx_1[1].d
    
    if (arg1[1] == arg1[2])
        int64_t* var_154_1 = ecx_1
        sub_571180(arg1)
    
    int128_t* eax_9 = arg1[1]
    
    if (eax_9 != 0)
        *eax_9 = xmm0_39.o
        eax_9[1] = xmm0_38.o
    
    arg1[1] += 0x20
    ecx_1 += 0xc
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
int64_t xmm0_42 = var_f8
int32_t var_134_2 = var_f0
int32_t var_130_1 = eax_5
int32_t var_c
int32_t var_120_2 = var_c
int32_t var_11c_1 = eax_5

if (arg1[1] == arg1[2])
    int64_t* var_154_2 = ecx_1
    ecx_1 = sub_571180(arg1)

int128_t* eax_12 = arg1[1]

if (eax_12 != 0)
    int64_t var_14
    *eax_12 = var_14.o
    eax_12[1] = xmm0_42.o

int64_t xmm0_46 = (xmm5_5 + xmm7_6).q
int64_t* esi_2 = &var_f8
int32_t i_6 = 0x14
arg1[1] += 0x20
float var_134_3 = xmm2_8
int32_t var_130_2 = eax_5
int128_t xmm1_15 = xmm0_46.o
int32_t var_11c_2 = eax_5
int128_t* result
int32_t i_3

do
    int64_t xmm0_47 = *esi_2
    int32_t var_120_3 = esi_2[1].d
    
    if (arg1[1] == arg1[2])
        int64_t* var_154_3 = ecx_1
        ecx_1 = sub_571180(arg1)
        xmm1_15 = xmm0_46.o
    
    result = arg1[1]
    
    if (result != 0)
        *result = xmm1_15
        result[1] = xmm0_47.o
    
    arg1[1] += 0x20
    esi_2 += 0xc
    i_3 = i_6
    i_6 -= 1
while (i_3 != 1)
@__security_check_cookie@4(eax_1 ^ &var_140)
return result
