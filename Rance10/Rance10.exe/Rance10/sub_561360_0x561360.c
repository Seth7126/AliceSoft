// 函数: sub_561360
// 地址: 0x561360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_ac = *(arg2 + 8)
float var_a0 = *(arg2 + 0x2c) * arg4
int32_t var_9c = (*(arg2 + 0x30) * arg5) ^ (data_79aad0).d
int32_t var_98 = *(arg2 + 0x18)
int32_t var_94
sub_528e30(&var_a0, &var_94, var_ac)
var_a0 = arg6
int32_t var_9c_1 = arg7
int32_t var_98_1 = 0x3f800000
sub_6cae40(arg3, &var_a0)
arg9 f- 0
int32_t* eax
eax:1.b = (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2 | (arg9 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
void var_dc
int32_t var_d8
void var_88
void var_48

if (p_1)
    int32_t xmm1_1[0x4] = arg9 * -0.0174532924f
    int80_t x87_r0
    int32_t xmm0_9 = ___libm_sse2_cosf(xmm1_1, x87_r0)
    int80_t x87_r1
    int32_t xmm0_11 = ___libm_sse2_sinf(xmm1_1, x87_r1)
    void* ecx_2 = &var_48
    int32_t var_c0_1 = xmm0_9
    int32_t var_c8_1 = xmm0_11
    sub_5616f0(ecx_2, xmm0_9, xmm0_11 ^ (data_79aad0).d, var_dc, var_d8)
    sub_4ba000(ecx_2, &var_88)
    eax = sub_6cb020(&var_88, arg3, &var_48, &var_88)
    *arg3 = *eax
    arg3[1] = *(eax + 0x10)
    arg3[2] = *(eax + 0x20)
    arg3[3] = *(eax + 0x30)

arg8 f- 0
eax:1.b = (arg8 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2 | (arg8 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    int32_t xmm1_4[0x4] = arg8 * -0.0174532924f
    int32_t xmm0_18 = ___libm_sse2_cosf(xmm1_4)
    int32_t xmm0_20 = ___libm_sse2_sinf(xmm1_4)
    void* ecx_4 = &var_88
    int32_t var_c0_2 = xmm0_18
    int32_t var_c4_1 = xmm0_20 ^ (data_79aad0).d
    sub_561660(ecx_4, var_dc, var_d8, xmm0_18, xmm0_20)
    sub_4ba000(ecx_4, &var_48)
    eax = sub_6cb020(&var_48, arg3, &var_88, &var_48)
    *arg3 = *eax
    arg3[1] = *(eax + 0x10)
    arg3[2] = *(eax + 0x20)
    arg3[3] = *(eax + 0x30)

arg10 f- 0
eax:1.b =
    (arg10 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg10, 0f) ? 1 : 0) << 2 | (arg10 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    float xmm0_27 = arg10 * -0.0174532924f
    int32_t xmm0_28 = ___libm_sse2_cosf(xmm0_27)
    int32_t xmm0_30 = ___libm_sse2_sinf(xmm0_27)
    void* ecx_6 = &var_88
    int32_t var_d4_2 = xmm0_28
    sub_5615e0(ecx_6, xmm0_28, xmm0_30, var_dc, xmm0_30 ^ (data_79aad0).d)
    sub_4ba000(ecx_6, &var_48)
    float (* eax_4)[0x4] = sub_6cb020(&var_48, arg3, &var_88, &var_48)
    *arg3 = *eax_4
    arg3[1] = eax_4[1]
    arg3[2] = eax_4[2]
    arg3[3] = eax_4[3]

arg3[3].d = var_94
int32_t var_90
*(arg3 + 0x34) = var_90
return arg3
