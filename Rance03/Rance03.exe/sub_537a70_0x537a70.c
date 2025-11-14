// 函数: sub_537a70
// 地址: 0x537a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float ebx = arg4
float var_54 = 0f
int32_t ecx
int32_t var_7c = ecx
int128_t var_44
__builtin_memset(&var_44, 0, 0x14)
float var_58 = 1f
struct sealengine::CEmitterPos::VTable* const var_48 = &sealengine::CEmitterPos::`vftable'
float var_60 = 0f
struct sealengine::CEmitterPos::VTable* const var_18 = &sealengine::CEmitterPos::`vftable'
int128_t var_14_1
__builtin_memset(&var_14_1, 0, 0x14)
float var_5c = 0f
int32_t var_7c_1 = sub_537df0(arg2, arg3, ebx, 0f, &var_48, &var_60)
int32_t ecx_2 = sub_537df0(arg2, arg3, ebx, 1f, &var_18, &var_5c)
int32_t i_1 = 8
int32_t edi = var_44:8.d
int64_t var_50 = var_44.q
var_60 = var_60
var_5c = var_5c
int32_t eax_1
float xmm0_3
float xmm1_4
float xmm2_1
int32_t xmm3_1
int32_t xmm4_1
int64_t xmm5_1
int32_t i

do
    struct sealengine::CEmitterPos::VTable* const var_30 = &sealengine::CEmitterPos::`vftable'
    int32_t var_7c_2 = ecx_2
    float xmm1_3 = (var_58 + var_54) * 0.5f
    int128_t var_2c
    __builtin_memset(&var_2c, 0, 0x14)
    arg4 = 0f
    eax_1, ecx_2 = sub_537df0(arg2, arg3, ebx, xmm1_3, &var_30, &arg4)
    xmm1_4 = arg4
    xmm0_3 = arg5
    int32_t var_34_1
    int32_t var_1c
    
    if (xmm1_4 <= xmm0_3)
        xmm5_1 = var_2c.q
        xmm4_1 = var_2c:0xc.d
        xmm3_1 = var_1c
        edi = var_2c:8.d
        var_54 = xmm1_3
        xmm2_1 = xmm1_4
        xmm1_4 = var_5c
        var_50 = xmm5_1
        var_44.q = xmm5_1
        var_44:0xc.d = xmm4_1
        var_34_1 = xmm3_1
        var_60 = xmm2_1
    else
        xmm2_1 = var_60
        xmm3_1 = var_34_1
        xmm4_1 = var_44:0xc.d
        xmm5_1 = var_50
        var_58 = xmm1_3
        var_14_1.q = var_2c.q
        var_14_1:0xc.d = var_2c:0xc.d
        int32_t var_4_1 = var_1c
        xmm0_3 = arg5
        var_14_1:8.d = var_2c:8.d
        var_5c = xmm1_4
    i = i_1
    i_1 -= 1
while (i != 1)
xmm2_1 - xmm1_4
var_44:8.d = edi
eax_1:1.b = (xmm2_1 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, xmm1_4) ? 1 : 0) << 2
    | (xmm2_1 < xmm1_4 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    sub_538160(&var_48, (xmm0_3 - xmm2_1) / (xmm1_4 - xmm2_1), arg1, &var_18, 1)
    return arg1

*(arg1 + 4) = xmm5_1
*arg1 = &sealengine::CEmitterPos::`vftable'
arg1[3] = edi
arg1[4] = xmm4_1
arg1[5] = xmm3_1
return arg1
