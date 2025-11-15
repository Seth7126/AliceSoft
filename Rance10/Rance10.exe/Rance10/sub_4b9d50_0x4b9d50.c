// 函数: sub_4b9d50
// 地址: 0x4b9d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
bool eax

if (arg12 == 0)
    eax = *(esi + 0x49)
else
    eax = *(esi + 0x49) == 0

arg1.b = arg13
*(esi + 0x49) = eax
bool eax_1

if (arg1.b == 0)
    eax_1 = *(esi + 0x48)
else
    eax_1 = *(esi + 0x48) == 0

float xmm0_1 = arg5 f* *(esi + 0x4c)
*(esi + 0x48) = eax_1
*(esi + 0x4c) = xmm0_1
*(esi + 0x50) = arg6 f* *(esi + 0x50)
arg7 f- 0
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    *(esi + 0x54) = 1
else
    arg8 f- 0
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        *(esi + 0x54) = 1
    else
        arg9 f- 0
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            *(esi + 0x54) = 1

int32_t xmm0_6 = 0xbf800000
int32_t xmm3

xmm3 = arg1.b == 0 ? 0x3f800000 : -0x40800000

if (arg12 == 0)
    xmm0_6 = 0x3f800000

int32_t var_11c = xmm0_6
int32_t var_118 = xmm3
int32_t var_114 = 0x3f800000
int128_t var_110
sub_6cae40(&var_110, &var_11c)
float xmm0_8 = _mm_cvtepi32_ps(zx.o(arg10))
xmm0_8 f- 0
int32_t* eax_2
eax_2:1.b =
    (xmm0_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2 | (xmm0_8 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}
bool p_9

if (not(p_7))
    float xmm0_10 = _mm_cvtepi32_ps(zx.o(arg11))
    xmm0_10 f- 0
    eax_2:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
        | (xmm0_10 < 0f ? 1 : 0)
    p_9 = unimplemented  {test ah, 0x44}

void var_d0
void var_90

if (p_7 || p_9)
    void* ecx_3 = &var_d0
    int32_t var_138_1 = 0
    float var_13c_1 = _mm_cvtepi32_ps(zx.o(neg.d(arg11))) f* *(arg4 + 0x54)
    float var_140_1 = _mm_cvtepi32_ps(zx.o(neg.d(arg10))) f* *(arg4 + 0x50)
    sub_561770(ecx_3)
    sub_4ba000(ecx_3, &var_90)
    eax_2 = sub_6cb020(&var_90, &var_110, &var_d0, &var_90)
    var_110 = *eax_2
    int128_t var_100_1 = *(eax_2 + 0x10)
    int128_t var_f0_1 = *(eax_2 + 0x20)
    int128_t var_e0_1 = *(eax_2 + 0x30)

int128_t* eax_4 = sub_561360(eax_2, arg4, &var_90, arg2, arg3, arg5, arg6, arg7, arg8, arg9)
float (* eax_5)[0x4] = sub_6cb020(eax_4, &var_110, &var_d0, eax_4)
float var_50[0x4][0x4]
float (* result)[0x4] = sub_6cb020(eax_5, eax_5, &var_50, esi + 8)
*(esi + 8) = *result
*(esi + 0x18) = result[1]
*(esi + 0x28) = result[2]
*(esi + 0x38) = result[3]
return result
