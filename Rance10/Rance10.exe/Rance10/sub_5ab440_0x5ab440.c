// 函数: sub_5ab440
// 地址: 0x5ab440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_16c
int32_t eax_1 = __security_cookie ^ &var_16c
int32_t var_f4
int32_t* eax_2 = &var_f4
int32_t i_3 = 0x14
int32_t i

do
    eax_2[-2] = 0
    eax_2 = &eax_2[3]
    eax_2[-4] = 0
    eax_2[-3] = 0
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t i_1 = 0
int64_t var_fc
int64_t* edi = &var_fc

do
    float var_168_1 = _mm_cvtepi32_ps(zx.o(i_1)) * 0.314159274f
    float xmm0_5 = sub_48ca30() * arg4
    *(edi + 4) = 0
    *edi = xmm0_5
    float xmm0_8 = sub_484cb0() * arg4
    edi[1].d = xmm0_8
    float var_13c[0x10]
    float* eax_3 = sub_6cbac0(arg6, &var_13c)
    float xmm3_5 = xmm0_5 * *eax_3 + eax_3[4] * 0f + eax_3[8] * xmm0_8 + eax_3[0xc]
    float xmm5_5 = eax_3[1] * xmm0_5 + eax_3[5] * 0f + eax_3[9] * xmm0_8 + eax_3[0xd]
    float xmm4_5 = eax_3[2] * xmm0_5 + eax_3[6] * 0f + eax_3[0xa] * xmm0_8 + eax_3[0xe]
    float xmm6_5 = eax_3[3] * xmm0_5 + eax_3[7] * 0f + eax_3[0xb] * xmm0_8 + eax_3[0xf]
    xmm6_5 - 1f
    eax_3:1.b = (xmm6_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm6_5, 1f) ? 1 : 0) << 2
        | (xmm6_5 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm6_5 f- 0
        eax_3:1.b = (xmm6_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_5, 0f) ? 1 : 0) << 2
            | (xmm6_5 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm1_2 = 1f / xmm6_5
            xmm3_5 = xmm3_5 * xmm1_2
            xmm5_5 = xmm5_5 * xmm1_2
            xmm4_5 = xmm4_5 * xmm1_2
    
    i_1 += 1
    float xmm0_27 = arg2[2] f+ xmm4_5
    *edi = _mm_unpacklo_ps(*arg2 + xmm3_5, arg2[1] f+ xmm5_5)
    edi[1].d = xmm0_27
    edi += 0xc
while (i_1 s< 0x14)

int32_t eax_5 = sub_6cab20(arg5)
int64_t* ecx_2 = &var_fc
int32_t var_140 = eax_5
int32_t i_4 = 0x13
int32_t var_154 = eax_5
int32_t i_2

do
    int64_t xmm0_28 = *(ecx_2 + 0xc)
    int32_t var_144_1 = *(ecx_2 + 0x14)
    int64_t xmm0_29 = *ecx_2
    int32_t var_158_2 = ecx_2[1].d
    
    if (arg3[1] == arg3[2])
        int64_t* var_180_2 = ecx_2
        sub_571180(arg3)
    
    int128_t* eax_9 = arg3[1]
    
    if (eax_9 != 0)
        *eax_9 = xmm0_29.o
        eax_9[1] = xmm0_28.o
    
    arg3[1] += 0x20
    ecx_2 += 0xc
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
int64_t xmm0_32 = var_fc
int32_t var_158_3 = var_f4
int32_t var_154_1 = eax_5
int32_t var_10
int32_t var_144_2 = var_10
int32_t var_140_1 = eax_5

if (arg3[1] == arg3[2])
    int64_t* var_180_3 = ecx_2
    sub_571180(arg3)

int128_t* result = arg3[1]

if (result != 0)
    int64_t var_18
    *result = var_18.o
    result[1] = xmm0_32.o

arg3[1] += 0x20
@__security_check_cookie@4(eax_1 ^ &var_16c)
return result
