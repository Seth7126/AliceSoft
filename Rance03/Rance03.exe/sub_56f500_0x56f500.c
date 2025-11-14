// 函数: sub_56f500
// 地址: 0x56f500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_b8
int32_t eax_1 = __security_cookie ^ &var_b8
float var_7c = 0f
int32_t ecx
int32_t var_d4 = ecx
struct sealengine::CEmitterRotate::VTable* const var_ac = &sealengine::CEmitterRotate::`vftable'
int32_t var_a8 = 0
int32_t var_a4 = 0
int32_t var_a0 = 0
float var_b0 = 0f
float var_80 = 1f
struct sealengine::CEmitterRotate::VTable* const var_14 = &sealengine::CEmitterRotate::`vftable'
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0
float var_b4 = 0f
int32_t var_d4_1 = sub_56f930(arg2, arg3, arg4, 0f, &var_ac, &var_b0)
int32_t ecx_2 = sub_56f930(arg2, arg3, arg4, 1f, &var_14, &var_b4)
int32_t i_1 = 8
float var_88 = var_b0
float var_84 = var_b4
struct sealengine::CEmitterRotate::VTable* var_9c
float xmm0_9
float xmm1_1
int32_t i

do
    var_9c = &sealengine::CEmitterRotate::`vftable'
    int32_t var_d4_2 = ecx_2
    float xmm0_4 = (var_80 + var_7c) * 0.5f
    int32_t var_98_1 = 0
    int32_t var_94_1 = 0
    int32_t var_90_1 = 0
    var_b0 = xmm0_4
    var_b4 = 0f
    ecx_2 = sub_56f930(arg2, arg3, arg4, xmm0_4, &var_9c, &var_b4)
    xmm1_1 = var_b4
    float xmm0_5 = var_b0
    
    if (xmm1_1 <= arg5)
        var_7c = xmm0_5
        int32_t var_a8_1 = var_98_1
        int32_t var_a4_1 = var_94_1
        int32_t var_a0_1 = var_90_1
        xmm0_9 = var_84
        var_88 = xmm1_1
    else
        var_80 = xmm0_5
        var_10 = var_98_1
        var_c = var_94_1
        int32_t var_8_1 = var_90_1
        xmm0_9 = xmm1_1
        xmm1_1 = var_88
        var_84 = xmm0_9
    
    var_9c = &sealengine::CEmitterRotate::`vftable'
    i = i_1
    i_1 -= 1
while (i != 1)
xmm1_1 - xmm0_9
bool p = unimplemented  {test ah, 0x44}
float* result
float var_58[0x11]

if (p)
    int32_t var_d0_3 = ecx_2
    struct sealengine::CEmitterRotate::VTable* var_78
    struct sealengine::CEmitterRotate::VTable* var_68
    sub_47c1a0(
        sub_5383e0(
            sub_538210(&var_ac, &var_68, 
                sub_538290(sub_538250(&var_14, &var_78, &var_ac), 
                    (arg5 - xmm1_1) / (xmm0_9 - xmm1_1), &var_9c)), 
            &var_58), 
        arg1)
    result = arg1
else
    float* eax_3 = sub_5383e0(&var_ac, &var_58)
    float xmm3_1 = *eax_3
    float xmm1_2 = eax_3[5]
    float xmm4_1 = eax_3[0xa]
    float xmm0_16 = xmm3_1 + xmm1_2 + xmm4_1 + eax_3[0xf]
    
    if (xmm0_16 < 1f)
        int32_t ebx_1
        ebx_1.b = xmm3_1 <= xmm1_2
        
        if (xmm4_1 > eax_3[ebx_1 * 5])
            ebx_1 = 2
        
        int32_t temp1_1 = mods.dp.d(sx.q(ebx_1 + 1), 3)
        int32_t temp1_2 = mods.dp.d(sx.q(temp1_1 + 1), 3)
        float xmm1_7 =
            _mm_sqrt_ss(0, eax_3[ebx_1 * 5] - eax_3[temp1_1 * 5] - eax_3[temp1_2 * 5] + 1f) * 2f
        float xmm2_3 = 1f / xmm1_7
        (&var_14)[ebx_1] = xmm1_7 * 0.25f
        (&var_14)[temp1_1] =
            (eax_3[ebx_1 + (temp1_1 << 2)] + eax_3[temp1_1 + (ebx_1 << 2)]) * xmm2_3
        result = arg1
        (&var_14)[temp1_2] =
            (eax_3[ebx_1 + (temp1_2 << 2)] + eax_3[temp1_2 + (ebx_1 << 2)]) * xmm2_3
        var_ac = var_14
        int32_t var_a8_3 = var_10
        int32_t var_a4_3 = var_c
        float var_a0_3 =
            (eax_3[temp1_2 + (temp1_1 << 2)] - eax_3[temp1_1 + (temp1_2 << 2)]) * xmm2_3
        *result = var_ac.o
    else
        result = arg1
        float xmm1_4 = _mm_sqrt_ss(0, xmm0_16) * 2f
        float xmm2_2 = 1f / xmm1_4
        float var_a0_2 = xmm1_4 * 0.25f
        var_ac = (eax_3[6] - eax_3[9]) * xmm2_2
        float var_a8_2 = (eax_3[8] - eax_3[2]) * xmm2_2
        float var_a4_2 = (eax_3[1] - eax_3[4]) * xmm2_2
        *result = var_ac.o
sub_69a5bc(eax_1 ^ &var_b8)
return result
