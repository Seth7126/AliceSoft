// 函数: sub_5d79e0
// 地址: 0x5d79e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_741418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_1d4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm4 = *(arg1 + 0x184)
float xmm7 = *(arg1 + 0x180)
float xmm5 = *(arg1 + 0x188)
float xmm0_4 = sub_484cc0(xmm7 * xmm7 + xmm4 * xmm4 + xmm5 * xmm5)
xmm0_4 f- 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3:1.b =
    (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int64_t var_44
struct _EXCEPTION_REGISTRATION_RECORD** var_3c
float var_38
float var_28
float xmm7_1

if (not(p_1))
    eax_3 = *(arg1 + 0x188)
    var_44 = *(arg1 + 0x180)
    xmm7_1 = var_44.d
    var_3c = eax_3
    var_38 = var_3c
    var_28 = var_44:4.d
else
    float xmm0_5 = 1f / xmm0_4
    xmm7_1 = xmm7 * xmm0_5
    var_28 = xmm4 * xmm0_5
    var_38 = xmm5 * xmm0_5

float xmm6 = *(arg1 + 0x94)
float xmm5_2 = *(arg1 + 0x90)
float xmm4_2 = *(arg1 + 0x98)
float xmm0_13 = sub_484cc0(xmm5_2 * xmm5_2 + xmm6 * xmm6 + xmm4_2 * xmm4_2)
xmm0_13 f- 0
eax_3:1.b = (xmm0_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2
    | (xmm0_13 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm4_3
float xmm5_3
float xmm6_1

if (not(p_3))
    eax_3 = *(arg1 + 0x98)
    var_44 = *(arg1 + 0x90)
    xmm6_1 = var_44:4.d
    xmm5_3 = var_44.d
    var_3c = eax_3
    xmm4_3 = var_3c
else
    float xmm1_9 = 1f / xmm0_13
    xmm5_3 = xmm5_2 * xmm1_9
    xmm6_1 = xmm6 * xmm1_9
    xmm4_3 = xmm4_2 * xmm1_9

float xmm1_12 = xmm6_1 * var_38 - xmm4_3 * var_28
float xmm4_5 = xmm4_3 * xmm7_1 - xmm5_3 * var_38
float xmm5_5 = xmm5_3 * var_28 - xmm6_1 * xmm7_1
float xmm6_5 = var_28 * xmm5_5 - var_38 * xmm4_5
float xmm7_4 = var_38 * xmm1_12 - xmm7_1 * xmm5_5
float xmm5_8 = xmm7_1 * xmm4_5 - var_28 * xmm1_12
float xmm0_29 = sub_484cc0(xmm6_5 * xmm6_5 + xmm7_4 * xmm7_4 + xmm5_8 * xmm5_8)
xmm0_29 f- 0
eax_3:1.b = (xmm0_29 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_29, 0f) ? 1 : 0) << 2
    | (xmm0_29 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    float xmm1_17 = 1f / xmm0_29
    xmm6_5 = xmm6_5 * xmm1_17
    xmm7_4 = xmm7_4 * xmm1_17
    xmm5_8 = xmm5_8 * xmm1_17

float i_1 = *(arg1 + 0x88) + var_28
float xmm2_1 = *(arg1 + 0x84) + xmm7_1
float xmm0_31 = *(arg1 + 0x8c) + var_38
float var_60 = xmm5_8
float var_64 = xmm7_4
float var_68 = xmm6_5
float var_5c = xmm2_1
float var_148[0x4]
sub_5d66a0(&var_5c, arg1 + 0x84, &var_148, &var_5c, &var_68)
sub_5d8400(arg2, arg3, &var_44)
int32_t var_14_1 = 0
sub_562550(&var_5c, 8)
void* eax_5 = arg1 + 0x9c
int32_t i = 0
void* edx_1 = arg1 + 0xdc
void* var_48_1 = eax_5
void* var_4c_1 = edx_1
void var_1c8
float var_188[0x4]
int128_t var_108
float var_a8
float var_34
float var_30_1
float esi_2

do
    int32_t* esi_1 = var_44.d
    int128_t* var_1dc_2 = sub_6cb130(eax_5, &var_188)
    int32_t* eax_7 = sub_6cb130(edx_1, &var_108)
    float (* eax_8)[0x4] = sub_6cb020(eax_7, eax_7, &var_a8, var_1dc_2)
    float* eax_9 = sub_5d8630(eax_8, eax_8, &var_1c8, &var_148)
    float xmm1_19 = *(esi_1 + i)
    float xmm3_1 = *(esi_1 + i + 4)
    float xmm2_3 = *(esi_1 + i + 8)
    float xmm6_7 = eax_9[2] * xmm1_19
    float xmm7_6 = eax_9[3] * xmm1_19
    float xmm4_11 = eax_9[4] * xmm3_1 + xmm1_19 * *eax_9 + eax_9[8] * xmm2_3 + eax_9[0xc]
    float xmm5_12 = eax_9[1] * xmm1_19 + eax_9[5] * xmm3_1 + eax_9[9] * xmm2_3
    float xmm0_41 = eax_9[6] * xmm3_1
    var_34 = xmm4_11
    float xmm5_13 = xmm5_12 + eax_9[0xd]
    var_30_1 = xmm5_13
    float xmm6_10 = xmm6_7 + xmm0_41 + eax_9[0xa] * xmm2_3 + eax_9[0xe]
    float var_2c_1 = xmm6_10
    float xmm7_9 = xmm7_6 + eax_9[7] * xmm3_1 + eax_9[0xb] * xmm2_3 + eax_9[0xf]
    xmm7_9 - 1f
    eax_9:1.b = (xmm7_9 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_9, 1f) ? 1 : 0) << 2
        | (xmm7_9 < 1f ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        xmm7_9 f- 0
        eax_9:1.b = (xmm7_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_9, 0f) ? 1 : 0) << 2
            | (xmm7_9 < 0f ? 1 : 0)
        bool p_9 = unimplemented  {test ah, 0x44}
        
        if (p_9)
            float xmm0_48 = 1f / xmm7_9
            var_34 = xmm4_11 * xmm0_48
            var_30_1 = xmm5_13 * xmm0_48
            var_2c_1 = xmm6_10 * xmm0_48
    
    esi_2 = var_5c
    edx_1 = var_4c_1
    *(esi_2 i+ i) = var_34.q
    *(esi_2 i+ i + 8) = var_2c_1
    i += 0xc
    eax_5 = var_48_1
while (i s< 0x60)

float xmm4_13 = 3.40282347e+38f
float xmm2_4 = -3.40282347e+38f
float xmm5_15 = 3.40282347e+38f
float xmm7_10 = 3.40282347e+38f
float xmm6_12 = -3.40282347e+38f
float xmm3_2 = -3.40282347e+38f

if (esi_2 != i_1)
    void* ecx_6 = esi_2 i+ 8
    
    do
        int32_t xmm1_20 = *(ecx_6 - 8)
        ecx_6 += 0xc
        float xmm1_21 = _mm_max_ss(xmm1_20, xmm2_4)
        float xmm0_51 = _mm_min_ss(xmm1_20, xmm4_13)
        xmm2_4 = xmm1_21
        int32_t xmm1_22 = *(ecx_6 - 0x10)
        xmm4_13 = xmm0_51
        float xmm1_23 = _mm_max_ss(xmm1_22, xmm6_12)
        float xmm0_53 = _mm_min_ss(xmm1_22, xmm5_15)
        xmm6_12 = xmm1_23
        int32_t xmm1_24 = *(ecx_6 - 0xc)
        xmm5_15 = xmm0_53
        xmm7_10 = _mm_min_ss(xmm1_24, xmm7_10)
        xmm3_2 = _mm_max_ss(xmm1_24, xmm3_2)
    while (ecx_6 - 8 != i_1)

void* edi = arg1
float xmm0_56 = *(edi + 0x258)
float xmm6_14 = xmm6_12 - xmm5_15 + xmm0_56
float xmm0_58 = (xmm0_56 ^ (data_79aad0).d) + xmm5_15
float xmm3_4 = (xmm3_2 + xmm7_10) * 0.5f
float* eax_12 = sub_5d88e0(&var_148, &var_1c8)
float xmm2_7[0x4] = (xmm2_4 + xmm4_13) * 0.5f
int64_t xmm1_26 = xmm0_58
float xmm3_5 = eax_12[4]
float xmm4_14 = eax_12[5]
var_34.q = _mm_unpacklo_ps(xmm2_7, xmm1_26)
float var_2c_2 = xmm3_4
float xmm3_9 = xmm3_5 f* xmm1_26 + xmm2_7[0] * *eax_12 + eax_12[8] * xmm3_4 + eax_12[0xc]
float xmm4_18 = xmm4_14 f* xmm1_26 + eax_12[1] f* xmm2_7 + eax_12[9] * xmm3_4 + eax_12[0xd]
float xmm6_16 = eax_12[0xf]
xmm6_16 - 1f
float xmm5_20 = eax_12[6] f* xmm1_26 + eax_12[2] f* xmm2_7 + eax_12[0xa] * xmm3_4 + eax_12[0xe]
eax_12:1.b = (xmm6_16 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm6_16, 1f) ? 1 : 0) << 2
    | (xmm6_16 < 1f ? 1 : 0)
bool p_11 = unimplemented  {test ah, 0x44}

if (p_11)
    xmm6_16 f- 0
    eax_12:1.b = (xmm6_16 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_16, 0f) ? 1 : 0) << 2
        | (xmm6_16 < 0f ? 1 : 0)
    bool p_13 = unimplemented  {test ah, 0x44}
    
    if (not(p_13))
        xmm5_20 = var_2c_2
        xmm4_18 = var_30_1
        xmm3_9 = var_34
    else
        float xmm1_27 = 1f / xmm6_16
        xmm5_20 = xmm5_20 * xmm1_27
        xmm3_9 = xmm3_9 * xmm1_27
        xmm4_18 = xmm4_18 * xmm1_27
        var_34 = xmm3_9
        var_2c_2 = xmm5_20
        float var_30_3 = xmm4_18
else
    var_34 = xmm3_9
    float var_30_2 = xmm4_18
    var_2c_2 = xmm5_20

float var_bc_1 = var_2c_2
int64_t var_c4 = var_34.q
var_34 = xmm3_9 + xmm7_1
float var_30_4 = xmm4_18 + var_28
float var_2c_3 = xmm5_20 + var_38
sub_5d66a0(&var_34, &var_c4, &var_108, &var_34, &var_68)
void* eax_15 = var_44.d
int32_t xmm3_11 = (zx.o(0)).d
int32_t xmm4_20 = (zx.o(0)).d
int32_t var_28_1 = 0
int32_t var_24_1 = 0

if (eax_15 != var_44:4.d)
    float* esi_3 = eax_15 + 8
    
    do
        int128_t* var_1dc_5 = sub_6cb130(var_48_1, &var_1c8)
        int32_t* eax_17 = sub_6cb130(var_4c_1, &var_148)
        float (* eax_18)[0x4] = sub_6cb020(eax_17, eax_17, &var_188, var_1dc_5)
        float* eax_19 = sub_5d8630(eax_18, eax_18, &var_a8, &var_108)
        float xmm1_28 = esi_3[-2]
        float xmm3_12 = esi_3[-1]
        float xmm2_8 = *esi_3
        float xmm4_25 = eax_19[4] * xmm3_12 + xmm1_28 * *eax_19 + eax_19[8] * xmm2_8 + eax_19[0xc]
        float xmm5_26 = eax_19[1] * xmm1_28 + eax_19[5] * xmm3_12 + eax_19[9] * xmm2_8 + eax_19[0xd]
        float xmm6_21 =
            eax_19[2] * xmm1_28 + eax_19[6] * xmm3_12 + eax_19[0xa] * xmm2_8 + eax_19[0xe]
        float xmm7_15 =
            eax_19[3] * xmm1_28 + eax_19[7] * xmm3_12 + eax_19[0xb] * xmm2_8 + eax_19[0xf]
        xmm7_15 - 1f
        eax_19:1.b = (xmm7_15 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_15, 1f) ? 1 : 0) << 2
            | (xmm7_15 < 1f ? 1 : 0)
        bool p_15 = unimplemented  {test ah, 0x44}
        
        if (p_15)
            xmm7_15 f- 0
            eax_19:1.b = (xmm7_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_15, 0f) ? 1 : 0) << 2
                | (xmm7_15 < 0f ? 1 : 0)
            bool p_17 = unimplemented  {test ah, 0x44}
            
            if (p_17)
                float xmm1_29 = 1f / xmm7_15
                xmm6_21 = xmm6_21 * xmm1_29
                xmm4_25 = xmm4_25 * xmm1_29
                xmm5_26 = xmm5_26 * xmm1_29
        
        float xmm1_30 = 1f / xmm5_26
        xmm3_11 = __maxss_xmmss_memss(sub_48b210(xmm1_30 * xmm4_25), var_28_1)
        var_28_1 = xmm3_11
        esi_3 = &esi_3[3]
        xmm4_20 = __maxss_xmmss_memss(sub_48b210(xmm1_30 * xmm6_21), var_24_1)
        var_24_1 = xmm4_20
    while (&esi_3[-2] != var_44:4.d)
    
    esi_2 = var_5c
    edi = arg1

__builtin_memcpy(&var_188, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\x3f\x00\x00\x80\x3f", 
    0x40)
int32_t var_7c = 0
int32_t var_78 = 0
int32_t var_70 = 0
float xmm5_27 = *(edi + 0x258)
int32_t var_6c = 0
var_a8 = 1f f/ xmm3_11
int128_t var_a4 = zx.o(0)
float xmm1_32 = 1f / (xmm6_14 - xmm5_27)
float var_80 = 1f f/ xmm4_20
float var_94 = xmm1_32 * xmm6_14
int128_t var_90 = data_79a7d0
int32_t var_74 = (xmm6_14 * xmm5_27 * xmm1_32) ^ (data_79aad0).d
sub_6cb020(&var_188, &var_a8, &var_148, &var_188)
var_a8.o = var_108
int128_t var_d8
var_78.o = var_d8
*(edi + 0x198) = var_a8.o
int128_t var_f8
*(edi + 0x1a8) = var_f8
int128_t var_e8
*(edi + 0x1b8) = var_e8
*(edi + 0x1c8) = var_78.o
*(edi + 0x1d8) = var_148
int128_t var_138
*(edi + 0x1e8) = var_138
int128_t var_128
*(edi + 0x1f8) = var_128
int128_t var_118
*(edi + 0x208) = var_118
float (* eax_23)[0x4] = sub_6cb020(edi + 0x140, edi + 0x198, &var_1c8, edi + 0x1d8)
float (* result)[0x4] = sub_6cb020(eax_23, eax_23, &var_188, edi + 0x140)
*(edi + 0x218) = *result
*(edi + 0x228) = result[1]
*(edi + 0x238) = result[2]
*(edi + 0x248) = result[3]

if (esi_2 != 0)
    result = sub_403160(esi_2, (xmm0_31 i- esi_2) s/ 0xc, 0xc)

void* esi_4 = var_44.d

if (esi_4 != 0)
    result = sub_403160(esi_4, (var_3c - esi_4) s/ 0xc, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return result
